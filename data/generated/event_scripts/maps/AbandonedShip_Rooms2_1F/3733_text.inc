	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:106 AbandonedShip_Rooms2_1F_Text_JaniDefeat (+1 aliases)
	.globl gText_Rom_21B1AD
gText_Rom_21B1AD: @ 0x0821B1AD
	.string "あれ だめだったかあ"
	.byte EOS
	.if (. - gText_Rom_21B1AD) > 0xb
	.error "gText_Rom_21B1AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B1AD) < 0xb
	.space 0xb - (. - gText_Rom_21B1AD)
	.endif
