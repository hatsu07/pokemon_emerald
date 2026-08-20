	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:648 BattleFrontier_BattlePyramidLobby_Text_HintLevitate
	.globl gText_Rom_22CD9A
gText_Rom_22CD9A: @ 0x0822CD9A
	.string "ゆるやかに ふゆうする\nポケモンたちが みえます……\p……そして\nじめんの わざを つかえずに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CD9A) > 0x47
	.error "gText_Rom_22CD9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CD9A) < 0x47
	.space 0x47 - (. - gText_Rom_22CD9A)
	.endif
