	@ data/text/tv.inc:1120 SlateportCity_PokemonFanClub_Text_EnjoyDoingInterviews
	.globl gText_Rom_24D1A1
gText_Rom_24D1A1: @ 0x0824D1A1
	.string "ここに いると いろんな ポケモンの\nはなしが きけるから おもしろいわ$"
	.if (. - gText_Rom_24D1A1) > 0x25
	.error "gText_Rom_24D1A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D1A1) < 0x25
	.space 0x25 - (. - gText_Rom_24D1A1)
	.endif
