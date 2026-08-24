	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:926 BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome
	.globl gText_Rom_2294FC
gText_Rom_2294FC: @ 0x082294FC
	.string "{PLAYER}さんの\nにゅうじょう です!{EOS}"
	.if (. - gText_Rom_2294FC) > 0x11
	.error "gText_Rom_2294FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2294FC) < 0x11
	.space 0x11 - (. - gText_Rom_2294FC)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:929 BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer
	.globl gText_Rom_22950D
gText_Rom_22950D: @ 0x0822950D
	.string "{STR_VAR_1}せん!\p{PLAYER}さん VS\n{STR_VAR_2}さん\pただいま より はじめます!{EOS}"
	.if (. - gText_Rom_22950D) > 0x22
	.error "gText_Rom_22950D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22950D) < 0x22
	.space 0x22 - (. - gText_Rom_22950D)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:935 BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner
	.globl gText_Rom_22952F
gText_Rom_22952F: @ 0x0822952F
	.string "{PLAYER}さんの かちです\nおめでとう ございます!{EOS}"
	.if (. - gText_Rom_22952F) > 0x18
	.error "gText_Rom_22952F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22952F) < 0x18
	.space 0x18 - (. - gText_Rom_22952F)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:939 BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner
	.globl gText_Rom_229547
gText_Rom_229547: @ 0x08229547
	.string "{STR_VAR_2}さんの かちです\nおめでとう ございます!{EOS}"
	.if (. - gText_Rom_229547) > 0x18
	.error "gText_Rom_229547 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229547) < 0x18
	.space 0x18 - (. - gText_Rom_229547)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:943 BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ (+1 aliases)
	.globl gText_Rom_22955F
gText_Rom_22955F: @ 0x0822955F
	.string "バトルトーナメント レベル50\nゆうしょうは {PLAYER}さん です!\lおめでとう ございます!{EOS}"
	.if (. - gText_Rom_22955F) > 0x2d
	.error "gText_Rom_22955F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22955F) < 0x2d
	.space 0x2d - (. - gText_Rom_22955F)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:948 BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp (+1 aliases)
	.globl gText_Rom_22958C
gText_Rom_22958C: @ 0x0822958C
	.string "バトルトーナメント オープンレベル\nゆうしょうは {PLAYER}さん!\lおめでとう ございます!{EOS}"
	.if (. - gText_Rom_22958C) > 0x2c
	.error "gText_Rom_22958C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22958C) < 0x2c
	.space 0x2c - (. - gText_Rom_22958C)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:953 BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait
	.globl gText_Rom_2295B8
gText_Rom_2295B8: @ 0x082295B8
	.string "たいへんな ことに なりました!\pダブルノックアウトの ばあい\nバトルトーナメントの ルールに のっとり\lはんていと なります\pしばらく おまちください……!{EOS}"
	.if (. - gText_Rom_2295B8) > 0x50
	.error "gText_Rom_2295B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2295B8) < 0x50
	.space 0x50 - (. - gText_Rom_2295B8)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:961 BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer
	.globl gText_Rom_229608
gText_Rom_229608: @ 0x08229608
	.string "しんぱんいん より\nはんていの けっかが でました!\pしょうしゃは\nなんと! なんと! なんと!\l{STR_VAR_1}さん です!\lおめでとうございます!{EOS}"
	.if (. - gText_Rom_229608) > 0x46
	.error "gText_Rom_229608 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229608) < 0x46
	.space 0x46 - (. - gText_Rom_229608)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:969 BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer
	.globl gText_Rom_22964E
gText_Rom_22964E: @ 0x0822964E
	.string "しんぱんいん より\nはんていの けっかが でました!\pしょうしゃは\nなんと! なんと! なんと!\l{PLAYER}さん です!\lおめでとうございます!{EOS}"
	.if (. - gText_Rom_22964E) > 0x46
	.error "gText_Rom_22964E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22964E) < 0x46
	.space 0x46 - (. - gText_Rom_22964E)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:977 BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope (+1 aliases)
	.globl gText_Rom_229694
gText_Rom_229694: @ 0x08229694
	.string "きたいの おおがた しんじん!\p{EOS}"
	.if (. - gText_Rom_229694) > 0x11
	.error "gText_Rom_229694 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229694) < 0x11
	.space 0x11 - (. - gText_Rom_229694)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:981 BattleFrontier_BattleDomeBattleRoom_Text_RisingStar
	.globl gText_Rom_2296A5
gText_Rom_2296A5: @ 0x082296A5
	.string "さらなる うえを めざして!\p{EOS}"
	.if (. - gText_Rom_2296A5) > 0x10
	.error "gText_Rom_2296A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2296A5) < 0x10
	.space 0x10 - (. - gText_Rom_2296A5)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:985 BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship
	.globl gText_Rom_2296B5
gText_Rom_2296B5: @ 0x082296B5
	.string "いっきに ゆうしょうまで\nのぼりつめて しまうのでしょうか!?\p{EOS}"
	.if (. - gText_Rom_2296B5) > 0x21
	.error "gText_Rom_2296B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2296B5) < 0x21
	.space 0x21 - (. - gText_Rom_2296B5)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:990 BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry
	.globl gText_Rom_2296D6
gText_Rom_2296D6: @ 0x082296D6
	.string "はつしゅつじょう はつゆうしょうの\nいぎょう たっせい なるか!?\p{EOS}"
	.if (. - gText_Rom_2296D6) > 0x23
	.error "gText_Rom_2296D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2296D6) < 0x23
	.space 0x23 - (. - gText_Rom_2296D6)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:995 BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged
	.globl gText_Rom_2296F9
gText_Rom_2296F9: @ 0x082296F9
	.string "ぜんかいの リベンジなるか!?\p{EOS}"
	.if (. - gText_Rom_2296F9) > 0x11
	.error "gText_Rom_2296F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2296F9) < 0x11
	.space 0x11 - (. - gText_Rom_2296F9)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1000 BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship
	.globl gText_Rom_22970A
gText_Rom_22970A: @ 0x0822970A
	.string "はじめての ゆうしょうへ むけて\nもえています!\p{EOS}"
	.if (. - gText_Rom_22970A) > 0x1a
	.error "gText_Rom_22970A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22970A) < 0x1a
	.space 0x1a - (. - gText_Rom_22970A)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1005 BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal
	.globl gText_Rom_229724
gText_Rom_229724: @ 0x08229724
	.string "この しあいに かてば\nいよいよ けっしょうせん です!\p{EOS}"
	.if (. - gText_Rom_229724) > 0x1e
	.error "gText_Rom_229724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229724) < 0x1e
	.space 0x1e - (. - gText_Rom_229724)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1010 BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue
	.globl gText_Rom_229742
gText_Rom_229742: @ 0x08229742
	.string "ひがんの はつゆうしょう なるか!?\p{EOS}"
	.if (. - gText_Rom_229742) > 0x14
	.error "gText_Rom_229742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229742) < 0x14
	.space 0x14 - (. - gText_Rom_229742)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1015 BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion (+1 aliases)
	.globl gText_Rom_229756
gText_Rom_229756: @ 0x08229756
	.string "むてきの チャンピオン!\p{EOS}"
	.if (. - gText_Rom_229756) > 0xe
	.error "gText_Rom_229756 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229756) < 0xe
	.space 0xe - (. - gText_Rom_229756)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1019 BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer
	.globl gText_Rom_229764
gText_Rom_229764: @ 0x08229764
	.string "この ひとに かてる トレーナーは\nはたして いるのでしょうか!?\p{EOS}"
	.if (. - gText_Rom_229764) > 0x23
	.error "gText_Rom_229764 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229764) < 0x23
	.space 0x23 - (. - gText_Rom_229764)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1024 BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer
	.globl gText_Rom_229787
gText_Rom_229787: @ 0x08229787
	.string "この ひとの ために\nこの たいかいは あるのでしょうか!?\p{EOS}"
	.if (. - gText_Rom_229787) > 0x20
	.error "gText_Rom_229787 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229787) < 0x20
	.space 0x20 - (. - gText_Rom_229787)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1029 BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle
	.globl gText_Rom_2297A7
gText_Rom_2297A7: @ 0x082297A7
	.string "はたして れんぱ なるか!?\p{EOS}"
	.if (. - gText_Rom_2297A7) > 0x10
	.error "gText_Rom_2297A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2297A7) < 0x10
	.space 0x10 - (. - gText_Rom_2297A7)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1034 BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2297B7
gText_Rom_2297B7: @ 0x082297B7
	.string "かえってきました!\nもと チャンピオン!\p{EOS}"
	.if (. - gText_Rom_2297B7) != 0x16
	.error "gText_Rom_2297B7 must retain its original byte length"
	.endif
	.globl gText_Rom_2297C1
	.set gText_Rom_2297C1, gText_Rom_2297B7 + 0xa
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1038 BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned
	.globl gText_Rom_2297CD
gText_Rom_2297CD: @ 0x082297CD
	.string "あの つよさが もどってきました!\p{EOS}"
	.if (. - gText_Rom_2297CD) > 0x13
	.error "gText_Rom_2297CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2297CD) < 0x13
	.space 0x13 - (. - gText_Rom_2297CD)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1042 BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals
	.globl gText_Rom_2297E0
gText_Rom_2297E0: @ 0x082297E0
	.string "けっしょうに すすむのは\nやっぱり この ひと なんでしょうか!?\p{EOS}"
	.if (. - gText_Rom_2297E0) > 0x23
	.error "gText_Rom_2297E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2297E0) < 0x23
	.space 0x23 - (. - gText_Rom_2297E0)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1047 BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory
	.globl gText_Rom_229803
gText_Rom_229803: @ 0x08229803
	.string "みごとに ふっかつ ゆうしょう なるか!?\p{EOS}"
	.if (. - gText_Rom_229803) > 0x17
	.error "gText_Rom_229803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229803) < 0x17
	.space 0x17 - (. - gText_Rom_229803)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1052 BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster
	.globl gText_Rom_22981A
gText_Rom_22981A: @ 0x0822981A
	.string "おうじゃの ふうかく ただよう!{EOS}"
	.if (. - gText_Rom_22981A) > 0x11
	.error "gText_Rom_22981A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22981A) < 0x11
	.space 0x11 - (. - gText_Rom_22981A)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1055 BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker
	.globl gText_Rom_22982B
gText_Rom_22982B: @ 0x0822982B
	.string "そして…… {PLAYER}さんの\nきろくを はばむ トレーナーは……\pそう…… そのなは!!\nバトルドームの コミッショナーに して!!\lわれらが ドームスーパースター!!\lヒース だぁーーーーーー!{EOS}"
	.if (. - gText_Rom_22982B) > 0x60
	.error "gText_Rom_22982B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22982B) < 0x60
	.space 0x60 - (. - gText_Rom_22982B)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1063 BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant
	.globl gText_Rom_22988B
gText_Rom_22988B: @ 0x0822988B
	.string "かんきゃく『ヒースっ!! ヒースっ!!\nヒースっ!! ヒースっ!! ヒースっ!!{EOS}"
	.if (. - gText_Rom_22988B) > 0x29
	.error "gText_Rom_22988B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22988B) < 0x29
	.space 0x29 - (. - gText_Rom_22988B)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1067 BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro
	.globl gText_Rom_2298B4
gText_Rom_2298B4: @ 0x082298B4
	.string "ヒース『アッハッハッ!!\pきこえるっ? この だいかんせい!\nわたしたちの しあいを まえに\lみんな ウズウズ してるよっ!!\pアッハッハッ!!\pキミは わたしと たたかえる\nこうふんと きんちょうで\lピクピク ビクビク してるねっ!!\pでも だいじょうぶっ!!\pバトルドームの いちばんぼしっ!!\nドームスーパースター ヒースの かがやきで\lきみを てらして あげる からっ!!{EOS}"
	.if (. - gText_Rom_2298B4) > 0xbf
	.error "gText_Rom_2298B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2298B4) < 0xbf
	.space 0xbf - (. - gText_Rom_2298B4)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1079 BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy
	.globl gText_Rom_229973
gText_Rom_229973: @ 0x08229973
	.string "キミの せんりゃく! みせて ごらんっ!{EOS}"
	.if (. - gText_Rom_229973) > 0x15
	.error "gText_Rom_229973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229973) < 0x15
	.space 0x15 - (. - gText_Rom_229973)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1083 BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer
	.globl gText_Rom_229988
gText_Rom_229988: @ 0x08229988
	.string "なんとーーー! なんとーーーっ!\nたたかいに かったのは\l{PLAYER}さんだぁーーー!{EOS}"
	.if (. - gText_Rom_229988) > 0x28
	.error "gText_Rom_229988 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229988) < 0x28
	.space 0x28 - (. - gText_Rom_229988)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1087 BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker
	.globl gText_Rom_2299B0
gText_Rom_2299B0: @ 0x082299B0
	.string "ドームスーパースター!!\nヒースの しょうりです!\pおめでとうーーーー! ヒース!!{EOS}"
	.if (. - gText_Rom_2299B0) > 0x2b
	.error "gText_Rom_2299B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2299B0) < 0x2b
	.space 0x2b - (. - gText_Rom_2299B0)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1092 BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass
	.globl gText_Rom_2299DB
gText_Rom_2299DB: @ 0x082299DB
	.string "ヒース『きまり だからねっ!\nキミの フロンティアパスを かしてっ!!{EOS}"
	.if (. - gText_Rom_2299DB) > 0x24
	.error "gText_Rom_2299DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2299DB) < 0x24
	.space 0x24 - (. - gText_Rom_2299DB)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1096 BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol
	.globl gText_Rom_2299FF
gText_Rom_2299FF: @ 0x082299FF
	.string "フロンティアパスに\nタクティクスシンボルが きざまれた!{EOS}"
	.if (. - gText_Rom_2299FF) > 0x1d
	.error "gText_Rom_2299FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2299FF) < 0x1d
	.space 0x1d - (. - gText_Rom_2299FF)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1100 BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime
	.globl gText_Rom_229A1C
gText_Rom_229A1C: @ 0x08229A1C
	.string "…… …… ……\pわたしは キミを ごかい してたよ\nつぎは こうは いかない からね……{EOS}"
	.if (. - gText_Rom_229A1C) > 0x2e
	.error "gText_Rom_229A1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229A1C) < 0x2e
	.space 0x2e - (. - gText_Rom_229A1C)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1105 BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched
	.globl gText_Rom_229A4A
gText_Rom_229A4A: @ 0x08229A4A
	.string "どこまで かちつづける つもり なのか?\nかんろく じゅうぶん!{EOS}"
	.if (. - gText_Rom_229A4A) > 0x21
	.error "gText_Rom_229A4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229A4A) < 0x21
	.space 0x21 - (. - gText_Rom_229A4A)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1109 BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker
	.globl gText_Rom_229A6B
gText_Rom_229A6B: @ 0x08229A6B
	.string "…… そして みなさーーーーん!!\pついに! ついに あのトレーナーが\nかえって きたぞーーー!\pそう…… その トレーナーの なはーーー\nわれらが ドームスーパースターーーー!!\lヒース だぁーーーーーー!{EOS}"
	.if (. - gText_Rom_229A6B) > 0x69
	.error "gText_Rom_229A6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229A6B) < 0x69
	.space 0x69 - (. - gText_Rom_229A6B)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1118 BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro
	.globl gText_Rom_229AD4
gText_Rom_229AD4: @ 0x08229AD4
	.string "ヒース『われるような かんせい……\nむせかえる ような ねっき……\lやっぱり ここは すばらしいよ……\p…… わたしは ドームスーパースター……\nみんなの きたいと あこがれの ほし……\lながれ きえさる ことなど できない……\pもっと ひかりっ! もっと かがやいてっ!\nここに やってくる すべての ひとびとを\lてらさなければ いけないっ!!{EOS}"
	.if (. - gText_Rom_229AD4) > 0xae
	.error "gText_Rom_229AD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229AD4) < 0xae
	.space 0xae - (. - gText_Rom_229AD4)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1130 BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess
	.globl gText_Rom_229B82
gText_Rom_229B82: @ 0x08229B82
	.string "さあっ! わたしの すべてっ!\nここに ひろう するよっ!!{EOS}"
	.if (. - gText_Rom_229B82) > 0x1f
	.error "gText_Rom_229B82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229B82) < 0x1f
	.space 0x1f - (. - gText_Rom_229B82)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1134 BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed
	.globl gText_Rom_229BA1
gText_Rom_229BA1: @ 0x08229BA1
	.string "ヒース『ほーんと ステキっ! キミはっ!!\pすべてを だしきった わたしが\nかなわない なんて はじめてっ!!\pさあっ! キミの フロンティアパスを!!{EOS}"
	.if (. - gText_Rom_229BA1) > 0x4d
	.error "gText_Rom_229BA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229BA1) < 0x4d
	.space 0x4d - (. - gText_Rom_229BA1)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1141 BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine
	.globl gText_Rom_229BEE
gText_Rom_229BEE: @ 0x08229BEE
	.string "タクティクスシンボルが\nきんいろに かがやいた!{EOS}"
	.if (. - gText_Rom_229BEE) > 0x19
	.error "gText_Rom_229BEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229BEE) < 0x19
	.space 0x19 - (. - gText_Rom_229BEE)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1145 BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter
	.globl gText_Rom_229C07
gText_Rom_229C07: @ 0x08229C07
	.string "つよく! なにより かわいい キミっ!!\pキミには わたしの ような\nスーパースターに なれる\lかのうせいを かんじるよっ!\lまた あえるときを たのしみに しようっ!!{EOS}"
	.if (. - gText_Rom_229C07) > 0x56
	.error "gText_Rom_229C07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229C07) < 0x56
	.space 0x56 - (. - gText_Rom_229C07)
	.endif
	@ analyzed canonical ROM range 0x08229C5D-0x08229CB6
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08229C5D: @ 0x08229C5D
	.string "バトルトーナメント　レベル50\nゆうしょうは　{PLAYER}さんっ!\pおめでとう　ございます!!{EOS}"
EventText_JP_08229C89: @ 0x08229C89
	.string "バトルトーナメント　オープンレベル\nゆうしょうは　{PLAYER}さんっ!\pおめでとう　ございます!!{EOS}"
