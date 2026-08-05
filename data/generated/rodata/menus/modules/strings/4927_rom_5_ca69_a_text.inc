	@ src/strings.c:416 gText_DelRegist
	.globl gText_Rom_5CA69A
gText_Rom_5CA69A: @ 0x085CA69A
	.string "とうろく かいじょ$"
	.if (. - gText_Rom_5CA69A) > 0xa
	.error "gText_Rom_5CA69A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA69A) < 0xa
	.space 0xa - (. - gText_Rom_5CA69A)
	.endif
