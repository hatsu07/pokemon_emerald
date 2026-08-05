	@ data/text/apprentice.inc:439 gText_ApprenticeHoldNothing13
	.globl gText_Rom_26FD1C
gText_Rom_26FD1C: @ 0x0826FD1C
	.string "いてて…… えーっと それって\n{STR_VAR_1}には なにも もたせなくて\lいいって ことかな?"
	.byte EOS
	.if (. - gText_Rom_26FD1C) > 0x2b
	.error "gText_Rom_26FD1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FD1C) < 0x2b
	.space 0x2b - (. - gText_Rom_26FD1C)
	.endif
