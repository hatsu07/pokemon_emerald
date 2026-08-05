	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:663 BattleFrontier_BattlePyramidLobby_Text_HintRock
	.globl gText_Rom_22CEE4
gText_Rom_22CEE4: @ 0x0822CEE4
	.string "いわタイプの\nポケモンたちが みえます……\p……そして\nいわの わざに くるしむ\lあなたの ポケモンの すがたも……$"
	.if (. - gText_Rom_22CEE4) > 0x3b
	.error "gText_Rom_22CEE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CEE4) < 0x3b
	.space 0x3b - (. - gText_Rom_22CEE4)
	.endif
