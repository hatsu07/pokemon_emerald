	@ src/strings.c:552 gText_AndImproveTheBardsSong
	.globl gText_AndImproveTheBardsSong
gText_AndImproveTheBardsSong: @ 0x085CB903
	.string "オヤジのうたを よくして あげよう!{EOS}"
	.if (. - gText_AndImproveTheBardsSong) > 0x13
	.error "gText_AndImproveTheBardsSong may not grow beyond its original slot"
	.endif
	.if (. - gText_AndImproveTheBardsSong) < 0x13
	.space 0x13 - (. - gText_AndImproveTheBardsSong)
	.endif
