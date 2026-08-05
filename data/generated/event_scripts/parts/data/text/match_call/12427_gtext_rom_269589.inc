	@ data/text/match_call.inc:529 MatchCall_BattleDomeText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269589
gText_Rom_269589: @ 0x08269589
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2} で\p{STR_VAR_3}かいも\nゆうしょう したんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269589) != 0x4f
	.error "gText_Rom_269589 must retain its original byte length"
	.endif
