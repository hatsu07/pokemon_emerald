	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC24
gText_Rom_30FC24: @ 0x0830FC24
	.string "すっぱい$"
	.if (. - gText_Rom_30FC24) > 0x5
	.error "gText_Rom_30FC24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC24) < 0x5
	.space 0x5 - (. - gText_Rom_30FC24)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0830FC29: berry_blender.s: Blender_PrintBlendingResults
	.globl gBerryBlenderData_0830FC29
gBerryBlenderData_0830FC29: @ 0x0830FC29
	@ analyzed canonical ROM range 0x0830FC29-0x0830FC2D
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x06, 0x06, 0x06, 0x06, 0x05
	@ pret/pokeemerald-jp direct xref for 0x0830FC2E: berry_blender.s: Blender_PrintBlendingResults
	.globl gBerryBlenderData_0830FC2E
gBerryBlenderData_0830FC2E: @ 0x0830FC2E
	@ analyzed canonical ROM range 0x0830FC2E-0x0830FC32
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x03, 0x03, 0x03, 0x02, 0x02
	@ pret/pokeemerald-jp direct xref for 0x0830FC33: berry_blender.s: Blender_PrintBlendingRanking
	.globl gBerryBlenderData_0830FC33
gBerryBlenderData_0830FC33: @ 0x0830FC33
	@ analyzed canonical ROM range 0x0830FC33-0x0830FC37
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x03, 0x03, 0x03, 0x03, 0x02

	@ src/berry_blender.c:315 sText_BlenderMaxSpeedRecord
	.globl gText_Rom_30FC38
gText_Rom_30FC38: @ 0x0830FC38
	.string "きのみブレンダー\nさいこうそくど ランキング！$"
	.if (. - gText_Rom_30FC38) > 0x18
	.error "gText_Rom_30FC38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC38) < 0x18
	.space 0x18 - (. - gText_Rom_30FC38)
	.endif

	@ src/berry_blender.c:316 sText_234Players
	.globl gText_Rom_30FC50
gText_Rom_30FC50: @ 0x0830FC50
	.string "ふたり\nさんにん\nよにん$"
	.if (. - gText_Rom_30FC50) > 0xd
	.error "gText_Rom_30FC50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC50) < 0xd
	.space 0xd - (. - gText_Rom_30FC50)
	.endif
	.space 0x3, 0x00
