	@ data/maps/VictoryRoad_1F/scripts.inc:121 VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore
	.globl gText_Rom_219608
gText_Rom_219608: @ 0x08219608
	.string "ミツル『あっ! {PLAYER}さん!\pぼくが こんな ところに いるなんて\nおどろいた でしょ!\pぼくが ここまで これたのは\n{PLAYER}さんの おかげだよ!\pあのとき {PLAYER}さんに まけたから\nぼくは つよく なれたんだ!\p……だけど!\nぼくは もう まけない\pぼくに ゆうきと げんきを くれた\nポケモンの ためにも かつんだ!\pそれでは…… いきますよ!$"
	.if (. - gText_Rom_219608) > 0xac
	.error "gText_Rom_219608 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219608) < 0xac
	.space 0xac - (. - gText_Rom_219608)
	.endif
