	@ data/text/trainers.inc:3128 Route130_Text_SantiagoDefeat (+1 aliases)
	.globl gText_Rom_261765
gText_Rom_261765: @ 0x08261765
	.string "へいわボケ してて まけました!$"
	.if (. - gText_Rom_261765) > 0x11
	.error "gText_Rom_261765 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261765) < 0x11
	.space 0x11 - (. - gText_Rom_261765)
	.endif
