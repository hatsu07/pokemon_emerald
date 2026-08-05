	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1141 BattleFrontier_BattleTowerLobby_Text_RulesAreListed
	.globl gText_Rom_2218B8
gText_Rom_2218B8: @ 0x082218B8
	.string "バトルタワーの\nルールが かかれている!"
	.byte EOS
	.if (. - gText_Rom_2218B8) > 0x15
	.error "gText_Rom_2218B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2218B8) < 0x15
	.space 0x15 - (. - gText_Rom_2218B8)
	.endif
