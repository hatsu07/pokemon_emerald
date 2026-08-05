	@ src/pokemon.c:194 pokemon_line_194
	.globl gText_Rom_5ECDB5
gText_Rom_5ECDB5: @ 0x085ECDB5
	.string "いじっぱり$"
	.if (. - gText_Rom_5ECDB5) > 0x6
	.error "gText_Rom_5ECDB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDB5) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDB5)
	.endif
