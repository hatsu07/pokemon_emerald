	@ data/text/trainers.inc:3212 Route132_Text_GilbertIntro (+1 aliases)
	.globl gText_Rom_261B3C
gText_Rom_261B3C: @ 0x08261B3C
	.string "ちいさい ころは よく カゼを ひいたけど\nすいえいを はじめて こんなに じょうぶ!$"
	.if (. - gText_Rom_261B3C) > 0x2c
	.error "gText_Rom_261B3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261B3C) < 0x2c
	.space 0x2c - (. - gText_Rom_261B3C)
	.endif
