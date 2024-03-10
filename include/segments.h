#ifndef SEGMENTS_H
#define SEGMENTS_H

#ifndef LINKER
#include "segment_symbols.h"
#endif

#ifndef USE_EXT_RAM
#define RAM_END          0x80400000
 #else
#define RAM_END          0x80800000
 #endif
#define SEG_POOL_START   _framebuffersSegmentNoloadEnd // 0x0165000 in size
 #define SEG_GODDARD      SEG_POOL_START + 0x113000

#define POOL_SIZE        RAM_END - SEG_POOL_START
 #endif // SEGMENTS_H
