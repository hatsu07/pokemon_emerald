	@ src/strings.c:299 gText_PkmnSnappedOutOfConfusion
	.globl gText_Rom_5C9FE7
gText_Rom_5C9FE7: @ 0x085C9FE7
	.string "{STR_VAR_1}の\nこんらんが とけた{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9FE7) > 0x10
	.error "gText_Rom_5C9FE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9FE7) < 0x10
	.space 0x10 - (. - gText_Rom_5C9FE7)
	.endif
