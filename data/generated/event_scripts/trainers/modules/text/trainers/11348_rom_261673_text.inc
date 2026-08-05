	@ data/text/trainers.inc:3101 Route129_Text_ClarenceDefeat (+1 aliases)
	.globl gText_Rom_261673
gText_Rom_261673: @ 0x08261673
	.string "かつのって むずかしいなあ$"
	.if (. - gText_Rom_261673) > 0xe
	.error "gText_Rom_261673 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261673) < 0xe
	.space 0xe - (. - gText_Rom_261673)
	.endif
