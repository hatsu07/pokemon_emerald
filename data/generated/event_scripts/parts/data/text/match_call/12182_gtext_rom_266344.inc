	@ data/text/match_call.inc:178 MatchCall_DifferentRouteBattleRequestText3
	.globl gText_Rom_266344
gText_Rom_266344: @ 0x08266344
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pあれから おれの ポケモンも\nたくましく なったぞ!\p{PLAYER}の ポケモンで\nうでだめし したいから\pしょうぶ してみないか?\n{STR_VAR_2} で まってるぞ$"
	.if (. - gText_Rom_266344) > 0x58
	.error "gText_Rom_266344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266344) < 0x58
	.space 0x58 - (. - gText_Rom_266344)
	.endif
