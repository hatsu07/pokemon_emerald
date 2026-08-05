	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:599 BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld
	.globl gText_Rom_22CAD2
gText_Rom_22CAD2: @ 0x0822CAD2
	.string "{PLAYER}は ポケモンに もたせている\nどうぐを かえした!$"
	.if (. - gText_Rom_22CAD2) > 0x1c
	.error "gText_Rom_22CAD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CAD2) < 0x1c
	.space 0x1c - (. - gText_Rom_22CAD2)
	.endif
