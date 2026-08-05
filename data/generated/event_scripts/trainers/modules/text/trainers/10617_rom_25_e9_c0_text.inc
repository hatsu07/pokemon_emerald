	@ data/text/trainers.inc:2015 Route119_Text_CatherineDefeat (+1 aliases)
	.globl gText_Rom_25E9C0
gText_Rom_25E9C0: @ 0x0825E9C0
	.string "じゅんび ぶそくは じこの もと……$"
	.if (. - gText_Rom_25E9C0) > 0x13
	.error "gText_Rom_25E9C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E9C0) < 0x13
	.space 0x13 - (. - gText_Rom_25E9C0)
	.endif
