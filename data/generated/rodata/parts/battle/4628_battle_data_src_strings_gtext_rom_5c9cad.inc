	@ src/strings.c:265 gText_PkmnNotHolding
	.globl gText_Rom_5C9CAD
gText_Rom_5C9CAD: @ 0x085C9CAD
	.string "{STR_VAR_1}は なにも\nどうぐを もって いません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9CAD) > 0x19
	.error "gText_Rom_5C9CAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9CAD) < 0x19
	.space 0x19 - (. - gText_Rom_5C9CAD)
	.endif
