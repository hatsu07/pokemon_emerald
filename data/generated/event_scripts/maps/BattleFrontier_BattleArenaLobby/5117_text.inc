	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:365 BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
	.globl gText_Rom_22F747
gText_Rom_22F747: @ 0x0822F747
	.string "バトルアリーナに\nちょうせん されますかな?"
	.byte EOS
	.if (. - gText_Rom_22F747) > 0x17
	.error "gText_Rom_22F747 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F747) < 0x17
	.space 0x17 - (. - gText_Rom_22F747)
	.endif
