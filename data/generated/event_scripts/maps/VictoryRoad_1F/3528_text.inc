	@ data/maps/VictoryRoad_1F/scripts.inc:121 VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore
	.globl VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore: @ 0x08219608
	.string "ミツル『あっ! {PLAYER}さん!\pぼくが こんな ところに いるなんて\nおどろいた でしょ!\pぼくが ここまで これたのは\n{PLAYER}さんの おかげだよ!\pあのとき {PLAYER}さんに まけたから\nぼくは つよく なれたんだ!\p……だけど!\nぼくは もう まけない\pぼくに ゆうきと げんきを くれた\nポケモンの ためにも かつんだ!\pそれでは…… いきますよ!{EOS}"
	.if (. - VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore) > 0xac
	.error "VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore) < 0xac
	.space 0xac - (. - VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:124 VictoryRoad_1F_Text_WallyEntranceDefeat (+2 aliases)
	.globl gText_Rom_2196B4
gText_Rom_2196B4: @ 0x082196B4
	.string "うわぁ!\nやっぱり {PLAYER}さんは つよいよ!{EOS}"
	.if (. - gText_Rom_2196B4) > 0x16
	.error "gText_Rom_2196B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2196B4) < 0x16
	.space 0x16 - (. - gText_Rom_2196B4)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:127 VictoryRoad_1F_Text_WallyPostEntranceBattle
	.globl VictoryRoad_1F_Text_WallyPostEntranceBattle
VictoryRoad_1F_Text_WallyPostEntranceBattle: @ 0x082196CA
	.string "ミツル『…… こんかいは\n{PLAYER}さんに かてなかった けど\lいつか きっと おいついて みせるからね!{EOS}"
	.if (. - VictoryRoad_1F_Text_WallyPostEntranceBattle) > 0x33
	.error "VictoryRoad_1F_Text_WallyPostEntranceBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_WallyPostEntranceBattle) < 0x33
	.space 0x33 - (. - VictoryRoad_1F_Text_WallyPostEntranceBattle)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:130 VictoryRoad_1F_Text_WallyIntro (+1 aliases)
	.globl VictoryRoad_1F_Text_WallyIntro
VictoryRoad_1F_Text_WallyIntro: @ 0x082196FD
	.string "ミツル『あっ! {PLAYER}さん!\pぼく あれから つよくなった はずだよ!\nそれを {PLAYER}さんに\lみてもらいたいんだ!\pそれでは…… いきますよ!{EOS}"
	.if (. - VictoryRoad_1F_Text_WallyIntro) > 0x46
	.error "VictoryRoad_1F_Text_WallyIntro may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_WallyIntro) < 0x46
	.space 0x46 - (. - VictoryRoad_1F_Text_WallyIntro)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:124 VictoryRoad_1F_Text_WallyEntranceDefeat (+2 aliases)
	.globl gText_Rom_219743
gText_Rom_219743: @ 0x08219743
	.string "うわぁ!\nやっぱり {PLAYER}さんは つよいよ!{EOS}"
	.if (. - gText_Rom_219743) > 0x16
	.error "gText_Rom_219743 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219743) < 0x16
	.space 0x16 - (. - gText_Rom_219743)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:136 VictoryRoad_1F_Text_WallyPostBattle
	.globl VictoryRoad_1F_Text_WallyPostBattle
VictoryRoad_1F_Text_WallyPostBattle: @ 0x08219759
	.string "ミツル『…… こんかいも\n{PLAYER}さんに かてなかった けど\lいつか きっと おいついて……\pポケモンリーグに ちょうせん するんだ!"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_WallyPostBattle) > 0x42
	.error "VictoryRoad_1F_Text_WallyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_WallyPostBattle) < 0x42
	.space 0x42 - (. - VictoryRoad_1F_Text_WallyPostBattle)
	.endif
