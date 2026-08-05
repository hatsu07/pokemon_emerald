	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA0B5
gText_Rom_5CA0B5: @ 0x085CA0B5
	.string "ここでは　つかえません$"
	.if (. - gText_Rom_5CA0B5) != 0xc
	.error "gText_Rom_5CA0B5 must retain its original byte length"
	.endif
