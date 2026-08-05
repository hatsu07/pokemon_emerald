	@ data/text/apprentice.inc:187 gText_ApprenticeWhichLevelMode11
	.globl gText_Rom_26E34D
gText_Rom_26E34D: @ 0x0826E34D
	.string "ようよう! ノリが いいね!\n{PLAYER}さん よろしく たのみますよ!\pそれじゃあ 1つめの しつもん\nいってみようぜ!\lバトルタワーに かんする しつもんだ!\pレベル50のへやと オープンレベルのへや\nわしが いくなら さあ どっち?"
	.byte EOS
	.if (. - gText_Rom_26E34D) > 0x74
	.error "gText_Rom_26E34D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E34D) < 0x74
	.space 0x74 - (. - gText_Rom_26E34D)
	.endif
