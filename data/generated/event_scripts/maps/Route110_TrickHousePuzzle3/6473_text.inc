	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:316 Route110_TrickHousePuzzle3_Text_MarthaIntro (+1 aliases)
	.globl gText_Rom_23EA97
gText_Rom_23EA97: @ 0x0823EA97
	.string "なにが なんだか わからなくて\nかなしく なってきたわ……$"
	.if (. - gText_Rom_23EA97) > 0x1e
	.error "gText_Rom_23EA97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA97) < 0x1e
	.space 0x1e - (. - gText_Rom_23EA97)
	.endif
