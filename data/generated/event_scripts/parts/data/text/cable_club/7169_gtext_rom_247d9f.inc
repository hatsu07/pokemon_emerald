	@ data/text/cable_club.inc:60 CableClub_Text_PleaseVisitAgain
	.globl gText_Rom_247D9F
gText_Rom_247D9F: @ 0x08247D9F
	.string "それでは また おこしください$"
	.if (. - gText_Rom_247D9F) > 0x10
	.error "gText_Rom_247D9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247D9F) < 0x10
	.space 0x10 - (. - gText_Rom_247D9F)
	.endif
