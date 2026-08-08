	@ data/maps/SootopolisCity_Mart/scripts.inc:58 SootopolisCity_Mart_Text_TooScaryOutside
	.globl gText_Rom_20F267
gText_Rom_20F267: @ 0x0820F267
	.string "いったい なにが おこってるんだ!?\pものすごく きになる けど\nこわくて そとに でられないよ!$"
	.if (. - gText_Rom_20F267) > 0x32
	.error "gText_Rom_20F267 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F267) < 0x32
	.space 0x32 - (. - gText_Rom_20F267)
	.endif
