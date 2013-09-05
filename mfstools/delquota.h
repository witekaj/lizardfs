#ifndef _LIZARD_TOOL_DELQUOTA_H__
#define _LIZARD_TOOL_DELQUOTA_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSDELQUOTA )
LZTOOL_SPECIALIZED_USAGE( MFSDELQUOTA )
{
    fprintf(stderr,"delete quota for given directory (directories)\n\nusage: %s [-nhHailsrAILSR] dirname [dirname ...]\n", this->m_ToolName.c_str() );
    print_numberformat_options();
    fprintf(stderr," -i/-I - delete inodes soft/hard quota\n");
    fprintf(stderr," -l/-L - delete length soft/hard quota\n");
    fprintf(stderr," -s/-S - delete size soft/hard quota\n");
    fprintf(stderr," -r/-R - delete real size soft/hard quota\n");
    fprintf(stderr," -a/-A - delete all soft/hard quotas\n");
}

typedef LizardCommand< MFSDELQUOTA > DelQuotaTool;

#endif
