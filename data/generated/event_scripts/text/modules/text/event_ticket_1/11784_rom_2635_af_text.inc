	@ data/text/event_ticket_1.inc:38 SouthernIsland_Exterior_Text_Sign
	.globl gText_Rom_2635AF
gText_Rom_2635AF: @ 0x082635AF
	.string "きおく かすみし ものは\nこころに きざみつける ことを のぞむ……$"
	.if (. - gText_Rom_2635AF) > 0x23
	.error "gText_Rom_2635AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2635AF) < 0x23
	.space 0x23 - (. - gText_Rom_2635AF)
	.endif
