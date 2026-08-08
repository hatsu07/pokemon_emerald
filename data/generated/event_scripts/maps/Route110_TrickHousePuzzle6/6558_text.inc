	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:48 Route110_TrickHousePuzzle6_Text_SophiaIntro (+1 aliases)
	.globl gText_Rom_23FDC1
gText_Rom_23FDC1: @ 0x0823FDC1
	.string "さいきん へんな やしきが あるって\nきいたから しらべに きたのよ!$"
	.if (. - gText_Rom_23FDC1) > 0x24
	.error "gText_Rom_23FDC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FDC1) < 0x24
	.space 0x24 - (. - gText_Rom_23FDC1)
	.endif
