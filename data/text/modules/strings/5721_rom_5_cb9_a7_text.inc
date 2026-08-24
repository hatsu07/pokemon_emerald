	@ src/strings.c:563 gText_TheTrendySaying
	.globl gText_TheTrendySaying
gText_TheTrendySaying: @ 0x085CB9A7
	.string "はやらせたい ことばは{EOS}"
	.if (. - gText_TheTrendySaying) > 0xc
	.error "gText_TheTrendySaying may not grow beyond its original slot"
	.endif
	.if (. - gText_TheTrendySaying) < 0xc
	.space 0xc - (. - gText_TheTrendySaying)
	.endif
