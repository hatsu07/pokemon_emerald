	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem
	.globl gText_Rom_5CA71D
gText_Rom_5CA71D: @ 0x085CA71D
	.string "いす$"
	.if (. - gText_Rom_5CA71D) > 0x3
	.error "gText_Rom_5CA71D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA71D) < 0x3
	.space 0x3 - (. - gText_Rom_5CA71D)
	.endif
