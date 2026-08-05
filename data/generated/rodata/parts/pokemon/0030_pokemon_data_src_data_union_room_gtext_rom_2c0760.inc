	@ src/data/union_room.h:17 sJPText_HoldPokemonJump
	.globl gText_Rom_2C0760
gText_Rom_2C0760: @ 0x082C0760
	.string "なわとびを かいさいする$"
	.if (. - gText_Rom_2C0760) > 0xd
	.error "gText_Rom_2C0760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0760) < 0xd
	.space 0xd - (. - gText_Rom_2C0760)
	.endif
	.space 0x3, 0x00
