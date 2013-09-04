#ifndef 	_LIZARD_TOOL_GETTRASHTIME_H__
#define 	_LIZARD_TOOL_GETTRASHTIME_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSGETTRASHTIME )
LZTOOL_SPECIALIZED_USAGE( MFSGETTRASHTIME )
{
    fprintf(stderr,"get objects trashtime (how many seconds file should be left in trash)\n\nusage: %s [-nhHr] name [name ...]\n", this->m_ProgName.c_str() );
    print_numberformat_options();
    print_recursive_option();
}

typedef LizardCommand< MFSGETTRASHTIME > GetTrashTimeTool;

#endif
