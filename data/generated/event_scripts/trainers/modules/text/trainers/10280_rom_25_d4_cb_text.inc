	@ data/text/trainers.inc:1526 Route115_Text_JaidenDefeat (+1 aliases)
	.globl gText_Rom_25D4CB
gText_Rom_25D4CB: @ 0x0825D4CB
	.string "わーん しっぱいだ!{EOS}"
	.if (. - gText_Rom_25D4CB) > 0xb
	.error "gText_Rom_25D4CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D4CB) < 0xb
	.space 0xb - (. - gText_Rom_25D4CB)
	.endif
