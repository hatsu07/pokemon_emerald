	@ data/text/cable_club.inc:138 CableClub_Text_Hello
	.globl gText_Rom_247FFE
gText_Rom_247FFE: @ 0x08247FFE
	.string "こんにちは!$"
	.if (. - gText_Rom_247FFE) > 0x7
	.error "gText_Rom_247FFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247FFE) < 0x7
	.space 0x7 - (. - gText_Rom_247FFE)
	.endif
