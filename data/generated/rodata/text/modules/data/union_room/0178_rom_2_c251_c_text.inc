	@ src/data/union_room.h:552 sText_WonderNews (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C251C
gText_Rom_2C251C: @ 0x082C251C
	.string "ふしぎなニュース$"
	.if (. - gText_Rom_2C251C) != 0x9
	.error "gText_Rom_2C251C must retain its original byte length"
	.endif
