#ifndef 	_LIZARD_TOOL_DIRINFO_H__
#define 	_LIZARD_TOOL_DIRINFO_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSDIRINFO )
LZTOOL_SPECIALIZED_USAGE( MFSDIRINFO )
{
	fprintf(stderr,"show directories stats\n\nusage: %s [-nhH] name [name ...]\n", this->m_ProgName.c_str() );
    print_numberformat_options();
    fprintf(stderr,"\nMeaning of some not obvious output data:\n 'length' is just sum of files lengths\n 'size' is sum of chunks lengths\n 'realsize' is estimated hdd usage (usually size multiplied by current goal)\n");
}

typedef LizardCommand< MFSDIRINFO > DirInfoTool;

#endif
