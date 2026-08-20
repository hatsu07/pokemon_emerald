	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA08D
gText_Rom_5CA08D: @ 0x085CA08D
	.string "きれるものが　ありません！{EOS}"
	.if (. - gText_Rom_5CA08D) > 0xe
	.error "gText_Rom_5CA08D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA08D) < 0xe
	.space 0xe - (. - gText_Rom_5CA08D)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA09B
gText_Rom_5CA09B: @ 0x085CA09B
	.string "ここでは　のれません{EOS}"
	.if (. - gText_Rom_5CA09B) != 0xb
	.error "gText_Rom_5CA09B must retain its original byte length"
	.endif
	.globl gText_Rom_5CA0A2
	.set gText_Rom_5CA0A2, gText_Rom_5CA09B + 0x7

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA0A6
gText_Rom_5CA0A6: @ 0x085CA0A6
	.string "すでに　なみのり　しています{EOS}"
	.if (. - gText_Rom_5CA0A6) > 0xf
	.error "gText_Rom_5CA0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0A6) < 0xf
	.space 0xf - (. - gText_Rom_5CA0A6)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA0B5
gText_Rom_5CA0B5: @ 0x085CA0B5
	.string "ここでは　つかえません{EOS}"
	.if (. - gText_Rom_5CA0B5) != 0xc
	.error "gText_Rom_5CA0B5 must retain its original byte length"
	.endif
