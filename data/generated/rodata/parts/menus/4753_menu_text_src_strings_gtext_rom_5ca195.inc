	@ src/strings.c:334 gText_AlreadyHoldingOne
	.globl gText_Rom_5CA195
gText_Rom_5CA195: @ 0x085CA195
	.string "{STR_VAR_1}は\n{STR_VAR_2}を もっています$"
	.if (. - gText_Rom_5CA195) > 0xf
	.error "gText_Rom_5CA195 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA195) < 0xf
	.space 0xf - (. - gText_Rom_5CA195)
	.endif
