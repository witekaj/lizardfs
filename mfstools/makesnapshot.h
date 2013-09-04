#ifndef 	_LIZARD_TOOL_MAKESNAPSHOT_H__
#define 	_LIZARD_TOOL_MAKESNAPSHOT_H__

#include "mfstools.h"

LZTOOL_SPECIALIZED_CONSTR( MFSMAKESNAPSHOT )
LZTOOL_SPECIALIZED_USAGE( MFSMAKESNAPSHOT )
{
    fprintf(stderr,"make snapshot (lazy copy)\n\nusage: %s [-o] src [src ...] dst\n",this->m_ProgName.c_str() );
}

typedef LizardCommand< MFSMAKESNAPSHOT > MakeSnapshotTool;

#endif
