#ifndef 	_LIZARD_TOOL_SETQUOTA_H__
#define 	_LIZARD_TOOL_SETQUOTA_H__

#include "mfstools.h"


LZTOOL_SPECIALIZED_CONSTR( MFSSETQUOTA )
LZTOOL_SPECIALIZED_USAGE( MFSSETQUOTA )
{
    fprintf(stderr,"set quota for given directory (directories)\n\nusage: %s [-nhH] [-iI inodes] [-lL length] [-sS size] [-rR realsize] dirname [dirname ...]\n", this->m_ToolName.c_str() );;
    print_numberformat_options();
    fprintf(stderr," -i/-I - set soft/hard limit for number of filesystem objects\n");
    fprintf(stderr," -l/-L - set soft/hard limit for sum of files lengths\n");
    fprintf(stderr," -s/-S - set soft/hard limit for sum of file sizes (chunk sizes)\n");
    fprintf(stderr," -r/-R - set soft/hard limit for estimated hdd usage (usually size multiplied by goal)\n");
    fprintf(stderr,"\nAll numbers can have decimal point and SI/IEC symbol prefix at the end\ndecimal (SI): (k - 10^3 , M - 10^6 , G - 10^9 , T - 10^12 , P - 10^15 , E - 10^18)\nbinary (IEC 60027): (Ki - 2^10 , Mi - 2^20 , Gi - 2^30 , Ti - 2^40 , Pi - 2^50 , Ei - 2^60 )\n");
}

typedef LizardCommand< MFSSETQUOTA > SetQuotaTool;

#endif
