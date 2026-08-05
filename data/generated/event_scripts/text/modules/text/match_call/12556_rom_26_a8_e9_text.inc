	@ data/text/match_call.inc:709 MatchCall_Text_Sidney
	.globl gText_Rom_26A8E9
gText_Rom_26A8E9: @ 0x0826A8E9
	.string "カゲツ『よお {PLAYER}!\pおれと ポケモン しょうぶ したけりゃ\nいつでも ポケモン リーグに おいで!\pおれは いつでも ここに いるからな\nじゃあ まってるぜ!"
	.byte EOS
	.if (. - gText_Rom_26A8E9) > 0x51
	.error "gText_Rom_26A8E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A8E9) < 0x51
	.space 0x51 - (. - gText_Rom_26A8E9)
	.endif
