	@ data/text/match_call.inc:583 MatchCall_BattlePyramidText4
	.globl gText_Rom_269A81
gText_Rom_269A81: @ 0x08269A81
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}で {STR_VAR_3}だんも\nのぼった らしいね\pぼくも きみに まけないように\nがんばらなきゃな"
	.byte EOS
	.if (. - gText_Rom_269A81) > 0x3a
	.error "gText_Rom_269A81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269A81) < 0x3a
	.space 0x3a - (. - gText_Rom_269A81)
	.endif
