	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA188
gText_Rom_5CA188: @ 0x085CA188
	.string "すでに　つかっています！$"
	.if (. - gText_Rom_5CA188) > 0xd
	.error "gText_Rom_5CA188 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA188) < 0xd
	.space 0xd - (. - gText_Rom_5CA188)
	.endif
