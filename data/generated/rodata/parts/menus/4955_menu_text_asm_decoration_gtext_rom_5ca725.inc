	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA725
gText_Rom_5CA725: @ 0x085CA725
	.string "おきもの$"
	.if (. - gText_Rom_5CA725) > 0x5
	.error "gText_Rom_5CA725 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA725) < 0x5
	.space 0x5 - (. - gText_Rom_5CA725)
	.endif
