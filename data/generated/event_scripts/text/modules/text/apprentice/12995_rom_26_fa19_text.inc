	@ data/text/apprentice.inc:409 gText_ApprenticeHoldNothing11
	.globl gText_Rom_26FA19
gText_Rom_26FA19: @ 0x0826FA19
	.string "それは あれかな? {STR_VAR_1}は\nなんにも もたなくて いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26FA19) > 0x20
	.error "gText_Rom_26FA19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FA19) < 0x20
	.space 0x20 - (. - gText_Rom_26FA19)
	.endif
