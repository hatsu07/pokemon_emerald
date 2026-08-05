	@ src/item_use.c:88 sText_CantDismountBike
	.globl gText_Rom_5C957F
gText_Rom_5C957F: @ 0x085C957F
	.string "ここでは おりられない!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C957F) > 0xf
	.error "gText_Rom_5C957F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C957F) < 0xf
	.space 0xf - (. - gText_Rom_5C957F)
	.endif
