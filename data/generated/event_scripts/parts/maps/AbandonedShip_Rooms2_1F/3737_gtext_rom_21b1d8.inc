	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:112 AbandonedShip_Rooms2_1F_Text_GarrisonIntro (+1 aliases)
	.globl gText_Rom_21B1D8
gText_Rom_21B1D8: @ 0x0821B1D8
	.string "つよさも やさしさも\nこれ トレーナーの たから!"
	.byte EOS
	.if (. - gText_Rom_21B1D8) > 0x1a
	.error "gText_Rom_21B1D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B1D8) < 0x1a
	.space 0x1a - (. - gText_Rom_21B1D8)
	.endif
