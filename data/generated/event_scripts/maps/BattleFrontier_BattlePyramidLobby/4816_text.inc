	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:639 BattleFrontier_BattlePyramidLobby_Text_HintPoison
	.globl gText_Rom_22CCDC
gText_Rom_22CCDC: @ 0x0822CCDC
	.string "どくが みえます……\p……そして\nどくに おかされ くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CCDC) > 0x31
	.error "gText_Rom_22CCDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CCDC) < 0x31
	.space 0x31 - (. - gText_Rom_22CCDC)
	.endif
