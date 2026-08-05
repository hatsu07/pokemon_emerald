	@ data/text/match_call.inc:613 MatchCall_BattlePyramidText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269D44
gText_Rom_269D44: @ 0x08269D44
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2}で\p{STR_VAR_3}だんも\nかちぬいたんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269D44) != 0x4b
	.error "gText_Rom_269D44 must retain its original byte length"
	.endif
