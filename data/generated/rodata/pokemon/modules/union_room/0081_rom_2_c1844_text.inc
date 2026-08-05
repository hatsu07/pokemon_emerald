	@ asm/union_room.s:7248 sub_080151E8
	.globl gText_Rom_2C1844
gText_Rom_2C1844: @ 0x082C1844
	.string "とうろく　されている　{0xFD}{0x02}\nレベル{0xFD}{0x03}を　かいじょ　しますか？$"
	.if (. - gText_Rom_2C1844) > 0x20
	.error "gText_Rom_2C1844 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1844) < 0x20
	.space 0x20 - (. - gText_Rom_2C1844)
	.endif
