	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:675 BattleFrontier_BattlePyramidLobby_Text_HintDark
	.globl gText_Rom_22D000
gText_Rom_22D000: @ 0x0822D000
	.string "あく タイプの\nポケモンたちが みえます……\p……そして\nあくの わざに くるしむ\lあなたの ポケモンの すがたも……$"
	.if (. - gText_Rom_22D000) > 0x3c
	.error "gText_Rom_22D000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D000) < 0x3c
	.space 0x3c - (. - gText_Rom_22D000)
	.endif
