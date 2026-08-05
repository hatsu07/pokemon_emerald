	@ data/text/cable_club.inc:161 CableClub_Text_CancelSelectedItem
	.globl gText_Rom_24809D
gText_Rom_24809D: @ 0x0824809D
	.string "やめます$"
	.if (. - gText_Rom_24809D) > 0x5
	.error "gText_Rom_24809D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24809D) < 0x5
	.space 0x5 - (. - gText_Rom_24809D)
	.endif
