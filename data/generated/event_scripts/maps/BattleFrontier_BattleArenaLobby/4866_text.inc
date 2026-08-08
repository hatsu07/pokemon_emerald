	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_22D333
gText_Rom_22D333: @ 0x0822D333
	.string "どの せつめいを よみますか?$"
	.if (. - gText_Rom_22D333) > 0x10
	.error "gText_Rom_22D333 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D333) < 0x10
	.space 0x10 - (. - gText_Rom_22D333)
	.endif
