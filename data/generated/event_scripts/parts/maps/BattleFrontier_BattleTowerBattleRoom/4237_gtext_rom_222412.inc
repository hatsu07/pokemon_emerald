	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:471 BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass
	.globl gText_Rom_222412
gText_Rom_222412: @ 0x08222412
	.string "{PLAYER}の たたかいが\nフロンティアパスに きろく された!$"
	.if (. - gText_Rom_222412) > 0x1d
	.error "gText_Rom_222412 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222412) < 0x1d
	.space 0x1d - (. - gText_Rom_222412)
	.endif
