	@ src/strings.c:602 gText_TheBardsSong
	.globl gText_TheBardsSong
gText_TheBardsSong: @ 0x085CBBE3
	.string "オヤジのうた{EOS}"
	.if (. - gText_TheBardsSong) > 0x7
	.error "gText_TheBardsSong may not grow beyond its original slot"
	.endif
	.if (. - gText_TheBardsSong) < 0x7
	.space 0x7 - (. - gText_TheBardsSong)
	.endif
