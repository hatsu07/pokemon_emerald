	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:946 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3
	.globl gText_Rom_23FB31
gText_Rom_23FB31: @ 0x0823FB31
	.string "からくりニンギョウ 3ゴウ くいず!\pむしよけスプレーと サイコソーダを かうと\nいいキズぐすり より たかくなる?$"
	.if (. - gText_Rom_23FB31) > 0x3b
	.error "gText_Rom_23FB31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FB31) < 0x3b
	.space 0x3b - (. - gText_Rom_23FB31)
	.endif
