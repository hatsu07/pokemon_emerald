	@ src/strings.c:598 gText_Profile
	.globl gText_Rom_5CBBB7
gText_Rom_5CBBB7: @ 0x085CBBB7
	.string "プロフィール$"
	.if (. - gText_Rom_5CBBB7) > 0x7
	.error "gText_Rom_5CBBB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBB7) < 0x7
	.space 0x7 - (. - gText_Rom_5CBBB7)
	.endif
