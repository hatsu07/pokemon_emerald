	@ data/text/match_call.inc:892 MatchCall_Text_Steven2
	.globl gText_Rom_26C00A
gText_Rom_26C00A: @ 0x0826C00A
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pボクは これまでに ずいぶん いろいろな\nトレーナーを みてきた けれど\pキミは だれにも にていない\nはじめて みる タイプの ひとだよ!"
	.byte EOS
	.if (. - gText_Rom_26C00A) > 0x54
	.error "gText_Rom_26C00A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C00A) < 0x54
	.space 0x54 - (. - gText_Rom_26C00A)
	.endif
