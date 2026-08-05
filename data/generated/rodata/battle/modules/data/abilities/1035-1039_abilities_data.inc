	@ src/data/abilities.h:451 abilities_line_451 (+1 aliases)
	.globl gText_Rom_574A25
gText_Rom_574A25: @ 0x08574A25
	.string "てんきや$"
	.if (. - gText_Rom_574A25) > 0x5
	.error "gText_Rom_574A25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A25) < 0x5
	.space 0x5 - (. - gText_Rom_574A25)
	.endif

	@ src/data/abilities.h:251 abilities_line_251 (+1 aliases)
	.globl gText_Rom_574A2A
gText_Rom_574A2A: @ 0x08574A2A
	.string "てんのめぐみ$"
	.if (. - gText_Rom_574A2A) > 0x7
	.error "gText_Rom_574A2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A2A) < 0x7
	.space 0x7 - (. - gText_Rom_574A2A)
	.endif
	@ Decoded text from ROM range: offset=0x574A31, size=0x3
	.string "どく$"

	@ src/data/abilities.h:296 abilities_line_296 (+1 aliases)
	.globl gText_Rom_574A34
gText_Rom_574A34: @ 0x08574A34
	.string "どくのトゲ$"
	.if (. - gText_Rom_574A34) > 0x6
	.error "gText_Rom_574A34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A34) < 0x6
	.space 0x6 - (. - gText_Rom_574A34)
	.endif
