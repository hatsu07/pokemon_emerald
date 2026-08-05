	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:642 BattleFrontier_BattlePyramidLobby_Text_HintBurn
	.globl gText_Rom_22CD0D
gText_Rom_22CD0D: @ 0x0822CD0D
	.string "まっかな ほのおが みえます……\p……そして\nやけどを おって くるしむ\lあなたの ポケモンの すがたも……$"
	.if (. - gText_Rom_22CD0D) > 0x37
	.error "gText_Rom_22CD0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CD0D) < 0x37
	.space 0x37 - (. - gText_Rom_22CD0D)
	.endif
