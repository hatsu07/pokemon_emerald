	@ src/strings.c:149 gText_IDNumber2
	.globl gText_IDNumber2
gText_IDNumber2: @ 0x085C941A
	.string "{ID}{NO}{EOS}"
	.if (. - gText_IDNumber2) > 0x5
	.error "gText_IDNumber2 may not grow beyond its original slot"
	.endif
	.if (. - gText_IDNumber2) < 0x5
	.space 0x5 - (. - gText_IDNumber2)
	.endif
