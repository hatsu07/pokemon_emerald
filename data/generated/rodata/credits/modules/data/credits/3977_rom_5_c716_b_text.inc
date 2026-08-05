	@ src/data/credits.h:193 sCreditsText_AzusaTajima
	.globl gText_Rom_5C716B
gText_Rom_5C716B: @ 0x085C716B
	.string "たじま あずさ$"
	.if (. - gText_Rom_5C716B) > 0x8
	.error "gText_Rom_5C716B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C716B) < 0x8
	.space 0x8 - (. - gText_Rom_5C716B)
	.endif
