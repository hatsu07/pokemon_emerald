	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1EFC
gText_Rom_2C1EFC: @ 0x082C1EFC
	.string "ゴールドカードだ！$"
	.if (. - gText_Rom_2C1EFC) > 0xa
	.error "gText_Rom_2C1EFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1EFC) < 0xa
	.space 0xa - (. - gText_Rom_2C1EFC)
	.endif
	.space 0x2, 0x00
