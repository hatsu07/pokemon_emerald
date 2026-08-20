	@ data/text/trainers.inc:1910 Route118_Text_DaltonDefeat (+2 aliases)
	.globl gText_Rom_25E56D
gText_Rom_25E56D: @ 0x0825E56D
	.string "ルー ルルルー{EOS}"
	.if (. - gText_Rom_25E56D) > 0x8
	.error "gText_Rom_25E56D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E56D) < 0x8
	.space 0x8 - (. - gText_Rom_25E56D)
	.endif
