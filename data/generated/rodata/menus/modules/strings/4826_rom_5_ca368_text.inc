	@ src/strings.c:367 gText_Register
	.globl gText_Rom_5CA368
gText_Rom_5CA368: @ 0x085CA368
	.string "とうろくする$"
	.if (. - gText_Rom_5CA368) > 0x7
	.error "gText_Rom_5CA368 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA368) < 0x7
	.space 0x7 - (. - gText_Rom_5CA368)
	.endif
