	@ data/maps/MtPyre_Summit/scripts.inc:459 MtPyre_Summit_Text_Grunt3Defeat (+1 aliases)
	.globl gText_Rom_217131
gText_Rom_217131: @ 0x08217131
	.string "ぐぐぐ……\nじゃまを するなら マグマだんに しろ……$"
	.if (. - gText_Rom_217131) > 0x1c
	.error "gText_Rom_217131 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217131) < 0x1c
	.space 0x1c - (. - gText_Rom_217131)
	.endif
