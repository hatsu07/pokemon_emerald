	@ data/text/match_call.inc:172 MatchCall_DifferentRouteBattleRequestText1
	.globl gText_Rom_2662E5
gText_Rom_2662E5: @ 0x082662E5
	.string "あ! {PLAYER}{KUN}!\n{STR_VAR_1} です\pこれから ぼくと しょうぶ しない?\n{STR_VAR_2} で まってるよ!$"
	.if (. - gText_Rom_2662E5) > 0x2e
	.error "gText_Rom_2662E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2662E5) < 0x2e
	.space 0x2e - (. - gText_Rom_2662E5)
	.endif
