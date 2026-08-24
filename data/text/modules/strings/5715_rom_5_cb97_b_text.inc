	@ src/strings.c:560 gText_TheBardsSong2
	.globl gText_TheBardsSong2
gText_TheBardsSong2: @ 0x085CB97B
	.string "あたらしい うたは{EOS}"
	.if (. - gText_TheBardsSong2) > 0xa
	.error "gText_TheBardsSong2 may not grow beyond its original slot"
	.endif
	.if (. - gText_TheBardsSong2) < 0xa
	.space 0xa - (. - gText_TheBardsSong2)
	.endif
