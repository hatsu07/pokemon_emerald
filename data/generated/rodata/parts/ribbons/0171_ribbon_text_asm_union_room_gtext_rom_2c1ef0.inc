	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1EF0
gText_Rom_2C1EF0: @ 0x082C1EF0
	.string "シルバーカードだ！$"
	.if (. - gText_Rom_2C1EF0) > 0xa
	.error "gText_Rom_2C1EF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1EF0) < 0xa
	.space 0xa - (. - gText_Rom_2C1EF0)
	.endif
	.space 0x2, 0x00
