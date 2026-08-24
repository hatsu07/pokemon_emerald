	@ src/strings.c:367 gText_Register
	.globl gText_Register
gText_Register: @ 0x085CA368
	.string "とうろくする{EOS}"
	.if (. - gText_Register) > 0x7
	.error "gText_Register may not grow beyond its original slot"
	.endif
	.if (. - gText_Register) < 0x7
	.space 0x7 - (. - gText_Register)
	.endif
