	@ src/data/party_menu.h:800 party_menu_line_800 (+2 aliases)
	.globl gText_Rom_5C93B0
gText_Rom_5C93B0: @ 0x085C93B0
	.string "もたせる{EOS}"
	.if (. - gText_Rom_5C93B0) > 0x5
	.error "gText_Rom_5C93B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93B0) < 0x5
	.space 0x5 - (. - gText_Rom_5C93B0)
	.endif

