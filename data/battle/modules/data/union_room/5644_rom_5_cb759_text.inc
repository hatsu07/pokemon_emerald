	@ src/data/union_room.h:88 sText_BButtonCancel (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_BButtonCancel_Copy_UnionRoom
sText_BButtonCancel_Copy_UnionRoom: @ 0x085CB759
	.string "{B_BUTTON}やめる{EOS}"
	.if (. - sText_BButtonCancel_Copy_UnionRoom) != 0x6
	.error "sText_BButtonCancel_Copy_UnionRoom must retain its original byte length"
	.endif
