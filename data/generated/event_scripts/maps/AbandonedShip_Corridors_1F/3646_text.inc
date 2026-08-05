	@ data/maps/AbandonedShip_Corridors_1F/scripts.inc:16 AbandonedShip_Corridors_1F_Text_CharlieDefeat (+1 aliases)
	.globl gText_Rom_21A9B7
gText_Rom_21A9B7: @ 0x0821A9B7
	.string "うわぁ つよーい!"
	.byte EOS
	.if (. - gText_Rom_21A9B7) > 0xa
	.error "gText_Rom_21A9B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A9B7) < 0xa
	.space 0xa - (. - gText_Rom_21A9B7)
	.endif
