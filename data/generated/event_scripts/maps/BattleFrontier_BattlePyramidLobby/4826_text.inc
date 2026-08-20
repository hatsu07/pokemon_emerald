	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:654 BattleFrontier_BattlePyramidLobby_Text_HintIce
	.globl gText_Rom_22CE26
gText_Rom_22CE26: @ 0x0822CE26
	.string "こおりタイプの\nポケモンたちが みえます……\p……そして\nこおりの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CE26) > 0x3d
	.error "gText_Rom_22CE26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CE26) < 0x3d
	.space 0x3d - (. - gText_Rom_22CE26)
	.endif
