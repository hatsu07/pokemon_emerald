	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:60 Route110_TrickHousePuzzle6_Text_BennyDefeat (+1 aliases)
	.globl gText_Rom_23FE3D
gText_Rom_23FE3D: @ 0x0823FE3D
	.string "わわっ しまった!$"
	.if (. - gText_Rom_23FE3D) > 0xa
	.error "gText_Rom_23FE3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FE3D) < 0xa
	.space 0xa - (. - gText_Rom_23FE3D)
	.endif
