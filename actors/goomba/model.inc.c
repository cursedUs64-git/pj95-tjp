// Goomba

// 0x080194D0
static const Lights1 goomba_seg8_lights_080194D0 = gdSPDefLights1(
    0x15, 0x0b, 0x04,
    0x54, 0x2e, 0x10, 0x28, 0x28, 0x28
);

// 0x080194E8
static const Lights1 goomba_seg8_lights_080194E8 = gdSPDefLights1(
    0x18, 0x0d, 0x04,
    0x61, 0x34, 0x13, 0x28, 0x28, 0x28
);

// 0x08019530
ALIGNED8 static const u8 goomba_seg8_texture_08019530[] = {
#include "actors/goomba/goomba_body.rgba16.inc.c"
};

// 0x08019D30
ALIGNED8 static const u8 goomba_seg8_texture_08019D30[] = {
#include "actors/goomba/goomba_face.rgba16.inc.c"
};

// 0x0801A530
ALIGNED8 static const u8 goomba_seg8_texture_0801A530[] = {
#include "actors/goomba/goomba_face_blink.rgba16.inc.c"
};

// 0x0801AD30
static const Lights1 goomba_seg8_lights_0801AD30 = gdSPDefLights1(
    0x7f, 0x7f, 0x7f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0801AD48
static const Vtx goomba_seg8_vertex_0801AD48[] = {
    {{{    80,     58,    105}, 0, {  1124,    322}, {0x22, 0x3f, 0x68, 0xff}}},
    {{{    80,     98,     62}, 0, {   858,    338}, {0x1d, 0x6e, 0x36, 0xff}}},
    {{{   -23,    109,     59}, 0, {   842,   1002}, {0xc7, 0x64, 0x34, 0xff}}},
    {{{   -23,     55,    118}, 0, {  -898,   1226}, {0xbc, 0x29, 0x62, 0xff}}},
    {{{   -51,    -48,     53}, 0, { -1544,   1510}, {0x87, 0xee, 0x1e, 0xff}}},
    {{{   -23,    -54,    118}, 0, {  -898,   1226}, {0xc7, 0xc8, 0x62, 0xff}}},
    {{{   -23,   -108,     75}, 0, { -1322,   1230}, {0xbf, 0x9b, 0x27, 0xff}}},
    {{{    -1,      0,    141}, 0, {  -670,   1004}, {0xfa, 0xf8, 0x7e, 0xff}}},
    {{{    80,    -97,     52}, 0, { -1560,    196}, {0x1c, 0x96, 0x3f, 0xff}}},
    {{{    80,    -57,    105}, 0, { -1022,    196}, {0x1d, 0xbe, 0x67, 0xff}}},
    {{{    82,      0,    120}, 0, {  -880,    168}, {0x2e, 0x05, 0x76, 0xff}}},
    {{{   -51,     49,     53}, 0, { -1544,   1510}, {0x85, 0x1a, 0x10, 0xff}}},
    {{{    80,     58,    105}, 0, { -1022,    196}, {0x22, 0x3f, 0x68, 0xff}}},
    {{{   -23,    109,     59}, 0, { -1482,   1230}, {0xc7, 0x64, 0x34, 0xff}}},
    {{{   -23,     55,    118}, 0, {  1198,    978}, {0xbc, 0x29, 0x62, 0xff}}},
};

// 0x0801AE38
static const Vtx goomba_seg8_vertex_0801AE38[] = {
    {{{   -23,    109,    -58}, 0, {   122,   1008}, {0xbd, 0x65, 0xdc, 0xff}}},
    {{{    -1,    130,      0}, 0, {   482,    872}, {0xfb, 0x7e, 0x05, 0xff}}},
    {{{    82,    110,      0}, 0, {   482,    330}, {0x2d, 0x76, 0xf9, 0xff}}},
    {{{   -23,    109,     59}, 0, {   842,   1002}, {0xc7, 0x64, 0x34, 0xff}}},
    {{{    80,     98,     62}, 0, {   858,    338}, {0x1d, 0x6e, 0x36, 0xff}}},
    {{{    80,     98,    -61}, 0, {   108,    346}, {0x19, 0x6a, 0xc1, 0xff}}},
    {{{   -23,     55,   -117}, 0, {  -232,    990}, {0xd2, 0x39, 0x99, 0xff}}},
    {{{   -23,    -54,   -117}, 0, { -3250,   1226}, {0xbc, 0xdc, 0x9c, 0xff}}},
    {{{   -51,     49,    -52}, 0, { -2604,   1510}, {0x87, 0x14, 0xe3, 0xff}}},
    {{{   -23,     55,   -117}, 0, { -3250,   1226}, {0xd2, 0x39, 0x99, 0xff}}},
    {{{   -23,    109,    -58}, 0, { -2666,   1230}, {0xbd, 0x65, 0xdc, 0xff}}},
    {{{    -1,      0,   -140}, 0, { -3478,   1004}, {0xf2, 0x00, 0x82, 0xff}}},
    {{{    82,      0,   -119}, 0, { -3268,    168}, {0x29, 0x03, 0x89, 0xff}}},
    {{{    80,     58,   -104}, 0, { -3126,    196}, {0x1f, 0x40, 0x97, 0xff}}},
    {{{   143,     65,    -68}, 0, {    62,    -70}, {0x4c, 0x49, 0xbb, 0xff}}},
    {{{   156,     68,      0}, 0, {   484,   -156}, {0x6e, 0x3e, 0x00, 0xff}}},
};

// 0x0801AF38
static const Vtx goomba_seg8_vertex_0801AF38[] = {
    {{{   -23,    -54,   -117}, 0, { -3250,   1226}, {0xbc, 0xdc, 0x9c, 0xff}}},
    {{{   -51,    -48,    -52}, 0, { -2604,   1510}, {0x85, 0xe8, 0xf0, 0xff}}},
    {{{   -51,     49,    -52}, 0, { -2604,   1510}, {0x87, 0x14, 0xe3, 0xff}}},
    {{{   -23,   -108,    -74}, 0, { -2826,   1230}, {0xca, 0x9c, 0xca, 0xff}}},
    {{{    82,      0,   -119}, 0, { -3268,    168}, {0x29, 0x03, 0x89, 0xff}}},
    {{{    80,    -57,   -104}, 0, { -3126,    196}, {0x24, 0xc1, 0x99, 0xff}}},
    {{{    -1,   -129,      0}, 0, { -2074,   1004}, {0xfe, 0x82, 0xf8, 0xff}}},
    {{{   -23,   -108,     75}, 0, { -1322,   1230}, {0xbf, 0x9b, 0x27, 0xff}}},
    {{{    80,    -97,    -51}, 0, { -2588,    196}, {0x20, 0x91, 0xce, 0xff}}},
    {{{    82,   -109,      0}, 0, { -2074,    168}, {0x2c, 0x8a, 0x05, 0xff}}},
    {{{    80,    -97,     52}, 0, { -1560,    196}, {0x1c, 0x96, 0x3f, 0xff}}},
    {{{   -51,    -48,     53}, 0, { -1544,   1510}, {0x87, 0xee, 0x1e, 0xff}}},
    {{{    82,    110,      0}, 0, {   482,    330}, {0x2d, 0x76, 0xf9, 0xff}}},
    {{{    80,     98,     62}, 0, {   858,    338}, {0x1d, 0x6e, 0x36, 0xff}}},
    {{{   143,     65,     69}, 0, {   906,    -78}, {0x4d, 0x51, 0x3a, 0xff}}},
    {{{   156,     68,      0}, 0, {   484,   -156}, {0x6e, 0x3e, 0x00, 0xff}}},
};

// 0x0801B038
static const Vtx goomba_seg8_vertex_0801B038[] = {
    {{{   143,     65,     69}, 0, {   906,    -78}, {0x4d, 0x51, 0x3a, 0xff}}},
    {{{    80,     98,     62}, 0, {   858,    338}, {0x1d, 0x6e, 0x36, 0xff}}},
    {{{    80,     58,    105}, 0, {  1124,    322}, {0x22, 0x3f, 0x68, 0xff}}},
    {{{   156,      0,     74}, 0, { -1340,   -572}, {0x6a, 0x04, 0x45, 0xff}}},
    {{{    80,     58,    105}, 0, { -1022,    196}, {0x22, 0x3f, 0x68, 0xff}}},
    {{{    82,      0,    120}, 0, {  -880,    168}, {0x2e, 0x05, 0x76, 0xff}}},
    {{{    80,    -57,    105}, 0, { -1022,    196}, {0x1d, 0xbe, 0x67, 0xff}}},
    {{{   143,    -64,     69}, 0, { -1380,   -440}, {0x4a, 0xb4, 0x44, 0xff}}},
    {{{    80,    -97,     52}, 0, { -1560,    196}, {0x1c, 0x96, 0x3f, 0xff}}},
    {{{   156,    -67,      0}, 0, { -2074,   -572}, {0x6e, 0xc1, 0x00, 0xff}}},
    {{{    82,   -109,      0}, 0, { -2074,    168}, {0x2c, 0x8a, 0x05, 0xff}}},
    {{{   143,    -64,    -68}, 0, { -2768,   -440}, {0x4b, 0xac, 0xc6, 0xff}}},
    {{{    80,    -97,    -51}, 0, { -2588,    196}, {0x20, 0x91, 0xce, 0xff}}},
    {{{    80,    -57,   -104}, 0, { -3126,    196}, {0x24, 0xc1, 0x99, 0xff}}},
    {{{   143,     65,     69}, 0, { -1380,   -440}, {0x4d, 0x51, 0x3a, 0xff}}},
    {{{   177,      0,      0}, 0, { -2074,   -774}, {0x7e, 0x00, 0x00, 0xff}}},
};

// 0x0801B138
static const Vtx goomba_seg8_vertex_0801B138[] = {
    {{{   156,      0,     74}, 0, { -1340,   -572}, {0x6a, 0x04, 0x45, 0xff}}},
    {{{   156,     68,      0}, 0, { -2074,   -572}, {0x6e, 0x3e, 0x00, 0xff}}},
    {{{   143,     65,     69}, 0, { -1380,   -440}, {0x4d, 0x51, 0x3a, 0xff}}},
    {{{   177,      0,      0}, 0, { -2074,   -774}, {0x7e, 0x00, 0x00, 0xff}}},
    {{{   156,      0,    -73}, 0, { -2808,   -572}, {0x6a, 0xfc, 0xbb, 0xff}}},
    {{{    80,    -57,   -104}, 0, { -3126,    196}, {0x24, 0xc1, 0x99, 0xff}}},
    {{{    82,      0,   -119}, 0, { -3268,    168}, {0x29, 0x03, 0x89, 0xff}}},
    {{{    80,     58,   -104}, 0, { -3126,    196}, {0x1f, 0x40, 0x97, 0xff}}},
    {{{   143,     65,    -68}, 0, { -2768,   -440}, {0x4c, 0x49, 0xbb, 0xff}}},
    {{{   143,    -64,    -68}, 0, { -2768,   -440}, {0x4b, 0xac, 0xc6, 0xff}}},
    {{{   156,    -67,      0}, 0, { -2074,   -572}, {0x6e, 0xc1, 0x00, 0xff}}},
    {{{    82,   -109,      0}, 0, { -2074,    168}, {0x2c, 0x8a, 0x05, 0xff}}},
    {{{    80,    -97,    -51}, 0, { -2588,    196}, {0x20, 0x91, 0xce, 0xff}}},
    {{{   -51,     49,     53}, 0, { -1544,   1510}, {0x85, 0x1a, 0x10, 0xff}}},
    {{{   -23,    109,    -58}, 0, { -2666,   1230}, {0xbd, 0x65, 0xdc, 0xff}}},
    {{{   -51,     49,    -52}, 0, { -2604,   1510}, {0x87, 0x14, 0xe3, 0xff}}},
};

// 0x0801B238
static const Vtx goomba_seg8_vertex_0801B238[] = {
    {{{   143,     65,    -68}, 0, {    62,    -70}, {0x4c, 0x49, 0xbb, 0xff}}},
    {{{    80,     98,    -61}, 0, {   108,    346}, {0x19, 0x6a, 0xc1, 0xff}}},
    {{{    82,    110,      0}, 0, {   482,    330}, {0x2d, 0x76, 0xf9, 0xff}}},
    {{{   -51,     49,     53}, 0, { -1544,   1510}, {0x85, 0x1a, 0x10, 0xff}}},
    {{{   -51,    -48,    -52}, 0, { -2604,   1510}, {0x85, 0xe8, 0xf0, 0xff}}},
    {{{   -51,    -48,     53}, 0, { -1544,   1510}, {0x87, 0xee, 0x1e, 0xff}}},
    {{{   -51,     49,    -52}, 0, { -2604,   1510}, {0x87, 0x14, 0xe3, 0xff}}},
    {{{   -23,     55,   -117}, 0, {  -232,    990}, {0xd2, 0x39, 0x99, 0xff}}},
    {{{    80,     58,   -104}, 0, {  -156,    336}, {0x1f, 0x40, 0x97, 0xff}}},
    {{{   -23,    109,     59}, 0, { -1482,   1230}, {0xc7, 0x64, 0x34, 0xff}}},
    {{{   -23,    109,    -58}, 0, { -2666,   1230}, {0xbd, 0x65, 0xdc, 0xff}}},
};

// 0x0801B2E8 - 0x0801B560
const Gfx goomba_seg8_dl_0801B2E8[] = {
    gsSPLight(&goomba_seg8_lights_0801AD30.l, 1),
    gsSPLight(&goomba_seg8_lights_0801AD30.a, 2),
    gsSPVertex(goomba_seg8_vertex_0801AD48, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  5,  4, 0x0,  5,  7,  3, 0x0),
    gsSP2Triangles( 5,  6,  8, 0x0,  5,  8,  9, 0x0),
    gsSP2Triangles( 7,  5,  9, 0x0,  3,  7, 10, 0x0),
    gsSP2Triangles( 7,  9, 10, 0x0,  3, 11,  4, 0x0),
    gsSP2Triangles( 3, 10, 12, 0x0,  3, 13, 11, 0x0),
    gsSP1Triangle( 0,  2, 14, 0x0),
    gsSPVertex(goomba_seg8_vertex_0801AE38, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 1,  3,  4, 0x0,  1,  4,  2, 0x0),
    gsSP2Triangles( 0,  2,  5, 0x0,  6,  0,  5, 0x0),
    gsSP2Triangles( 7,  8,  9, 0x0, 10,  9,  8, 0x0),
    gsSP2Triangles( 9, 11,  7, 0x0, 12,  9, 13, 0x0),
    gsSP2Triangles(12, 11,  9, 0x0,  7, 11, 12, 0x0),
    gsSP1Triangle(14,  2, 15, 0x0),
    gsSPVertex(goomba_seg8_vertex_0801AF38, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 0,  4,  5, 0x0,  5,  3,  0, 0x0),
    gsSP2Triangles( 3,  6,  7, 0x0,  1,  3,  7, 0x0),
    gsSP2Triangles( 5,  8,  3, 0x0,  6,  3,  8, 0x0),
    gsSP2Triangles( 7,  6,  9, 0x0,  6,  8,  9, 0x0),
    gsSP2Triangles( 7,  9, 10, 0x0,  1,  7, 11, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 14, 15, 0x0),
    gsSPVertex(goomba_seg8_vertex_0801B038, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  5,  7,  3, 0x0),
    gsSP2Triangles( 6,  8,  7, 0x0,  9,  3,  7, 0x0),
    gsSP2Triangles( 7, 10,  9, 0x0,  7,  8, 10, 0x0),
    gsSP2Triangles(11, 12, 13, 0x0,  3, 14,  4, 0x0),
    gsSP1Triangle( 9, 15,  3, 0x0),
    gsSPVertex(goomba_seg8_vertex_0801B138, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 6,  8,  4, 0x0,  1,  4,  8, 0x0),
    gsSP2Triangles( 4,  9,  5, 0x0,  4, 10,  9, 0x0),
    gsSP2Triangles( 1,  3,  4, 0x0,  4,  3, 10, 0x0),
    gsSP2Triangles(11,  9, 10, 0x0, 11, 12,  9, 0x0),
    gsSP1Triangle(13, 14, 15, 0x0),
    gsSPVertex(goomba_seg8_vertex_0801B238, 11, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  4, 0x0,  7,  1,  8, 0x0),
    gsSP2Triangles( 8,  1,  0, 0x0,  3,  9, 10, 0x0),
    gsSPEndDisplayList(),
};

// 0x0801B560 - 0x0801B5A0
const Gfx goomba_seg8_dl_0801B560[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPEndDisplayList(),
};

// 0x0801B5A0 - 0x0801B5C8
const Gfx goomba_seg8_dl_0801B5A0[] = {
    gsSPDisplayList(goomba_seg8_dl_0801B2E8),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

// 0x0801B5C8 - 0x0801B5F0
const Gfx goomba_seg8_dl_0801B5C8[] = {
    gsSPDisplayList(goomba_seg8_dl_0801B560),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, goomba_seg8_texture_08019D30),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPBranchList(goomba_seg8_dl_0801B5A0),
};

// 0x0801B5F0 - 0x0801B618
const Gfx goomba_seg8_dl_0801B5F0[] = {
    gsSPDisplayList(goomba_seg8_dl_0801B560),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, goomba_seg8_texture_0801A530),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPBranchList(goomba_seg8_dl_0801B5A0),
};

// 0x0801B618
static const Vtx goomba_seg8_vertex_0801B618[] = {
    {{{    18,     18,      0}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -18,     18,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -18,    -18,      0}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    18,    -18,      0}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x0801B658 - 0x0801B690
const Gfx goomba_seg8_dl_0801B658[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, goomba_seg8_texture_08019530),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(goomba_seg8_vertex_0801B618, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0801B690 - 0x0801B700
const Gfx goomba_seg8_dl_0801B690[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(goomba_seg8_dl_0801B658),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x0801B700
static const Vtx goomba_seg8_vertex_0801B700[] = {
    {{{    90,     14,    -14}, 0, {     0,      0}, {0x6c, 0xdf, 0xc8, 0x00}}},
    {{{    90,     14,     29}, 0, {     0,      0}, {0x6c, 0xdf, 0x38, 0x00}}},
    {{{    85,     -4,     29}, 0, {     0,      0}, {0x5d, 0xb8, 0x2d, 0x00}}},
    {{{    85,     -4,    -14}, 0, {     0,      0}, {0x5d, 0xb8, 0xd3, 0xff}}},
    {{{   -30,     14,     21}, 0, {     0,      0}, {0x95, 0xd4, 0x33, 0xff}}},
    {{{   -30,     14,     -7}, 0, {     0,      0}, {0x95, 0xd4, 0xcd, 0xff}}},
    {{{   -25,      0,     -4}, 0, {     0,      0}, {0xad, 0xa9, 0xda, 0xff}}},
    {{{   -25,      0,     19}, 0, {     0,      0}, {0xad, 0xa9, 0x26, 0xff}}},
    {{{    66,    -17,    -14}, 0, {     0,      0}, {0x1e, 0x88, 0xe5, 0xff}}},
    {{{    66,    -17,     29}, 0, {     0,      0}, {0x1e, 0x88, 0x1b, 0xff}}},
    {{{     4,    -12,     26}, 0, {     0,      0}, {0xe1, 0x87, 0x16, 0xff}}},
    {{{     4,    -12,    -11}, 0, {     0,      0}, {0xe1, 0x87, 0xea, 0xff}}},
    {{{    60,     14,     51}, 0, {     0,      0}, {0x1f, 0xe1, 0x76, 0xff}}},
    {{{     0,     11,     45}, 0, {     0,      0}, {0xd3, 0xda, 0x6f, 0xff}}},
    {{{     2,     -6,     39}, 0, {     0,      0}, {0xd5, 0xac, 0x54, 0xff}}},
    {{{    60,    -12,     44}, 0, {     0,      0}, {0x20, 0xb2, 0x5e, 0xff}}},
};

// 0x0801B800
static const Vtx goomba_seg8_vertex_0801B800[] = {
    {{{     0,     11,    -30}, 0, {     0,      0}, {0xd3, 0xda, 0x91, 0xff}}},
    {{{    60,     14,    -37}, 0, {     0,      0}, {0x1f, 0xe1, 0x8a, 0x00}}},
    {{{    60,    -12,    -30}, 0, {     0,      0}, {0x20, 0xb2, 0xa2, 0x00}}},
    {{{     2,     -6,    -25}, 0, {     0,      0}, {0xd5, 0xac, 0xac, 0xff}}},
    {{{     4,    -12,    -11}, 0, {     0,      0}, {0xe1, 0x87, 0xea, 0xff}}},
    {{{   -25,      0,     -4}, 0, {     0,      0}, {0xad, 0xa9, 0xda, 0xff}}},
    {{{     2,     -6,     39}, 0, {     0,      0}, {0xd5, 0xac, 0x54, 0xff}}},
    {{{   -25,      0,     19}, 0, {     0,      0}, {0xad, 0xa9, 0x26, 0xff}}},
    {{{     4,    -12,     26}, 0, {     0,      0}, {0xe1, 0x87, 0x16, 0xff}}},
    {{{    66,    -17,     29}, 0, {     0,      0}, {0x1e, 0x88, 0x1b, 0xff}}},
    {{{    85,     -4,     29}, 0, {     0,      0}, {0x5d, 0xb8, 0x2d, 0xff}}},
    {{{    60,    -12,     44}, 0, {     0,      0}, {0x20, 0xb2, 0x5e, 0xff}}},
    {{{    85,     -4,    -14}, 0, {     0,      0}, {0x5d, 0xb8, 0xd3, 0xff}}},
    {{{    66,    -17,    -14}, 0, {     0,      0}, {0x1e, 0x88, 0xe5, 0xff}}},
    {{{   -30,     14,     -7}, 0, {     0,      0}, {0x95, 0xd4, 0xcd, 0xff}}},
};

// 0x0801B8F0
static const Vtx goomba_seg8_vertex_0801B8F0[] = {
    {{{     0,     11,     45}, 0, {     0,      0}, {0xd3, 0xda, 0x6f, 0xff}}},
    {{{   -30,     14,     21}, 0, {     0,      0}, {0x95, 0xd4, 0x33, 0x00}}},
    {{{   -25,      0,     19}, 0, {     0,      0}, {0xad, 0xa9, 0x26, 0x00}}},
    {{{     2,     -6,     39}, 0, {     0,      0}, {0xd5, 0xac, 0x54, 0xff}}},
    {{{    60,    -12,     44}, 0, {     0,      0}, {0x20, 0xb2, 0x5e, 0xff}}},
    {{{    85,     -4,     29}, 0, {     0,      0}, {0x5d, 0xb8, 0x2d, 0xff}}},
    {{{    90,     14,     29}, 0, {     0,      0}, {0x6c, 0xdf, 0x38, 0xff}}},
    {{{    60,     14,     51}, 0, {     0,      0}, {0x1f, 0xe1, 0x76, 0xff}}},
    {{{    66,    -17,    -14}, 0, {     0,      0}, {0x1e, 0x88, 0xe5, 0xff}}},
    {{{    85,     -4,    -14}, 0, {     0,      0}, {0x5d, 0xb8, 0xd3, 0xff}}},
    {{{    66,    -17,     29}, 0, {     0,      0}, {0x1e, 0x88, 0x1b, 0xff}}},
    {{{    60,     14,    -37}, 0, {     0,      0}, {0x1f, 0xe1, 0x8a, 0xff}}},
    {{{    90,     14,    -14}, 0, {     0,      0}, {0x6c, 0xdf, 0xc8, 0xff}}},
    {{{    60,    -12,    -30}, 0, {     0,      0}, {0x20, 0xb2, 0xa2, 0xff}}},
};

// 0x0801B9D0
static const Vtx goomba_seg8_vertex_0801B9D0[] = {
    {{{   -30,     14,     -7}, 0, {     0,      0}, {0x09, 0x7e, 0x00, 0xff}}},
    {{{   -30,     14,     21}, 0, {     0,      0}, {0x09, 0x7e, 0x00, 0x00}}},
    {{{     0,     11,     45}, 0, {     0,      0}, {0x02, 0x7f, 0x00, 0x00}}},
    {{{     0,     11,    -30}, 0, {     0,      0}, {0x02, 0x7f, 0x00, 0xff}}},
    {{{    60,     14,     51}, 0, {     0,      0}, {0xfe, 0x7f, 0x00, 0xff}}},
    {{{    90,     14,     29}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    90,     14,    -14}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    60,     14,    -37}, 0, {     0,      0}, {0xfe, 0x7f, 0x00, 0xff}}},
};

// 0x0801BA50
static const Vtx goomba_seg8_vertex_0801BA50[] = {
    {{{     0,     11,     30}, 0, {     0,      0}, {0x02, 0x7f, 0x00, 0x00}}},
    {{{    60,     14,     37}, 0, {     0,      0}, {0xfe, 0x7f, 0x00, 0x00}}},
    {{{    60,     14,    -51}, 0, {     0,      0}, {0xfe, 0x7f, 0x00, 0x00}}},
    {{{     0,     11,    -45}, 0, {     0,      0}, {0x02, 0x7f, 0x00, 0xff}}},
    {{{    90,     14,     14}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    90,     14,    -29}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   -30,     14,    -21}, 0, {     0,      0}, {0x09, 0x7e, 0x00, 0xff}}},
    {{{   -30,     14,      7}, 0, {     0,      0}, {0x09, 0x7e, 0x00, 0xff}}},
    {{{    60,    -12,     30}, 0, {     0,      0}, {0x20, 0xb2, 0x5e, 0xff}}},
    {{{    85,     -4,     14}, 0, {     0,      0}, {0x5d, 0xb8, 0x2d, 0xff}}},
    {{{    90,     14,     14}, 0, {     0,      0}, {0x6c, 0xdf, 0x38, 0xff}}},
    {{{    60,     14,     37}, 0, {     0,      0}, {0x1f, 0xe1, 0x76, 0xff}}},
    {{{    66,    -17,    -29}, 0, {     0,      0}, {0x1e, 0x88, 0xe5, 0xff}}},
    {{{    85,     -4,    -29}, 0, {     0,      0}, {0x5d, 0xb8, 0xd3, 0xff}}},
    {{{    66,    -17,     14}, 0, {     0,      0}, {0x1e, 0x88, 0x1b, 0xff}}},
};

// 0x0801BB40
static const Vtx goomba_seg8_vertex_0801BB40[] = {
    {{{    60,     14,    -51}, 0, {     0,      0}, {0x1f, 0xe1, 0x8a, 0xff}}},
    {{{    90,     14,    -29}, 0, {     0,      0}, {0x6c, 0xdf, 0xc8, 0x00}}},
    {{{    85,     -4,    -29}, 0, {     0,      0}, {0x5d, 0xb8, 0xd3, 0x00}}},
    {{{    60,    -12,    -44}, 0, {     0,      0}, {0x20, 0xb2, 0xa2, 0xff}}},
    {{{     2,     -6,    -39}, 0, {     0,      0}, {0xd5, 0xac, 0xac, 0xff}}},
    {{{   -25,      0,    -19}, 0, {     0,      0}, {0xad, 0xa9, 0xda, 0xff}}},
    {{{   -30,     14,    -21}, 0, {     0,      0}, {0x95, 0xd4, 0xcd, 0xff}}},
    {{{     0,     11,    -45}, 0, {     0,      0}, {0xd3, 0xda, 0x91, 0xff}}},
    {{{     4,    -12,     11}, 0, {     0,      0}, {0xe1, 0x87, 0x16, 0xff}}},
    {{{   -25,      0,      4}, 0, {     0,      0}, {0xad, 0xa9, 0x26, 0xff}}},
    {{{     4,    -12,    -26}, 0, {     0,      0}, {0xe1, 0x87, 0xea, 0xff}}},
    {{{     0,     11,     30}, 0, {     0,      0}, {0xd3, 0xda, 0x6f, 0xff}}},
    {{{   -30,     14,      7}, 0, {     0,      0}, {0x95, 0xd4, 0x33, 0xff}}},
    {{{     2,     -6,     25}, 0, {     0,      0}, {0xd5, 0xac, 0x54, 0xff}}},
    {{{    66,    -17,     14}, 0, {     0,      0}, {0x1e, 0x88, 0x1b, 0xff}}},
    {{{    60,    -12,     30}, 0, {     0,      0}, {0x20, 0xb2, 0x5e, 0xff}}},
};

// 0x0801BC40
static const Vtx goomba_seg8_vertex_0801BC40[] = {
    {{{    60,    -12,    -44}, 0, {     0,      0}, {0x20, 0xb2, 0xa2, 0xff}}},
    {{{    66,    -17,    -29}, 0, {     0,      0}, {0x1e, 0x88, 0xe5, 0x00}}},
    {{{     4,    -12,    -26}, 0, {     0,      0}, {0xe1, 0x87, 0xea, 0x00}}},
    {{{     2,     -6,    -39}, 0, {     0,      0}, {0xd5, 0xac, 0xac, 0xff}}},
    {{{    66,    -17,     14}, 0, {     0,      0}, {0x1e, 0x88, 0x1b, 0xff}}},
    {{{    85,     -4,     14}, 0, {     0,      0}, {0x5d, 0xb8, 0x2d, 0xff}}},
    {{{    60,    -12,     30}, 0, {     0,      0}, {0x20, 0xb2, 0x5e, 0xff}}},
    {{{    85,     -4,    -29}, 0, {     0,      0}, {0x5d, 0xb8, 0xd3, 0xff}}},
    {{{   -25,      0,    -19}, 0, {     0,      0}, {0xad, 0xa9, 0xda, 0xff}}},
    {{{     2,     -6,     25}, 0, {     0,      0}, {0xd5, 0xac, 0x54, 0xff}}},
    {{{   -25,      0,      4}, 0, {     0,      0}, {0xad, 0xa9, 0x26, 0xff}}},
    {{{     4,    -12,     11}, 0, {     0,      0}, {0xe1, 0x87, 0x16, 0xff}}},
    {{{    60,     14,     37}, 0, {     0,      0}, {0x1f, 0xe1, 0x76, 0xff}}},
    {{{     0,     11,     30}, 0, {     0,      0}, {0xd3, 0xda, 0x6f, 0xff}}},
    {{{     0,     11,    -45}, 0, {     0,      0}, {0xd3, 0xda, 0x91, 0xff}}},
    {{{    60,     14,    -51}, 0, {     0,      0}, {0x1f, 0xe1, 0x8a, 0xff}}},
};

// 0x0801BD40
static const Vtx goomba_seg8_vertex_0801BD40[] = {
    {{{   -25,      0,    -19}, 0, {     0,      0}, {0xad, 0xa9, 0xda, 0xff}}},
    {{{   -25,      0,      4}, 0, {     0,      0}, {0xad, 0xa9, 0x26, 0x00}}},
    {{{   -30,     14,      7}, 0, {     0,      0}, {0x95, 0xd4, 0x33, 0x00}}},
    {{{   -30,     14,    -21}, 0, {     0,      0}, {0x95, 0xd4, 0xcd, 0xff}}},
    {{{    85,     -4,     14}, 0, {     0,      0}, {0x5d, 0xb8, 0x2d, 0xff}}},
    {{{    85,     -4,    -29}, 0, {     0,      0}, {0x5d, 0xb8, 0xd3, 0xff}}},
    {{{    90,     14,    -29}, 0, {     0,      0}, {0x6c, 0xdf, 0xc8, 0xff}}},
    {{{    90,     14,     14}, 0, {     0,      0}, {0x6c, 0xdf, 0x38, 0xff}}},
};

// 0x0801CE20 - 0x0801CF78
const Gfx goomba_seg8_dl_0801CE20[] = {
    gsSPLight(&goomba_seg8_lights_080194D0.l, 1),
    gsSPLight(&goomba_seg8_lights_080194D0.a, 2),
    gsSPVertex(goomba_seg8_vertex_0801B700, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 14, 15, 0x0),
    gsSPVertex(goomba_seg8_vertex_0801B800, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  3, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 9, 10, 11, 0x0,  2, 12, 13, 0x0),
    gsSP2Triangles( 6,  8,  9, 0x0,  6,  9, 11, 0x0),
    gsSP2Triangles( 2, 13,  4, 0x0,  2,  4,  3, 0x0),
    gsSP2Triangles( 3,  5, 14, 0x0,  3, 14,  0, 0x0),
    gsSP2Triangles( 8,  7,  5, 0x0,  8,  5,  4, 0x0),
    gsSPVertex(goomba_seg8_vertex_0801B8F0, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9,  5, 0x0,  8,  5, 10, 0x0),
    gsSP2Triangles(11, 12,  9, 0x0, 11,  9, 13, 0x0),
    gsSPVertex(goomba_seg8_vertex_0801B9D0, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 2,  4,  7, 0x0,  2,  7,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0801CF78 - 0x0801D0D0
const Gfx goomba_seg8_dl_0801CF78[] = {
    gsSPLight(&goomba_seg8_lights_080194E8.l, 1),
    gsSPLight(&goomba_seg8_lights_080194E8.a, 2),
    gsSPVertex(goomba_seg8_vertex_0801BA50, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 1,  4,  5, 0x0,  1,  5,  2, 0x0),
    gsSP2Triangles( 0,  3,  6, 0x0,  0,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles(12, 13,  9, 0x0, 12,  9, 14, 0x0),
    gsSPVertex(goomba_seg8_vertex_0801BB40, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9,  5, 0x0,  8,  5, 10, 0x0),
    gsSP2Triangles(11, 12,  9, 0x0, 11,  9, 13, 0x0),
    gsSP2Triangles(13,  8, 14, 0x0, 13, 14, 15, 0x0),
    gsSPVertex(goomba_seg8_vertex_0801BC40, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  0,  7,  1, 0x0),
    gsSP2Triangles( 2,  8,  3, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles( 9,  6, 12, 0x0,  9, 12, 13, 0x0),
    gsSP2Triangles( 0,  3, 14, 0x0,  0, 14, 15, 0x0),
    gsSP2Triangles(11,  2,  1, 0x0, 11,  1,  4, 0x0),
    gsSPVertex(goomba_seg8_vertex_0801BD40, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSPEndDisplayList(),
};

// 0x0801D760 - 0x0801D770
const Gfx goomba_seg8_dl_0801D760[] = {
    gsSPNumLights(NUMLIGHTS_1),
    gsSPEndDisplayList(),
};
