	@ data/text/trainers.inc:2108 Route119_Text_RachelDefeat (+1 aliases)
	.globl gText_Rom_25ED88
gText_Rom_25ED88: @ 0x0825ED88
	.string "いやん そんなあ$"
	.if (. - gText_Rom_25ED88) > 0x9
	.error "gText_Rom_25ED88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED88) < 0x9
	.space 0x9 - (. - gText_Rom_25ED88)
	.endif
