	@ src/strings.c:250 gText_PkmnCantSwitchOut
	.globl gText_Rom_5C9B1A
gText_Rom_5C9B1A: @ 0x085C9B1A
	.string "{STR_VAR_1}を もどすことが\nできない!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9B1A) > 0x13
	.error "gText_Rom_5C9B1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9B1A) < 0x13
	.space 0x13 - (. - gText_Rom_5C9B1A)
	.endif
