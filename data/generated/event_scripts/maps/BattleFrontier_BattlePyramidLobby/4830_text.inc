	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:660 BattleFrontier_BattlePyramidLobby_Text_HintPsychic
	.globl gText_Rom_22CEA5
gText_Rom_22CEA5: @ 0x0822CEA5
	.string "エスパータイプの\nポケモンたちが みえます……\p……そして\nエスパーの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CEA5) > 0x3f
	.error "gText_Rom_22CEA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CEA5) < 0x3f
	.space 0x3f - (. - gText_Rom_22CEA5)
	.endif
