	@ data/text/event_ticket_2.inc:69 FarawayIsland_Interior_Text_Mew
	.globl gText_Rom_275F57
gText_Rom_275F57: @ 0x08275F57
	.string "ミュー……$"
	.if (. - gText_Rom_275F57) > 0x6
	.error "gText_Rom_275F57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275F57) < 0x6
	.space 0x6 - (. - gText_Rom_275F57)
	.endif
