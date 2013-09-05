#ifndef 	_LIZARD_TOOL_SETGOAL_H__
#define 	_LIZARD_TOOL_SETGOAL_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSSETGOAL )
LZTOOL_SPECIALIZED_USAGE( MFSSETGOAL )
{
    fprintf(stderr,"set objects goal (desired number of copies)\n\nusage: %s [-nhHr] GOAL[-|+] name [name ...]\n", this->m_ToolName.c_str() );
    print_numberformat_options();
    print_recursive_option();
    fprintf(stderr," GOAL+ - increase goal to given value\n");
    fprintf(stderr," GOAL- - decrease goal to given value\n");
    fprintf(stderr," GOAL - just set goal to given value\n");
}


typedef LizardCommand< MFSSETGOAL > SetGoalTool;

#endif
