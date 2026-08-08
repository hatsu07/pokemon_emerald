	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:929 BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer
	.globl gText_Rom_22950D
gText_Rom_22950D: @ 0x0822950D
	.string "{STR_VAR_1}せん!\p{PLAYER}さん VS\n{STR_VAR_2}さん\pただいま より はじめます!$"
	.if (. - gText_Rom_22950D) > 0x22
	.error "gText_Rom_22950D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22950D) < 0x22
	.space 0x22 - (. - gText_Rom_22950D)
	.endif
