	@ src/pokemon.c:182 pokemon_line_182
	.globl gText_Rom_5ECDB0
gText_Rom_5ECDB0: @ 0x085ECDB0
	.string "ゆうかん$"
	.if (. - gText_Rom_5ECDB0) > 0x5
	.error "gText_Rom_5ECDB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDB0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDB0)
	.endif
