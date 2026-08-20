	@ data/maps/SlateportCity/scripts.inc:1217 SlateportCity_Text_PokemonFanClubSign
	.globl gText_Rom_1DD4CC
gText_Rom_1DD4CC: @ 0x081DD4CC
	.string "「ポケモン だいすきクラブ」\nポケモンが すきなひと みんな あつまれ!{EOS}"
	.if (. - gText_Rom_1DD4CC) > 0x25
	.error "gText_Rom_1DD4CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD4CC) < 0x25
	.space 0x25 - (. - gText_Rom_1DD4CC)
	.endif
