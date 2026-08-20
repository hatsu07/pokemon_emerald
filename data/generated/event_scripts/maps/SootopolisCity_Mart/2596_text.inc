	@ data/maps/SootopolisCity_Mart/scripts.inc:55 SootopolisCity_Mart_Text_PPUpIsGreat
	.globl gText_Rom_20F23A
gText_Rom_20F23A: @ 0x0820F23A
	.string "ポイントアップは すごいぞ!\pなんたって ポケモンの\nパワーポイントを ふやせるからな!{EOS}"
	.if (. - gText_Rom_20F23A) > 0x2d
	.error "gText_Rom_20F23A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F23A) < 0x2d
	.space 0x2d - (. - gText_Rom_20F23A)
	.endif
