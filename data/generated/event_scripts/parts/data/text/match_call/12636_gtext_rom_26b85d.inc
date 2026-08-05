	@ data/text/match_call.inc:829 MatchCall_Text_Wally4
	.globl gText_Rom_26B85D
gText_Rom_26B85D: @ 0x0826B85D
	.string "ミツル『{PLAYER}さん?\nぼくです ミツルです!\pトレーナーの せかいって すごいですね!\nポケモンを つれて あるいていると\lみんなが こえを かけて くれるんです!\pまるで ポケモンを つうじて\nみんなが つながっている みたいに!"
	.byte EOS
	.if (. - gText_Rom_26B85D) > 0x74
	.error "gText_Rom_26B85D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B85D) < 0x74
	.space 0x74 - (. - gText_Rom_26B85D)
	.endif
