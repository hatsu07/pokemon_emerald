	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:955 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2
	.globl gText_Rom_23FBCB
gText_Rom_23FBCB: @ 0x0823FBCB
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pフエンタウンに いる\nおじいさんと おばあさん どっちがおおい?{EOS}"
	.if (. - gText_Rom_23FBCB) > 0x35
	.error "gText_Rom_23FBCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FBCB) < 0x35
	.space 0x35 - (. - gText_Rom_23FBCB)
	.endif
