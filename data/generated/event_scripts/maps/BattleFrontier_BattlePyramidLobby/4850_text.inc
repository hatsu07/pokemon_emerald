	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:690 BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve
	.globl gText_Rom_22D132
gText_Rom_22D132: @ 0x0822D132
	.string "いしの ちからにより\nしんかした ものたちが みえます……\p……そして\nほのお…… みず…… でんき……\p3つの ちからに くるしむ\nあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22D132) > 0x55
	.error "gText_Rom_22D132 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D132) < 0x55
	.space 0x55 - (. - gText_Rom_22D132)
	.endif
