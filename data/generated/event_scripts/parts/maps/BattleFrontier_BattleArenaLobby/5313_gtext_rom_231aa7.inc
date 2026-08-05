	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_231AA7
gText_Rom_231AA7: @ 0x08231AA7
	.string "どの せつめいを よみますか?"
	.byte EOS
	.if (. - gText_Rom_231AA7) > 0x10
	.error "gText_Rom_231AA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231AA7) < 0x10
	.space 0x10 - (. - gText_Rom_231AA7)
	.endif
