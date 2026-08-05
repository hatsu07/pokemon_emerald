	@ src/strings.c:352 gText_ReturnToWaitingRoom
	.globl gText_Rom_5CA229
gText_Rom_5CA229: @ 0x085CA229
	.string "ひかえしつに もどりますか?$"
	.if (. - gText_Rom_5CA229) > 0xf
	.error "gText_Rom_5CA229 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA229) < 0xf
	.space 0xf - (. - gText_Rom_5CA229)
	.endif
