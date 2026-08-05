	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:123 Route110_TrickHousePuzzle2_Text_GeorgiaIntro (+1 aliases)
	.globl gText_Rom_23E277
gText_Rom_23E277: @ 0x0823E277
	.string "いつか わたしの ジムを つくりたくて\nしかけを けんきゅうしてるの!$"
	.if (. - gText_Rom_23E277) > 0x24
	.error "gText_Rom_23E277 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E277) < 0x24
	.space 0x24 - (. - gText_Rom_23E277)
	.endif
