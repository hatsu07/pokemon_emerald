	@ data/text/match_call.inc:907 MatchCall_Text_Steven7
	.globl gText_Rom_26C174
gText_Rom_26C174: @ 0x0826C174
	.string "ダイゴ『{PLAYER}{KUN}……\nでんどういり おめでとう\p…… …… ……\n…… …… ……\pまた いつか あえると いいね!"
	.byte EOS
	.if (. - gText_Rom_26C174) > 0x3b
	.error "gText_Rom_26C174 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C174) < 0x3b
	.space 0x3b - (. - gText_Rom_26C174)
	.endif
