	@ src/data/union_room.h:88 sText_BButtonCancel (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C08A4
gText_Rom_2C08A4: @ 0x082C08A4
	.string "{B_BUTTON}やめる$"
	.if (. - gText_Rom_2C08A4) != 0x6
	.error "gText_Rom_2C08A4 must retain its original byte length"
	.endif
