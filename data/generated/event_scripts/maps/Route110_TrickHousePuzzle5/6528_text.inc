	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:931 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2
	.globl gText_Rom_23FA30
gText_Rom_23FA30: @ 0x0823FA30
	.string "からくりニンギョウ 2ゴウ くいず!\pオダマキはかせを おいかけていた\nポケモンは なんだった?$"
	.if (. - gText_Rom_23FA30) > 0x31
	.error "gText_Rom_23FA30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FA30) < 0x31
	.space 0x31 - (. - gText_Rom_23FA30)
	.endif
