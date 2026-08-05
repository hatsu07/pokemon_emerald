	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA6AC
gText_Rom_5CA6AC: @ 0x085CA6AC
	.string "グッズを　おく$"
	.if (. - gText_Rom_5CA6AC) > 0x8
	.error "gText_Rom_5CA6AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6AC) < 0x8
	.space 0x8 - (. - gText_Rom_5CA6AC)
	.endif
