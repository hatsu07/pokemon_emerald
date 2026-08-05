	@ src/data/union_room.h:12 sJPText_TradePokemon
	.globl gText_Rom_2C070C
gText_Rom_2C070C: @ 0x082C070C
	.string "ポケモンこうかんを かいさいする$"
	.if (. - gText_Rom_2C070C) > 0x11
	.error "gText_Rom_2C070C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C070C) < 0x11
	.space 0x11 - (. - gText_Rom_2C070C)
	.endif
	.space 0x3, 0x00
