	@ data/text/apprentice.inc:836 gText_ApprenticePickWinSpeech11
	.globl gText_Rom_2733B9
gText_Rom_2733B9: @ 0x082733B9
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしだぜー!\pよーし さいごの わしの そうだん\nいってみようぜー!\lことばに かんする そうだんだよ!\pわしが もし しょうぶで かったら\nどういう ことばで キメたら いいかな?$"
	.if (. - gText_Rom_2733B9) > 0x7d
	.error "gText_Rom_2733B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2733B9) < 0x7d
	.space 0x7d - (. - gText_Rom_2733B9)
	.endif
