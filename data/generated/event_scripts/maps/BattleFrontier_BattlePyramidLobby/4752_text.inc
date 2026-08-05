	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:541 BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode
	.globl gText_Rom_22C6BD
gText_Rom_22C6BD: @ 0x0822C6BD
	.string "ピラミッドには\nレベル50と オープンレベルと ありますが\lどちらに はいられますかな?$"
	.if (. - gText_Rom_22C6BD) > 0x2d
	.error "gText_Rom_22C6BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C6BD) < 0x2d
	.space 0x2d - (. - gText_Rom_22C6BD)
	.endif
