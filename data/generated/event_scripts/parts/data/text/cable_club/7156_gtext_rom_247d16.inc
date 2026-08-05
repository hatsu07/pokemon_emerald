	@ data/text/cable_club.inc:45 CableClub_Text_PleaseEnter
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247D16
gText_Rom_247D16: @ 0x08247D16
	.string "それでは へやへ どうぞ$"
	.if (. - gText_Rom_247D16) != 0xd
	.error "gText_Rom_247D16 must retain its original byte length"
	.endif
