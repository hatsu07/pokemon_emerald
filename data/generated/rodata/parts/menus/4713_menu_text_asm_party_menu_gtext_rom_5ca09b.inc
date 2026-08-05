	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA09B
gText_Rom_5CA09B: @ 0x085CA09B
	.string "ここでは　のれません$"
	.if (. - gText_Rom_5CA09B) != 0xb
	.error "gText_Rom_5CA09B must retain its original byte length"
	.endif
