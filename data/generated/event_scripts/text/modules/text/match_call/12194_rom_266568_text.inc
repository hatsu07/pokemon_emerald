	@ data/text/match_call.inc:196 MatchCall_DifferentRouteBattleRequestText9
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_266568
gText_Rom_266568: @ 0x08266568
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} です!\pポケモンの ちょうしは どうかな?\nわたしの ポケモンも\pどんどん つよく なってるのよ\n{PLAYER}{KUN}にも みせてあげたいなあ\p{STR_VAR_2}に いるから\nちかくに きたら しょうぶでも しようよ\pじゃあ またね$"
	.if (. - gText_Rom_266568) != 0x7a
	.error "gText_Rom_266568 must retain its original byte length"
	.endif
