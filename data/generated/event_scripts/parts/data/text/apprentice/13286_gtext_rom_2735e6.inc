	@ data/text/apprentice.inc:848 gText_ApprenticePickWinSpeech13
	.globl gText_Rom_2735E6
gText_Rom_2735E6: @ 0x082735E6
	.string "{PLAYER}{KUN} おれは\nもう ダメだよ……\lはなみずが とまらなくってさ……\pしょうぶに かった ときに\nなにか かっこいいこと いおうとして\lあたまで かんがえてたら……\pわれながら ジーンと なけちゃって\nはなみずが でたんだよね きっと!\lというわけ だからさ\l{PLAYER}{KUN} かんがえてよ!\pしょうぶに かったら\nおれ なんて いえば いいかな?$"
	.if (. - gText_Rom_2735E6) > 0xac
	.error "gText_Rom_2735E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2735E6) < 0xac
	.space 0xac - (. - gText_Rom_2735E6)
	.endif
