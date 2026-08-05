	@ data/text/match_call.inc:46 MatchCall_NegativeBattleText1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26568B
gText_Rom_26568B: @ 0x0826568B
	.string "{PLAYER}{KUN} こんにちは!\n{STR_VAR_1} です!\pほかのひとと しょうぶ したんだけど\nまけちゃったよ がっくし\pじゃあ またね$"
	.if (. - gText_Rom_26568B) != 0x3b
	.error "gText_Rom_26568B must retain its original byte length"
	.endif
