	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DFC
gText_Rom_2C1DFC: @ 0x082C1DFC
	.string "かっこよさコンテスト$"
	.if (. - gText_Rom_2C1DFC) != 0xb
	.error "gText_Rom_2C1DFC must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E01
	.set gText_Rom_2C1E01, gText_Rom_2C1DFC + 0x5
	.globl gText_Rom_2C1E03
	.set gText_Rom_2C1E03, gText_Rom_2C1DFC + 0x7
	.space 0x1, 0x00

	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E08
gText_Rom_2C1E08: @ 0x082C1E08
	.string "うつくしさコンテスト$"
	.if (. - gText_Rom_2C1E08) != 0xb
	.error "gText_Rom_2C1E08 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E0D
	.set gText_Rom_2C1E0D, gText_Rom_2C1E08 + 0x5
	.globl gText_Rom_2C1E0F
	.set gText_Rom_2C1E0F, gText_Rom_2C1E08 + 0x7
	.space 0x1, 0x00

	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E14
gText_Rom_2C1E14: @ 0x082C1E14
	.string "かわいさコンテスト$"
	.if (. - gText_Rom_2C1E14) != 0xa
	.error "gText_Rom_2C1E14 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E18
	.set gText_Rom_2C1E18, gText_Rom_2C1E14 + 0x4
	.globl gText_Rom_2C1E1A
	.set gText_Rom_2C1E1A, gText_Rom_2C1E14 + 0x6
	.space 0x2, 0x00

	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E20
gText_Rom_2C1E20: @ 0x082C1E20
	.string "かしこさコンテスト$"
	.if (. - gText_Rom_2C1E20) != 0xa
	.error "gText_Rom_2C1E20 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E24
	.set gText_Rom_2C1E24, gText_Rom_2C1E20 + 0x4
	.globl gText_Rom_2C1E26
	.set gText_Rom_2C1E26, gText_Rom_2C1E20 + 0x6
	.space 0x2, 0x00

	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E2C
gText_Rom_2C1E2C: @ 0x082C1E2C
	.string "たくましさコンテスト$"
	.if (. - gText_Rom_2C1E2C) != 0xb
	.error "gText_Rom_2C1E2C must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E31
	.set gText_Rom_2C1E31, gText_Rom_2C1E2C + 0x5
	.globl gText_Rom_2C1E33
	.set gText_Rom_2C1E33, gText_Rom_2C1E2C + 0x7
	.incbin "baserom.gba", 0x2c1e37, 0x8

	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_2C1E3F
gText_Rom_2C1E3F: @ 0x082C1E3F
	.string "レベル50$"
	.if (. - gText_Rom_2C1E3F) > 0x6
	.error "gText_Rom_2C1E3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1E3F) < 0x6
	.space 0x6 - (. - gText_Rom_2C1E3F)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:565 sText_BattleTowerOpenLv
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E48
gText_Rom_2C1E48: @ 0x082C1E48
	.string "バトルタワー オープンレベル$"
	.if (. - gText_Rom_2C1E48) != 0xf
	.error "gText_Rom_2C1E48 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1E4F
	.set gText_Rom_2C1E4F, gText_Rom_2C1E48 + 0x7
	.globl gText_Rom_2C1E53
	.set gText_Rom_2C1E53, gText_Rom_2C1E48 + 0xb
	.space 0x1, 0x00
	.globl gUnknown_82C1E58
gUnknown_82C1E58: @ 0x082C1E58
	.incbin "baserom.gba", 0x2c1e58, 0x74

	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1ECC
gText_Rom_2C1ECC: @ 0x082C1ECC
	.string "ノーマルカードだ！$"
	.if (. - gText_Rom_2C1ECC) > 0xa
	.error "gText_Rom_2C1ECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1ECC) < 0xa
	.space 0xa - (. - gText_Rom_2C1ECC)
	.endif
	.space 0x2, 0x00

	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1ED8
gText_Rom_2C1ED8: @ 0x082C1ED8
	.string "ブロンズカードだ！$"
	.if (. - gText_Rom_2C1ED8) > 0xa
	.error "gText_Rom_2C1ED8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1ED8) < 0xa
	.space 0xa - (. - gText_Rom_2C1ED8)
	.endif
	.space 0x2, 0x00

	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1EE4
gText_Rom_2C1EE4: @ 0x082C1EE4
	.string "カッパーカードだ！$"
	.if (. - gText_Rom_2C1EE4) > 0xa
	.error "gText_Rom_2C1EE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1EE4) < 0xa
	.space 0xa - (. - gText_Rom_2C1EE4)
	.endif
	.space 0x2, 0x00

	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1EF0
gText_Rom_2C1EF0: @ 0x082C1EF0
	.string "シルバーカードだ！$"
	.if (. - gText_Rom_2C1EF0) > 0xa
	.error "gText_Rom_2C1EF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1EF0) < 0xa
	.space 0xa - (. - gText_Rom_2C1EF0)
	.endif
	.space 0x2, 0x00

	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1EFC
gText_Rom_2C1EFC: @ 0x082C1EFC
	.string "ゴールドカードだ！$"
	.if (. - gText_Rom_2C1EFC) > 0xa
	.error "gText_Rom_2C1EFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1EFC) < 0xa
	.space 0xa - (. - gText_Rom_2C1EFC)
	.endif
	.space 0x2, 0x00
	.globl gUnknown_82C1F08
gUnknown_82C1F08: @ 0x082C1F08
	.4byte gText_Rom_2C1ECC
	.4byte gText_Rom_2C1ED8
	.4byte gText_Rom_2C1EE4
	.4byte gText_Rom_2C1EF0
	.4byte gText_Rom_2C1EFC
	.globl gUnknown_82C1F1C
gUnknown_82C1F1C: @ 0x082C1F1C
	.incbin "baserom.gba", 0x2c1f1c, 0x38
	.globl gUnknown_82C1F54
gUnknown_82C1F54: @ 0x082C1F54
	.incbin "baserom.gba", 0x2c1f54, 0x50
	.globl gUnknown_82C1FA4
gUnknown_82C1FA4: @ 0x082C1FA4
	.incbin "baserom.gba", 0x2c1fa4, 0x8
	.globl gUnknown_82C1FAC
gUnknown_82C1FAC: @ 0x082C1FAC
	.incbin "baserom.gba", 0x2c1fac, 0x18
	.globl gUnknown_82C1FC4
gUnknown_82C1FC4: @ 0x082C1FC4
	.incbin "baserom.gba", 0x2c1fc4, 0x8
	.globl gUnknown_82C1FCC
gUnknown_82C1FCC: @ 0x082C1FCC
	.incbin "baserom.gba", 0x2c1fcc, 0x58
	.globl gUnknown_82C2024
gUnknown_82C2024: @ 0x082C2024
	.incbin "baserom.gba", 0x2c2024, 0x8
	.globl gUnknown_82C202C
gUnknown_82C202C: @ 0x082C202C
	.incbin "baserom.gba", 0x2c202c, 0x8
	.globl gUnknown_82C2034
gUnknown_82C2034: @ 0x082C2034
	.incbin "baserom.gba", 0x2c2034, 0x30
	.globl gUnknown_82C2064
gUnknown_82C2064: @ 0x082C2064
	.incbin "baserom.gba", 0x2c2064, 0x18
	.globl gUnknown_82C207C
gUnknown_82C207C: @ 0x082C207C
	.incbin "baserom.gba", 0x2c207c, 0x8
	.globl gUnknown_82C2084
gUnknown_82C2084: @ 0x082C2084
	.incbin "baserom.gba", 0x2c2084, 0x88
	.globl gUnknown_82C210C
gUnknown_82C210C: @ 0x082C210C
	.incbin "baserom.gba", 0x2c210c, 0x18
	.globl gUnknown_82C2124
gUnknown_82C2124: @ 0x082C2124
	.incbin "baserom.gba", 0x2c2124, 0x28
	.globl gUnknown_82C214C
gUnknown_82C214C: @ 0x082C214C
	.incbin "baserom.gba", 0x2c214c, 0x18
	.globl gUnknown_82C2164
gUnknown_82C2164: @ 0x082C2164
	.incbin "baserom.gba", 0x2c2164, 0x20
	.globl gUnknown_82C2184
gUnknown_82C2184: @ 0x082C2184
	.incbin "baserom.gba", 0x2c2184, 0x18
	.globl gUnknown_82C219C
gUnknown_82C219C: @ 0x082C219C
	.incbin "baserom.gba", 0x2c219c, 0x98
	.globl gUnknown_82C2234
gUnknown_82C2234: @ 0x082C2234
	.incbin "baserom.gba", 0x2c2234, 0x18
	.globl gUnknown_82C224C
gUnknown_82C224C: @ 0x082C224C
	.incbin "baserom.gba", 0x2c224c, 0x8
	.globl gUnknown_82C2254
gUnknown_82C2254: @ 0x082C2254
	.incbin "baserom.gba", 0x2c2254, 0x58
	.globl gUnknown_82C22AC
gUnknown_82C22AC: @ 0x082C22AC
	.incbin "baserom.gba", 0x2c22ac, 0xb8
	.globl gUnknown_82C2364
gUnknown_82C2364: @ 0x082C2364
	.incbin "baserom.gba", 0x2c2364, 0x7c
	.globl gUnknown_82C23E0
gUnknown_82C23E0: @ 0x082C23E0
	.incbin "baserom.gba", 0x2c23e0, 0x58
	.globl gUnknown_82C2438
gUnknown_82C2438: @ 0x082C2438
	.incbin "baserom.gba", 0x2c2438, 0x1c
	.globl gUnknown_82C2454
gUnknown_82C2454: @ 0x082C2454
	.incbin "baserom.gba", 0x2c2454, 0x20
	.globl gUnknown_82C2474
gUnknown_82C2474: @ 0x082C2474
	.incbin "baserom.gba", 0x2c2474, 0x30
	.globl gUnknown_82C24A4
gUnknown_82C24A4: @ 0x082C24A4
	.incbin "baserom.gba", 0x2c24a4, 0x10
	.globl gUnknown_82C24B4
gUnknown_82C24B4: @ 0x082C24B4
	.incbin "baserom.gba", 0x2c24b4, 0x20
	.globl gUnknown_82C24D4
gUnknown_82C24D4: @ 0x082C24D4
	.incbin "baserom.gba", 0x2c24d4, 0x8
	.globl gUnknown_82C24DC
gUnknown_82C24DC: @ 0x082C24DC
	.incbin "baserom.gba", 0x2c24dc, 0x8
	.globl gUnknown_82C24E4
gUnknown_82C24E4: @ 0x082C24E4
	.incbin "baserom.gba", 0x2c24e4, 0x8
	.globl gUnknown_82C24EC
gUnknown_82C24EC: @ 0x082C24EC
	.incbin "baserom.gba", 0x2c24ec, 0x8
	.globl gUnknown_82C24F4
gUnknown_82C24F4: @ 0x082C24F4
	.incbin "baserom.gba", 0x2c24f4, 0x8
	.globl gUnknown_82C24FC
gUnknown_82C24FC: @ 0x082C24FC
	.incbin "baserom.gba", 0x2c24fc, 0x8
	.globl gUnknown_82C2504
gUnknown_82C2504: @ 0x082C2504
	.incbin "baserom.gba", 0x2c2504, 0x8
	.globl gUnknown_82C250C
gUnknown_82C250C: @ 0x082C250C
	.incbin "baserom.gba", 0x2c250c, 0x8

	@ src/data/union_room.h:551 sText_WonderCards (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C2514
gText_Rom_2C2514: @ 0x082C2514
	.string "ふしぎなカード$"
	.if (. - gText_Rom_2C2514) != 0x8
	.error "gText_Rom_2C2514 must retain its original byte length"
	.endif
	.globl gText_Rom_2C2518
	.set gText_Rom_2C2518, gText_Rom_2C2514 + 0x4

	@ src/data/union_room.h:552 sText_WonderNews (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C251C
gText_Rom_2C251C: @ 0x082C251C
	.string "ふしぎなニュース$"
	.if (. - gText_Rom_2C251C) != 0x9
	.error "gText_Rom_2C251C must retain its original byte length"
	.endif
	.globl gText_Rom_2C2520
	.set gText_Rom_2C2520, gText_Rom_2C251C + 0x4
	.incbin "baserom.gba", 0x2c2525, 0xb

	@ src/data/easy_chat/easy_chat_group_people.h:310 easy_chat_group_people_line_310 (+2 aliases)
	.globl gText_Rom_2C2530
gText_Rom_2C2530: @ 0x082C2530
	.string "ともだち$"
	.if (. - gText_Rom_2C2530) > 0x5
	.error "gText_Rom_2C2530 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2530) < 0x5
	.space 0x5 - (. - gText_Rom_2C2530)
	.endif
	.space 0x3, 0x00

