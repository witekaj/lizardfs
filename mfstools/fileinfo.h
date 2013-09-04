#ifndef 	_LIZARD_TOOL_FILEINFO_H__
#define 	_LIZARD_TOOL_FILEINFO_H__

#include "mfstools.h"


LZTOOL_SPECIALIZED_CONSTR( MFSFILEINFO )
LZTOOL_SPECIALIZED_USAGE( MFSFILEINFO )
{
	fprintf(stderr,"show files info (shows detailed info of each file chunk)\n\nusage: %s name [name ...]\n", this->m_ProgName.c_str() );
}

typedef LizardCommand< MFSFILEINFO > FileInfoTool;

#endif
