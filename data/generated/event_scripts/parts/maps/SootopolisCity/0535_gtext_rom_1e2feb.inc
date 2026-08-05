	@ data/maps/SootopolisCity/scripts.inc:1441 SootopolisCity_Text_SootopolisDidntGetWrecked
	.globl gText_Rom_1E2FEB
gText_Rom_1E2FEB: @ 0x081E2FEB
	.string "ルネシティ こわれないで すんだよー!$"
	.if (. - gText_Rom_1E2FEB) > 0x14
	.error "gText_Rom_1E2FEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2FEB) < 0x14
	.space 0x14 - (. - gText_Rom_1E2FEB)
	.endif
