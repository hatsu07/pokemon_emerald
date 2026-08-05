	@ src/strings.c:97 gText_DexSearchColorBrown
	.globl gText_Rom_5C9191
gText_Rom_5C9191: @ 0x085C9191
	.string "ちゃいろ$"
	.if (. - gText_Rom_5C9191) > 0x5
	.error "gText_Rom_5C9191 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9191) < 0x5
	.space 0x5 - (. - gText_Rom_5C9191)
	.endif
