	@ data/maps/FortreeCity/scripts.inc:90 FortreeCity_Text_SawGiganticPokemonInSky
	.globl gText_Rom_1DFEC0
gText_Rom_1DFEC0: @ 0x081DFEC0
	.string "だれも しんじて くれないけど\nおおきな ポケモンが からだを くねらせ\lそらを とんでいるのを みたんだ……\pそいつは 131ばん すいどうの ほうへ\nとんでいったよ……\p……ところで\nなんか きみ コゲくさいね\pかざんに でも いってきた?{EOS}"
	.if (. - gText_Rom_1DFEC0) > 0x7b
	.error "gText_Rom_1DFEC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFEC0) < 0x7b
	.space 0x7b - (. - gText_Rom_1DFEC0)
	.endif
