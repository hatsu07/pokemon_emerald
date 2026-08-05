	@ data/text/cable_club.inc:4 CableClub_Text_WhichService
	.globl gText_Rom_247BA4
gText_Rom_247BA4: @ 0x08247BA4
	.string "どちらを ごりよう ですか?$"
	.if (. - gText_Rom_247BA4) > 0xf
	.error "gText_Rom_247BA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BA4) < 0xf
	.space 0xf - (. - gText_Rom_247BA4)
	.endif
