	@ data/text/match_call.inc:52 MatchCall_NegativeBattleText3
	.globl gText_Rom_26570B
gText_Rom_26570B: @ 0x0826570B
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pしょうぶ に まけたよー\nもっと そだてないと だめだなー$"
	.if (. - gText_Rom_26570B) > 0x2d
	.error "gText_Rom_26570B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26570B) < 0x2d
	.space 0x2d - (. - gText_Rom_26570B)
	.endif
