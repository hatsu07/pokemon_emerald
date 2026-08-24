	@ src/data/union_room.h:555 sText_BerryPicking
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_BerryPicking_Copy_UnionRoom
sText_BerryPicking_Copy_UnionRoom: @ 0x085CAE86
	.string "きのみどり{EOS}"
	.if (. - sText_BerryPicking_Copy_UnionRoom) != 0x6
	.error "sText_BerryPicking_Copy_UnionRoom must retain its original byte length"
	.endif
