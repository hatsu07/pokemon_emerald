	@ data/text/match_call.inc:931 MatchCall_Text_MrStone5
	.globl gText_Rom_26C4FB
gText_Rom_26C4FB: @ 0x0826C4FB
	.string "ツワブキ『やあやあ {PLAYER}{KUN}!\pトウカシティの ひとから きいたんだけど\nきみは センリさんの こども なんだね\pどうりで たのもしいと おもったよ!"
	.byte EOS
	.if (. - gText_Rom_26C4FB) > 0x4c
	.error "gText_Rom_26C4FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C4FB) < 0x4c
	.space 0x4c - (. - gText_Rom_26C4FB)
	.endif
