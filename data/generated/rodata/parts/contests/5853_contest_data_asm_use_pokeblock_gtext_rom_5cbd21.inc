	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD21
gText_Rom_5CBD21: @ 0x085CBD21
	.string "かっこよさ$"
	.if (. - gText_Rom_5CBD21) > 0x6
	.error "gText_Rom_5CBD21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD21) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD21)
	.endif
