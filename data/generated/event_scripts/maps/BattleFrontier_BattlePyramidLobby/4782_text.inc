	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:586 BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag
	.globl gText_Rom_22CA3F
gText_Rom_22CA3F: @ 0x0822CA3F
	.string "もたせている どうぐは\nすべて {PLAYER}さんの バトルバッグに\lいれておきますぞ!$"
	.if (. - gText_Rom_22CA3F) > 0x28
	.error "gText_Rom_22CA3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CA3F) < 0x28
	.space 0x28 - (. - gText_Rom_22CA3F)
	.endif
