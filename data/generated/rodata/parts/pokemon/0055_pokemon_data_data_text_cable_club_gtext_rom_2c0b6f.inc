	@ data/text/cable_club.inc:142 CableClub_Text_PleaseWait
	.globl gText_Rom_2C0B6F
gText_Rom_2C0B6F: @ 0x082C0B6F
	.string "しょうしょう おまちください$"
	.if (. - gText_Rom_2C0B6F) > 0xf
	.error "gText_Rom_2C0B6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0B6F) < 0xf
	.space 0xf - (. - gText_Rom_2C0B6F)
	.endif
	.space 0x2, 0x00
