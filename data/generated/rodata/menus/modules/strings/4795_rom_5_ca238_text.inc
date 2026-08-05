	@ src/strings.c:353 gText_CancelChallenge
	.globl gText_Rom_5CA238
gText_Rom_5CA238: @ 0x085CA238
	.string "ちょうせんを やめますか?$"
	.if (. - gText_Rom_5CA238) > 0xe
	.error "gText_Rom_5CA238 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA238) < 0xe
	.space 0xe - (. - gText_Rom_5CA238)
	.endif
