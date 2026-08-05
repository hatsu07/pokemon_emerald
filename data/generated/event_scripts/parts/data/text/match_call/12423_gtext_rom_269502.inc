	@ data/text/match_call.inc:523 MatchCall_BattleDomeText12
	.globl gText_Rom_269502
gText_Rom_269502: @ 0x08269502
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} とかいう ところで\n{STR_VAR_3}かい ゆうしょう したとな?\pすごい はなし だのう\nでは またの"
	.byte EOS
	.if (. - gText_Rom_269502) > 0x47
	.error "gText_Rom_269502 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269502) < 0x47
	.space 0x47 - (. - gText_Rom_269502)
	.endif
