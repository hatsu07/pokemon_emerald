	@ data/text/cable_club.inc:142 CableClub_Text_PleaseWait
	.globl gText_Rom_248005
gText_Rom_248005: @ 0x08248005
	.string "しょうしょう おまちください$"
	.if (. - gText_Rom_248005) > 0xf
	.error "gText_Rom_248005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248005) < 0xf
	.space 0xf - (. - gText_Rom_248005)
	.endif
