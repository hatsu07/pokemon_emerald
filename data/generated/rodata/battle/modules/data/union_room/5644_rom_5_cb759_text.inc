	@ src/data/union_room.h:88 sText_BButtonCancel (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB759
gText_Rom_5CB759: @ 0x085CB759
	.string "{B_BUTTON}やめる$"
	.if (. - gText_Rom_5CB759) != 0x6
	.error "gText_Rom_5CB759 must retain its original byte length"
	.endif
