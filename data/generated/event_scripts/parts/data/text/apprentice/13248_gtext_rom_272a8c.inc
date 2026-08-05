	@ data/text/apprentice.inc:790 gText_ApprenticeWinSpeechThanks3
	.globl gText_Rom_272A8C
gText_Rom_272A8C: @ 0x08272A8C
	.string "{STR_VAR_1}\pすごいわ……\pあ あたしなんかが\nそんな こと いって いいのか……\lいえ! がんばって みます\p{PLAYER}さん!\pいままで あたしなんかの ために\nありがとう…… ございました……!\lあたし いまから がんばってきます!\pあたしの こと なんて\nすぐに わすれて しまうと おもうけど\lでも どこかで おあい しましょう!$"
	.if (. - gText_Rom_272A8C) > 0xa3
	.error "gText_Rom_272A8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272A8C) < 0xa3
	.space 0xa3 - (. - gText_Rom_272A8C)
	.endif
