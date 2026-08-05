	@ data/text/trainers.inc:1385 Route114_Text_TyraDefeat (+1 aliases)
	.globl gText_Rom_25CF2D
gText_Rom_25CF2D: @ 0x0825CF2D
	.string "カヨ『すごい たたかいかた!$"
	.if (. - gText_Rom_25CF2D) > 0xf
	.error "gText_Rom_25CF2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CF2D) < 0xf
	.space 0xf - (. - gText_Rom_25CF2D)
	.endif
