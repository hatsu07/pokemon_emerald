	@ data/text/trainers.inc:2036 Route119_Text_HughDefeat (+1 aliases)
	.globl gText_Rom_25EAD2
gText_Rom_25EAD2: @ 0x0825EAD2
	.string "まけたーっ!$"
	.if (. - gText_Rom_25EAD2) > 0x7
	.error "gText_Rom_25EAD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EAD2) < 0x7
	.space 0x7 - (. - gText_Rom_25EAD2)
	.endif
