	@ data/text/match_call.inc:514 MatchCall_BattleDomeText9
	.globl gText_Rom_26942B
gText_Rom_26942B: @ 0x0826942B
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\p{STR_VAR_2}で\n{STR_VAR_3}かいも ゆうしょう したんだって?\pすっごいねー\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_26942B) > 0x42
	.error "gText_Rom_26942B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26942B) < 0x42
	.space 0x42 - (. - gText_Rom_26942B)
	.endif
