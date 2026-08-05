	@ src/data/union_room.h:548 sText_PokemonTrades
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1D94
gText_Rom_2C1D94: @ 0x082C1D94
	.string "ポケモンこうかん$"
	.if (. - gText_Rom_2C1D94) != 0x9
	.error "gText_Rom_2C1D94 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1D98
	.set gText_Rom_2C1D98, gText_Rom_2C1D94 + 0x4
	.space 0x3, 0x00

	@ src/data/union_room.h:539 sText_Chat2 (+1 aliases)
	.globl gText_Rom_2C1DA0
gText_Rom_2C1DA0: @ 0x082C1DA0
	.string "チャット$"
	.if (. - gText_Rom_2C1DA0) > 0x5
	.error "gText_Rom_2C1DA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1DA0) < 0x5
	.space 0x5 - (. - gText_Rom_2C1DA0)
	.endif
	.space 0x3, 0x00
