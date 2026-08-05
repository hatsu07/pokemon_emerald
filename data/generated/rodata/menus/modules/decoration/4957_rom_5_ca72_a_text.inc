	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA72A
gText_Rom_5CA72A: @ 0x085CA72A
	.string "マット$"
	.if (. - gText_Rom_5CA72A) > 0x4
	.error "gText_Rom_5CA72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA72A) < 0x4
	.space 0x4 - (. - gText_Rom_5CA72A)
	.endif
