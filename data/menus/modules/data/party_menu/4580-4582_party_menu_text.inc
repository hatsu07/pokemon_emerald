	@ src/data/party_menu.h:797 party_menu_line_797
	.globl gText_Rom_5C9AAF
gText_Rom_5C9AAF: @ 0x085C9AAF
	.string "ならびかえ{EOS}"
	.if (. - gText_Rom_5C9AAF) > 0x6
	.error "gText_Rom_5C9AAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AAF) < 0x6
	.space 0x6 - (. - gText_Rom_5C9AAF)
	.endif

	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_5C9AB5
gText_Rom_5C9AB5: @ 0x085C9AB5
	.string "つよさをみる{EOS}"
	.if (. - gText_Rom_5C9AB5) > 0x7
	.error "gText_Rom_5C9AB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AB5) < 0x7
	.space 0x7 - (. - gText_Rom_5C9AB5)
	.endif
	@ Decoded text from ROM range: offset=0x5C9ABC, size=0xD
	.string "つかえるわざ{EOS}"
	.string "さんかする{EOS}"
