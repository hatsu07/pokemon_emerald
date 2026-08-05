	@ data/text/trainers.inc:1958 Route119_Text_TaylorDefeat (+1 aliases)
	.globl gText_Rom_25E759
gText_Rom_25E759: @ 0x0825E759
	.string "キミが かっても\nぼくは まける……$"
	.if (. - gText_Rom_25E759) > 0x13
	.error "gText_Rom_25E759 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E759) < 0x13
	.space 0x13 - (. - gText_Rom_25E759)
	.endif
