#ifndef 	_LIZARD_TOOL_GETEATTR_H__
#define 	_LIZARD_TOOL_GETEATTR_H___

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSGETEATTR )
LZTOOL_SPECIALIZED_USAGE( MFSGETEATTR )
{
    fprintf(stderr,"get objects extra attributes\n\nusage: %s [-nhHr] name [name ...]\n" ,this->m_ProgName.c_str() );
    print_numberformat_options();
    print_recursive_option();
}

typedef LizardCommand< MFSGETEATTR > GetExtraAttrTool;

#endif
