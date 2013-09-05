#ifndef _MFSTOOLS_H__
#define _MFSTOOLS_H__

#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <boost/algorithm/string.hpp>

#include "MFSCommunication.h"

using namespace std;
using namespace boost::algorithm;

static const char* eattrtab[EATTR_BITS]={EATTR_STRINGS};
static const char* eattrdesc[EATTR_BITS]={EATTR_DESCRIPTIONS};

static inline void print_numberformat_options() {
    fprintf(stderr," -n - show numbers in plain format\n");
    fprintf(stderr," -h - \"human-readable\" numbers using base 2 prefixes (IEC 60027)\n");
    fprintf(stderr," -H - \"human-readable\" numbers using base 10 prefixes (SI)\n");
}

static inline void print_recursive_option() {
    fprintf(stderr," -r - do it recursively\n");
}

static inline void print_extra_attributes() {
    int j;
    fprintf(stderr,"\nattributes:\n");
    for (j=0 ; j<EATTR_BITS ; j++) {
        if (eattrtab[j][0]) {
            fprintf(stderr," %s - %s\n",eattrtab[j],eattrdesc[j]);
        }
    }
}

enum {
    MFSGETGOAL=1,
    MFSSETGOAL,
    MFSGETTRASHTIME,
    MFSSETTRASHTIME,
    MFSCHECKFILE,
    MFSFILEINFO,
    MFSAPPENDCHUNKS,
    MFSDIRINFO,
    MFSFILEREPAIR,
    MFSMAKESNAPSHOT,
    MFSGETEATTR,
    MFSSETEATTR,
    MFSDELEATTR,
    MFSGETQUOTA,
    MFSSETQUOTA,
    MFSDELQUOTA
};

class LizardTool
{

    protected:
        void printUsageLine();
        const string m_ToolName;
        bool m_Deprecated;
        static map< string, LizardTool* > LIZARD_TOOLS_MAP;

    public:
        const static char* LIZ_PREF;
        const static char* MFS_PREF;
        bool static registerTool( LizardTool* pTool );

        LizardTool( const string& pToolName );
        void showHelpMsg();
        static void createFsLink( const char* pToolName );
        virtual pair< int, int> getFunctionEnum() = 0;
        virtual void usage() = 0;
        string getToolName();
		bool isDeprecated();
        static map< string, LizardTool* >::iterator findTool( const string& pToolName );
        static map< string, LizardTool* >::iterator findEnd();

};

template< int T >
class LizardCommand : public LizardTool
{
    public:
        static bool m_ToolRegistered;

        LizardCommand()
        {}

        LizardCommand( const string& pToolName ) : LizardTool( pToolName )
        {}

        void usage()
        {}

        pair< int, int> getFunctionEnum()
        {
            return make_pair( T, this->m_Deprecated ? 1 : 0 );
        }
};

template< int T >
class LizardDeprecatedCommand : public LizardCommand< T >
{
    public:
		static bool m_DeprecatedToolRegistered;

        LizardDeprecatedCommand( const string& pToolName ) :
            LizardCommand< T >( pToolName ) {
                        this->m_Deprecated = true;

		}
};


#define LZTOOL_SPECIALIZED_CONSTR( T ) \
template<> \
LizardCommand< T >::LizardCommand() : \
LizardTool( to_lower_copy( string( #T ) ) ) \
{}

#define LZTOOL_SPECIALIZED_USAGE( T ) \
template<> \
void LizardCommand< T >::usage()

#define LZTOOL_SPECIALIZED_ENUM( T, DEPR_FLAG ) \
template<> \
pair< int, int> LizardCommand< T >::getFunctionEnum() \
{ \
    return make_pair( T, DEPR_FLAG ); \
}

#define LZTOOL_REGISTER( T ) \
template<> \
bool LizardCommand< T >::m_ToolRegistered = \
LizardTool::registerTool( new LizardCommand< T >( to_lower_copy( string( #T ) ) ) ) && \
LizardTool::registerTool( new LizardCommand< T >( string( LIZ_PREF ) + to_lower_copy( string( #T ).substr( 4 ) ) ) );

//command name, enum
#define LZTOOL_REGISTER_DEPRECATED( N, T ) \
template<> \
bool LizardDeprecatedCommand< T >::m_DeprecatedToolRegistered = \
LizardTool::registerTool( new LizardDeprecatedCommand< T >( string( N ) ) );

/*
#define LZTOOL_REGISTER_NAME( T, NAME ) \
LizardTool::registerTool( NAME, new T() )*/

//not necessarily yet
#define LZTOOL_SPECIALIZED_TYPE( T, NEW_DEFINED_T ) \
typedef LizardCommand< T > NEW_DEFINED_T;

#endif
