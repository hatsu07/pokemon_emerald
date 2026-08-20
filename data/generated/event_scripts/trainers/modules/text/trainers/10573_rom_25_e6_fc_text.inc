	@ data/text/trainers.inc:1949 Route119_Text_DonaldDefeat (+1 aliases)
	.globl gText_Rom_25E6FC
gText_Rom_25E6FC: @ 0x0825E6FC
	.string "であわなければ よかった……{EOS}"
	.if (. - gText_Rom_25E6FC) > 0xf
	.error "gText_Rom_25E6FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E6FC) < 0xf
	.space 0xf - (. - gText_Rom_25E6FC)
	.endif
