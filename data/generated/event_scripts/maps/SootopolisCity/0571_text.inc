	@ data/maps/SootopolisCity/scripts.inc:1495 SootopolisCity_Text_DoesThisMakeYourFearPokemon
	.globl gText_Rom_1E35DC
gText_Rom_1E35DC: @ 0x081E35DC
	.string "ダイゴ『ねえ {PLAYER}{KUN}\nグラードンと カイオーガを みて\lポケモンは こわいものだと おもったかい?\pでも そんなことは ないんだよ\nポケモンって ほんとうは もっと……\p……いや きみなら そんなことは\nもう とっくに きがついて いるよね$"
	.if (. - gText_Rom_1E35DC) > 0x7a
	.error "gText_Rom_1E35DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E35DC) < 0x7a
	.space 0x7a - (. - gText_Rom_1E35DC)
	.endif
