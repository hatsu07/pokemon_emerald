	@ data/text/trainers.inc:2408 Route123_Text_BraxtonDefeat (+1 aliases)
	.globl gText_Rom_25FA18
gText_Rom_25FA18: @ 0x0825FA18
	.string "たしかに ちからは ある!$"
	.if (. - gText_Rom_25FA18) > 0xe
	.error "gText_Rom_25FA18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA18) < 0xe
	.space 0xe - (. - gText_Rom_25FA18)
	.endif
