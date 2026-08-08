	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:518 BattleFrontier_BattleArenaLobby_Text_RulesAreListed
	.globl gText_Rom_22FD87
gText_Rom_22FD87: @ 0x0822FD87
	.string "かちぬきチームバトルの\nルールが かかれている!"
	.byte EOS
	.if (. - gText_Rom_22FD87) > 0x19
	.error "gText_Rom_22FD87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FD87) < 0x19
	.space 0x19 - (. - gText_Rom_22FD87)
	.endif
