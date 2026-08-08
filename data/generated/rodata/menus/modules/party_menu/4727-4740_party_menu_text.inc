	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA0E4
gText_Rom_5CA0E4: @ 0x085CA0E4
	.string "これでは　たたかえません！$"
	.if (. - gText_Rom_5CA0E4) > 0xe
	.error "gText_Rom_5CA0E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0E4) < 0xe
	.space 0xe - (. - gText_Rom_5CA0E4)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA0F2
gText_Rom_5CA0F2: @ 0x085CA0F2
	.string "どのポケモンを　あずけますか？$"
	.if (. - gText_Rom_5CA0F2) > 0x10
	.error "gText_Rom_5CA0F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0F2) < 0x10
	.space 0x10 - (. - gText_Rom_5CA0F2)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA102
gText_Rom_5CA102: @ 0x085CA102
	.string "たいりょくが　たりません……$"
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
	.string "{0xFD}{0x02}ひき　そろっていません$"
	.if (. - gText_Rom_5CA111) != 0xe
	.error "gText_Rom_5CA111 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA11B
	.set gText_Rom_5CA11B, gText_Rom_5CA111 + 0xa

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA11F
gText_Rom_5CA11F: @ 0x085CA11F
	.string "おなじ　ポケモンが　います！$"
	.if (. - gText_Rom_5CA11F) > 0xf
	.error "gText_Rom_5CA11F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA11F) < 0xf
	.space 0xf - (. - gText_Rom_5CA11F)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA12E
gText_Rom_5CA12E: @ 0x085CA12E
	.string "おなじ　どうぐを　もってます$"
	.if (. - gText_Rom_5CA12E) > 0xf
	.error "gText_Rom_5CA12E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA12E) < 0xf
	.space 0xf - (. - gText_Rom_5CA12E)
	.endif

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
