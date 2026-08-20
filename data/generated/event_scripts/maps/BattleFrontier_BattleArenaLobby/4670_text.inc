	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_22AC54
gText_Rom_22AC54: @ 0x0822AC54
	.string "どの せつめいを よみますか?{EOS}"
	.if (. - gText_Rom_22AC54) > 0x10
	.error "gText_Rom_22AC54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AC54) < 0x10
	.space 0x10 - (. - gText_Rom_22AC54)
	.endif
