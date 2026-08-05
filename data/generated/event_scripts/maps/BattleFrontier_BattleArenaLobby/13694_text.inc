	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_2758F8
gText_Rom_2758F8: @ 0x082758F8
	.string "どの せつめいを よみますか?$"
	.if (. - gText_Rom_2758F8) > 0x10
	.error "gText_Rom_2758F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2758F8) < 0x10
	.space 0x10 - (. - gText_Rom_2758F8)
	.endif
