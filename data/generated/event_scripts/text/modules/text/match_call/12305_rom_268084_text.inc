	@ data/text/match_call.inc:358 MatchCall_PersonalizedText49
	.globl gText_Rom_268084
gText_Rom_268084: @ 0x08268084
	.string "{STR_VAR_1}だ!\pオレさまは ふなのり だが\nいまは ふねに のっていない\pふねに のっていない ふなのりは\nなんと よべば いいだろうか!\pうみを みながら\nそんな ことを かんがえて いるのだ!\lじゃあ またな!!$"
	.if (. - gText_Rom_268084) > 0x6a
	.error "gText_Rom_268084 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268084) < 0x6a
	.space 0x6a - (. - gText_Rom_268084)
	.endif
