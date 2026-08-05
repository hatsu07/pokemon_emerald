	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:280 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals
	.globl gText_Rom_228471
gText_Rom_228471: @ 0x08228471
	.string "まもなく じゅんけっしょうが はじまります\nじゅんびの ほうは いかがですか?$"
	.if (. - gText_Rom_228471) > 0x28
	.error "gText_Rom_228471 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_228471) < 0x28
	.space 0x28 - (. - gText_Rom_228471)
	.endif
