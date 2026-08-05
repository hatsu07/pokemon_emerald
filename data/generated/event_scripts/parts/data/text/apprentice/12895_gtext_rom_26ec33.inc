	@ data/text/apprentice.inc:259 gText_ApprenticeHoldNothing1
	.globl gText_Rom_26EC33
gText_Rom_26EC33: @ 0x0826EC33
	.string "えっ {STR_VAR_1}は\nなにも もたせなくて いいって こと?"
	.byte EOS
	.if (. - gText_Rom_26EC33) > 0x1b
	.error "gText_Rom_26EC33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC33) < 0x1b
	.space 0x1b - (. - gText_Rom_26EC33)
	.endif
