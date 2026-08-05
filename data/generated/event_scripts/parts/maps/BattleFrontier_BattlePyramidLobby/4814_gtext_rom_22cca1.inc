	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:636 BattleFrontier_BattlePyramidLobby_Text_HintParalysis
	.globl gText_Rom_22CCA1
gText_Rom_22CCA1: @ 0x0822CCA1
	.string "でんきが とびちっています……\p……そして\nまひにより おもうように うごけない\lあなたの ポケモンの すがたも……$"
	.if (. - gText_Rom_22CCA1) > 0x3b
	.error "gText_Rom_22CCA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CCA1) < 0x3b
	.space 0x3b - (. - gText_Rom_22CCA1)
	.endif
