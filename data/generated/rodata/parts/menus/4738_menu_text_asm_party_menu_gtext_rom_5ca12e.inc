	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA12E
gText_Rom_5CA12E: @ 0x085CA12E
	.string "おなじ　どうぐを　もってます$"
	.if (. - gText_Rom_5CA12E) > 0xf
	.error "gText_Rom_5CA12E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA12E) < 0xf
	.space 0xf - (. - gText_Rom_5CA12E)
	.endif
