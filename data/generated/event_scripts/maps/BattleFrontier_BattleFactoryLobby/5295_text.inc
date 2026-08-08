	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:455 BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints
	.globl gText_Rom_23181A
gText_Rom_23181A: @ 0x0823181A
	.string "おきゃくさまの ふかい ちしきを たたえ\nバトルポイントを さしあげます!"
	.byte EOS
	.if (. - gText_Rom_23181A) > 0x26
	.error "gText_Rom_23181A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23181A) < 0x26
	.space 0x26 - (. - gText_Rom_23181A)
	.endif
