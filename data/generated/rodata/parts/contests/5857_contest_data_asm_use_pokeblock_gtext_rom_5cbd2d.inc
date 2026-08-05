	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD2D
gText_Rom_5CBD2D: @ 0x085CBD2D
	.string "かわいさ$"
	.if (. - gText_Rom_5CBD2D) > 0x5
	.error "gText_Rom_5CBD2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD2D) < 0x5
	.space 0x5 - (. - gText_Rom_5CBD2D)
	.endif
