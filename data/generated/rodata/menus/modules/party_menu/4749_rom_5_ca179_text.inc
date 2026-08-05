	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA179
gText_Rom_5CA179: @ 0x085CA179
	.string "サイクリングを　たのしもう！$"
	.if (. - gText_Rom_5CA179) > 0xf
	.error "gText_Rom_5CA179 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA179) < 0xf
	.space 0xf - (. - gText_Rom_5CA179)
	.endif
