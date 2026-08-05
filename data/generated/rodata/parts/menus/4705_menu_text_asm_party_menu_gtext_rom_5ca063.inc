	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA063
gText_Rom_5CA063: @ 0x085CA063
	.string "どのポケモンに　つかいますか？$"
	.if (. - gText_Rom_5CA063) > 0x10
	.error "gText_Rom_5CA063 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA063) < 0x10
	.space 0x10 - (. - gText_Rom_5CA063)
	.endif
