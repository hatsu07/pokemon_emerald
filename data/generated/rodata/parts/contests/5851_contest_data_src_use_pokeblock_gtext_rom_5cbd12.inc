	@ src/use_pokeblock.c:159 sText_GetsAPokeBlockQuestion
	.globl gText_Rom_5CBD12
gText_Rom_5CBD12: @ 0x085CBD12
	.string "に ポロックを あげますか?$"
	.if (. - gText_Rom_5CBD12) > 0xf
	.error "gText_Rom_5CBD12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD12) < 0xf
	.space 0xf - (. - gText_Rom_5CBD12)
	.endif
