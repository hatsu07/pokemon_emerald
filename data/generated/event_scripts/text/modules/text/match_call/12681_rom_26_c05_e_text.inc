	@ data/text/match_call.inc:895 MatchCall_Text_Steven3
	.globl gText_Rom_26C05E
gText_Rom_26C05E: @ 0x0826C05E
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pキミは ポケモンと ぼうけんを していて\nどんな きぶんに なる?\pつよいみかた だと おもうかい?\nたのしいなかま だと おもうかい?\pキミが どう かんじるかに よって\nその ぼうけんの いみは かわるんだ!"
	.byte EOS
	.if (. - gText_Rom_26C05E) > 0x78
	.error "gText_Rom_26C05E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C05E) < 0x78
	.space 0x78 - (. - gText_Rom_26C05E)
	.endif
