	@ src/strings.c:325 gText_DoWhatWithMail
	.globl gText_DoWhatWithMail
gText_DoWhatWithMail: @ 0x085CA14C
	.string "メールを どうしますか?{EOS}"
	.if (. - gText_DoWhatWithMail) > 0xd
	.error "gText_DoWhatWithMail may not grow beyond its original slot"
	.endif
	.if (. - gText_DoWhatWithMail) < 0xd
	.space 0xd - (. - gText_DoWhatWithMail)
	.endif
	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA159
gText_Rom_5CA159: @ 0x085CA159
	.string "ポケモンか　もどるを　せんたく{EOS}"
	.if (. - gText_Rom_5CA159) > 0x10
	.error "gText_Rom_5CA159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA159) < 0x10
	.space 0x10 - (. - gText_Rom_5CA159)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA169
gText_Rom_5CA169: @ 0x085CA169
	.string "ポケモンを　えらんで　けってい{EOS}"
	.if (. - gText_Rom_5CA169) != 0x10
	.error "gText_Rom_5CA169 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA174
	.set gText_Rom_5CA174, gText_Rom_5CA169 + 0xb

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA179
gText_Rom_5CA179: @ 0x085CA179
	.string "サイクリングを　たのしもう！{EOS}"
	.if (. - gText_Rom_5CA179) > 0xf
	.error "gText_Rom_5CA179 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA179) < 0xf
	.space 0xf - (. - gText_Rom_5CA179)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA188
gText_Rom_5CA188: @ 0x085CA188
	.string "すでに　つかっています！{EOS}"
	.if (. - gText_Rom_5CA188) > 0xd
	.error "gText_Rom_5CA188 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA188) < 0xd
	.space 0xd - (. - gText_Rom_5CA188)
	.endif
