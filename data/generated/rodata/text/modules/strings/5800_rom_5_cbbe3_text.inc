	@ src/strings.c:602 gText_TheBardsSong
	.globl gText_Rom_5CBBE3
gText_Rom_5CBBE3: @ 0x085CBBE3
	.string "オヤジのうた{EOS}"
	.if (. - gText_Rom_5CBBE3) > 0x7
	.error "gText_Rom_5CBBE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBE3) < 0x7
	.space 0x7 - (. - gText_Rom_5CBBE3)
	.endif
