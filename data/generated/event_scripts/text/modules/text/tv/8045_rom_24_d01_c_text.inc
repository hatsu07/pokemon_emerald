	@ data/text/tv.inc:1090 SlateportCity_PokemonFanClub_Text_HereGoesQuickAnswers
	.globl gText_Rom_24D01C
gText_Rom_24D01C: @ 0x0824D01C
	.string "ありがとう!\pじゃあ きくね\nずばり ひとことで こたえて!$"
	.if (. - gText_Rom_24D01C) > 0x1f
	.error "gText_Rom_24D01C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D01C) < 0x1f
	.space 0x1f - (. - gText_Rom_24D01C)
	.endif
