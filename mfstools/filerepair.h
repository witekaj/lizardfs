#ifndef 	_LIZARD_TOOL_FILEREPAIR_H__
#define 	_LIZARD_TOOL_FILEREPAIR_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSFILEREPAIR )
LZTOOL_SPECIALIZED_USAGE( MFSFILEREPAIR )
{
    fprintf(stderr,"repair given file. Use it with caution. It forces file to be readable, so it could erase (fill with zeros) file when chunkservers are not currently connected.\n\nusage: %s [-nhH] name [name ...]\n",this->m_ProgName.c_str() );
    print_numberformat_options();
}

typedef LizardCommand< MFSFILEREPAIR > FileRepairTool;

#endif
