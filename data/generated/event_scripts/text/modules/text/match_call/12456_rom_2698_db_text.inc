	@ data/text/match_call.inc:565 MatchCall_BattlePikeText12
	.globl gText_Rom_2698DB
gText_Rom_2698DB: @ 0x082698DB
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} とかいう ところで\n{STR_VAR_3}へや とっぱ したとな?\pすごい はなし だのう\nでは またの"
	.byte EOS
	.if (. - gText_Rom_2698DB) > 0x45
	.error "gText_Rom_2698DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2698DB) < 0x45
	.space 0x45 - (. - gText_Rom_2698DB)
	.endif
