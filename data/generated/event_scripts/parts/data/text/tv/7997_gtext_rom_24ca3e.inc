	@ data/text/tv.inc:31 BattleFrontier_BattleTowerLobby_Text_HowDidBattleTowerTurnOut
	.globl gText_Rom_24CA3E
gText_Rom_24CA3E: @ 0x0824CA3E
	.string "ほんと!?\nありがとう!\lえっと それじゃあねぇ……\pこんかいの バトルタワーの\nたいせんは どうでしたか\pまんぞく でしたか!\nそれとも ふまん ですか!?$"
	.if (. - gText_Rom_24CA3E) > 0x50
	.error "gText_Rom_24CA3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CA3E) < 0x50
	.space 0x50 - (. - gText_Rom_24CA3E)
	.endif
