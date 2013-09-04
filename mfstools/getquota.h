#ifndef 	_LIZARD_TOOL_GETQUOTA_H__
#define 	_LIZARD_TOOL_GETQUOTA_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSGETQUOTA )
LZTOOL_SPECIALIZED_USAGE( MFSGETQUOTA )
{
    fprintf(stderr,"get quota for given directory (directories)\n\nusage: %s [-nhH] dirname [dirname ...]\n", this->m_ProgName.c_str() );
    print_numberformat_options();
}

typedef LizardCommand< MFSGETQUOTA > GetQuotaTool;

#endif
