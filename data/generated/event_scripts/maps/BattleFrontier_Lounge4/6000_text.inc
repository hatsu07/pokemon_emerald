	@ data/maps/BattleFrontier_Lounge4/scripts.inc:19 BattleFrontier_Lounge4_Text_IfIOpenedRestaurantHere
	.globl gText_Rom_2385B8
gText_Rom_2385B8: @ 0x082385B8
	.string "ここで おいしい レストランでも\nやったら もうかりそうやな"
	.byte EOS
	.if (. - gText_Rom_2385B8) > 0x1f
	.error "gText_Rom_2385B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2385B8) < 0x1f
	.space 0x1f - (. - gText_Rom_2385B8)
	.endif
