	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:65 AbandonedShip_Corridors_B1F_Text_YayItsAShip
	.globl gText_Rom_21AD11
gText_Rom_21AD11: @ 0x0821AD11
	.string "わーい!\nふね だぞー!"
	.byte EOS
	.if (. - gText_Rom_21AD11) > 0xd
	.error "gText_Rom_21AD11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AD11) < 0xd
	.space 0xd - (. - gText_Rom_21AD11)
	.endif
