	@ data/text/cable_club.inc:48 CableClub_Text_DirectYouToYourRoom
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247D23
gText_Rom_247D23: @ 0x08247D23
	.string "それでは\nへやに ごあんないします$"
	.if (. - gText_Rom_247D23) != 0x12
	.error "gText_Rom_247D23 must retain its original byte length"
	.endif
