	@ data/text/trainers.inc:1892 Route118_Text_BarnyDefeat (+1 aliases)
	.globl gText_Rom_25E4AF
gText_Rom_25E4AF: @ 0x0825E4AF
	.string "そだてたはず なんだが……?{EOS}"
	.if (. - gText_Rom_25E4AF) > 0xf
	.error "gText_Rom_25E4AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E4AF) < 0xf
	.space 0xf - (. - gText_Rom_25E4AF)
	.endif
