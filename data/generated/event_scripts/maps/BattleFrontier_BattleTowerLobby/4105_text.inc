	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:995 BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins
	.globl gText_Rom_2208CE
gText_Rom_2208CE: @ 0x082208CE
	.string "いちど バトルタワーに はいれば\nとちゅうで まけちゃうか\l7にん かちぬくまでは\lでられなく なっちゃうんだ!\pかくごして チャレンジ しないとね!"
	.byte EOS
	.if (. - gText_Rom_2208CE) > 0x4c
	.error "gText_Rom_2208CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2208CE) < 0x4c
	.space 0x4c - (. - gText_Rom_2208CE)
	.endif
