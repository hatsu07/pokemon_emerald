	@ src/pokemon_summary_screen.c:3875 sTextNatureNeutral
	.globl gText_Rom_2BFEB4
gText_Rom_2BFEB4: @ 0x082BFEB4
	.string "{COLOR}{01}$"
	.if (. - gText_Rom_2BFEB4) > 0x4
	.error "gText_Rom_2BFEB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2BFEB4) < 0x4
	.space 0x4 - (. - gText_Rom_2BFEB4)
	.endif
	.globl gUnknown_82BFEB8
gUnknown_82BFEB8: @ 0x082BFEB8
	.incbin "baserom.gba", 0x2bfeb8, 0x40
	.globl gUnknown_82BFEF8
gUnknown_82BFEF8: @ 0x082BFEF8
	.incbin "baserom.gba", 0x2bfef8, 0x28
	.globl gUnknown_82BFF20
gUnknown_82BFF20: @ 0x082BFF20
	.incbin "baserom.gba", 0x2bff20, 0x4
	.globl gUnknown_82BFF24
gUnknown_82BFF24: @ 0x082BFF24
	.incbin "baserom.gba", 0x2bff24, 0x10
	.globl gUnknown_82BFF34
gUnknown_82BFF34: @ 0x082BFF34
	.incbin "baserom.gba", 0x2bff34, 0x18
	.globl gUnknown_82BFF4C
gUnknown_82BFF4C: @ 0x082BFF4C
	.incbin "baserom.gba", 0x2bff4c, 0x8
	.globl gUnknown_82BFF54
gUnknown_82BFF54: @ 0x082BFF54
	.incbin "baserom.gba", 0x2bff54, 0x20
	.globl gUnknown_82BFF74
gUnknown_82BFF74: @ 0x082BFF74
	.incbin "baserom.gba", 0x2bff74, 0x14c
	.globl gUnknown_82C00C0
gUnknown_82C00C0: @ 0x082C00C0
	.incbin "baserom.gba", 0x2c00c0, 0x100
	.globl gUnknown_82C01C0
gUnknown_82C01C0: @ 0x082C01C0
	.incbin "baserom.gba", 0x2c01c0, 0x100
	.globl gUnknown_82C02C0
gUnknown_82C02C0: @ 0x082C02C0
	.incbin "baserom.gba", 0x2c02c0, 0x70
	.globl gUnknown_82C0330
gUnknown_82C0330: @ 0x082C0330
	.incbin "baserom.gba", 0x2c0330, 0x8
	.globl gUnknown_82C0338
gUnknown_82C0338: @ 0x082C0338
	.incbin "baserom.gba", 0x2c0338, 0x8
	.globl gUnknown_82C0340
gUnknown_82C0340: @ 0x082C0340
	.incbin "baserom.gba", 0x2c0340, 0x18
	.globl gUnknown_82C0358
gUnknown_82C0358: @ 0x082C0358
	.incbin "baserom.gba", 0x2c0358, 0x18
	.globl gUnknown_82C0370
gUnknown_82C0370: @ 0x082C0370
	.incbin "baserom.gba", 0x2c0370, 0x8
	.globl gUnknown_82C0378
gUnknown_82C0378: @ 0x082C0378
	.incbin "baserom.gba", 0x2c0378, 0x64
	.globl gUnknown_82C03DC
gUnknown_82C03DC: @ 0x082C03DC
	.incbin "baserom.gba", 0x2c03dc, 0x9
	.globl gUnknown_82C03E5
gUnknown_82C03E5: @ 0x082C03E5
	.incbin "baserom.gba", 0x2c03e5, 0x10
	.globl gUnknown_82C03F5
gUnknown_82C03F5: @ 0x082C03F5
	.incbin "baserom.gba", 0x2c03f5, 0x13
	.globl gUnknown_82C0408
gUnknown_82C0408: @ 0x082C0408
	.incbin "baserom.gba", 0x2c0408, 0x28
	.globl gUnknown_82C0430
gUnknown_82C0430: @ 0x082C0430
	.incbin "baserom.gba", 0x2c0430, 0x100
	.globl gUnknown_82C0530
gUnknown_82C0530: @ 0x082C0530
	.incbin "baserom.gba", 0x2c0530, 0xc
	.globl gUnknown_82C053C
gUnknown_82C053C: @ 0x082C053C
	.incbin "baserom.gba", 0x2c053c, 0x8
	.globl gUnknown_82C0544
gUnknown_82C0544: @ 0x082C0544
	.incbin "baserom.gba", 0x2c0544, 0x14
	.globl gUnknown_82C0558
gUnknown_82C0558: @ 0x082C0558
	.incbin "baserom.gba", 0x2c0558, 0xc
	.globl gUnknown_82C0564
gUnknown_82C0564: @ 0x082C0564
	.incbin "baserom.gba", 0x2c0564, 0x14
	.globl gUnknown_82C0578
gUnknown_82C0578: @ 0x082C0578
	.incbin "baserom.gba", 0x2c0578, 0x18
	.globl gUnknown_82C0590
gUnknown_82C0590: @ 0x082C0590
	.incbin "baserom.gba", 0x2c0590, 0x18
	.globl gUnknown_82C05A8
gUnknown_82C05A8: @ 0x082C05A8
	.incbin "baserom.gba", 0x2c05a8, 0x1f
	.globl gUnknown_82C05C7
gUnknown_82C05C7: @ 0x082C05C7
	.incbin "baserom.gba", 0x2c05c7, 0x10
	.globl gUnknown_82C05D7
gUnknown_82C05D7: @ 0x082C05D7
	.incbin "baserom.gba", 0x2c05d7, 0xd
	.globl gUnknown_82C05E4
gUnknown_82C05E4: @ 0x082C05E4
	.incbin "baserom.gba", 0x2c05e4, 0x60
	.globl gUnknown_82C0644
gUnknown_82C0644: @ 0x082C0644

	@ asm/union_room.s:9786 sub_0801727C
	.globl gText_Rom_2C0644
gText_Rom_2C0644: @ 0x082C0644
	.string ":$"
	.if (. - gText_Rom_2C0644) > 0x2
	.error "gText_Rom_2C0644 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0644) < 0x2
	.space 0x2 - (. - gText_Rom_2C0644)
	.endif
	.incbin "baserom.gba", 0x2c0646, 0x2
	.globl gUnknown_82C0648
gUnknown_82C0648: @ 0x082C0648
	.incbin "baserom.gba", 0x2c0648, 0x4
	.globl gUnknown_82C064C
gUnknown_82C064C: @ 0x082C064C

	@ asm/union_room.s:5239 sub_08014A50
	.globl gText_Rom_2C064C
gText_Rom_2C064C: @ 0x082C064C
	.string "もういちど　さいしょから\nてつづきを　やりなおして　ください$"
	.if (. - gText_Rom_2C064C) > 0x1f
	.error "gText_Rom_2C064C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C064C) < 0x1f
	.space 0x1f - (. - gText_Rom_2C064C)
	.endif
	.incbin "baserom.gba", 0x2c066b, 0x1
	.globl gUnknown_82C066C
gUnknown_82C066C: @ 0x082C066C
	.incbin "baserom.gba", 0x2c066c, 0x30
	.globl gUnknown_82C069C
gUnknown_82C069C: @ 0x082C069C

	@ asm/union_room.s:233 sub_08012134
	.globl gText_Rom_2C069C
gText_Rom_2C069C: @ 0x082C069C
	.string "{0xFD}{0x02}！\nともだちからの　れんらくを　まっています$"
	.if (. - gText_Rom_2C069C) > 0x19
	.error "gText_Rom_2C069C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C069C) < 0x19
	.space 0x19 - (. - gText_Rom_2C069C)
	.endif
	.incbin "baserom.gba", 0x2c06b5, 0x3
	.globl gUnknown_82C06B8
gUnknown_82C06B8: @ 0x082C06B8

	@ asm/union_room.s:574 sub_08012288
	.globl gText_Rom_2C06B8
gText_Rom_2C06B8: @ 0x082C06B8
	.string "{0xFD}{0x02}！　れんらくまち！\nにんずうが　そろったら　STARTボタン$"
	.if (. - gText_Rom_2C06B8) > 0x21
	.error "gText_Rom_2C06B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06B8) < 0x21
	.space 0x21 - (. - gText_Rom_2C06B8)
	.endif
	.incbin "baserom.gba", 0x2c06d9, 0x3

	@ src/data/union_room.h:9 sJPText_SingleBattle
	.globl gText_Rom_2C06DC
gText_Rom_2C06DC: @ 0x082C06DC
	.string "シングルバトルを かいさいする$"
	.if (. - gText_Rom_2C06DC) > 0x10
	.error "gText_Rom_2C06DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06DC) < 0x10
	.space 0x10 - (. - gText_Rom_2C06DC)
	.endif

	@ src/data/union_room.h:10 sJPText_DoubleBattle
	.globl gText_Rom_2C06EC
gText_Rom_2C06EC: @ 0x082C06EC
	.string "ダブルバトルを かいさいする$"
	.if (. - gText_Rom_2C06EC) > 0xf
	.error "gText_Rom_2C06EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06EC) < 0xf
	.space 0xf - (. - gText_Rom_2C06EC)
	.endif
	.incbin "baserom.gba", 0x2c06fb, 0x1

	@ src/data/union_room.h:11 sJPText_MultiBattle
	.globl gText_Rom_2C06FC
gText_Rom_2C06FC: @ 0x082C06FC
	.string "マルチバトルを かいさいする$"
	.if (. - gText_Rom_2C06FC) > 0xf
	.error "gText_Rom_2C06FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06FC) < 0xf
	.space 0xf - (. - gText_Rom_2C06FC)
	.endif
	.incbin "baserom.gba", 0x2c070b, 0x1

	@ src/data/union_room.h:12 sJPText_TradePokemon
	.globl gText_Rom_2C070C
gText_Rom_2C070C: @ 0x082C070C
	.string "ポケモンこうかんを かいさいする$"
	.if (. - gText_Rom_2C070C) > 0x11
	.error "gText_Rom_2C070C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C070C) < 0x11
	.space 0x11 - (. - gText_Rom_2C070C)
	.endif
	.incbin "baserom.gba", 0x2c071d, 0x3

	@ src/data/union_room.h:13 sJPText_Chat
	.globl gText_Rom_2C0720
gText_Rom_2C0720: @ 0x082C0720
	.string "チャットを かいさいする$"
	.if (. - gText_Rom_2C0720) > 0xd
	.error "gText_Rom_2C0720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0720) < 0xd
	.space 0xd - (. - gText_Rom_2C0720)
	.endif
	.incbin "baserom.gba", 0x2c072d, 0x3

	@ src/data/union_room.h:14 sJPText_DistWonderCard
	.globl gText_Rom_2C0730
gText_Rom_2C0730: @ 0x082C0730
	.string "ふしぎなカードをくばる$"
	.if (. - gText_Rom_2C0730) > 0xc
	.error "gText_Rom_2C0730 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0730) < 0xc
	.space 0xc - (. - gText_Rom_2C0730)
	.endif

	@ src/data/union_room.h:15 sJPText_DistWonderNews
	.globl gText_Rom_2C073C
gText_Rom_2C073C: @ 0x082C073C
	.string "ふしぎなニュースをくばる$"
	.if (. - gText_Rom_2C073C) > 0xd
	.error "gText_Rom_2C073C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C073C) < 0xd
	.space 0xd - (. - gText_Rom_2C073C)
	.endif
	.incbin "baserom.gba", 0x2c0749, 0x3

	@ src/data/union_room.h:16 sJPText_DistMysteryEvent
	.globl gText_Rom_2C074C
gText_Rom_2C074C: @ 0x082C074C
	.string "ふしぎなできごとを かいさいする$"
	.if (. - gText_Rom_2C074C) > 0x11
	.error "gText_Rom_2C074C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C074C) < 0x11
	.space 0x11 - (. - gText_Rom_2C074C)
	.endif
	.incbin "baserom.gba", 0x2c075d, 0x3

	@ src/data/union_room.h:17 sJPText_HoldPokemonJump
	.globl gText_Rom_2C0760
gText_Rom_2C0760: @ 0x082C0760
	.string "なわとびを かいさいする$"
	.if (. - gText_Rom_2C0760) > 0xd
	.error "gText_Rom_2C0760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0760) < 0xd
	.space 0xd - (. - gText_Rom_2C0760)
	.endif
	.incbin "baserom.gba", 0x2c076d, 0x3

	@ src/data/union_room.h:18 sJPText_HoldBerryCrush
	.globl gText_Rom_2C0770
gText_Rom_2C0770: @ 0x082C0770
	.string "きのみマッシャーを かいさいする$"
	.if (. - gText_Rom_2C0770) > 0x11
	.error "gText_Rom_2C0770 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0770) < 0x11
	.space 0x11 - (. - gText_Rom_2C0770)
	.endif
	.incbin "baserom.gba", 0x2c0781, 0x3

	@ src/data/union_room.h:19 sJPText_HoldBerryPicking
	.globl gText_Rom_2C0784
gText_Rom_2C0784: @ 0x082C0784
	.string "きのみどりを かいさいする$"
	.if (. - gText_Rom_2C0784) > 0xe
	.error "gText_Rom_2C0784 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0784) < 0xe
	.space 0xe - (. - gText_Rom_2C0784)
	.endif
	.incbin "baserom.gba", 0x2c0792, 0x2

	@ src/data/union_room.h:20 sJPText_HoldSpinTrade
	.globl gText_Rom_2C0794
gText_Rom_2C0794: @ 0x082C0794
	.string "ぐるぐるこうかんを かいさいする$"
	.if (. - gText_Rom_2C0794) > 0x11
	.error "gText_Rom_2C0794 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0794) < 0x11
	.space 0x11 - (. - gText_Rom_2C0794)
	.endif
	.incbin "baserom.gba", 0x2c07a5, 0x3

	@ src/data/union_room.h:21 sJPText_HoldSpinShop
	.globl gText_Rom_2C07A8
gText_Rom_2C07A8: @ 0x082C07A8
	.string "ぐるぐるショップを かいさいする$"
	.if (. - gText_Rom_2C07A8) > 0x11
	.error "gText_Rom_2C07A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C07A8) < 0x11
	.space 0x11 - (. - gText_Rom_2C07A8)
	.endif
	.incbin "baserom.gba", 0x2c07b9, 0x87
	.globl gUnknown_82C0840
gUnknown_82C0840: @ 0x082C0840
	.incbin "baserom.gba", 0x2c0840, 0x64
	.globl gUnknown_82C08A4
gUnknown_82C08A4: @ 0x082C08A4

	@ src/data/union_room.h:88 sText_BButtonCancel (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C08A4
gText_Rom_2C08A4: @ 0x082C08A4
	.string "{B_BUTTON}やめる$"
	.if (. - gText_Rom_2C08A4) != 0x6
	.error "gText_Rom_2C08A4 must retain its original byte length"
	.endif
	.globl gText_Rom_2C08A6
	.set gText_Rom_2C08A6, gText_Rom_2C08A4 + 0x2
	.incbin "baserom.gba", 0x2c08aa, 0x1a
	.globl gUnknown_82C08C4
gUnknown_82C08C4: @ 0x082C08C4
	.incbin "baserom.gba", 0x2c08c4, 0x18
	.globl gUnknown_82C08DC
gUnknown_82C08DC: @ 0x082C08DC
	.incbin "baserom.gba", 0x2c08dc, 0x1c
	.globl gUnknown_82C08F8
gUnknown_82C08F8: @ 0x082C08F8

	@ asm/union_room.s:1352 sub_08012AC4
	.globl gText_Rom_2C08F8
gText_Rom_2C08F8: @ 0x082C08F8
	.string "{0xFD}{0x03}から　れんらくあり！\nメンバーに　しますか？$"
	.if (. - gText_Rom_2C08F8) > 0x19
	.error "gText_Rom_2C08F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C08F8) < 0x19
	.space 0x19 - (. - gText_Rom_2C08F8)
	.endif
	.incbin "baserom.gba", 0x2c0911, 0x3
	.globl gUnknown_82C0914
gUnknown_82C0914: @ 0x082C0914
	.incbin "baserom.gba", 0x2c0914, 0x18
	.globl gUnknown_82C092C
gUnknown_82C092C: @ 0x082C092C
	.incbin "baserom.gba", 0x2c092c, 0x1c
	.globl gUnknown_82C0948
gUnknown_82C0948: @ 0x082C0948

	@ asm/union_room.s:931 sub_08012288
	.globl gText_Rom_2C0948
gText_Rom_2C0948: @ 0x082C0948
	.string "{0xFD}{0x02}に　OKの\nへんじを　だしました$"
	.if (. - gText_Rom_2C0948) > 0x13
	.error "gText_Rom_2C0948 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0948) < 0x13
	.space 0x13 - (. - gText_Rom_2C0948)
	.endif
	.incbin "baserom.gba", 0x2c095b, 0x45
	.globl gUnknown_82C09A0
gUnknown_82C09A0: @ 0x082C09A0
	.incbin "baserom.gba", 0x2c09a0, 0x8
	.globl gUnknown_82C09A8
gUnknown_82C09A8: @ 0x082C09A8
	.incbin "baserom.gba", 0x2c09a8, 0x38
	.globl gUnknown_82C09E0
gUnknown_82C09E0: @ 0x082C09E0
	.incbin "baserom.gba", 0x2c09e0, 0x18
	.globl gUnknown_82C09F8
gUnknown_82C09F8: @ 0x082C09F8

	@ asm/union_room.s:1506 sub_08012C60
	.globl gText_Rom_2C09F8
gText_Rom_2C09F8: @ 0x082C09F8
	.string "{0xFD}{0x02}から　OKとの\nへんじが　ありました！$"
	.if (. - gText_Rom_2C09F8) > 0x16
	.error "gText_Rom_2C09F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C09F8) < 0x16
	.space 0x16 - (. - gText_Rom_2C09F8)
	.endif
	.incbin "baserom.gba", 0x2c0a0e, 0x2
	.globl gUnknown_82C0A10
gUnknown_82C0A10: @ 0x082C0A10

	@ asm/union_room.s:1513 sub_08012C60
	.globl gText_Rom_2C0A10
gText_Rom_2C0A10: @ 0x082C0A10
	.string "{0xFD}{0x02}から　メンバー　とうろく\nOKとの　れんらくが　きました！$"
	.if (. - gText_Rom_2C0A10) > 0x20
	.error "gText_Rom_2C0A10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0A10) < 0x20
	.space 0x20 - (. - gText_Rom_2C0A10)
	.endif
	.incbin "baserom.gba", 0x2c0a30, 0x1c
	.globl gUnknown_82C0A4C
gUnknown_82C0A4C: @ 0x082C0A4C

	@ asm/union_room.s:2354 sub_08012FEC
	.globl gText_Rom_2C0A4C
gText_Rom_2C0A4C: @ 0x082C0A4C
	.string "{0xFD}{0x02}！\nほかの　メンバーを　まっています！$"
	.if (. - gText_Rom_2C0A4C) > 0x16
	.error "gText_Rom_2C0A4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0A4C) < 0x16
	.space 0x16 - (. - gText_Rom_2C0A4C)
	.endif
	.incbin "baserom.gba", 0x2c0a62, 0x2
	.globl gUnknown_82C0A64
gUnknown_82C0A64: @ 0x082C0A64
	.incbin "baserom.gba", 0x2c0a64, 0x20
	.globl gUnknown_82C0A84
gUnknown_82C0A84: @ 0x082C0A84
	.incbin "baserom.gba", 0x2c0a84, 0x28
	.globl gUnknown_82C0AAC
gUnknown_82C0AAC: @ 0x082C0AAC

	@ asm/union_room.s:5578 sub_08014DFC
	.globl gText_Rom_2C0AAC
gText_Rom_2C0AAC: @ 0x082C0AAC
	.string "ジョイスポットとの　せつぞくに\nせいこう　しました！$"
	.if (. - gText_Rom_2C0AAC) > 0x1b
	.error "gText_Rom_2C0AAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0AAC) < 0x1b
	.space 0x1b - (. - gText_Rom_2C0AAC)
	.endif
	.incbin "baserom.gba", 0x2c0ac7, 0x1
	.globl gUnknown_82C0AC8
gUnknown_82C0AC8: @ 0x082C0AC8
	.incbin "baserom.gba", 0x2c0ac8, 0x1c
	.globl gUnknown_82C0AE4
gUnknown_82C0AE4: @ 0x082C0AE4
	.incbin "baserom.gba", 0x2c0ae4, 0x38
	.globl gUnknown_82C0B1C
gUnknown_82C0B1C: @ 0x082C0B1C
	.incbin "baserom.gba", 0x2c0b1c, 0x53

	@ data/text/cable_club.inc:142 CableClub_Text_PleaseWait
	.globl gText_Rom_2C0B6F
gText_Rom_2C0B6F: @ 0x082C0B6F
	.string "しょうしょう おまちください$"
	.if (. - gText_Rom_2C0B6F) > 0xf
	.error "gText_Rom_2C0B6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0B6F) < 0xf
	.space 0xf - (. - gText_Rom_2C0B6F)
	.endif
	.incbin "baserom.gba", 0x2c0b7e, 0x2
	.globl gUnknown_82C0B80
gUnknown_82C0B80: @ 0x082C0B80
	.incbin "baserom.gba", 0x2c0b80, 0x158
	.globl gUnknown_82C0CD8
gUnknown_82C0CD8: @ 0x082C0CD8
	.incbin "baserom.gba", 0x2c0cd8, 0x64
	.globl gUnknown_82C0D3C
gUnknown_82C0D3C: @ 0x082C0D3C
	.incbin "baserom.gba", 0x2c0d3c, 0x7c
	.globl gUnknown_82C0DB8
gUnknown_82C0DB8: @ 0x082C0DB8
	.incbin "baserom.gba", 0x2c0db8, 0x2c
	.globl gUnknown_82C0DE4
gUnknown_82C0DE4: @ 0x082C0DE4
	.incbin "baserom.gba", 0x2c0de4, 0x8
	.globl gUnknown_82C0DEC
gUnknown_82C0DEC: @ 0x082C0DEC
	.incbin "baserom.gba", 0x2c0dec, 0x30
	.globl gUnknown_82C0E1C
gUnknown_82C0E1C: @ 0x082C0E1C
	.incbin "baserom.gba", 0x2c0e1c, 0x24
	.globl gUnknown_82C0E40
gUnknown_82C0E40: @ 0x082C0E40
	.incbin "baserom.gba", 0x2c0e40, 0x28
	.globl gUnknown_82C0E68
gUnknown_82C0E68: @ 0x082C0E68
	.incbin "baserom.gba", 0x2c0e68, 0x40
	.globl gUnknown_82C0EA8
gUnknown_82C0EA8: @ 0x082C0EA8

	@ asm/union_room.s:10767 sub_08017960
	.globl gText_Rom_2C0EA8
gText_Rom_2C0EA8: @ 0x082C0EA8
	.string "とうろく　していた　タマゴの\nこうかん　もうしこみが　きています\lこうかん　しますか？$"
	.if (. - gText_Rom_2C0EA8) > 0x2c
	.error "gText_Rom_2C0EA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0EA8) < 0x2c
	.space 0x2c - (. - gText_Rom_2C0EA8)
	.endif
	.globl gUnknown_82C0ED4
gUnknown_82C0ED4: @ 0x082C0ED4

	@ asm/union_room.s:10805 sub_08017960
	.globl gText_Rom_2C0ED4
gText_Rom_2C0ED4: @ 0x082C0ED4
	.string "かいわが　きれました\p$"
	.if (. - gText_Rom_2C0ED4) > 0xc
	.error "gText_Rom_2C0ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0ED4) < 0xc
	.space 0xc - (. - gText_Rom_2C0ED4)
	.endif
	.globl gUnknown_82C0EE0
gUnknown_82C0EE0: @ 0x082C0EE0

	@ asm/union_room.s:1382 sub_08012B78
	.globl gText_Rom_2C0EE0
gText_Rom_2C0EE0: @ 0x082C0EE0
	.string "もうしこみを\nことわり　ました\p$"
	.if (. - gText_Rom_2C0EE0) > 0x11
	.error "gText_Rom_2C0EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0EE0) < 0x11
	.space 0x11 - (. - gText_Rom_2C0EE0)
	.endif
	.incbin "baserom.gba", 0x2c0ef1, 0x3
	.globl gUnknown_82C0EF4
gUnknown_82C0EF4: @ 0x082C0EF4

	@ asm/union_room.s:1388 sub_08012B78
	.globl gText_Rom_2C0EF4
gText_Rom_2C0EF4: @ 0x082C0EF4
	.string "おさそいを\nことわり　ました\p$"
	.if (. - gText_Rom_2C0EF4) > 0x10
	.error "gText_Rom_2C0EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0EF4) < 0x10
	.space 0x10 - (. - gText_Rom_2C0EF4)
	.endif
	.globl gUnknown_82C0F04
gUnknown_82C0F04: @ 0x082C0F04

	@ asm/union_room.s:6950 sub_080151E8
	.globl gText_Rom_2C0F04
gText_Rom_2C0F04: @ 0x082C0F04
	.string "かいわを　きりました\p$"
	.if (. - gText_Rom_2C0F04) > 0xc
	.error "gText_Rom_2C0F04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F04) < 0xc
	.space 0xc - (. - gText_Rom_2C0F04)
	.endif
	.incbin "baserom.gba", 0x2c0f10, 0x10

	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0F20
gText_Rom_2C0F20: @ 0x082C0F20
	.string "お！　いま　おれたち\nチャットちゅう　なんだ！\lよかったら　いっしょに　はいるかい？$"
	.if (. - gText_Rom_2C0F20) > 0x2b
	.error "gText_Rom_2C0F20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F20) < 0x2b
	.space 0x2b - (. - gText_Rom_2C0F20)
	.endif
	.incbin "baserom.gba", 0x2c0f4b, 0x1

	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0F4C
gText_Rom_2C0F4C: @ 0x082C0F4C
	.string "{0xFD}{0x02}「お！　{0xFD}{0x01}\nいま　チャットちゅう　なんだ！\lよかったら　いっしょに　はいるかい？$"
	.if (. - gText_Rom_2C0F4C) > 0x2c
	.error "gText_Rom_2C0F4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F4C) < 0x2c
	.space 0x2c - (. - gText_Rom_2C0F4C)
	.endif

	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0F78
gText_Rom_2C0F78: @ 0x082C0F78
	.string "あ！　いまね　わたしたち\nチャット　してるんだ\lよかったら　いっしょに　しない？$"
	.if (. - gText_Rom_2C0F78) > 0x29
	.error "gText_Rom_2C0F78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F78) < 0x29
	.space 0x29 - (. - gText_Rom_2C0F78)
	.endif
	.incbin "baserom.gba", 0x2c0fa1, 0x3

	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0FA4
gText_Rom_2C0FA4: @ 0x082C0FA4
	.string "{0xFD}{0x02}「あ！　{0xFD}{0x01}\nいまね　チャット　してるんだ\lよかったら　いっしょに　しない？$"
	.if (. - gText_Rom_2C0FA4) > 0x29
	.error "gText_Rom_2C0FA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0FA4) < 0x29
	.space 0x29 - (. - gText_Rom_2C0FA4)
	.endif
	.incbin "baserom.gba", 0x2c0fcd, 0x3
	.globl gUnknown_82C0FD0
gUnknown_82C0FD0: @ 0x082C0FD0
	.incbin "baserom.gba", 0x2c0fd0, 0x10
	.globl gUnknown_82C0FE0
gUnknown_82C0FE0: @ 0x082C0FE0

	@ asm/union_room.s:10185 sub_08017484
	.globl gText_Rom_2C0FE0
gText_Rom_2C0FE0: @ 0x082C0FE0
	.string "……\nいまは　とりこみちゅうの　ようだ\p$"
	.if (. - gText_Rom_2C0FE0) > 0x15
	.error "gText_Rom_2C0FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0FE0) < 0x15
	.space 0x15 - (. - gText_Rom_2C0FE0)
	.endif
	.incbin "baserom.gba", 0x2c0ff5, 0xaf
	.globl gUnknown_82C10A4
gUnknown_82C10A4: @ 0x082C10A4
	.incbin "baserom.gba", 0x2c10a4, 0xe4
	.globl gUnknown_82C1188
gUnknown_82C1188: @ 0x082C1188
	.incbin "baserom.gba", 0x2c1188, 0x9c
	.globl gUnknown_82C1224
gUnknown_82C1224: @ 0x082C1224
	.incbin "baserom.gba", 0x2c1224, 0x58
	.globl gUnknown_82C127C
gUnknown_82C127C: @ 0x082C127C
	.incbin "baserom.gba", 0x2c127c, 0x40
	.globl gUnknown_82C12BC
gUnknown_82C12BC: @ 0x082C12BC
	.incbin "baserom.gba", 0x2c12bc, 0x8
	.globl gUnknown_82C12C4
gUnknown_82C12C4: @ 0x082C12C4

	@ asm/union_room.s:6451 sub_080151E8
	.globl gText_Rom_2C12C4
gText_Rom_2C12C4: @ 0x082C12C4
	.string "あ！　ごめん\nほかに　ようじが　あるから\lまたこんどね\p$"
	.if (. - gText_Rom_2C12C4) > 0x1d
	.error "gText_Rom_2C12C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C12C4) < 0x1d
	.space 0x1d - (. - gText_Rom_2C12C4)
	.endif
	.incbin "baserom.gba", 0x2c12e1, 0x3
	.globl gUnknown_82C12E4
gUnknown_82C12E4: @ 0x082C12E4
	.incbin "baserom.gba", 0x2c12e4, 0x2c
	.globl gUnknown_82C1310
gUnknown_82C1310: @ 0x082C1310

	@ asm/union_room.s:7041 sub_080151E8
	.globl gText_Rom_2C1310
gText_Rom_2C1310: @ 0x082C1310
	.string "たいせんを　するためには\nレベル30　よりひくい　ポケモンが\l2ひき　ひつようです\p$"
	.if (. - gText_Rom_2C1310) > 0x2b
	.error "gText_Rom_2C1310 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1310) < 0x2b
	.space 0x2b - (. - gText_Rom_2C1310)
	.endif
	.incbin "baserom.gba", 0x2c133b, 0x29
	.globl gUnknown_82C1364
gUnknown_82C1364: @ 0x082C1364
	.incbin "baserom.gba", 0x2c1364, 0x60
	.globl gUnknown_82C13C4
gUnknown_82C13C4: @ 0x082C13C4
	.incbin "baserom.gba", 0x2c13c4, 0xd4
	.globl gUnknown_82C1498
gUnknown_82C1498: @ 0x082C1498
	.incbin "baserom.gba", 0x2c1498, 0xcc
	.globl gUnknown_82C1564
gUnknown_82C1564: @ 0x082C1564
	.incbin "baserom.gba", 0x2c1564, 0x84
	.globl gUnknown_82C15E8
gUnknown_82C15E8: @ 0x082C15E8
	.incbin "baserom.gba", 0x2c15e8, 0x80
	.globl gUnknown_82C1668
gUnknown_82C1668: @ 0x082C1668
	.incbin "baserom.gba", 0x2c1668, 0x20
	.globl gUnknown_82C1688
gUnknown_82C1688: @ 0x082C1688
	.incbin "baserom.gba", 0x2c1688, 0x14
	.globl gUnknown_82C169C
gUnknown_82C169C: @ 0x082C169C
	.incbin "baserom.gba", 0x2c169c, 0x44
	.globl gUnknown_82C16E0
gUnknown_82C16E0: @ 0x082C16E0
	.incbin "baserom.gba", 0x2c16e0, 0xec
	.globl gUnknown_82C17CC
gUnknown_82C17CC: @ 0x082C17CC
	.incbin "baserom.gba", 0x2c17cc, 0x1c
	.globl gUnknown_82C17E8
gUnknown_82C17E8: @ 0x082C17E8
	.incbin "baserom.gba", 0x2c17e8, 0x20
	.globl gUnknown_82C1808
gUnknown_82C1808: @ 0x082C1808
	.incbin "baserom.gba", 0x2c1808, 0x14
	.globl gUnknown_82C181C
gUnknown_82C181C: @ 0x082C181C
	.incbin "baserom.gba", 0x2c181c, 0x14
	.globl gUnknown_82C1830
gUnknown_82C1830: @ 0x082C1830
	.incbin "baserom.gba", 0x2c1830, 0x14
	.globl gUnknown_82C1844
gUnknown_82C1844: @ 0x082C1844

	@ asm/union_room.s:7248 sub_080151E8
	.globl gText_Rom_2C1844
gText_Rom_2C1844: @ 0x082C1844
	.string "とうろく　されている　{0xFD}{0x02}\nレベル{0xFD}{0x03}を　かいじょ　しますか？$"
	.if (. - gText_Rom_2C1844) > 0x20
	.error "gText_Rom_2C1844 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1844) < 0x20
	.space 0x20 - (. - gText_Rom_2C1844)
	.endif
	.globl gUnknown_82C1864
gUnknown_82C1864: @ 0x082C1864

	@ asm/union_room.s:7220 sub_080151E8
	.globl gText_Rom_2C1864
gText_Rom_2C1864: @ 0x082C1864
	.string "とうろく　されている　タマゴを\nかいじょ　しますか？$"
	.if (. - gText_Rom_2C1864) > 0x1b
	.error "gText_Rom_2C1864 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1864) < 0x1b
	.space 0x1b - (. - gText_Rom_2C1864)
	.endif
	.incbin "baserom.gba", 0x2c187f, 0x1
	.globl gUnknown_82C1880
gUnknown_82C1880: @ 0x082C1880
	.incbin "baserom.gba", 0x2c1880, 0x29

