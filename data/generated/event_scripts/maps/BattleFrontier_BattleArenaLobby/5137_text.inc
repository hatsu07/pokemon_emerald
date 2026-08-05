	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:437 BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown (+1 aliases)
	.globl gText_Rom_22FAC1
gText_Rom_22FAC1: @ 0x0822FAC1
	.string "おきゃくじん!\pぜんかい レポートを かいて\nしゅうりょう しませんでしたな?\pざんねんですが その ばあい\nちょうせんは むこうと なりますぞ!\pまた はじめから\nちょうせん してくだされ!!"
	.byte EOS
	.if (. - gText_Rom_22FAC1) > 0x62
	.error "gText_Rom_22FAC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FAC1) < 0x62
	.space 0x62 - (. - gText_Rom_22FAC1)
	.endif
