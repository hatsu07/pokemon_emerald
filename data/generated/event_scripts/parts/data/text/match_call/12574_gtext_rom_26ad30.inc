	@ data/text/match_call.inc:736 MatchCall_Text_May3
	.globl gText_Rom_26AD30
gText_Rom_26AD30: @ 0x0826AD30
	.string "ハルカ『あっ {PLAYER}{KUN}!\pそういえば カナズミシティに\nいあいぎりオヤジ っていう ひとの\lいえが あったでしょ?\pキンセツシティには\nその おとうとが すんでるんだって!\pどんな なまえだと おもう?\p…… …… ……\n…… …… ……\pいわくだきオヤジ っていうの!"
	.byte EOS
	.if (. - gText_Rom_26AD30) > 0x88
	.error "gText_Rom_26AD30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AD30) < 0x88
	.space 0x88 - (. - gText_Rom_26AD30)
	.endif
