	@ data/text/trainers.inc:2906 Route127_Text_DonnyPostBattle
	.globl gText_Rom_260EC8
gText_Rom_260EC8: @ 0x08260EC8
	.string "ライバルが いると\nつよくなりたい って きもちが\lどんどん あふれて くるよね$"
	.if (. - gText_Rom_260EC8) > 0x29
	.error "gText_Rom_260EC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260EC8) < 0x29
	.space 0x29 - (. - gText_Rom_260EC8)
	.endif
