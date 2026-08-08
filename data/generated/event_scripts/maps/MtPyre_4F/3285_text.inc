	@ data/maps/MtPyre_4F/scripts.inc:15 MtPyre_5F_Text_AtsushiDefeat (+1 aliases)
	.globl gText_Rom_2168BC
gText_Rom_2168BC: @ 0x082168BC
	.string "おししょうさま……\nすんません……$"
	.if (. - gText_Rom_2168BC) > 0x12
	.error "gText_Rom_2168BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2168BC) < 0x12
	.space 0x12 - (. - gText_Rom_2168BC)
	.endif
