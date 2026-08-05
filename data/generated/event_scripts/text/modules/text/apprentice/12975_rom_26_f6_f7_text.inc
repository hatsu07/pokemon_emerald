	@ data/text/apprentice.inc:379 gText_ApprenticeHoldNothing9
	.globl gText_Rom_26F6F7
gText_Rom_26F6F7: @ 0x0826F6F7
	.string "おっと それは\n{STR_VAR_1}は なにも もたせずとも\lかてる っていう こと なのかな?"
	.byte EOS
	.if (. - gText_Rom_26F6F7) > 0x29
	.error "gText_Rom_26F6F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F6F7) < 0x29
	.space 0x29 - (. - gText_Rom_26F6F7)
	.endif
