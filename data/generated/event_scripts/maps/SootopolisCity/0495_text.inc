	@ data/maps/SootopolisCity/scripts.inc:1381 SootopolisCity_Text_GymSign
	.globl gText_Rom_1E2C09
gText_Rom_1E2C09: @ 0x081E2C09
	.string "ルネ シティ ポケモンジム\nリーダー アダン\lみずも したたる ジムリーダー!$"
	.if (. - gText_Rom_1E2C09) > 0x28
	.error "gText_Rom_1E2C09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2C09) < 0x28
	.space 0x28 - (. - gText_Rom_1E2C09)
	.endif
