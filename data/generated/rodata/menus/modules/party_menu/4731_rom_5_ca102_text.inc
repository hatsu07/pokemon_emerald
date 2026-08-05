	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA102
gText_Rom_5CA102: @ 0x085CA102
	.string "たいりょくが　たりません……$"
	.if (. - gText_Rom_5CA102) > 0xf
	.error "gText_Rom_5CA102 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA102) < 0xf
	.space 0xf - (. - gText_Rom_5CA102)
	.endif
