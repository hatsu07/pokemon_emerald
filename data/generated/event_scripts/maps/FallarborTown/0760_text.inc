	@ data/maps/FallarborTown/scripts.inc:72 FallarborTown_Text_TownSign
	.globl gText_Rom_1E601B
gText_Rom_1E601B: @ 0x081E601B
	.string "ここは ハジツゲ タウン\nちいさな はたけが ある のうそん$"
	.if (. - gText_Rom_1E601B) > 0x1f
	.error "gText_Rom_1E601B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E601B) < 0x1f
	.space 0x1f - (. - gText_Rom_1E601B)
	.endif
