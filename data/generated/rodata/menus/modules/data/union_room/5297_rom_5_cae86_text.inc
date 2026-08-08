	@ src/data/union_room.h:555 sText_BerryPicking
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAE86
gText_Rom_5CAE86: @ 0x085CAE86
	.string "きのみどり$"
	.if (. - gText_Rom_5CAE86) != 0x6
	.error "gText_Rom_5CAE86 must retain its original byte length"
	.endif
