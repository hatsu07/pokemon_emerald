	@ asm/party_menu.s:6232 display_pokemon_menu_message
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA169
gText_Rom_5CA169: @ 0x085CA169
	.string "ポケモンを　えらんで　けってい$"
	.if (. - gText_Rom_5CA169) != 0x10
	.error "gText_Rom_5CA169 must retain its original byte length"
	.endif
