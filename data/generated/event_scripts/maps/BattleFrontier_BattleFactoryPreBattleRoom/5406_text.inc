	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:621 BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay
	.globl gText_Rom_23287D
gText_Rom_23287D: @ 0x0823287D
	.string "それでは おくに どうぞ!"
	.byte EOS
	.if (. - gText_Rom_23287D) > 0xe
	.error "gText_Rom_23287D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23287D) < 0xe
	.space 0xe - (. - gText_Rom_23287D)
	.endif
