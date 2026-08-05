	@ data/maps/MtChimney/scripts.inc:697 MtChimney_Text_MagmaOutnumbersUs
	.globl gText_Rom_21566C
gText_Rom_21566C: @ 0x0821566C
	.string "くそう マグマだんが おおすぎる……\nこのままでは まずいぞ!$"
	.if (. - gText_Rom_21566C) > 0x20
	.error "gText_Rom_21566C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21566C) < 0x20
	.space 0x20 - (. - gText_Rom_21566C)
	.endif
