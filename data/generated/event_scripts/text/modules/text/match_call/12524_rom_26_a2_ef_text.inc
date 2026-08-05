	@ data/text/match_call.inc:661 MatchCall_Text_Flannery_Preparing
	.globl gText_Rom_26A2EF
gText_Rom_26A2EF: @ 0x0826A2EF
	.string "アスナ『{PLAYER}さん……\pあなたとの しょうぶで じぶんの\nみじゅくさを おもいしらされた けど\lわたしは これで おわったり しないよ!\pもういちど しゅぎょうを しなおして\nまた ジムを さいかい するんだ!\pそのときには {PLAYER}さん\nぜったい ちょうせんしに きてよね!"
	.byte EOS
	.if (. - gText_Rom_26A2EF) > 0x88
	.error "gText_Rom_26A2EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A2EF) < 0x88
	.space 0x88 - (. - gText_Rom_26A2EF)
	.endif
