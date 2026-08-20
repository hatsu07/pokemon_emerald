	@ data/text/trainers.inc:2012 Route119_Text_CatherineIntro (+1 aliases)
	.globl gText_Rom_25E996
gText_Rom_25E996: @ 0x0825E996
	.string "あら あなた……\nぼうけんを している わりには\lずいぶん みがるな かっこうね!{EOS}"
	.if (. - gText_Rom_25E996) > 0x2a
	.error "gText_Rom_25E996 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E996) < 0x2a
	.space 0x2a - (. - gText_Rom_25E996)
	.endif
