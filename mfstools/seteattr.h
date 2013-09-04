#ifndef _LIZARD_TOOL_SETEATTR_H__
#define _LIZARD_TOOL_SETEATTR_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSSETEATTR )
LZTOOL_SPECIALIZED_USAGE( MFSSETEATTR )
{
    fprintf(stderr,"set objects extra attributes\n\nusage: %s [-nhHr] -f attrname [-f attrname ...] name [name ...]\n", this->m_ProgName.c_str() );
    print_numberformat_options();
    print_recursive_option();
    fprintf(stderr," -f attrname - specify attribute to set\n");
    print_extra_attributes();
}

typedef LizardCommand< MFSSETEATTR > SetExtraAttrTool;

#endif
