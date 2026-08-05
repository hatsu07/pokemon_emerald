	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:678 BattleFrontier_BattlePyramidLobby_Text_HintWater
	.globl gText_Rom_22D03C
gText_Rom_22D03C: @ 0x0822D03C
	.string "みずタイプの\nポケモンたちが みえます……\p……そして\nみずの わざに くるしむ\lあなたの ポケモンの すがたも……$"
	.if (. - gText_Rom_22D03C) > 0x3b
	.error "gText_Rom_22D03C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D03C) < 0x3b
	.space 0x3b - (. - gText_Rom_22D03C)
	.endif
