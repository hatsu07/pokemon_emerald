	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_5CBEC7
gText_Rom_5CBEC7: @ 0x085CBEC7
	.string "アジト$"
	.if (. - gText_Rom_5CBEC7) > 0x4
	.error "gText_Rom_5CBEC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBEC7) < 0x4
	.space 0x4 - (. - gText_Rom_5CBEC7)
	.endif
