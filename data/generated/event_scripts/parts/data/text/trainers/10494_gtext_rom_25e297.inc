	@ data/text/trainers.inc:1835 Route117_Text_BrandiDefeat (+1 aliases)
	.globl gText_Rom_25E297
gText_Rom_25E297: @ 0x0825E297
	.string "おどろいたわ$"
	.if (. - gText_Rom_25E297) > 0x7
	.error "gText_Rom_25E297 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E297) < 0x7
	.space 0x7 - (. - gText_Rom_25E297)
	.endif
