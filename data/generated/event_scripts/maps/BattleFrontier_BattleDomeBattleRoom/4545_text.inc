	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:995 BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged
	.globl gText_Rom_2296F9
gText_Rom_2296F9: @ 0x082296F9
	.string "ぜんかいの リベンジなるか!?\p$"
	.if (. - gText_Rom_2296F9) > 0x11
	.error "gText_Rom_2296F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2296F9) < 0x11
	.space 0x11 - (. - gText_Rom_2296F9)
	.endif
