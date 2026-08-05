	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA08D
gText_Rom_5CA08D: @ 0x085CA08D
	.string "きれるものが　ありません！$"
	.if (. - gText_Rom_5CA08D) > 0xe
	.error "gText_Rom_5CA08D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA08D) < 0xe
	.space 0xe - (. - gText_Rom_5CA08D)
	.endif
