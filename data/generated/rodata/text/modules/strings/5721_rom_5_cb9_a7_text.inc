	@ src/strings.c:563 gText_TheTrendySaying
	.globl gText_Rom_5CB9A7
gText_Rom_5CB9A7: @ 0x085CB9A7
	.string "はやらせたい ことばは{EOS}"
	.if (. - gText_Rom_5CB9A7) > 0xc
	.error "gText_Rom_5CB9A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9A7) < 0xc
	.space 0xc - (. - gText_Rom_5CB9A7)
	.endif
