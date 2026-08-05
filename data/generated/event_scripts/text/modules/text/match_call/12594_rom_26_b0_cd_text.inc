	@ data/text/match_call.inc:766 MatchCall_Text_May13
	.globl gText_Rom_26B0CD
gText_Rom_26B0CD: @ 0x0826B0CD
	.string "ハルカ『はーい {PLAYER}{KUN}\pどう? ずかんは じゅんちょうに\nうまっていってる?\pあのね うわさで きいたんだけど\nどこかに ちょうこだいポケモン というのが\l3しゅるいも いるらしいの!\pうーん 1しゅるい だけでも いいから\nみてみたいなあ……"
	.byte EOS
	.if (. - gText_Rom_26B0CD) > 0x7c
	.error "gText_Rom_26B0CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B0CD) < 0x7c
	.space 0x7c - (. - gText_Rom_26B0CD)
	.endif
