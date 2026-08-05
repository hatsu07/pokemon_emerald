	@ data/text/cable_club.inc:105 CableClub_Text_HopeToSeeYouAgain
	.globl gText_Rom_247F31
gText_Rom_247F31: @ 0x08247F31
	.string "では また どうぞ!$"
	.if (. - gText_Rom_247F31) > 0xb
	.error "gText_Rom_247F31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F31) < 0xb
	.space 0xb - (. - gText_Rom_247F31)
	.endif
