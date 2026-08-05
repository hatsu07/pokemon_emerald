	@ data/text/trainers.inc:3152 Route131_Text_SusieIntro (+1 aliases)
	.globl gText_Rom_26187A
gText_Rom_26187A: @ 0x0826187A
	.string "ちょっと あんた\nわたしと しょうぶ しましょ!$"
	.if (. - gText_Rom_26187A) > 0x19
	.error "gText_Rom_26187A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26187A) < 0x19
	.space 0x19 - (. - gText_Rom_26187A)
	.endif
