	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA0F2
gText_Rom_5CA0F2: @ 0x085CA0F2
	.string "どのポケモンを　あずけますか？$"
	.if (. - gText_Rom_5CA0F2) > 0x10
	.error "gText_Rom_5CA0F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0F2) < 0x10
	.space 0x10 - (. - gText_Rom_5CA0F2)
	.endif
