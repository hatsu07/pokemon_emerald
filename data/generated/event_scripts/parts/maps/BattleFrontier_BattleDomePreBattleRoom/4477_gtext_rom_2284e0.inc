	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:292 BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay
	.globl gText_Rom_2284E0
gText_Rom_2284E0: @ 0x082284E0
	.string "では こちらから どうぞ!$"
	.if (. - gText_Rom_2284E0) > 0xe
	.error "gText_Rom_2284E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2284E0) < 0xe
	.space 0xe - (. - gText_Rom_2284E0)
	.endif
