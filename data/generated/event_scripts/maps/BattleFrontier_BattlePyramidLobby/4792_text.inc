	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:602 BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept
	.globl gText_Rom_22CAEE
gText_Rom_22CAEE: @ 0x0822CAEE
	.string "おつかいになられた バトルバッグは\nじかいの ちょうせんまで\lおあずかり いたしますぞ!\p{PLAYER}は バトルバッグを あずけて\nバッグを うけとった!$"
	.if (. - gText_Rom_22CAEE) > 0x4a
	.error "gText_Rom_22CAEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CAEE) < 0x4a
	.space 0x4a - (. - gText_Rom_22CAEE)
	.endif
