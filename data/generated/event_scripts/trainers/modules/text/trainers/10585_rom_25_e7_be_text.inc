	@ data/text/trainers.inc:1967 Route119_Text_DougDefeat (+1 aliases)
	.globl gText_Rom_25E7BE
gText_Rom_25E7BE: @ 0x0825E7BE
	.string "すばらしい たたかい だったな!$"
	.if (. - gText_Rom_25E7BE) > 0x11
	.error "gText_Rom_25E7BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E7BE) < 0x11
	.space 0x11 - (. - gText_Rom_25E7BE)
	.endif
