	@ data/text/match_call.inc:673 MatchCall_Text_Winona_Preparing
	.globl gText_Rom_26A46B
gText_Rom_26A46B: @ 0x0826A46B
	.string "ナギ『こんにちは {PLAYER}さん!\pあなたと しょうぶを したおかげで\nじぶんの じゃくてんが よくわかったわ!\pいつか また ジムを さいかい できたら\nそのときは もう まけませんよ!"
	.byte EOS
	.if (. - gText_Rom_26A46B) > 0x5c
	.error "gText_Rom_26A46B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A46B) < 0x5c
	.space 0x5c - (. - gText_Rom_26A46B)
	.endif
