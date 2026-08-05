	@ data/text/tv.inc:1111 SlateportCity_PokemonFanClub_Text_TellMeAnythingAboutYourMon
	.globl gText_Rom_24D234
gText_Rom_24D234: @ 0x0824D234
	.string "わあ!\nありがとう!\pじゃあ {STR_VAR_1}の はなし\nなんでも いいので きかせてよ!$"
	.if (. - gText_Rom_24D234) > 0x28
	.error "gText_Rom_24D234 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D234) < 0x28
	.space 0x28 - (. - gText_Rom_24D234)
	.endif
