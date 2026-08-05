	@ src/strings.c:300 gText_PkmnGotOverInfatuation
	.globl gText_Rom_5C9FF7
gText_Rom_5C9FF7: @ 0x085C9FF7
	.string "{STR_VAR_1}の\nメロメロが とけた{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9FF7) > 0x10
	.error "gText_Rom_5C9FF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9FF7) < 0x10
	.space 0x10 - (. - gText_Rom_5C9FF7)
	.endif
