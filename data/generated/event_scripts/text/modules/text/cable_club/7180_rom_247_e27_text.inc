	@ data/text/cable_club.inc:75 CableClub_Text_PleaseConfirmNumberAndRestart
	.globl gText_Rom_247E27
gText_Rom_247E27: @ 0x08247E27
	.string "もういちど にんずうを たしかめて\nはじめから やりなおして ください$"
	.if (. - gText_Rom_247E27) > 0x24
	.error "gText_Rom_247E27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E27) < 0x24
	.space 0x24 - (. - gText_Rom_247E27)
	.endif
