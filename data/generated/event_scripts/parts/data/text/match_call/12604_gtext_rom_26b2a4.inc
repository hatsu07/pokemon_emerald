	@ data/text/match_call.inc:781 MatchCall_Text_Brendan3
	.globl gText_Rom_26B2A4
gText_Rom_26B2A4: @ 0x0826B2A4
	.string "ユウキ『おっ {PLAYER}!\pそういえば カナズミシティに\nいあいぎりオヤジ っていう ひとの\lいえが あっただろう?\pキンセツシティには\nその おとうとが すんでるんだって!\pどんな なまえだと おもう?\p…… …… ……\n…… …… ……\pいわくだきオヤジ だってさ!"
	.byte EOS
	.if (. - gText_Rom_26B2A4) > 0x85
	.error "gText_Rom_26B2A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B2A4) < 0x85
	.space 0x85 - (. - gText_Rom_26B2A4)
	.endif
