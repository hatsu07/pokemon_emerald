	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA159
gText_Rom_5CA159: @ 0x085CA159
	.string "ポケモンか　もどるを　せんたく$"
	.if (. - gText_Rom_5CA159) > 0x10
	.error "gText_Rom_5CA159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA159) < 0x10
	.space 0x10 - (. - gText_Rom_5CA159)
	.endif
