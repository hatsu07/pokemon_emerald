	@ data/text/trainers.inc:3230 Route132_Text_RonaldIntro (+1 aliases)
	.globl gText_Rom_261BF1
gText_Rom_261BF1: @ 0x08261BF1
	.string "かつか まけるか\nやれば わかることだろ!$"
	.if (. - gText_Rom_261BF1) > 0x16
	.error "gText_Rom_261BF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261BF1) < 0x16
	.space 0x16 - (. - gText_Rom_261BF1)
	.endif
