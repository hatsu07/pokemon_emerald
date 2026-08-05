	@ src/data/abilities.h:196 abilities_line_196 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574A95
gText_Rom_574A95: @ 0x08574A95
	.string "ふしぎなまもり$"
	.if (. - gText_Rom_574A95) != 0x8
	.error "gText_Rom_574A95 must retain its original byte length"
	.endif
