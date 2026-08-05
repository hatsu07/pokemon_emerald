	@ data/text/cable_club.inc:151 CableClub_Text_CanMakeBerryPowder
	.globl gText_Rom_248046
gText_Rom_248046: @ 0x08248046
	.string "2にんから 5にんの ともだちと\nきのみで こなを つくります$"
	.if (. - gText_Rom_248046) > 0x20
	.error "gText_Rom_248046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248046) < 0x20
	.space 0x20 - (. - gText_Rom_248046)
	.endif
