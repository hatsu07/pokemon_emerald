	@ data/text/event_ticket_1.inc:27 EventTicket_Text_SailHome
	.globl gText_Rom_26356A
gText_Rom_26356A: @ 0x0826356A
	.string "よし! かえると するか!$"
	.if (. - gText_Rom_26356A) > 0xe
	.error "gText_Rom_26356A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26356A) < 0xe
	.space 0xe - (. - gText_Rom_26356A)
	.endif
