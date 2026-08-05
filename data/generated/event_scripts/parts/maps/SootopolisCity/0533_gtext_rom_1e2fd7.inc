	@ data/maps/SootopolisCity/scripts.inc:1438 SootopolisCity_Text_SootopolisWillBeWrecked
	.globl gText_Rom_1E2FD7
gText_Rom_1E2FD7: @ 0x081E2FD7
	.string "ひー ルネシティが こわれちゃうよー!$"
	.if (. - gText_Rom_1E2FD7) > 0x14
	.error "gText_Rom_1E2FD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2FD7) < 0x14
	.space 0x14 - (. - gText_Rom_1E2FD7)
	.endif
