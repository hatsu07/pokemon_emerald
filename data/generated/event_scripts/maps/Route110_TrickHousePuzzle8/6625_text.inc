	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:42 Route110_TrickHousePuzzle8_Text_KeiraIntro (+1 aliases)
	.globl gText_Rom_240557
gText_Rom_240557: @ 0x08240557
	.string "わたしと しょうぶ できるなんて\nあなた しあわせよ!$"
	.if (. - gText_Rom_240557) > 0x1c
	.error "gText_Rom_240557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240557) < 0x1c
	.space 0x1c - (. - gText_Rom_240557)
	.endif
