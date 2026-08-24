
	@ src/berry_blender.c:264 sText_BerryBlenderStart
	.globl sText_BerryBlenderStart
sText_BerryBlenderStart: @ 0x0830F6AE
	.string "きのみブレンダーを きどうします\pバッグから きのみブレンダーに いれる\nきのみを えらんでください\p{EOS}"
	.if (. - sText_BerryBlenderStart) > 0x34
	.error "sText_BerryBlenderStart may not grow beyond its original slot"
	.endif
	.if (. - sText_BerryBlenderStart) < 0x34
	.space 0x34 - (. - sText_BerryBlenderStart)
	.endif
	@ Decoded text from ROM range: offset=0x30F6E2, size=0x19
	.string "カッコイ{EOS}"
	.string "カワイイ{EOS}"
	.string "ウツクシ{EOS}"
	.string "カシコイ{EOS}"
	.string "タクマシ{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x0830F6FB: berry_blender.s: Blender_PrintMadePokeblockString
	.globl gBerryBlenderData_0830F6FB
gBerryBlenderData_0830F6FB: @ 0x0830F6FB
	@ analyzed canonical ROM range 0x0830F6FB-0x0830F6FC
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0xFB, 0xFF

	@ src/berry_blender.c:266 sText_WasMade
	.globl sText_WasMade
sText_WasMade: @ 0x0830F6FD
	.string " ができた！{EOS}"
	.if (. - sText_WasMade) > 0x7
	.error "sText_WasMade may not grow beyond its original slot"
	.endif
	.if (. - sText_WasMade) < 0x7
	.space 0x7 - (. - sText_WasMade)
	.endif
	@ analyzed canonical ROM range 0x0830F704-0x0830F721
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x13, 0x12, 0x3D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x14, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x5C, 0x8A, 0x79, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
