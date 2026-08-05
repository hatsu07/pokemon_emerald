	@ data/text/match_call.inc:100 MatchCall_PositiveBattleText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265B5F
gText_Rom_265B5F: @ 0x08265B5F
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pちょうしは どうだい?\nしょうぶ してる?\pおれ このまえ かったよ!\n{STR_VAR_2}が だいかつやく さ!\pつぎこそ きみに かつからね!\nじゃあ またね$"
	.if (. - gText_Rom_265B5F) != 0x57
	.error "gText_Rom_265B5F must retain its original byte length"
	.endif
