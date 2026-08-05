	@ data/maps/SootopolisCity/scripts.inc:1465 SootopolisCity_Text_GiganticPokemonFight
	.globl gText_Rom_1E31E2
gText_Rom_1E31E2: @ 0x081E31E2
	.string "あんなに おおきな ポケモンが\n2ひきも あばれている なんて\lとても わたしたちの てに おえないわ!$"
	.if (. - gText_Rom_1E31E2) > 0x35
	.error "gText_Rom_1E31E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E31E2) < 0x35
	.space 0x35 - (. - gText_Rom_1E31E2)
	.endif
