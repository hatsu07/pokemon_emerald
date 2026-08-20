	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:657 BattleFrontier_BattlePyramidLobby_Text_HintExplosion
	.globl gText_Rom_22CE63
gText_Rom_22CE63: @ 0x0822CE63
	.string "いのちを かけて\nくりだされる わざが みえます……\p……そして\nわざを うけて たおれていく\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CE63) > 0x42
	.error "gText_Rom_22CE63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CE63) < 0x42
	.space 0x42 - (. - gText_Rom_22CE63)
	.endif
