	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA036
gText_Rom_5CA036: @ 0x085CA036
	.string "ポケモンを　えらんで　ください$"
	.if (. - gText_Rom_5CA036) > 0x10
	.error "gText_Rom_5CA036 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA036) < 0x10
	.space 0x10 - (. - gText_Rom_5CA036)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA046
gText_Rom_5CA046: @ 0x085CA046
	.string "どこに　いどうしますか？$"
	.if (. - gText_Rom_5CA046) > 0xd
	.error "gText_Rom_5CA046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA046) < 0xd
	.space 0xd - (. - gText_Rom_5CA046)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA053
gText_Rom_5CA053: @ 0x085CA053
	.string "どのポケモンに　おしえますか？$"
	.if (. - gText_Rom_5CA053) > 0x10
	.error "gText_Rom_5CA053 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA053) < 0x10
	.space 0x10 - (. - gText_Rom_5CA053)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA063
gText_Rom_5CA063: @ 0x085CA063
	.string "どのポケモンに　つかいますか？$"
	.if (. - gText_Rom_5CA063) > 0x10
	.error "gText_Rom_5CA063 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA063) < 0x10
	.space 0x10 - (. - gText_Rom_5CA063)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA073
gText_Rom_5CA073: @ 0x085CA073
	.string "どのポケモンに　もたせますか？$"
	.if (. - gText_Rom_5CA073) > 0x10
	.error "gText_Rom_5CA073 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA073) < 0x10
	.space 0x10 - (. - gText_Rom_5CA073)
	.endif
