	@ src/data/union_room.h:555 sText_BerryPicking
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DD8
gText_Rom_2C1DD8: @ 0x082C1DD8
	.string "きのみどり$"
	.if (. - gText_Rom_2C1DD8) != 0x6
	.error "gText_Rom_2C1DD8 must retain its original byte length"
	.endif
