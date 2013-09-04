#ifndef 	_LIZARD_TOOL_APPENDCHUNKS_H__
#define 	_LIZARD_TOOL_APPENDCHUNKS_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSAPPENDCHUNKS )
LZTOOL_SPECIALIZED_USAGE( MFSAPPENDCHUNKS )
{
	fprintf(stderr,"append file chunks to another file. If destination file doesn't exist then it's created as empty file and then chunks are appended\n\nusage: %s dstfile name [name ...]\n", this->m_ProgName.c_str() );
}

typedef LizardCommand< MFSAPPENDCHUNKS > AppendChunksTool;


#endif
