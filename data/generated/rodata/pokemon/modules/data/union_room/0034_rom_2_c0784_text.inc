	@ src/data/union_room.h:19 sJPText_HoldBerryPicking
	.globl gText_Rom_2C0784
gText_Rom_2C0784: @ 0x082C0784
	.string "きのみどりを かいさいする$"
	.if (. - gText_Rom_2C0784) > 0xe
	.error "gText_Rom_2C0784 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0784) < 0xe
	.space 0xe - (. - gText_Rom_2C0784)
	.endif
	.space 0x2, 0x00
