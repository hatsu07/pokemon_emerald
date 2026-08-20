	@ src/data/abilities.h:280 abilities_line_280 (+1 aliases)
	.globl gText_Rom_574A3F
gText_Rom_574A3F: @ 0x08574A3F
	.string "トレース{EOS}"
	.if (. - gText_Rom_574A3F) > 0x5
	.error "gText_Rom_574A3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A3F) < 0x5
	.space 0x5 - (. - gText_Rom_574A3F)
	.endif

	@ src/data/abilities.h:98 abilities_line_98 (+1 aliases)
	.globl gText_Rom_574A44
gText_Rom_574A44: @ 0x08574A44
	.string "どんかん{EOS}"
	.if (. - gText_Rom_574A44) > 0x5
	.error "gText_Rom_574A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A44) < 0x5
	.space 0x5 - (. - gText_Rom_574A44)
	.endif

	@ src/data/abilities.h:415 abilities_line_415 (+1 aliases)
	.globl gText_Rom_574A49
gText_Rom_574A49: @ 0x08574A49
	.string "なまけ{EOS}"
	.if (. - gText_Rom_574A49) > 0x4
	.error "gText_Rom_574A49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A49) < 0x4
	.space 0x4 - (. - gText_Rom_574A49)
	.endif

	@ src/data/abilities.h:385 abilities_line_385 (+1 aliases)
	.globl gText_Rom_574A4D
gText_Rom_574A4D: @ 0x08574A4D
	.string "にげあし{EOS}"
	.if (. - gText_Rom_574A4D) > 0x5
	.error "gText_Rom_574A4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A4D) < 0x5
	.space 0x5 - (. - gText_Rom_574A4D)
	.endif

	@ src/data/abilities.h:461 abilities_line_461 (+1 aliases)
	.globl gText_Rom_574A52
gText_Rom_574A52: @ 0x08574A52
	.string "ねんちゃく{EOS}"
	.if (. - gText_Rom_574A52) > 0x6
	.error "gText_Rom_574A52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A52) < 0x6
	.space 0x6 - (. - gText_Rom_574A52)
	.endif

	@ src/data/abilities.h:106 abilities_line_106 (+1 aliases)
	.globl gText_Rom_574A58
gText_Rom_574A58: @ 0x08574A58
	.string "ノーてんき{EOS}"
	.if (. - gText_Rom_574A58) > 0x6
	.error "gText_Rom_574A58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A58) < 0x6
	.space 0x6 - (. - gText_Rom_574A58)
	.endif
