	@ data/text/apprentice.inc:781 gText_ApprenticePickWinSpeech2
	.globl gText_Rom_2728EC
gText_Rom_2728EC: @ 0x082728EC
	.string "{PLAYER}さん こんにちは!\nポケモンの じゅんびは\pばんぜん なんですけど\nひとつ きに なってるんです\pポケモントレーナーって\nしょうぶに かった ときに かけごえ が\pあると いいかなーって おもうんです\nなにか いいの かんがえて ください!$"
	.if (. - gText_Rom_2728EC) > 0x7b
	.error "gText_Rom_2728EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2728EC) < 0x7b
	.space 0x7b - (. - gText_Rom_2728EC)
	.endif
