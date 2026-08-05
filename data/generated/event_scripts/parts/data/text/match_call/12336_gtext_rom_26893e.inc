	@ data/text/match_call.inc:403 MatchCall_PersonalizedText64
	.globl gText_Rom_26893E
gText_Rom_26893E: @ 0x0826893E
	.string "{STR_VAR_1}よ!\nいま いそがしいんだけど\lきょうは もう\l5にんの トレーナーを たおしたから\lあなたにも いちおう ほうこく するわ!\pこの ちょうし だと\nつぎは たぶん あなたに かてるわね!\lわたしたち いい ライバルとして\lやって いけそうね……\lじゃあね バイ!$"
	.if (. - gText_Rom_26893E) > 0x87
	.error "gText_Rom_26893E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26893E) < 0x87
	.space 0x87 - (. - gText_Rom_26893E)
	.endif
