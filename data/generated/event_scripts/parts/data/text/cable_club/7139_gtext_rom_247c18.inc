	@ data/text/cable_club.inc:17 CableClub_Text_CloseThisMenu
	.globl gText_Rom_247C18
gText_Rom_247C18: @ 0x08247C18
	.string "おわります$"
	.if (. - gText_Rom_247C18) > 0x6
	.error "gText_Rom_247C18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C18) < 0x6
	.space 0x6 - (. - gText_Rom_247C18)
	.endif
