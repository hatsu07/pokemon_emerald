	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1106 BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers
	.globl gText_Rom_22171D
gText_Rom_22171D: @ 0x0822171D
	.string "つうしんマルチ バトルルームは\n{STR_VAR_1}にん では ちょうせん できません!"
	.byte EOS
	.if (. - gText_Rom_22171D) > 0x25
	.error "gText_Rom_22171D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22171D) < 0x25
	.space 0x25 - (. - gText_Rom_22171D)
	.endif
