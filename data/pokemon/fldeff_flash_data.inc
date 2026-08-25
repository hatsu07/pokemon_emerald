	@ pret/pokeemerald-jp direct xref for 0x08592214: fldeff_flash.s: GetMapPairFadeFromType, GetMapPairFadeToType, sub_08137374
	.globl gFldeffFlashData_08592214
gFldeffFlashData_08592214: @ 0x08592214
	@ analyzed canonical ROM range 0x08592214-0x0859229B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x08592214 parent=gFldeffFlashData_08592214 offset=0x0 fromMapType=1 toMapType=4 fadeToType=1 fadeFromType=0
	@ ANALYSIS: SOURCE_RANGE addr=0x08592214 size=0x4
	.byte 0x01, 0x04, 0x01, 0x00 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592218 size=0x4 source=v54_multi_pointer
	.4byte sub_08137618
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x0859221C parent=gFldeffFlashData_08592214 offset=0x8 fromMapType=2 toMapType=4 fadeToType=1 fadeFromType=0
	@ ANALYSIS: SOURCE_RANGE addr=0x0859221C size=0x4
	.byte 0x02, 0x04, 0x01, 0x00 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592220 size=0x4 source=v54_multi_pointer
	.4byte sub_08137618
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x08592224 parent=gFldeffFlashData_08592214 offset=0x10 fromMapType=3 toMapType=4 fadeToType=1 fadeFromType=0
	@ ANALYSIS: SOURCE_RANGE addr=0x08592224 size=0x4
	.byte 0x03, 0x04, 0x01, 0x00 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592228 size=0x4 source=v54_multi_pointer
	.4byte sub_08137618
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x0859222C parent=gFldeffFlashData_08592214 offset=0x18 fromMapType=5 toMapType=4 fadeToType=1 fadeFromType=0
	@ ANALYSIS: SOURCE_RANGE addr=0x0859222C size=0x4
	.byte 0x05, 0x04, 0x01, 0x00 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592230 size=0x4 source=v54_multi_pointer
	.4byte sub_08137618
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x08592234 parent=gFldeffFlashData_08592214 offset=0x20 fromMapType=6 toMapType=4 fadeToType=1 fadeFromType=0
	@ ANALYSIS: SOURCE_RANGE addr=0x08592234 size=0x4
	.byte 0x06, 0x04, 0x01, 0x00 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592238 size=0x4 source=v54_multi_pointer
	.4byte sub_08137618
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x0859223C parent=gFldeffFlashData_08592214 offset=0x28 fromMapType=7 toMapType=4 fadeToType=1 fadeFromType=0
	@ ANALYSIS: SOURCE_RANGE addr=0x0859223C size=0x4
	.byte 0x07, 0x04, 0x01, 0x00 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592240 size=0x4 source=v54_multi_pointer
	.4byte sub_08137618
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x08592244 parent=gFldeffFlashData_08592214 offset=0x30 fromMapType=8 toMapType=4 fadeToType=1 fadeFromType=0
	@ ANALYSIS: SOURCE_RANGE addr=0x08592244 size=0x4
	.byte 0x08, 0x04, 0x01, 0x00 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592248 size=0x4 source=v54_multi_pointer
	.4byte sub_08137618
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x0859224C parent=gFldeffFlashData_08592214 offset=0x38 fromMapType=9 toMapType=4 fadeToType=1 fadeFromType=0
	@ ANALYSIS: SOURCE_RANGE addr=0x0859224C size=0x4
	.byte 0x09, 0x04, 0x01, 0x00 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592250 size=0x4 source=v54_multi_pointer
	.4byte sub_08137618
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x08592254 parent=gFldeffFlashData_08592214 offset=0x40 fromMapType=4 toMapType=1 fadeToType=0 fadeFromType=1
	@ ANALYSIS: SOURCE_RANGE addr=0x08592254 size=0x4
	.byte 0x04, 0x01, 0x00, 0x01 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592258 size=0x4 source=v54_multi_pointer
	.4byte sub_08137460
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x0859225C parent=gFldeffFlashData_08592214 offset=0x48 fromMapType=4 toMapType=2 fadeToType=0 fadeFromType=1
	@ ANALYSIS: SOURCE_RANGE addr=0x0859225C size=0x4
	.byte 0x04, 0x02, 0x00, 0x01 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592260 size=0x4 source=v54_multi_pointer
	.4byte sub_08137460
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x08592264 parent=gFldeffFlashData_08592214 offset=0x50 fromMapType=4 toMapType=3 fadeToType=0 fadeFromType=1
	@ ANALYSIS: SOURCE_RANGE addr=0x08592264 size=0x4
	.byte 0x04, 0x03, 0x00, 0x01 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592268 size=0x4 source=v54_multi_pointer
	.4byte sub_08137460
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x0859226C parent=gFldeffFlashData_08592214 offset=0x58 fromMapType=4 toMapType=5 fadeToType=0 fadeFromType=1
	@ ANALYSIS: SOURCE_RANGE addr=0x0859226C size=0x4
	.byte 0x04, 0x05, 0x00, 0x01 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592270 size=0x4 source=v54_multi_pointer
	.4byte sub_08137460
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x08592274 parent=gFldeffFlashData_08592214 offset=0x60 fromMapType=4 toMapType=6 fadeToType=0 fadeFromType=1
	@ ANALYSIS: SOURCE_RANGE addr=0x08592274 size=0x4
	.byte 0x04, 0x06, 0x00, 0x01 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592278 size=0x4 source=v54_multi_pointer
	.4byte sub_08137460
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x0859227C parent=gFldeffFlashData_08592214 offset=0x68 fromMapType=4 toMapType=7 fadeToType=0 fadeFromType=1
	@ ANALYSIS: SOURCE_RANGE addr=0x0859227C size=0x4
	.byte 0x04, 0x07, 0x00, 0x01 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592280 size=0x4 source=v54_multi_pointer
	.4byte sub_08137460
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x08592284 parent=gFldeffFlashData_08592214 offset=0x70 fromMapType=4 toMapType=8 fadeToType=0 fadeFromType=1
	@ ANALYSIS: SOURCE_RANGE addr=0x08592284 size=0x4
	.byte 0x04, 0x08, 0x00, 0x01 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592288 size=0x4 source=v54_multi_pointer
	.4byte sub_08137460
	@ ANALYSIS: MAP_PAIR_FADE_PARAMS size=0x4 addr=0x0859228C parent=gFldeffFlashData_08592214 offset=0x78 fromMapType=4 toMapType=9 fadeToType=0 fadeFromType=1
	@ ANALYSIS: SOURCE_RANGE addr=0x0859228C size=0x4
	.byte 0x04, 0x09, 0x00, 0x01 @ fromMapType, toMapType, fadeToType, fadeFromType
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x08592290 size=0x4 source=v54_multi_pointer
	.4byte sub_08137460
	@ ANALYSIS: MAP_PAIR_FADE_TABLE_END size=0x8 addr=0x08592294 parent=gFldeffFlashData_08592214 offset=0x80
	@ ANALYSIS: SOURCE_RANGE addr=0x08592294 size=0x8
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0859229C: fldeff_flash.s: sub_08137490, sub_0813757C, sub_08137648
	.globl gFldeffFlashData_0859229C
gFldeffFlashData_0859229C: @ 0x0859229C
	@ analyzed canonical ROM range 0x0859229C-0x085922BB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x20 entries=16
	.2byte 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF
	.2byte 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF
	.space 0x20, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085922DC: fldeff_flash.s: sub_081376E8
	.globl gFldeffFlashData_085922DC
gFldeffFlashData_085922DC: @ 0x085922DC
	@ analyzed canonical ROM range 0x085922DC-0x085922EB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x5712, 0x0842, 0x1084, 0x18C6, 0x2108, 0x294A, 0x318C, 0x39CE
	@ pret/pokeemerald-jp direct xref for 0x085922EC: fldeff_flash.s: sub_08137490, sub_0813757C
	.globl gFldeffFlashData_085922EC
gFldeffFlashData_085922EC: @ 0x085922EC
	@ analyzed canonical ROM range 0x085922EC-0x085922FB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: LZ77_STREAM compressed_payload_size=0x10 decompressed_size=0x4A5242
	.byte 0x10, 0x42, 0x52, 0x4A, 0x94, 0x52, 0xD6, 0x5A, 0x18, 0x63, 0x5A, 0x6B, 0x9C, 0x73, 0xFF, 0x7F
	@ pret/pokeemerald-jp direct xref for 0x085922FC: fldeff_flash.s: sub_08137490, sub_08137648
	.globl sCaveTransitionTilemap
sCaveTransitionTilemap: @ 0x085922FC
	@ Semantic exact-LZ cave transition asset.
	.incbin "build/graphics/cave_transition/tilemap.bin.lz"
	.if (. - sCaveTransitionTilemap) != 0x1E0
	.error "sCaveTransitionTilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085924DC: fldeff_flash.s: sub_08137490, sub_08137648
	.globl sCaveTransitionTiles
sCaveTransitionTiles: @ 0x085924DC
	@ Semantic exact-LZ cave transition asset.
	.incbin "build/graphics/cave_transition/tiles.4bpp.lz"
	.if (. - sCaveTransitionTiles) != 0xB4
	.error "sCaveTransitionTiles compressed size mismatch"
	.endif
