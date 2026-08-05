	@ data/maps/SootopolisCity/scripts.inc:1432 SootopolisCity_Text_BigPokemonFighting
	.globl gText_Rom_1E2F96
gText_Rom_1E2F96: @ 0x081E2F96
	.string "おっきな ポケモンと ポケモンが\nけんか してるよ!\pだれか とめて あげて!$"
	.if (. - gText_Rom_1E2F96) > 0x28
	.error "gText_Rom_1E2F96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2F96) < 0x28
	.space 0x28 - (. - gText_Rom_1E2F96)
	.endif
