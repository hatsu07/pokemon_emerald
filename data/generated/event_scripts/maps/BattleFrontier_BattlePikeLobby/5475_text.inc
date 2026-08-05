	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:369 BattleFrontier_BattlePikeLobby_Text_ReachedBattlePointLimit
	.globl gText_Rom_233988
gText_Rom_233988: @ 0x08233988
	.string "ポイントが いっぱいの ようですね……\pポイントを せいりしてから\nまた おこしください……"
	.byte EOS
	.if (. - gText_Rom_233988) > 0x2f
	.error "gText_Rom_233988 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233988) < 0x2f
	.space 0x2f - (. - gText_Rom_233988)
	.endif
