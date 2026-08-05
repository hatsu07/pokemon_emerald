	@ src/data/union_room.h:88 sText_BButtonCancel (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C19C6
gText_Rom_2C19C6: @ 0x082C19C6
	.string "{B_BUTTON}やめる$"
	.if (. - gText_Rom_2C19C6) != 0x6
	.error "gText_Rom_2C19C6 must retain its original byte length"
	.endif
