	@ asm/mystery_gift.s:2502 task00_mystery_gift
	.globl gText_Rom_2C2994
gText_Rom_2C2994: @ 0x082C2994
	.string "ふしぎなカード　を\nおくって　います,,,$"
	.if (. - gText_Rom_2C2994) > 0x16
	.error "gText_Rom_2C2994 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2994) < 0x16
	.space 0x16 - (. - gText_Rom_2C2994)
	.endif
	.space 0x2, 0x00
