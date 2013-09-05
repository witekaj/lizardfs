#ifndef 	_LIZARD_TOOL_CHECKFILE_H__
#define 	_LIZARD_TOOL_CHECKFILE_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSCHECKFILE )
LZTOOL_SPECIALIZED_USAGE( MFSCHECKFILE )
{
    fprintf(stderr,"check files\n\nusage: %s [-nhH] name [name ...]\n", this->m_ToolName.c_str() );
}

typedef LizardCommand< MFSCHECKFILE > CheckFileTool;

#endif
