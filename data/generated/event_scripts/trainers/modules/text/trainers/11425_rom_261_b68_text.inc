	@ data/text/trainers.inc:3215 Route132_Text_GilbertDefeat (+1 aliases)
	.globl gText_Rom_261B68
gText_Rom_261B68: @ 0x08261B68
	.string "もっと つよくなりたい……!$"
	.if (. - gText_Rom_261B68) > 0xf
	.error "gText_Rom_261B68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261B68) < 0xf
	.space 0xf - (. - gText_Rom_261B68)
	.endif
