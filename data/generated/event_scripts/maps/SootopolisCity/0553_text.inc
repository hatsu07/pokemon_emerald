	@ data/maps/SootopolisCity/scripts.inc:1468 SootopolisCity_Text_FearedWorstWhenPokemonFlewDown
	.globl gText_Rom_1E3217
gText_Rom_1E3217: @ 0x081E3217
	.string "3ひきめの おおきな ポケモンが\nそらから おりてきた ときには\lもう どうなることかと おもったわ……$"
	.if (. - gText_Rom_1E3217) > 0x35
	.error "gText_Rom_1E3217 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3217) < 0x35
	.space 0x35 - (. - gText_Rom_1E3217)
	.endif
