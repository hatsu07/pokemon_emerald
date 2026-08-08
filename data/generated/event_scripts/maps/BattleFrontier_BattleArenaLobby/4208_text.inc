	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_2218CD
gText_Rom_2218CD: @ 0x082218CD
	.string "どの せつめいを よみますか?"
	.byte EOS
	.if (. - gText_Rom_2218CD) > 0x10
	.error "gText_Rom_2218CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2218CD) < 0x10
	.space 0x10 - (. - gText_Rom_2218CD)
	.endif
