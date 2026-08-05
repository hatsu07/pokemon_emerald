	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA719
gText_Rom_5CA719: @ 0x085CA719
	.string "つくえ$"
	.if (. - gText_Rom_5CA719) > 0x4
	.error "gText_Rom_5CA719 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA719) < 0x4
	.space 0x4 - (. - gText_Rom_5CA719)
	.endif
