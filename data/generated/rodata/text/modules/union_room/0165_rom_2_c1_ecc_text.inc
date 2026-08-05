	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1ECC
gText_Rom_2C1ECC: @ 0x082C1ECC
	.string "ノーマルカードだ！$"
	.if (. - gText_Rom_2C1ECC) > 0xa
	.error "gText_Rom_2C1ECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1ECC) < 0xa
	.space 0xa - (. - gText_Rom_2C1ECC)
	.endif
	.space 0x2, 0x00
