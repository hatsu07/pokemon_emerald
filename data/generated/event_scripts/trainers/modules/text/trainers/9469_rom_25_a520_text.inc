	@ data/text/trainers.inc:359 Route105_Text_AndresRematchIntro (+1 aliases)
	.globl gText_Rom_25A520
gText_Rom_25A520: @ 0x0825A520
	.string "しょうぶは よわいと いっているのに……\nわし なんかで いいのか?{EOS}"
	.if (. - gText_Rom_25A520) > 0x23
	.error "gText_Rom_25A520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A520) < 0x23
	.space 0x23 - (. - gText_Rom_25A520)
	.endif
