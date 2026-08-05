	@ data/text/apprentice.inc:787 gText_ApprenticePickWinSpeech3
	.globl gText_Rom_2729E9
gText_Rom_2729E9: @ 0x082729E9
	.string "あっ {PLAYER}さん……!\nあたし ほんと ダメな おんなのこです!\pせっかく……\nせっかく しょうぶに かっても\lことば ひとつ でてこなくって……\p{PLAYER}さんには そんな こと\nどうでも いいのは わかってます!\lでも あたし どうしても……\pおねがい! です {PLAYER}さん\nかったとき って\lなんて いうべき なんでしょうか……?$"
	.if (. - gText_Rom_2729E9) > 0xa3
	.error "gText_Rom_2729E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2729E9) < 0xa3
	.space 0xa3 - (. - gText_Rom_2729E9)
	.endif
