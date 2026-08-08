	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_233B5D
gText_Rom_233B5D: @ 0x08233B5D
	.string "どの せつめいを よみますか?"
	.byte EOS
	.if (. - gText_Rom_233B5D) > 0x10
	.error "gText_Rom_233B5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233B5D) < 0x10
	.space 0x10 - (. - gText_Rom_233B5D)
	.endif
