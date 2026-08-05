	@ data/text/trainers.inc:1880 Route118_Text_ChesterIntro (+1 aliases)
	.globl gText_Rom_25E448
gText_Rom_25E448: @ 0x0825E448
	.string "はばたけ!\nおいらの とりポケモン!$"
	.if (. - gText_Rom_25E448) > 0x13
	.error "gText_Rom_25E448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E448) < 0x13
	.space 0x13 - (. - gText_Rom_25E448)
	.endif
