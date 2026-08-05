	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:672 BattleFrontier_BattlePyramidLobby_Text_HintBug
	.globl gText_Rom_22CFC1
gText_Rom_22CFC1: @ 0x0822CFC1
	.string "むしタイプの\nポケモンたちが みえます……\p……そして\nさまざまな こうげきで くるしむ\lあなたの ポケモンの すがたも……$"
	.if (. - gText_Rom_22CFC1) > 0x3f
	.error "gText_Rom_22CFC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CFC1) < 0x3f
	.space 0x3f - (. - gText_Rom_22CFC1)
	.endif
