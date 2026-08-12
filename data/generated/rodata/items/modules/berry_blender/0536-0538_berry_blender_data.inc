	@ src/berry_blender.c:264 sText_BerryBlenderStart
	.globl gText_Rom_30F6AE
gText_Rom_30F6AE: @ 0x0830F6AE
	.string "きのみブレンダーを きどうします\pバッグから きのみブレンダーに いれる\nきのみを えらんでください\p$"
	.if (. - gText_Rom_30F6AE) > 0x34
	.error "gText_Rom_30F6AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F6AE) < 0x34
	.space 0x34 - (. - gText_Rom_30F6AE)
	.endif
	@ Decoded text from ROM range: offset=0x30F6E2, size=0x19
	.string "カッコイ$"
	.string "カワイイ$"
	.string "ウツクシ$"
	.string "カシコイ$"
	.string "タクマシ$"
	@ pret/pokeemerald-jp direct xref for 0x0830F6FB: berry_blender.s: Blender_PrintMadePokeblockString
	.globl gBerryBlenderData_0830F6FB
gBerryBlenderData_0830F6FB: @ 0x0830F6FB
	@ analyzed canonical ROM range 0x0830F6FB-0x0830F6FC
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x2
	.byte 0xFB, 0xFF

	@ src/berry_blender.c:266 sText_WasMade
	.globl gText_Rom_30F6FD
gText_Rom_30F6FD: @ 0x0830F6FD
	.string " ができた！$"
	.if (. - gText_Rom_30F6FD) > 0x7
	.error "gText_Rom_30F6FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F6FD) < 0x7
	.space 0x7 - (. - gText_Rom_30F6FD)
	.endif
	@ analyzed canonical ROM range 0x0830F704-0x0830F721
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x13, 0x12, 0x3D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x14, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x5C, 0x8A, 0x79, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
