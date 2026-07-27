	@ src/data/party_menu.h:811 party_menu_line_811 (+1 aliases)
	.globl gText_Rom_2C258C
gText_Rom_2C258C: @ 0x082C258C
	.string "おくる$"
	.if (. - gText_Rom_2C258C) > 0x4
	.error "gText_Rom_2C258C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C258C) < 0x4
	.space 0x4 - (. - gText_Rom_2C258C)
	.endif

	@ src/data/party_menu.h:815 party_menu_line_815 (+2 aliases)
	.globl gText_Rom_2C2590
gText_Rom_2C2590: @ 0x082C2590
	.string "すてる$"
	.if (. - gText_Rom_2C2590) > 0x4
	.error "gText_Rom_2C2590 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2590) < 0x4
	.space 0x4 - (. - gText_Rom_2C2590)
	.endif
	.incbin "baserom.gba", 0x2c2594, 0x60
	.globl gUnknown_82C25F4
gUnknown_82C25F4: @ 0x082C25F4
	.incbin "baserom.gba", 0x2c25f4, 0x18
	.globl gUnknown_82C260C
gUnknown_82C260C: @ 0x082C260C
	.incbin "baserom.gba", 0x2c260c, 0x18
	.globl gUnknown_82C2624
gUnknown_82C2624: @ 0x082C2624
	.incbin "baserom.gba", 0x2c2624, 0x18
	.globl gUnknown_82C263C
gUnknown_82C263C: @ 0x082C263C
	.incbin "baserom.gba", 0x2c263c, 0x18

	@ src/strings.c:1050 gText_VarietyOfEventsImportedWireless
	.globl gText_Rom_2C2654
gText_Rom_2C2654: @ 0x082C2654
	.string "ワイヤレスで いろいろな できごとを\nよみこみます$"
	.if (. - gText_Rom_2C2654) > 0x1a
	.error "gText_Rom_2C2654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2654) < 0x1a
	.space 0x1a - (. - gText_Rom_2C2654)
	.endif

	@ src/strings.c:1051 gText_WonderCardsInPossession
	.globl gText_Rom_2C266E
gText_Rom_2C266E: @ 0x082C266E
	.string "  もっている ふしぎなカードを\nみることが できます$"
	.if (. - gText_Rom_2C266E) > 0x1c
	.error "gText_Rom_2C266E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C266E) < 0x1c
	.space 0x1c - (. - gText_Rom_2C266E)
	.endif

	@ src/strings.c:1052 gText_ReadNewsThatArrived
	.globl gText_Rom_2C268A
gText_Rom_2C268A: @ 0x082C268A
	.string "  おくられてきた ニュースを\nみることが できます$"
	.if (. - gText_Rom_2C268A) > 0x1b
	.error "gText_Rom_2C268A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C268A) < 0x1b
	.space 0x1b - (. - gText_Rom_2C268A)
	.endif

	@ src/strings.c:1053 gText_ReturnToTitle
	.globl gText_Rom_2C26A5
gText_Rom_2C26A5: @ 0x082C26A5
	.string "   タイトルに もどります$"
	.if (. - gText_Rom_2C26A5) > 0xf
	.error "gText_Rom_2C26A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C26A5) < 0xf
	.space 0xf - (. - gText_Rom_2C26A5)
	.endif
	.incbin "baserom.gba", 0x2c26b4, 0x10
	.globl gUnknown_82C26C4
gUnknown_82C26C4: @ 0x082C26C4

	@ src/strings.c:1054 gText_DontHaveCardNewOneInput
	.globl gText_Rom_2C26C4
gText_Rom_2C26C4: @ 0x082C26C4
	.string "ふしぎなカードを もっていないので\nあたらしく カードを よみこみます$"
	.if (. - gText_Rom_2C26C4) > 0x24
	.error "gText_Rom_2C26C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C26C4) < 0x24
	.space 0x24 - (. - gText_Rom_2C26C4)
	.endif
	.globl gUnknown_82C26E8
gUnknown_82C26E8: @ 0x082C26E8

	@ src/strings.c:1055 gText_DontHaveNewsNewOneInput
	.globl gText_Rom_2C26E8
gText_Rom_2C26E8: @ 0x082C26E8
	.string "ふしぎなニュースを もっていないので\nあたらしく ニュースを よみこみます$"
	.if (. - gText_Rom_2C26E8) > 0x26
	.error "gText_Rom_2C26E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C26E8) < 0x26
	.space 0x26 - (. - gText_Rom_2C26E8)
	.endif

	@ src/strings.c:1056 gText_WhereShouldCardBeAccessed
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C270E
gText_Rom_2C270E: @ 0x082C270E
	.string "  どちらから ふしぎなカードを\nよみこみ ますか?$"
	.if (. - gText_Rom_2C270E) != 0x1b
	.error "gText_Rom_2C270E must retain its original byte length"
	.endif
	.globl gUnknown_82C2710
	.set gUnknown_82C2710, gText_Rom_2C270E + 0x2

	@ src/strings.c:1057 gText_WhereShouldNewsBeAccessed
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2729
gText_Rom_2C2729: @ 0x082C2729
	.string "   どちらから ふしぎなニュースを\nよみこみ ますか?$"
	.if (. - gText_Rom_2C2729) != 0x1d
	.error "gText_Rom_2C2729 must retain its original byte length"
	.endif
	.globl gUnknown_82C272C
	.set gUnknown_82C272C, gText_Rom_2C2729 + 0x3
	.incbin "baserom.gba", 0x2c2746, 0x21

