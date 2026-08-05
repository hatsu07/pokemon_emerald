	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA073
gText_Rom_5CA073: @ 0x085CA073
	.string "どのポケモンに　もたせますか？$"
	.if (. - gText_Rom_5CA073) > 0x10
	.error "gText_Rom_5CA073 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA073) < 0x10
	.space 0x10 - (. - gText_Rom_5CA073)
	.endif
