	@ data/text/event_ticket_2.inc:9 EventTicket_Text_BrineyHoldOnASecond
	.globl gText_Rom_275CB6
gText_Rom_275CB6: @ 0x08275CB6
	.string "ハギ『こら! わしの おんじんの\nねがいを ことわるとは なにごとだ!$"
	.if (. - gText_Rom_275CB6) > 0x24
	.error "gText_Rom_275CB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275CB6) < 0x24
	.space 0x24 - (. - gText_Rom_275CB6)
	.endif
