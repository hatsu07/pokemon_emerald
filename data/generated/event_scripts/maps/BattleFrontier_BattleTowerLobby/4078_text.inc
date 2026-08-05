	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:959 BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved
	.globl gText_Rom_2206B5
gText_Rom_2206B5: @ 0x082206B5
	.string "バトルルームに ごあんないする まえに\nレポートを かきますので おまちください"
	.byte EOS
	.if (. - gText_Rom_2206B5) > 0x29
	.error "gText_Rom_2206B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2206B5) < 0x29
	.space 0x29 - (. - gText_Rom_2206B5)
	.endif
