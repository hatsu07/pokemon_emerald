	@ src/use_pokeblock.c:162 sText_WontEatAnymore
	.globl gText_Rom_5CBD57
gText_Rom_5CBD57: @ 0x085CBD57
	.string "もう これいじょう たべない みたい…$"
	.if (. - gText_Rom_5CBD57) > 0x14
	.error "gText_Rom_5CBD57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD57) < 0x14
	.space 0x14 - (. - gText_Rom_5CBD57)
	.endif
