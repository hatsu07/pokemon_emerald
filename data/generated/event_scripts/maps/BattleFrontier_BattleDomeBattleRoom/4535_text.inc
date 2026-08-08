	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:969 BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer
	.globl gText_Rom_22964E
gText_Rom_22964E: @ 0x0822964E
	.string "しんぱんいん より\nはんていの けっかが でました!\pしょうしゃは\nなんと! なんと! なんと!\l{PLAYER}さん です!\lおめでとうございます!$"
	.if (. - gText_Rom_22964E) > 0x46
	.error "gText_Rom_22964E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22964E) < 0x46
	.space 0x46 - (. - gText_Rom_22964E)
	.endif
