/*
CH  FYBA                                             FYsak-Basesystem
CD  ==================================================================
CD  Routines/functions to read, modify and write SOSI files.
CD  ==================================================================
CD
CH  INSTALLATION AND USAGE:
CD
CD  Library....: fybale.lib
CD  Sourcefiles: fyba.c, fylo.c, fyln.c, fylr.c, fyls.c, fylx.c, fyli.c
CD               fylh.c, fyho.c, fyle.c, fyba.h, fybax.h
CD  Version....: D01
CD  Owner......: NATIONAL MAPPING AUTHORITY OF NORWAY / 
CD               KARTVERK / FYSAK-project
CD  Responsible: Andreas Røstad, Georg Langerak
CD
CD  Compiler...: Microsoft C versjon 6.0
CD  Options....: /c /AL /J /FPi /G2t /W4
CD  Memory-mod.: Large
CD  Floating-p.: Emulation
CD  Processor..: 80286
CD
CD  #include...: fyba.h
CD  Link with..: utle.lib    >=  versjon D
CD              +llibce.lib  >=  versjon 6.0
CD
CD  ==================================================================
*/

#include "stdafx.h"


/*
CH LC_InqVer                                                   Identification
CD =============================================================================
CD Purpose:
CD Retrieves version identifier for this library.
   =============================================================================
*/
SK_EntPnt_FYBA char *LC_InqVer(void)
{
   return FYBA_IDENT;
}
