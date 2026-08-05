	@ data/text/apprentice.inc:286 gText_ApprenticeWhatHeldItem3
	.globl gText_Rom_26EDBA
gText_Rom_26EDBA: @ 0x0826EDBA
	.string "{PLAYER}さん こんにちは……\nごめんなさい きょうも あたし\lききたい ことが あるんです\pあたしの ちから だけでは\nしょうぶに かてないかも しれないから\lなにか どうぐを {STR_VAR_1}に\lもたせようかと おもって いるんです\lでも なにが いいのか……\p{PLAYER}さん おねがいします\nあたしの かわりに きめてください!"
	.byte EOS
	.if (. - gText_Rom_26EDBA) > 0x9c
	.error "gText_Rom_26EDBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EDBA) < 0x9c
	.space 0x9c - (. - gText_Rom_26EDBA)
	.endif
