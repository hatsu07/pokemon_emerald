	@ data/text/apprentice.inc:244 gText_ApprenticeHoldNothing0
	.globl gText_Rom_26EAF4
gText_Rom_26EAF4: @ 0x0826EAF4
	.string "えっ…… {STR_VAR_1}は\nなにも もたないほうが いいんですか?"
	.byte EOS
	.if (. - gText_Rom_26EAF4) > 0x1d
	.error "gText_Rom_26EAF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EAF4) < 0x1d
	.space 0x1d - (. - gText_Rom_26EAF4)
	.endif
