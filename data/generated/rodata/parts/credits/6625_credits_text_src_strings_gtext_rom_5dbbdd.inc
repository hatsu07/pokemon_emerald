	@ src/strings.c:996 gText_Rent
	.globl gText_Rom_5DBBDD
gText_Rom_5DBBDD: @ 0x085DBBDD
	.string "レンタルする$"
	.if (. - gText_Rom_5DBBDD) > 0x7
	.error "gText_Rom_5DBBDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBDD) < 0x7
	.space 0x7 - (. - gText_Rom_5DBBDD)
	.endif
