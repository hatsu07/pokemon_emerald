	@ data/text/apprentice.inc:817 gText_ApprenticePickWinSpeech8
	.globl gText_Rom_27300D
gText_Rom_27300D: @ 0x0827300D
	.string "キャァー!\n{PLAYER}さんを はっけんーっ!\lかっ かんげきっ……!\pあのっ そうだんが あります!\pこのあいだ ポケモンしょうぶに\nかったは いいんですけど!\lわたし かんげき しすぎちゃって\lなんにも いえなく なっちゃって……!\pそこで {PLAYER}さん!\nわたしが かった ときの きめぜりふ!\lかんがえて ほしいのですっ!$"
	.if (. - gText_Rom_27300D) > 0xa0
	.error "gText_Rom_27300D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27300D) < 0xa0
	.space 0xa0 - (. - gText_Rom_27300D)
	.endif
