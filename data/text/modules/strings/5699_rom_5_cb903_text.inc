	@ src/strings.c:552 gText_AndImproveTheBardsSong
	.globl gText_Rom_5CB903
gText_Rom_5CB903: @ 0x085CB903
	.string "オヤジのうたを よくして あげよう!{EOS}"
	.if (. - gText_Rom_5CB903) > 0x13
	.error "gText_Rom_5CB903 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB903) < 0x13
	.space 0x13 - (. - gText_Rom_5CB903)
	.endif
