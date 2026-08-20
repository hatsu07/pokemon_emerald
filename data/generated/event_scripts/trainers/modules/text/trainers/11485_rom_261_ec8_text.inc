	@ data/text/trainers.inc:3302 Route133_Text_LindaIntro (+1 aliases)
	.globl gText_Rom_261EC8
gText_Rom_261EC8: @ 0x08261EC8
	.string "いらっしゃーい!\nおまち してましたわ!{EOS}"
	.if (. - gText_Rom_261EC8) > 0x15
	.error "gText_Rom_261EC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261EC8) < 0x15
	.space 0x15 - (. - gText_Rom_261EC8)
	.endif
