	@ src/data/abilities.h:363 abilities_line_363 (+1 aliases)
	.globl gText_Rom_5748ED
gText_Rom_5748ED: @ 0x085748ED
	.string "あついしぼう$"
	.if (. - gText_Rom_5748ED) > 0x7
	.error "gText_Rom_5748ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748ED) < 0x7
	.space 0x7 - (. - gText_Rom_5748ED)
	.endif
