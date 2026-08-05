	@ src/strings.c:287 gText_PkmnThawedOut
	.globl gText_Rom_5C9EF2
gText_Rom_5C9EF2: @ 0x085C9EF2
	.string "{STR_VAR_1}の からだの\nこおりが とけた{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9EF2) > 0x14
	.error "gText_Rom_5C9EF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9EF2) < 0x14
	.space 0x14 - (. - gText_Rom_5C9EF2)
	.endif
