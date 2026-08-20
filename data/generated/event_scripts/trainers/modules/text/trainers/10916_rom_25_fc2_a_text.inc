	@ data/text/trainers.inc:2459 Route123_Text_JackiRematchDefeat (+1 aliases)
	.globl gText_Rom_25FC2A
gText_Rom_25FC2A: @ 0x0825FC2A
	.string "すごいわ!{EOS}"
	.if (. - gText_Rom_25FC2A) > 0x6
	.error "gText_Rom_25FC2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FC2A) < 0x6
	.space 0x6 - (. - gText_Rom_25FC2A)
	.endif
