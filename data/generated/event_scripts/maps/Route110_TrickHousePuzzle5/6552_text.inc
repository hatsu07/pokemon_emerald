	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:967 Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2
	.globl gText_Rom_23FC9B
gText_Rom_23FC9B: @ 0x0823FC9B
	.string "からくりニンギョウ 5ゴウ くいず!\pヒワマキシティに ある ツリーハウス\nぜんぶで いくつ?{EOS}"
	.if (. - gText_Rom_23FC9B) > 0x30
	.error "gText_Rom_23FC9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC9B) < 0x30
	.space 0x30 - (. - gText_Rom_23FC9B)
	.endif
