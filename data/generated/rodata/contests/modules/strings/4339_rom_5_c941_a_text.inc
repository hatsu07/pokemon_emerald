	@ src/strings.c:149 gText_IDNumber2
	.globl gText_Rom_5C941A
gText_Rom_5C941A: @ 0x085C941A
	.string "{ID}{NO}$"
	.if (. - gText_Rom_5C941A) > 0x5
	.error "gText_Rom_5C941A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C941A) < 0x5
	.space 0x5 - (. - gText_Rom_5C941A)
	.endif
