	@ asm/union_room.s:1382 sub_08012B78
	.globl gText_Rom_2C0EE0
gText_Rom_2C0EE0: @ 0x082C0EE0
	.string "もうしこみを\nことわり　ました\p$"
	.if (. - gText_Rom_2C0EE0) > 0x11
	.error "gText_Rom_2C0EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0EE0) < 0x11
	.space 0x11 - (. - gText_Rom_2C0EE0)
	.endif
	.space 0x3, 0x00
