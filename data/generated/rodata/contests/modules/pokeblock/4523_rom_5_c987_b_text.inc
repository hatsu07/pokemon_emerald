	@ src/pokeblock.c:136 sText_Var1ThrownAway
	.globl gText_Rom_5C987B
gText_Rom_5C987B: @ 0x085C987B
	.string "{STR_VAR_1}を\nすてました$"
	.if (. - gText_Rom_5C987B) > 0xa
	.error "gText_Rom_5C987B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C987B) < 0xa
	.space 0xa - (. - gText_Rom_5C987B)
	.endif
