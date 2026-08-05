	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA11F
gText_Rom_5CA11F: @ 0x085CA11F
	.string "おなじ　ポケモンが　います！$"
	.if (. - gText_Rom_5CA11F) > 0xf
	.error "gText_Rom_5CA11F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA11F) < 0xf
	.space 0xf - (. - gText_Rom_5CA11F)
	.endif
