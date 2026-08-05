	@ data/text/event_ticket_2.inc:52 NavelRock_Harbor_Text_SailorReturn
	.globl gText_Rom_275E95
gText_Rom_275E95: @ 0x08275E95
	.string "な…… なんか おくふかくから\nひくい うなりが きこえたような……\pだ だいじょうぶか?\nもう かえった ほうが いいんじゃないか?$"
	.if (. - gText_Rom_275E95) > 0x44
	.error "gText_Rom_275E95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275E95) < 0x44
	.space 0x44 - (. - gText_Rom_275E95)
	.endif
