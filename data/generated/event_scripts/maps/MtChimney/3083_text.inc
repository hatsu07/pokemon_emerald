	@ data/maps/MtChimney/scripts.inc:701 MtChimney_Text_LessHabitatForWaterPokemon
	.globl gText_Rom_21568C
gText_Rom_21568C: @ 0x0821568C
	.string "だいちを ふやしたら\nみずポケモンが すむ ばしょが\lへってしまう じゃねーか!$"
	.if (. - gText_Rom_21568C) > 0x29
	.error "gText_Rom_21568C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21568C) < 0x29
	.space 0x29 - (. - gText_Rom_21568C)
	.endif
