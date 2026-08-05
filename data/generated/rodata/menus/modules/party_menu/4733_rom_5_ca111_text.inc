	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA111
gText_Rom_5CA111: @ 0x085CA111
	.string "{0xFD}{0x02}ひき　そろっていません$"
	.if (. - gText_Rom_5CA111) != 0xe
	.error "gText_Rom_5CA111 must retain its original byte length"
	.endif
