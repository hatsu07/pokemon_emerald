	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:693 BattleFrontier_BattlePyramidLobby_Text_HintNormal
	.globl gText_Rom_22D187
gText_Rom_22D187: @ 0x0822D187
	.string "ノーマルタイプの\nポケモンたちが みえます……\p……そして\nきょうだいな わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22D187) > 0x40
	.error "gText_Rom_22D187 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D187) < 0x40
	.space 0x40 - (. - gText_Rom_22D187)
	.endif
