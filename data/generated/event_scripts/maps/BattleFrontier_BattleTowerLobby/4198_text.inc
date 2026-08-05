	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1129 BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
	.globl gText_Rom_221821
gText_Rom_221821: @ 0x08221821
	.string "ごあんないする まえに レポートを かきます\nしばらく おまちください!"
	.byte EOS
	.if (. - gText_Rom_221821) > 0x25
	.error "gText_Rom_221821 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221821) < 0x25
	.space 0x25 - (. - gText_Rom_221821)
	.endif
