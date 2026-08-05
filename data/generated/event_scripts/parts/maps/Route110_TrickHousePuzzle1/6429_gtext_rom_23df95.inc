	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:42 Route110_TrickHousePuzzle1_Text_SallyIntro (+1 aliases)
	.globl gText_Rom_23DF95
gText_Rom_23DF95: @ 0x0823DF95
	.string "おぼえさせた ばかりの いあいぎりで\nきって きって きりまくりよ!"
	.byte EOS
	.if (. - gText_Rom_23DF95) > 0x23
	.error "gText_Rom_23DF95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DF95) < 0x23
	.space 0x23 - (. - gText_Rom_23DF95)
	.endif
