	@ src/pokeblock.c:135 sText_ThrowAwayVar1
	.globl gText_Rom_5C9869
gText_Rom_5C9869: @ 0x085C9869
	.string "{STR_VAR_1}を\nすてても よろしいですか?$"
	.if (. - gText_Rom_5C9869) > 0x12
	.error "gText_Rom_5C9869 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9869) < 0x12
	.space 0x12 - (. - gText_Rom_5C9869)
	.endif
