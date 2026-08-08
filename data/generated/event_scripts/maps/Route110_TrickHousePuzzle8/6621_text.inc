	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:36 Route110_TrickHousePuzzle8_Text_VincentDefeat (+1 aliases)
	.globl gText_Rom_24051E
gText_Rom_24051E: @ 0x0824051E
	.string "つまり キミも\nすごいって ことだよな…$"
	.if (. - gText_Rom_24051E) > 0x15
	.error "gText_Rom_24051E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24051E) < 0x15
	.space 0x15 - (. - gText_Rom_24051E)
	.endif
