	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:513 BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent
	.globl gText_Rom_22259C
gText_Rom_22259C: @ 0x0822259C
	.string "あなたの さいのうを\nここに しめしなさい……$"
	.if (. - gText_Rom_22259C) > 0x18
	.error "gText_Rom_22259C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22259C) < 0x18
	.space 0x18 - (. - gText_Rom_22259C)
	.endif
