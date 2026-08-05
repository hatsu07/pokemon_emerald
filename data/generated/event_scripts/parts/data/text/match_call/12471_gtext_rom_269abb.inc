	@ data/text/match_call.inc:586 MatchCall_BattlePyramidText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269ABB
gText_Rom_269ABB: @ 0x08269ABB
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\pきいたよ {STR_VAR_2} で\n{STR_VAR_3}だんも のぼったんだって?\pぼくも がんばらなきゃ\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269ABB) != 0x3f
	.error "gText_Rom_269ABB must retain its original byte length"
	.endif
