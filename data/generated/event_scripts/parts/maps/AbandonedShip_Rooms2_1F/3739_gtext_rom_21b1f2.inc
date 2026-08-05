	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:115 AbandonedShip_Rooms2_1F_Text_GarrisonDefeat (+1 aliases)
	.globl gText_Rom_21B1F2
gText_Rom_21B1F2: @ 0x0821B1F2
	.string "おお あなたには\nキラリと ひかるものが あるな"
	.byte EOS
	.if (. - gText_Rom_21B1F2) > 0x19
	.error "gText_Rom_21B1F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B1F2) < 0x19
	.space 0x19 - (. - gText_Rom_21B1F2)
	.endif
