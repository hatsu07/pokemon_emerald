	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:666 BattleFrontier_BattlePyramidLobby_Text_HintFighting
	.globl gText_Rom_22CF1F
gText_Rom_22CF1F: @ 0x0822CF1F
	.string "かくとうタイプの\nポケモンたちが みえます……\p……そして\nかくとうの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CF1F) > 0x3f
	.error "gText_Rom_22CF1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CF1F) < 0x3f
	.space 0x3f - (. - gText_Rom_22CF1F)
	.endif
