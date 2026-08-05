	@ data/text/trainers.inc:2891 Route127_Text_CamdenIntro (+1 aliases)
	.globl gText_Rom_260E57
gText_Rom_260E57: @ 0x08260E57
	.string "オレと しょうぶ したいって\nかおに かいてあるぜ!$"
	.if (. - gText_Rom_260E57) > 0x1b
	.error "gText_Rom_260E57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260E57) < 0x1b
	.space 0x1b - (. - gText_Rom_260E57)
	.endif
