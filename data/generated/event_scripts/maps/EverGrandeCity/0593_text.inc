	@ data/maps/EverGrandeCity/scripts.inc:29 EverGrandeCity_Text_EnteringPokemonLeague
	.globl gText_Rom_1E39BD
gText_Rom_1E39BD: @ 0x081E39BD
	.string "これより ポケモン リーグ\nしょうめん ゲート{EOS}"
	.if (. - gText_Rom_1E39BD) > 0x18
	.error "gText_Rom_1E39BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E39BD) < 0x18
	.space 0x18 - (. - gText_Rom_1E39BD)
	.endif
