	@ data/text/match_call.inc:7 MatchCall_WildBattleText3
	.globl gText_Rom_265271
gText_Rom_265271: @ 0x08265271
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pこのまえ {STR_VAR_2} を\nつかまえようと したんだけど\lあとすこしの ところで にげられたんだ!\pくやしかった なあ・・・\nじゃあ またなー$"
	.if (. - gText_Rom_265271) > 0x53
	.error "gText_Rom_265271 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265271) < 0x53
	.space 0x53 - (. - gText_Rom_265271)
	.endif
