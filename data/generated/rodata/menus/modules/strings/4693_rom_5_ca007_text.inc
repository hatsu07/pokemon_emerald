	@ src/strings.c:302 gText_ThrowAwayItem
	.globl gText_Rom_5CA007
gText_Rom_5CA007: @ 0x085CA007
	.string "{STR_VAR_1}を\nすてても よろしいですか$"
	.if (. - gText_Rom_5CA007) > 0x11
	.error "gText_Rom_5CA007 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA007) < 0x11
	.space 0x11 - (. - gText_Rom_5CA007)
	.endif
