	@ data/text/match_call.inc:901 MatchCall_Text_Steven5
	.globl gText_Rom_26C118
gText_Rom_26C118: @ 0x0826C118
	.string "ダイゴ『あっ {PLAYER}{KUN}!\pなにも いわなくて いいよ!\nとにかく いまは……\pキミが おもうように すすむんだ!"
	.byte EOS
	.if (. - gText_Rom_26C118) > 0x39
	.error "gText_Rom_26C118 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C118) < 0x39
	.space 0x39 - (. - gText_Rom_26C118)
	.endif
