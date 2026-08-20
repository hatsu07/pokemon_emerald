	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:681 BattleFrontier_BattlePyramidLobby_Text_HintGhost
	.globl gText_Rom_22D077
gText_Rom_22D077: @ 0x0822D077
	.string "ゴーストタイプの\nポケモンたちが みえます……\p……そして\nゴーストの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22D077) > 0x3f
	.error "gText_Rom_22D077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D077) < 0x3f
	.space 0x3f - (. - gText_Rom_22D077)
	.endif
