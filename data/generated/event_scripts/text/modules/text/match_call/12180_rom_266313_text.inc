	@ data/text/match_call.inc:175 MatchCall_DifferentRouteBattleRequestText2
	.globl gText_Rom_266313
gText_Rom_266313: @ 0x08266313
	.string "あ! {PLAYER}{KUN}!\n{STR_VAR_1} です\pこれから わたしと しょうぶ してみない?\n{STR_VAR_2} で まってるよ!$"
	.if (. - gText_Rom_266313) > 0x31
	.error "gText_Rom_266313 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266313) < 0x31
	.space 0x31 - (. - gText_Rom_266313)
	.endif
