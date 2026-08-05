	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:961 BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer
	.globl gText_Rom_229608
gText_Rom_229608: @ 0x08229608
	.string "しんぱんいん より\nはんていの けっかが でました!\pしょうしゃは\nなんと! なんと! なんと!\l{STR_VAR_1}さん です!\lおめでとうございます!$"
	.if (. - gText_Rom_229608) > 0x46
	.error "gText_Rom_229608 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229608) < 0x46
	.space 0x46 - (. - gText_Rom_229608)
	.endif
