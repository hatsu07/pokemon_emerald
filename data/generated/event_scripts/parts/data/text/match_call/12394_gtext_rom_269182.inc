	@ data/text/match_call.inc:445 MatchCall_BattleFrontierStreakText14 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269182
gText_Rom_269182: @ 0x08269182
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269182) != 0x4b
	.error "gText_Rom_269182 must retain its original byte length"
	.endif
