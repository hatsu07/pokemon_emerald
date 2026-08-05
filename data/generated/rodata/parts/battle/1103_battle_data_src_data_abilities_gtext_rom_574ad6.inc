	@ src/data/abilities.h:444 abilities_line_444 (+1 aliases)
	.globl gText_Rom_574AD6
gText_Rom_574AD6: @ 0x08574AD6
	.string "マイナス$"
	.if (. - gText_Rom_574AD6) > 0x5
	.error "gText_Rom_574AD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AD6) < 0x5
	.space 0x5 - (. - gText_Rom_574AD6)
	.endif
