	@ src/data/party_menu.h:815 party_menu_line_815 (+2 aliases)
	.globl gText_Rom_5C93A7
gText_Rom_5C93A7: @ 0x085C93A7
	.string "すてる{EOS}"
	.if (. - gText_Rom_5C93A7) > 0x4
	.error "gText_Rom_5C93A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93A7) < 0x4
	.space 0x4 - (. - gText_Rom_5C93A7)
	.endif
