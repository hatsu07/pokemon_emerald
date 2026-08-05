	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA72E
gText_Rom_5CA72E: @ 0x085CA72E
	.string "ポスター$"
	.if (. - gText_Rom_5CA72E) > 0x5
	.error "gText_Rom_5CA72E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA72E) < 0x5
	.space 0x5 - (. - gText_Rom_5CA72E)
	.endif
