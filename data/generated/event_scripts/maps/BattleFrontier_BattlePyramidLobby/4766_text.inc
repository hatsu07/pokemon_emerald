	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:562 BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping
	.globl gText_Rom_22C882
gText_Rom_22C882: @ 0x0822C882
	.string "{PLAYER}さんの もっている バッグは\nこちらで あずからせて いただきますぞ!$"
	.if (. - gText_Rom_22C882) > 0x26
	.error "gText_Rom_22C882 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C882) < 0x26
	.space 0x26 - (. - gText_Rom_22C882)
	.endif
