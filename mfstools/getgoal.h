#ifndef 	_LIZARD_TOOL_GETGOAL_H__
#define 	_LIZARD_TOOL_GETGOAL_H__

#include "mfstools.h"


LZTOOL_SPECIALIZED_CONSTR( MFSGETGOAL )
LZTOOL_SPECIALIZED_USAGE( MFSGETGOAL )
{
	fprintf(stderr,"get objects goal (desired number of copies)\n\nusage: %s [-nhHr] name [name ...]\n", this->m_ProgName.c_str() );
	print_numberformat_options();
    print_recursive_option();
}

typedef LizardCommand< MFSGETGOAL > GetGoalTool;

#endif
