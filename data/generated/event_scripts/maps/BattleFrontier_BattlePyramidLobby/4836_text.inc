	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:669 BattleFrontier_BattlePyramidLobby_Text_HintWeather
	.globl gText_Rom_22CF5E
gText_Rom_22CF5E: @ 0x0822CF5E
	.string "あまごい…… にほんばれ……\nすなあらし…… あられ……\pてんこうの へんかで つよくなる\nポケモンたちが みえます\p……そして\nさまざまな タイプに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CF5E) > 0x63
	.error "gText_Rom_22CF5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CF5E) < 0x63
	.space 0x63 - (. - gText_Rom_22CF5E)
	.endif
