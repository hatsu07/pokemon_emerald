	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_2756E3
gText_Rom_2756E3: @ 0x082756E3
	.string "どの せつめいを よみますか?{EOS}"
	.if (. - gText_Rom_2756E3) > 0x10
	.error "gText_Rom_2756E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2756E3) < 0x10
	.space 0x10 - (. - gText_Rom_2756E3)
	.endif
