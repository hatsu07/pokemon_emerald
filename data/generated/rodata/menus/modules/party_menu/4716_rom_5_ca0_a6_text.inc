	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA0A6
gText_Rom_5CA0A6: @ 0x085CA0A6
	.string "すでに　なみのり　しています$"
	.if (. - gText_Rom_5CA0A6) > 0xf
	.error "gText_Rom_5CA0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0A6) < 0xf
	.space 0xf - (. - gText_Rom_5CA0A6)
	.endif
