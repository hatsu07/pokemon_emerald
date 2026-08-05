	@ data/text/apprentice.inc:811 gText_ApprenticePickWinSpeech7
	.globl gText_Rom_272EC3
gText_Rom_272EC3: @ 0x08272EC3
	.string "まあ {PLAYER}さん\nあえて よかった ですわ……!\pわたくし ポケモンの ほうは\nもう しんぱい ないのです けれど\lわたくし じしんの ほうが……\pその あの ポケモントレーナーさんは\nいつも しょうぶに かったとき\lことばを かけて くださいますね?\pぜひ! わたくしも あれを\nやってみたいのです!\lおねがいです! なにか\lかったときの ことば きめて ください!$"
	.if (. - gText_Rom_272EC3) > 0xb8
	.error "gText_Rom_272EC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272EC3) < 0xb8
	.space 0xb8 - (. - gText_Rom_272EC3)
	.endif
