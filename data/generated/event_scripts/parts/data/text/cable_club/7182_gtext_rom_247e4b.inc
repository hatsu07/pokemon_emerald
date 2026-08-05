	@ data/text/cable_club.inc:78 Text_TerminateLinkConfirmation
	.globl gText_Rom_247E4B
gText_Rom_247E4B: @ 0x08247E4B
	.string "へやからでると つうしんが\nおわりますが よろしいですか?$"
	.if (. - gText_Rom_247E4B) > 0x1e
	.error "gText_Rom_247E4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E4B) < 0x1e
	.space 0x1e - (. - gText_Rom_247E4B)
	.endif
