	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:609 BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis
	.globl gText_Rom_22CB54
gText_Rom_22CB54: @ 0x0822CB54
	.string "バトルピラミッド せいはの きねんとして\nこの しょうひんを おうけとり くだされ!$"
	.if (. - gText_Rom_22CB54) > 0x2b
	.error "gText_Rom_22CB54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CB54) < 0x2b
	.space 0x2b - (. - gText_Rom_22CB54)
	.endif
