	@ data/text/trainers.inc:2402 Route123_Text_WendyPostBattle
	.globl gText_Rom_25F9B7
gText_Rom_25F9B7: @ 0x0825F9B7
	.string "わたしに かつなんて……\nあなたの じつりょくも そうとうな もの!$"
	.if (. - gText_Rom_25F9B7) > 0x23
	.error "gText_Rom_25F9B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F9B7) < 0x23
	.space 0x23 - (. - gText_Rom_25F9B7)
	.endif
