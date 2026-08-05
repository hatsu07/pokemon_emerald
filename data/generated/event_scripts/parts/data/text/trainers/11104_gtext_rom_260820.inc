	@ data/text/trainers.inc:2738 Route125_Text_SharonDefeat (+1 aliases)
	.globl gText_Rom_260820
gText_Rom_260820: @ 0x08260820
	.string "まけた……$"
	.if (. - gText_Rom_260820) > 0x6
	.error "gText_Rom_260820 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260820) < 0x6
	.space 0x6 - (. - gText_Rom_260820)
	.endif
