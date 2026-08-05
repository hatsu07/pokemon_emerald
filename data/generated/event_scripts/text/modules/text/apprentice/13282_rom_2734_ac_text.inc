	@ data/text/apprentice.inc:842 gText_ApprenticePickWinSpeech12
	.globl gText_Rom_2734AC
gText_Rom_2734AC: @ 0x082734AC
	.string "オーイェッ {PLAYER}さあん!\nどうする オレ? きょうも きいてみる?\lってもう きこうとしてる!?\pそもそも {PLAYER}さんって\nいつも きいてる!? きいてる!!\lじゃ そうだんに のってェ!\pおれが かった ときに さけぶ\nカッコイイ キメキメの\lすんごい セリフ……\lなんか かんがえてエエェ!$"
	.if (. - gText_Rom_2734AC) > 0x93
	.error "gText_Rom_2734AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2734AC) < 0x93
	.space 0x93 - (. - gText_Rom_2734AC)
	.endif
