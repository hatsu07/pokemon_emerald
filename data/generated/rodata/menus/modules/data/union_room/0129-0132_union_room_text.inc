	@ src/data/union_room.h:551 sText_WonderCards (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DAC
gText_Rom_2C1DAC: @ 0x082C1DAC
	.string "ふしぎなカード$"
	.if (. - gText_Rom_2C1DAC) != 0x8
	.error "gText_Rom_2C1DAC must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DB0
	.set gText_Rom_2C1DB0, gText_Rom_2C1DAC + 0x4

	@ src/data/union_room.h:552 sText_WonderNews (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DB4
gText_Rom_2C1DB4: @ 0x082C1DB4
	.string "ふしぎなニュース$"
	.if (. - gText_Rom_2C1DB4) != 0x9
	.error "gText_Rom_2C1DB4 must retain its original byte length"
	.endif
