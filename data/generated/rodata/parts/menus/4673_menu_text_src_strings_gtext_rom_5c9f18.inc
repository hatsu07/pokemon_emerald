	@ src/strings.c:289 gText_PkmnRegainhedHealth
	.globl gText_Rom_5C9F18
gText_Rom_5C9F18: @ 0x085C9F18
	.string "{STR_VAR_1}は\nげんきを とりもどした!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F18) > 0x13
	.error "gText_Rom_5C9F18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F18) < 0x13
	.space 0x13 - (. - gText_Rom_5C9F18)
	.endif
