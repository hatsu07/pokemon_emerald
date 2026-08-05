	@ asm/mystery_gift.s:2512 task00_mystery_gift
	.globl gText_Rom_2C29AC
gText_Rom_2C29AC: @ 0x082C29AC
	.string "ニュースを\nおくって　います,,,$"
	.if (. - gText_Rom_2C29AC) > 0x12
	.error "gText_Rom_2C29AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C29AC) < 0x12
	.space 0x12 - (. - gText_Rom_2C29AC)
	.endif
	.space 0x2, 0x00
