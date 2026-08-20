	@ data/text/trainers.inc:2882 Route126_Text_SiennaIntro (+1 aliases)
	.globl gText_Rom_260E20
gText_Rom_260E20: @ 0x08260E20
	.string "わたしの ハートを ぶつけるわ!{EOS}"
	.if (. - gText_Rom_260E20) > 0x11
	.error "gText_Rom_260E20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260E20) < 0x11
	.space 0x11 - (. - gText_Rom_260E20)
	.endif
