	@ data/text/match_call.inc:94 MatchCall_PositiveBattleText3
	.globl gText_Rom_265ABC
gText_Rom_265ABC: @ 0x08265ABC
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だぞ\pちょうしは どうだ?\nおれも このまえ しょうぶ したんだけど\lおれの {STR_VAR_2}が だいかつやく さ!\pつぎ {PLAYER}と しょうぶ するときは\nぜったい まけない からなー!$"
	.if (. - gText_Rom_265ABC) > 0x63
	.error "gText_Rom_265ABC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265ABC) < 0x63
	.space 0x63 - (. - gText_Rom_265ABC)
	.endif
