	@ data/maps/SootopolisCity_House2/scripts.inc:24 SootopolisCity_House2_Text_YesTwoOrbsSideBySide
	.globl gText_Rom_20F42A
gText_Rom_20F42A: @ 0x0820F42A
	.string "そう…… ふたつのたまが\nとなりあわせに おかれている ようすは\lなにか こころが やすらぎますよ……$"
	.if (. - gText_Rom_20F42A) > 0x34
	.error "gText_Rom_20F42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F42A) < 0x34
	.space 0x34 - (. - gText_Rom_20F42A)
	.endif
