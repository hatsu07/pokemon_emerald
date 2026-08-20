	@ data/maps/Route102/scripts.inc:88 Route102_Text_CatchWholeBunchOfPokemon
	.globl gText_Rom_1E6A13
gText_Rom_1E6A13: @ 0x081E6A13
	.string "ポケモン たくさん つかまえよーっと!{EOS}"
	.if (. - gText_Rom_1E6A13) > 0x14
	.error "gText_Rom_1E6A13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6A13) < 0x14
	.space 0x14 - (. - gText_Rom_1E6A13)
	.endif
