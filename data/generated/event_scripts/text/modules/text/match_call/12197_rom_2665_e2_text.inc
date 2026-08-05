	@ data/text/match_call.inc:199 MatchCall_DifferentRouteBattleRequestText10
	.globl gText_Rom_2665E2
gText_Rom_2665E2: @ 0x082665E2
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pどう? げんきで やってるかしら?\nあれから わたしの ポケモンも\lずいぶん つよく なったのよ\pまた {PLAYER}{KUN}と\nしょうぶ したいなあ\p{STR_VAR_2}に いるから\nちかくに きたら あいに きてね$"
	.if (. - gText_Rom_2665E2) > 0x71
	.error "gText_Rom_2665E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2665E2) < 0x71
	.space 0x71 - (. - gText_Rom_2665E2)
	.endif
