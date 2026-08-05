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
