	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1000 BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship
	.globl gText_Rom_22970A
gText_Rom_22970A: @ 0x0822970A
	.string "はじめての ゆうしょうへ むけて\nもえています!\p$"
	.if (. - gText_Rom_22970A) > 0x1a
	.error "gText_Rom_22970A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22970A) < 0x1a
	.space 0x1a - (. - gText_Rom_22970A)
	.endif
