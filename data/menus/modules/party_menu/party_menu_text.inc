.if .L__inc_fragment_select_4c8625a551ab == 1
	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA036
gText_Rom_5CA036: @ 0x085CA036
	.string "ポケモンを　えらんで　ください{EOS}"
	.if (. - gText_Rom_5CA036) > 0x10
	.error "gText_Rom_5CA036 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA036) < 0x10
	.space 0x10 - (. - gText_Rom_5CA036)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA046
gText_Rom_5CA046: @ 0x085CA046
	.string "どこに　いどうしますか？{EOS}"
	.if (. - gText_Rom_5CA046) > 0xd
	.error "gText_Rom_5CA046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA046) < 0xd
	.space 0xd - (. - gText_Rom_5CA046)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA053
gText_Rom_5CA053: @ 0x085CA053
	.string "どのポケモンに　おしえますか？{EOS}"
	.if (. - gText_Rom_5CA053) > 0x10
	.error "gText_Rom_5CA053 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA053) < 0x10
	.space 0x10 - (. - gText_Rom_5CA053)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA063
gText_Rom_5CA063: @ 0x085CA063
	.string "どのポケモンに　つかいますか？{EOS}"
	.if (. - gText_Rom_5CA063) > 0x10
	.error "gText_Rom_5CA063 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA063) < 0x10
	.space 0x10 - (. - gText_Rom_5CA063)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA073
gText_Rom_5CA073: @ 0x085CA073
	.string "どのポケモンに　もたせますか？{EOS}"
	.if (. - gText_Rom_5CA073) > 0x10
	.error "gText_Rom_5CA073 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA073) < 0x10
	.space 0x10 - (. - gText_Rom_5CA073)
	.endif
.elseif .L__inc_fragment_select_4c8625a551ab == 2
	@ src/strings.c:310 gText_DoWhatWithPokemon
	.globl gText_DoWhatWithPokemon
gText_DoWhatWithPokemon: @ 0x085CA083
	.string "{STR_VAR_1}を どうする?{EOS}"
	.if (. - gText_DoWhatWithPokemon) > 0xa
	.error "gText_DoWhatWithPokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_DoWhatWithPokemon) < 0xa
	.space 0xa - (. - gText_DoWhatWithPokemon)
	.endif
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
.elseif .L__inc_fragment_select_4c8625a551ab == 3
	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA0E4
gText_Rom_5CA0E4: @ 0x085CA0E4
	.string "これでは　たたかえません！{EOS}"
	.if (. - gText_Rom_5CA0E4) > 0xe
	.error "gText_Rom_5CA0E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0E4) < 0xe
	.space 0xe - (. - gText_Rom_5CA0E4)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA0F2
gText_Rom_5CA0F2: @ 0x085CA0F2
	.string "どのポケモンを　あずけますか？{EOS}"
	.if (. - gText_Rom_5CA0F2) > 0x10
	.error "gText_Rom_5CA0F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0F2) < 0x10
	.space 0x10 - (. - gText_Rom_5CA0F2)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA102
gText_Rom_5CA102: @ 0x085CA102
	.string "たいりょくが　たりません……{EOS}"
	.if (. - gText_Rom_5CA102) > 0xf
	.error "gText_Rom_5CA102 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA102) < 0xf
	.space 0xf - (. - gText_Rom_5CA102)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA111
gText_Rom_5CA111: @ 0x085CA111
	.string "{0xFD}{0x02}ひき　そろっていません{EOS}"
	.if (. - gText_Rom_5CA111) != 0xe
	.error "gText_Rom_5CA111 must retain its original byte length"
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA11F
gText_Rom_5CA11F: @ 0x085CA11F
	.string "おなじ　ポケモンが　います！{EOS}"
	.if (. - gText_Rom_5CA11F) > 0xf
	.error "gText_Rom_5CA11F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA11F) < 0xf
	.space 0xf - (. - gText_Rom_5CA11F)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA12E
gText_Rom_5CA12E: @ 0x085CA12E
	.string "おなじ　どうぐを　もってます{EOS}"
	.if (. - gText_Rom_5CA12E) > 0xf
	.error "gText_Rom_5CA12E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA12E) < 0xf
	.space 0xf - (. - gText_Rom_5CA12E)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA13D
gText_Rom_5CA13D: @ 0x085CA13D
	.string "ながれが　はやくて　ダメだ！{EOS}"
	.if (. - gText_Rom_5CA13D) > 0xf
	.error "gText_Rom_5CA13D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA13D) < 0xf
	.space 0xf - (. - gText_Rom_5CA13D)
	.endif
.elseif .L__inc_fragment_select_4c8625a551ab == 4
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
.elseif .L__inc_fragment_select_4c8625a551ab == 5
	.space 0x1, 0x00
	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2FC
gText_Rom_5CA2FC: @ 0x085CA2FC
	.string "いまは　そのポケモンを　\nあいては　うけとることが　できません{EOS}"
	.if (. - gText_Rom_5CA2FC) != 0x20
	.error "gText_Rom_5CA2FC must retain its original byte length"
	.endif

	@ asm/party_menu.s:10323 CursorCb_Trade1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA31C
gText_Rom_5CA31C: @ 0x085CA31C
	.string "その　あいてとは　いまは　\nこうかん　できません{EOS}"
	.if (. - gText_Rom_5CA31C) != 0x19
	.error "gText_Rom_5CA31C must retain its original byte length"
	.endif
	.space 0x3, 0x00

	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA338
gText_Rom_5CA338: @ 0x085CA338
	.string "あいての　ほしがっている　タイプの\nポケモンでは　ありません{EOS}"
	.if (. - gText_Rom_5CA338) != 0x1f
	.error "gText_Rom_5CA338 must retain its original byte length"
	.endif
	.space 0x1, 0x00

	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA358
gText_Rom_5CA358: @ 0x085CA358
	.string "それは　タマゴでは　ありません{EOS}"
	.if (. - gText_Rom_5CA358) != 0x10
	.error "gText_Rom_5CA358 must retain its original byte length"
	.endif
.endif
