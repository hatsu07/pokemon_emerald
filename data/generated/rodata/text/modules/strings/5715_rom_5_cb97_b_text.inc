	@ src/strings.c:560 gText_TheBardsSong2
	.globl gText_Rom_5CB97B
gText_Rom_5CB97B: @ 0x085CB97B
	.string "あたらしい うたは{EOS}"
	.if (. - gText_Rom_5CB97B) > 0xa
	.error "gText_Rom_5CB97B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB97B) < 0xa
	.space 0xa - (. - gText_Rom_5CB97B)
	.endif
