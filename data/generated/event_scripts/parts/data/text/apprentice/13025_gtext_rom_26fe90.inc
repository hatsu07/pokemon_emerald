	@ data/text/apprentice.inc:454 gText_ApprenticeHoldNothing14
	.globl gText_Rom_26FE90
gText_Rom_26FE90: @ 0x0826FE90
	.string "じゃ…… {STR_VAR_1}は なにも\nもたない ほうが いいの かな……?"
	.byte EOS
	.if (. - gText_Rom_26FE90) > 0x20
	.error "gText_Rom_26FE90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FE90) < 0x20
	.space 0x20 - (. - gText_Rom_26FE90)
	.endif
