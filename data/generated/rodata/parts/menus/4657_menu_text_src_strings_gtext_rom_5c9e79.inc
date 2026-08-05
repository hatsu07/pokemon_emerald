	@ src/strings.c:280 gText_PkmnAlreadyKnows
	.globl gText_Rom_5C9E79
gText_Rom_5C9E79: @ 0x085C9E79
	.string "{STR_VAR_1}は すでに\n{STR_VAR_2}を おぼえています{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9E79) > 0x16
	.error "gText_Rom_5C9E79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9E79) < 0x16
	.space 0x16 - (. - gText_Rom_5C9E79)
	.endif
