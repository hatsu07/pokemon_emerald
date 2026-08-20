	@ data/maps/MossdeepCity/scripts.inc:357 MossdeepCity_Text_ScottSomethingWrongWithTown
	.globl gText_Rom_1E1BF8
gText_Rom_1E1BF8: @ 0x081E1BF8
	.string "エニシダ『{PLAYER}{KUN} げんき?\nわたしは げんきさ!\pトクサネシティの ジムリーダーが\nかなり つよいって きいてね\lのぞいてみようと きて みたら\lまちの ようすが なんだか ヘンなんだ\pよこくじょうが どうした とか\nうちゅうセンターが どうした とか……\pわたしには かんけい なさそうだなあ{EOS}"
	.if (. - gText_Rom_1E1BF8) > 0x95
	.error "gText_Rom_1E1BF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1BF8) < 0x95
	.space 0x95 - (. - gText_Rom_1E1BF8)
	.endif
