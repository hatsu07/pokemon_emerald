	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:320 Route110_TrickHousePuzzle7_Text_JoshuaIntro (+1 aliases)
	.globl gText_Rom_240283
gText_Rom_240283: @ 0x08240283
	.string "いつも カラクリだいおうは パッと\nきえちゃうけど どう やってるんだろ?$"
	.if (. - gText_Rom_240283) > 0x26
	.error "gText_Rom_240283 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240283) < 0x26
	.space 0x26 - (. - gText_Rom_240283)
	.endif
