	@ data/text/cable_club.inc:72 CableClub_Text_NeedFourPlayers
	.globl gText_Rom_247E02
gText_Rom_247E02: @ 0x08247E02
	.string "さんか にんずうが 4にん いないと\nたいせん することが できません!$"
	.if (. - gText_Rom_247E02) > 0x25
	.error "gText_Rom_247E02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E02) < 0x25
	.space 0x25 - (. - gText_Rom_247E02)
	.endif
