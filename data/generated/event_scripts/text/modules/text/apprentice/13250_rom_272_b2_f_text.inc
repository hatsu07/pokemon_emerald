	@ data/text/apprentice.inc:793 gText_ApprenticePickWinSpeech4
	.globl gText_Rom_272B2F
gText_Rom_272B2F: @ 0x08272B2F
	.string "あら {PLAYER}{KUN}?\nちょっと きいて ほしいんだけど!\pじぶんでも わかって いるけど\nわたし すこし くちが わるくて……\lしょうぶに かったときに\lなんか えらそうに しちゃうのよね!\pだけど きらわれたく ないから\nわたしに まけた あいてに\lやさしい ことばを かけて あげたいのよ!\pでも ぜんぜん おもいつかなくて!\nあなたが かんがえて くれない?$"
	.if (. - gText_Rom_272B2F) > 0xb5
	.error "gText_Rom_272B2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272B2F) < 0xb5
	.space 0xb5 - (. - gText_Rom_272B2F)
	.endif
