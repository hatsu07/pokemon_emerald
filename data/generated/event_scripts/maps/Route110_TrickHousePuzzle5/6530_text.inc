	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:934 Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3
	.globl gText_Rom_23FA61
gText_Rom_23FA61: @ 0x0823FA61
	.string "からくりニンギョウ 2ゴウ くいず!\pトウカのもりで アクアだんが\nたたかわせた ポケモンは なんだった?{EOS}"
	.if (. - gText_Rom_23FA61) > 0x36
	.error "gText_Rom_23FA61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FA61) < 0x36
	.space 0x36 - (. - gText_Rom_23FA61)
	.endif
