	@ data/text/apprentice.inc:802 gText_ApprenticeWinSpeechThanks5
	.globl gText_Rom_272D35
gText_Rom_272D35: @ 0x08272D35
	.string "{STR_VAR_1}\pオーケー わかった!\nそのぐらい いう じかんは つくれるぜ!\lほんと きみ みたいな\lいい せんせいに であえて よかったぜ!\pオレは これから じかんを つくって\nポケモンしょうぶを してくるよ!\lいままで サンキュー {PLAYER}{KUN}!\pいつか オレと しょうぶ しようぜ!$"
	.if (. - gText_Rom_272D35) > 0x8c
	.error "gText_Rom_272D35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272D35) < 0x8c
	.space 0x8c - (. - gText_Rom_272D35)
	.endif
