#ifndef 	_LIZARD_TOOL_SETTRASHTIME_H__
#define 	_LIZARD_TOOL_SETTRASHTIME_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSSETTRASHTIME )
LZTOOL_SPECIALIZED_USAGE( MFSSETTRASHTIME )
{
    fprintf(stderr,"set objects trashtime (how many seconds file should be left in trash)\n\nusage: %s [-nhHr] SECONDS[-|+] name [name ...]\n", this->m_ProgName.c_str() );
    print_numberformat_options();
    print_recursive_option();
    fprintf(stderr," SECONDS+ - increase trashtime to given value\n");
    fprintf(stderr," SECONDS- - decrease trashtime to given value\n");
    fprintf(stderr," SECONDS - just set trashtime to given value\n");
}

typedef LizardCommand< MFSSETTRASHTIME > SetTrashTimeTool;

#endif
