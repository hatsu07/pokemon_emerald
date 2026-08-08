	@ data/text/trainers.inc:1289 Route114_Text_LennyDefeat (+1 aliases)
	.globl gText_Rom_25CB08
gText_Rom_25CB08: @ 0x0825CB08
	.string "やっほーっ!$"
	.if (. - gText_Rom_25CB08) > 0x7
	.error "gText_Rom_25CB08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB08) < 0x7
	.space 0x7 - (. - gText_Rom_25CB08)
	.endif
