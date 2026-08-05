	@ src/data/union_room.h:551 sText_WonderCards (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DAC
gText_Rom_2C1DAC: @ 0x082C1DAC
	.string "ふしぎなカード$"
	.if (. - gText_Rom_2C1DAC) != 0x8
	.error "gText_Rom_2C1DAC must retain its original byte length"
	.endif
