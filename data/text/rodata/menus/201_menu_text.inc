	@ src/data/party_menu.h:797 party_menu_line_797
	.globl gText_Rom_5C9AAF
gText_Rom_5C9AAF: @ 0x085C9AAF
	.string "ならびかえ$"
	.if (. - gText_Rom_5C9AAF) > 0x6
	.error "gText_Rom_5C9AAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AAF) < 0x6
	.space 0x6 - (. - gText_Rom_5C9AAF)
	.endif

	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_5C9AB5
gText_Rom_5C9AB5: @ 0x085C9AB5
	.string "つよさをみる$"
	.if (. - gText_Rom_5C9AB5) > 0x7
	.error "gText_Rom_5C9AB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AB5) < 0x7
	.space 0x7 - (. - gText_Rom_5C9AB5)
	.endif
	@ Replaced baserom.gba range: offset=0x5C9ABC, size=0xD
	.byte 0x12, 0x06, 0x04, 0x29, 0x2C, 0x3C, 0xFF, 0x0B, 0x2E, 0x06, 0x0D, 0x29, 0xFF

	@ src/strings.c:337 gText_Able
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9AC9
gText_Rom_5C9AC9: @ 0x085C9AC9
	.string "さんかしない$"
	.if (. - gText_Rom_5C9AC9) != 0x7
	.error "gText_Rom_5C9AC9 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9ACC
	.set gText_Rom_5C9ACC, gText_Rom_5C9AC9 + 0x3

	@ src/data/party_menu.h:804 party_menu_line_804
	.globl gText_Rom_5C9AD0
gText_Rom_5C9AD0: @ 0x085C9AD0
	.string "メールを とる$"
	.if (. - gText_Rom_5C9AD0) > 0x8
	.error "gText_Rom_5C9AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AD0) < 0x8
	.space 0x8 - (. - gText_Rom_5C9AD0)
	.endif

	@ src/data/party_menu.h:805 party_menu_line_805
	.globl gText_Rom_5C9AD8
gText_Rom_5C9AD8: @ 0x085C9AD8
	.string "メールを よむ$"
	.if (. - gText_Rom_5C9AD8) > 0x8
	.error "gText_Rom_5C9AD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AD8) < 0x8
	.space 0x8 - (. - gText_Rom_5C9AD8)
	.endif
	@ Replaced baserom.gba range: offset=0x5C9AE0, size=0x7
	.byte 0x0A, 0x03, 0x06, 0x2E, 0x0D, 0x29, 0xFF
	.globl gUnknown_85C9AE7
gUnknown_85C9AE7: @ 0x085C9AE7

