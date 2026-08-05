	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA046
gText_Rom_5CA046: @ 0x085CA046
	.string "どこに　いどうしますか？$"
	.if (. - gText_Rom_5CA046) > 0xd
	.error "gText_Rom_5CA046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA046) < 0xd
	.space 0xd - (. - gText_Rom_5CA046)
	.endif
