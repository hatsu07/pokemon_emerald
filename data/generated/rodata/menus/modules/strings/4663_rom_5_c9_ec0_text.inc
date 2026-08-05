	@ src/strings.c:283 gText_PkmnCuredOfParalysis
	.globl gText_Rom_5C9EC0
gText_Rom_5C9EC0: @ 0x085C9EC0
	.string "{STR_VAR_1}の からだの\nしびれが とれた{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9EC0) > 0x14
	.error "gText_Rom_5C9EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9EC0) < 0x14
	.space 0x14 - (. - gText_Rom_5C9EC0)
	.endif
