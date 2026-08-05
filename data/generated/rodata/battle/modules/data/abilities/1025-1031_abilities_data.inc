	@ src/data/abilities.h:469 abilities_line_469 (+1 aliases)
	.globl gText_Rom_574A0D
gText_Rom_574A0D: @ 0x08574A0D
	.string "だっぴ$"
	.if (. - gText_Rom_574A0D) > 0x4
	.error "gText_Rom_574A0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A0D) < 0x4
	.space 0x4 - (. - gText_Rom_574A0D)
	.endif

	@ src/data/abilities.h:289 abilities_line_289 (+1 aliases)
	.globl gText_Rom_574A11
gText_Rom_574A11: @ 0x08574A11
	.string "ちからもち$"
	.if (. - gText_Rom_574A11) > 0x6
	.error "gText_Rom_574A11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A11) < 0x6
	.space 0x6 - (. - gText_Rom_574A11)
	.endif

	@ src/data/abilities.h:82 abilities_line_82 (+1 aliases)
	.globl gText_Rom_574A17
gText_Rom_574A17: @ 0x08574A17
	.string "ちくでん$"
	.if (. - gText_Rom_574A17) > 0x5
	.error "gText_Rom_574A17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A17) < 0x5
	.space 0x5 - (. - gText_Rom_574A17)
	.endif

	@ src/data/abilities.h:90 abilities_line_90 (+1 aliases)
	.globl gText_Rom_574A1C
gText_Rom_574A1C: @ 0x08574A1C
	.string "ちょすい$"
	.if (. - gText_Rom_574A1C) > 0x5
	.error "gText_Rom_574A1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A1C) < 0x5
	.space 0x5 - (. - gText_Rom_574A1C)
	.endif
