	@ data/text/cable_club.inc:271 CableClub_Text_EnjoyUnionRoom
	.globl gText_Rom_24877D
gText_Rom_24877D: @ 0x0824877D
	.string "それでは ユニオン ルームで\nおたのしみ ください$"
	.if (. - gText_Rom_24877D) > 0x1a
	.error "gText_Rom_24877D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24877D) < 0x1a
	.space 0x1a - (. - gText_Rom_24877D)
	.endif
