	@ data/text/match_call.inc:43 MatchCall_WildBattleText15
	.globl gText_Rom_26563A
gText_Rom_26563A: @ 0x0826563A
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pポケモンを つかまえようと\nおもってるんだが\lみつからなくてさー\lおじさん こまってる とこなのよ\pまいったなー\nじゃあ またなー$"
	.if (. - gText_Rom_26563A) > 0x51
	.error "gText_Rom_26563A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26563A) < 0x51
	.space 0x51 - (. - gText_Rom_26563A)
	.endif
