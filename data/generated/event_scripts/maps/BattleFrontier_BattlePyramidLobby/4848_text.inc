	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:687 BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon
	.globl gText_Rom_22D0F5
gText_Rom_22D0F5: @ 0x0822D0F5
	.string "そらをとぶ\nポケモンたちが みえます……\p……そして\nきょうだいな わざに くるしむ\lあなたの ポケモンの すがたも……$"
	.if (. - gText_Rom_22D0F5) > 0x3d
	.error "gText_Rom_22D0F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D0F5) < 0x3d
	.space 0x3d - (. - gText_Rom_22D0F5)
	.endif
