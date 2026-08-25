	@ src/pokedex_plus_hgss.c:6706 pokedex_plus_hgss_line_6706 (+1 aliases)
	.globl gText_Rom_5C8BB1
gText_Rom_5C8BB1: @ 0x085C8BB1
	.string "ホウエン{EOS}"
	.if (. - gText_Rom_5C8BB1) > 0x5
	.error "gText_Rom_5C8BB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BB1) < 0x5
	.space 0x5 - (. - gText_Rom_5C8BB1)
	.endif

