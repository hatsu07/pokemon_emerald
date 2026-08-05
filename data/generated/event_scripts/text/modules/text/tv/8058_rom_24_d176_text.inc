	@ data/text/tv.inc:1114 SlateportCity_PokemonFanClub_Text_HereIfYouGetUrgeToTellMe
	.globl gText_Rom_24D176
gText_Rom_24D176: @ 0x0824D176
	.string "そっか……\pじゃあ また ポケモンの ことを\nはなしたく なったら いつでも きてね$"
	.if (. - gText_Rom_24D176) > 0x2b
	.error "gText_Rom_24D176 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D176) < 0x2b
	.space 0x2b - (. - gText_Rom_24D176)
	.endif
