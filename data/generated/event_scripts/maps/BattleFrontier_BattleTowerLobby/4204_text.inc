	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1138 BattleFrontier_Text_ObtainedXBattlePoints
	.globl gText_Rom_22189E
gText_Rom_22189E: @ 0x0822189E
	.string "{PLAYER}は バトルポイントを\n{STR_VAR_1} BP てにいれた!"
	.byte EOS
	.if (. - gText_Rom_22189E) > 0x1a
	.error "gText_Rom_22189E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22189E) < 0x1a
	.space 0x1a - (. - gText_Rom_22189E)
	.endif
