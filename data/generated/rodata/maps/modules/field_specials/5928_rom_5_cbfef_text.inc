	@ src/field_specials.c:2531 field_specials_line_2531
	.globl gText_Rom_5CBFEF
gText_Rom_5CBFEF: @ 0x085CBFEF
	.string "  0てん$"
	.if (. - gText_Rom_5CBFEF) > 0x6
	.error "gText_Rom_5CBFEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFEF) < 0x6
	.space 0x6 - (. - gText_Rom_5CBFEF)
	.endif
