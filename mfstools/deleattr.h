#ifndef 	_LIZARD_TOOL_DELETEATTR_H__
#define 	_LIZARD_TOOL_DELETEATTR_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSDELEATTR )
LZTOOL_SPECIALIZED_USAGE( MFSDELEATTR )
{
    fprintf(stderr,"delete objects extra attributes\n\nusage: %s [-nhHr] -f attrname [-f attrname ...] name [name ...]\n", this->m_ToolName.c_str() );
    print_numberformat_options();
    print_recursive_option();
    fprintf(stderr," -f attrname - specify attribute to delete\n");
    print_extra_attributes();
}

typedef LizardCommand< MFSDELEATTR > DeleteExtraAttrTool;

#endif
