	@ data/maps/RustboroCity/scripts.inc:1067 RustboroCity_Text_CatchRarePokemonIfIGoToSchool
	.globl gText_Rom_1DF4C9
gText_Rom_1DF4C9: @ 0x081DF4C9
	.string "ぽけもん とれーなーず すくーる かぁ!\pここに にゅうがく すれば\nめずらしい ポケモンでも かんたんに\lつかまえられるように なるのかな?$"
	.if (. - gText_Rom_1DF4C9) > 0x48
	.error "gText_Rom_1DF4C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF4C9) < 0x48
	.space 0x48 - (. - gText_Rom_1DF4C9)
	.endif
