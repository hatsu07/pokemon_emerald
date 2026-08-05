	@ data/text/match_call.inc:811 MatchCall_Text_Brendan13
	.globl gText_Rom_26B666
gText_Rom_26B666: @ 0x0826B666
	.string "ユウキ『おーす {PLAYER}!\pどうだ? ずかんは じゅんちょうに\nうまっていってるか?\pあのな うわさで きいたんだけど\nどこかに ちょうこだいポケモン ってのが\l3しゅるいも いるらしいんだよ!\pうーん 1しゅるい だけでも いいから\nつかまえて みたいよなあ……"
	.byte EOS
	.if (. - gText_Rom_26B666) > 0x83
	.error "gText_Rom_26B666 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B666) < 0x83
	.space 0x83 - (. - gText_Rom_26B666)
	.endif
