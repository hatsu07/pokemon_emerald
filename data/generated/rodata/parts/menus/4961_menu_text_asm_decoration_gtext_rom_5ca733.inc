	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+2 aliases)
	.globl gText_Rom_5CA733
gText_Rom_5CA733: @ 0x085CA733
	.string "ぬいぐるみ$"
	.if (. - gText_Rom_5CA733) > 0x6
	.error "gText_Rom_5CA733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA733) < 0x6
	.space 0x6 - (. - gText_Rom_5CA733)
	.endif
