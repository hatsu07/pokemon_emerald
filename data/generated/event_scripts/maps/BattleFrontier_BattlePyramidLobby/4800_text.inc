	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:617 BattleFrontier_BattlePyramidLobby_Text_BagIsFull
	.globl gText_Rom_22CB8D
gText_Rom_22CB8D: @ 0x0822CB8D
	.string "……ほう!\nどうぐが いっぱいの ようですな\pどうぐを せいりしてから\nまた おこしくだされ!$"
	.if (. - gText_Rom_22CB8D) > 0x30
	.error "gText_Rom_22CB8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CB8D) < 0x30
	.space 0x30 - (. - gText_Rom_22CB8D)
	.endif
