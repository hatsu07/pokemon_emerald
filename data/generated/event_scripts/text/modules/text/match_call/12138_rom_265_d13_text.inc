	@ data/text/match_call.inc:115 MatchCall_PositiveBattleText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265D13
gText_Rom_265D13: @ 0x08265D13
	.string "あら こんにちは {PLAYER}{KUN}\n{STR_VAR_1} よ\pちょうしは どうかしら?\nわたしの ポケモン ちょうし いいみたい\pさっきも しょうぶで かてたのよ\nじゃあ またね$"
	.if (. - gText_Rom_265D13) != 0x4e
	.error "gText_Rom_265D13 must retain its original byte length"
	.endif
