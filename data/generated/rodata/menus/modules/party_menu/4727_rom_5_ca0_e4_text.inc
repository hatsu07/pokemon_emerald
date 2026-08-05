	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA0E4
gText_Rom_5CA0E4: @ 0x085CA0E4
	.string "これでは　たたかえません！$"
	.if (. - gText_Rom_5CA0E4) > 0xe
	.error "gText_Rom_5CA0E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0E4) < 0xe
	.space 0xe - (. - gText_Rom_5CA0E4)
	.endif
