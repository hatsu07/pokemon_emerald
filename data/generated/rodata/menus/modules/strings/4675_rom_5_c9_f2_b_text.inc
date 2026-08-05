	@ src/strings.c:290 gText_PkmnBecameHealthy
	.globl gText_Rom_5C9F2B
gText_Rom_5C9F2B: @ 0x085C9F2B
	.string "{STR_VAR_1}は\nけんこうになった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F2B) > 0x10
	.error "gText_Rom_5C9F2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F2B) < 0x10
	.space 0x10 - (. - gText_Rom_5C9F2B)
	.endif
