	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:76 LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot
	.globl gText_Rom_2055D8
gText_Rom_2055D8: @ 0x082055D8
	.string "ほほう ポケモンの みりょくで\nおきゃくさまが ばいぞう したって!?\pそうかあ うちも かわいい ポケモンを\nりょかんの マスコットに すれば\pもっと たくさんの おきゃくさまが\nとまりに きてくれるように なるかな?$"
	.if (. - gText_Rom_2055D8) > 0x6f
	.error "gText_Rom_2055D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2055D8) < 0x6f
	.space 0x6f - (. - gText_Rom_2055D8)
	.endif
