	@ src/berry_blender.c:278 sText_CommunicationStandby
	.globl gText_Rom_30F78E
gText_Rom_30F78E: @ 0x0830F78E
	.string "つうしんたいきちゅうです$"
	.if (. - gText_Rom_30F78E) > 0xd
	.error "gText_Rom_30F78E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F78E) < 0xd
	.space 0xd - (. - gText_Rom_30F78E)
	.endif
	.globl gUnknown_830F79B
gUnknown_830F79B: @ 0x0830F79B
	@ analyzed canonical ROM range 0x0830F79B-0x0830F7B1
sAnalyzedData_0830F79B: @ 0x0830F79B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x23, 0x03, 0x02, 0x11, 0x45, 0x00, 0x07, 0x19, 0x20, 0x2D, 0x00, 0x1F, 0x3F, 0x1F, 0x0D, 0x06
	.byte 0xAC, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF
	.globl gUnknown_830F7B2
gUnknown_830F7B2: @ 0x0830F7B2

	@ src/berry_blender.c:280 sText_RunOutOfBerriesForBlending
	.globl gText_Rom_30F7B2
gText_Rom_30F7B2: @ 0x0830F7B2
	.string "きのみブレンダーに いれる きのみが\nないので これいじょう できません\p$"
	.if (. - gText_Rom_30F7B2) > 0x26
	.error "gText_Rom_30F7B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7B2) < 0x26
	.space 0x26 - (. - gText_Rom_30F7B2)
	.endif
	.globl gUnknown_830F7D8
gUnknown_830F7D8: @ 0x0830F7D8

	@ src/berry_blender.c:281 sText_YourPokeblockCaseIsFull
	.globl gText_Rom_30F7D8
gText_Rom_30F7D8: @ 0x0830F7D8
	.string "ポロックケースが いっぱいの ようです\p$"
	.if (. - gText_Rom_30F7D8) > 0x15
	.error "gText_Rom_30F7D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7D8) < 0x15
	.space 0x15 - (. - gText_Rom_30F7D8)
	.endif
	.globl gUnknown_830F7ED
gUnknown_830F7ED: @ 0x0830F7ED

	@ src/berry_blender.c:282 sText_HasNoBerriesToPut
	.globl gText_Rom_30F7ED
gText_Rom_30F7ED: @ 0x0830F7ED
	.string "は きのみブレンダーに\nいれる きのみがないようです$"
	.if (. - gText_Rom_30F7ED) > 0x1b
	.error "gText_Rom_30F7ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7ED) < 0x1b
	.space 0x1b - (. - gText_Rom_30F7ED)
	.endif
	.globl gUnknown_830F808
gUnknown_830F808: @ 0x0830F808

	@ src/berry_blender.c:283 sText_ApostropheSPokeblockCaseIsFull
	.globl gText_Rom_30F808
gText_Rom_30F808: @ 0x0830F808
	.string "は ポロックケースが\nいっぱいの ようです\p$"
	.if (. - gText_Rom_30F808) > 0x17
	.error "gText_Rom_30F808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F808) < 0x17
	.space 0x17 - (. - gText_Rom_30F808)
	.endif
	.globl gUnknown_830F81F
gUnknown_830F81F: @ 0x0830F81F

	@ src/berry_blender.c:284 sText_BlendingResults
	.globl gText_Rom_30F81F
gText_Rom_30F81F: @ 0x0830F81F
	.string "まぜたけっか$"
	.if (. - gText_Rom_30F81F) > 0x7
	.error "gText_Rom_30F81F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F81F) < 0x7
	.space 0x7 - (. - gText_Rom_30F81F)
	.endif
	@ Decoded text from ROM range: offset=0x30F826, size=0x7
	.string "いれた　たね$"
	.globl gUnknown_830F82D
gUnknown_830F82D: @ 0x0830F82D

	@ asm/berry_blender.s:7852 Blender_PrintBlendingResults
	.globl gText_Rom_30F82D
gText_Rom_30F82D: @ 0x0830F82D
	.string "のみ$"
	.if (. - gText_Rom_30F82D) > 0x3
	.error "gText_Rom_30F82D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F82D) < 0x3
	.space 0x3 - (. - gText_Rom_30F82D)
	.endif
