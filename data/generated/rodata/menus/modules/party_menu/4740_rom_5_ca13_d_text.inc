	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA13D
gText_Rom_5CA13D: @ 0x085CA13D
	.string "ながれが　はやくて　ダメだ！$"
	.if (. - gText_Rom_5CA13D) > 0xf
	.error "gText_Rom_5CA13D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA13D) < 0xf
	.space 0xf - (. - gText_Rom_5CA13D)
	.endif
