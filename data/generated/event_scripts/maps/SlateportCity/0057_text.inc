	@ data/maps/SlateportCity/scripts.inc:1058 SlateportCity_Text_SaysSomethingLikeSeaIsEndless
	.globl gText_Rom_1DCEA7
gText_Rom_1DCEA7: @ 0x081DCEA7
	.string "えーと……\p『てしない それは の の』\p……って かいて あるぜ!$"
	.if (. - gText_Rom_1DCEA7) > 0x23
	.error "gText_Rom_1DCEA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCEA7) < 0x23
	.space 0x23 - (. - gText_Rom_1DCEA7)
	.endif
