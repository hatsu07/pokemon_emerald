	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1ED8
gText_Rom_2C1ED8: @ 0x082C1ED8
	.string "ブロンズカードだ！$"
	.if (. - gText_Rom_2C1ED8) > 0xa
	.error "gText_Rom_2C1ED8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1ED8) < 0xa
	.space 0xa - (. - gText_Rom_2C1ED8)
	.endif
	.space 0x2, 0x00
