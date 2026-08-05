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
	.globl gUnknown_82C29AC
gUnknown_82C29AC: @ 0x082C29AC

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
