	@ src/strings.c:285 gText_PkmnBurnHealed
	.globl gText_Rom_5C9EE2
gText_Rom_5C9EE2: @ 0x085C9EE2
	.string "{STR_VAR_1}の\nやけどが なおった{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9EE2) > 0x10
	.error "gText_Rom_5C9EE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9EE2) < 0x10
	.space 0x10 - (. - gText_Rom_5C9EE2)
	.endif
