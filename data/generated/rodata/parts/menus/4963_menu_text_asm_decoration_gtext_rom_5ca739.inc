	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA739
gText_Rom_5CA739: @ 0x085CA739
	.string "クッション$"
	.if (. - gText_Rom_5CA739) > 0x6
	.error "gText_Rom_5CA739 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA739) < 0x6
	.space 0x6 - (. - gText_Rom_5CA739)
	.endif
