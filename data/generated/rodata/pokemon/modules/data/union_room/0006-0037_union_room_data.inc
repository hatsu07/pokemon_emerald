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
	.space 0x2, 0x00
	.globl gUnknown_82C0648
gUnknown_82C0648: @ 0x082C0648
	@ Replaced baserom.gba range: offset=0x2C0648, size=0x4
	.byte 0xF9, 0x07, 0xFF, 0x00
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
	.space 0x1, 0x00
	.globl gUnknown_82C066C
gUnknown_82C066C: @ 0x082C066C
	@ Replaced baserom.gba range: offset=0x2C066C, size=0x30
	.byte 0x8D, 0x86, 0x52, 0x5D, 0x9F, 0xA0, 0x64, 0x19, 0x00, 0x09, 0x2E, 0x0B, 0x08, 0x2D, 0xFE, 0x11
	.byte 0x35, 0x03, 0x0C, 0x0C, 0x1F, 0x0C, 0x10, 0xFF, 0x14, 0x23, 0x41, 0x11, 0x06, 0x27, 0x19, 0x00
	.byte 0x2A, 0x2E, 0x27, 0x08, 0x2D, 0xFE, 0x1F, 0x50, 0x13, 0x02, 0x1F, 0x0D, 0xFF, 0x00, 0x00, 0x00
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
	.space 0x3, 0x00
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
	.space 0x3, 0x00

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
	.space 0x1, 0x00

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
	.space 0x1, 0x00

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
	.space 0x3, 0x00

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
	.space 0x3, 0x00

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
	.space 0x3, 0x00

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
	.space 0x3, 0x00

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
	.space 0x3, 0x00

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
	.space 0x3, 0x00

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
	.space 0x2, 0x00

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
	.space 0x3, 0x00

