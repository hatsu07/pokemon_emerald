	@ src/data/union_room.h:551 sText_WonderCards (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C2514
gText_Rom_2C2514: @ 0x082C2514
	.string "ふしぎなカード$"
	.if (. - gText_Rom_2C2514) != 0x8
	.error "gText_Rom_2C2514 must retain its original byte length"
	.endif
