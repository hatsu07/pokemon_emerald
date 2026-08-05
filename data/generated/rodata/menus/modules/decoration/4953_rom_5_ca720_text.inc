	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem
	.globl gText_Rom_5CA720
gText_Rom_5CA720: @ 0x085CA720
	.string "はちうえ$"
	.if (. - gText_Rom_5CA720) > 0x5
	.error "gText_Rom_5CA720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA720) < 0x5
	.space 0x5 - (. - gText_Rom_5CA720)
	.endif
