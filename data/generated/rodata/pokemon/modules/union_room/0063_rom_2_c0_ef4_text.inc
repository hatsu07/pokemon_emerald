	@ asm/union_room.s:1388 sub_08012B78
	.globl gText_Rom_2C0EF4
gText_Rom_2C0EF4: @ 0x082C0EF4
	.string "おさそいを\nことわり　ました\p$"
	.if (. - gText_Rom_2C0EF4) > 0x10
	.error "gText_Rom_2C0EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0EF4) < 0x10
	.space 0x10 - (. - gText_Rom_2C0EF4)
	.endif
