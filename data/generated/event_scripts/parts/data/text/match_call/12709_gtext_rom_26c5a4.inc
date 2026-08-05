	@ data/text/match_call.inc:937 MatchCall_Text_MrStone7
	.globl gText_Rom_26C5A4
gText_Rom_26C5A4: @ 0x0826C5A4
	.string "もしもし!\nデボンコーポレーションで ございま……\lああ {PLAYER}さん ですね!\pしゃちょうは さっきまで いたんですけど\nいまは るすに してるんですよ!\pうちの しゃちょうも いそがしいけど\n{PLAYER}さんも いそがしそう ですね!"
	.byte EOS
	.if (. - gText_Rom_26C5A4) > 0x72
	.error "gText_Rom_26C5A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C5A4) < 0x72
	.space 0x72 - (. - gText_Rom_26C5A4)
	.endif
