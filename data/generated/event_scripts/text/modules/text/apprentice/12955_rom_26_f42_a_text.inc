	@ data/text/apprentice.inc:349 gText_ApprenticeHoldNothing7
	.globl gText_Rom_26F42A
gText_Rom_26F42A: @ 0x0826F42A
	.string "それは つまり…… どうぐは\nもたせなくて よろしいんですのね?"
	.byte EOS
	.if (. - gText_Rom_26F42A) > 0x21
	.error "gText_Rom_26F42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F42A) < 0x21
	.space 0x21 - (. - gText_Rom_26F42A)
	.endif
