	@ data/text/apprentice.inc:334 gText_ApprenticeHoldNothing6
	.globl gText_Rom_26F2A8
gText_Rom_26F2A8: @ 0x0826F2A8
	.string "ふーん? {STR_VAR_1}は\nもちものは いらないって ことかな?"
	.byte EOS
	.if (. - gText_Rom_26F2A8) > 0x1c
	.error "gText_Rom_26F2A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F2A8) < 0x1c
	.space 0x1c - (. - gText_Rom_26F2A8)
	.endif
