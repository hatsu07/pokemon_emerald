	@ src/strings.c:640 gText_Hideout
	.globl gText_Hideout
gText_Hideout: @ 0x085CBEC7
	.string "アジト{EOS}"
	.if (. - gText_Hideout) > 0x4
	.error "gText_Hideout may not grow beyond its original slot"
	.endif
	.if (. - gText_Hideout) < 0x4
	.space 0x4 - (. - gText_Hideout)
	.endif
