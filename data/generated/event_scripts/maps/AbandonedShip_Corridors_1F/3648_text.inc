	@ data/maps/AbandonedShip_Corridors_1F/scripts.inc:19 AbandonedShip_Corridors_1F_Text_CharliePostBattle
	.globl gText_Rom_21A9C1
gText_Rom_21A9C1: @ 0x0821A9C1
	.string "うきわを もったままだと\nモンスターボール なげにくいよ"
	.byte EOS
	.if (. - gText_Rom_21A9C1) > 0x1d
	.error "gText_Rom_21A9C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A9C1) < 0x1d
	.space 0x1d - (. - gText_Rom_21A9C1)
	.endif
