	@ src/data/union_room.h:548 sText_PokemonTrades
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1D94
gText_Rom_2C1D94: @ 0x082C1D94
	.string "ポケモンこうかん$"
	.if (. - gText_Rom_2C1D94) != 0x9
	.error "gText_Rom_2C1D94 must retain its original byte length"
	.endif
