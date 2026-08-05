	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:928 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1
	.globl gText_Rom_23F9FC
gText_Rom_23F9FC: @ 0x0823F9FC
	.string "からくりニンギョウ 2ゴウ くいず!\pミツルくんが パパから かしてもらった\nポケモンは なんだった?$"
	.if (. - gText_Rom_23F9FC) > 0x34
	.error "gText_Rom_23F9FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9FC) < 0x34
	.space 0x34 - (. - gText_Rom_23F9FC)
	.endif
