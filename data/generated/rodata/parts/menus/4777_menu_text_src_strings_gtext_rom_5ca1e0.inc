	@ src/strings.c:345 gText_Learned
	.globl gText_Rom_5CA1E0
gText_Rom_5CA1E0: @ 0x085CA1E0
	.string "もうおぼえてる$"
	.if (. - gText_Rom_5CA1E0) > 0x8
	.error "gText_Rom_5CA1E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1E0) < 0x8
	.space 0x8 - (. - gText_Rom_5CA1E0)
	.endif
