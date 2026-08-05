	@ data/text/match_call.inc:571 MatchCall_BattlePikeText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26995F
gText_Rom_26995F: @ 0x0826995F
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2}で\p{STR_VAR_3}へやも\nとっぱ したんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_26995F) != 0x4c
	.error "gText_Rom_26995F must retain its original byte length"
	.endif
