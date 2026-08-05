	@ src/strings.c:317 gText_DoWhatWithItem
	.globl gText_Rom_5CA0D6
gText_Rom_5CA0D6: @ 0x085CA0D6
	.string "もちものを どうしますか?$"
	.if (. - gText_Rom_5CA0D6) > 0xe
	.error "gText_Rom_5CA0D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0D6) < 0xe
	.space 0xe - (. - gText_Rom_5CA0D6)
	.endif
