	@ data/text/trainers.inc:914 Route111_Text_HeidiDefeat (+1 aliases)
	.globl gText_Rom_25BB23
gText_Rom_25BB23: @ 0x0825BB23
	.string "いやーん いじわるー!$"
	.if (. - gText_Rom_25BB23) > 0xc
	.error "gText_Rom_25BB23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BB23) < 0xc
	.space 0xc - (. - gText_Rom_25BB23)
	.endif
