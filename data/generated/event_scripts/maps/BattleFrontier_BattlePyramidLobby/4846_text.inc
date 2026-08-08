	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:684 BattleFrontier_BattlePyramidLobby_Text_HintSteel
	.globl gText_Rom_22D0B6
gText_Rom_22D0B6: @ 0x0822D0B6
	.string "はがねタイプの\nポケモンたちが みえます……\p……そして\nきょうだいな わざに くるしむ\lあなたの ポケモンの すがたも……$"
	.if (. - gText_Rom_22D0B6) > 0x3f
	.error "gText_Rom_22D0B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D0B6) < 0x3f
	.space 0x3f - (. - gText_Rom_22D0B6)
	.endif
