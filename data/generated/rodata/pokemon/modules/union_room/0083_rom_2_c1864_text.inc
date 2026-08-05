	@ asm/union_room.s:7220 sub_080151E8
	.globl gText_Rom_2C1864
gText_Rom_2C1864: @ 0x082C1864
	.string "とうろく　されている　タマゴを\nかいじょ　しますか？$"
	.if (. - gText_Rom_2C1864) > 0x1b
	.error "gText_Rom_2C1864 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1864) < 0x1b
	.space 0x1b - (. - gText_Rom_2C1864)
	.endif
	.space 0x1, 0x00
