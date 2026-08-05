	@ asm/union_room.s:11199 sub_08017CDC
	.globl gText_Rom_2C1EE4
gText_Rom_2C1EE4: @ 0x082C1EE4
	.string "カッパーカードだ！$"
	.if (. - gText_Rom_2C1EE4) > 0xa
	.error "gText_Rom_2C1EE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1EE4) < 0xa
	.space 0xa - (. - gText_Rom_2C1EE4)
	.endif
	.space 0x2, 0x00
