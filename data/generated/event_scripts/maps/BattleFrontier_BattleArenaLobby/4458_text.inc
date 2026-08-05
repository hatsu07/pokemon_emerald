	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_227D74
gText_Rom_227D74: @ 0x08227D74
	.string "どの せつめいを よみますか?$"
	.if (. - gText_Rom_227D74) > 0x10
	.error "gText_Rom_227D74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227D74) < 0x10
	.space 0x10 - (. - gText_Rom_227D74)
	.endif
