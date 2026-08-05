	@ data/maps/SootopolisCity_House5/scripts.inc:12 SootopolisCity_House5_Text_SootopolisMtPyreConnection
	.globl gText_Rom_20F66A
gText_Rom_20F66A: @ 0x0820F66A
	.string "この ルネシティと おくりびやまは\nなにかの かんけいが あるらしい……\pむかし いた けんきゅうじょで\nそんなことを ともだちと しらべていたよ$"
	.if (. - gText_Rom_20F66A) > 0x4a
	.error "gText_Rom_20F66A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F66A) < 0x4a
	.space 0x4a - (. - gText_Rom_20F66A)
	.endif
