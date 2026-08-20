	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:940 Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1
	.globl gText_Rom_23FAC1
gText_Rom_23FAC1: @ 0x0823FAC1
	.string "からくりニンギョウ 3ゴウ くいず!\pハーバーメール 3つ かうのと\nやけどなおし 1つ かうのと\lどっちが たかい?{EOS}"
	.if (. - gText_Rom_23FAC1) > 0x3c
	.error "gText_Rom_23FAC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FAC1) < 0x3c
	.space 0x3c - (. - gText_Rom_23FAC1)
	.endif
