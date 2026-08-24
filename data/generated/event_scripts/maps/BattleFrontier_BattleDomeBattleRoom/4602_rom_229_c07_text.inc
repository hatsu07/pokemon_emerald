	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:926 BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome
	.globl BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome
BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome: @ 0x082294FC
	.string "{PLAYER}さんの\nにゅうじょう です!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome) > 0x11
	.error "BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome) < 0x11
	.space 0x11 - (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:929 BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer
	.globl BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer
BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer: @ 0x0822950D
	.string "{STR_VAR_1}せん!\p{PLAYER}さん VS\n{STR_VAR_2}さん\pただいま より はじめます!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer) > 0x22
	.error "BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer) < 0x22
	.space 0x22 - (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:935 BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner
	.globl BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner: @ 0x0822952F
	.string "{PLAYER}さんの かちです\nおめでとう ございます!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner) > 0x18
	.error "BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner) < 0x18
	.space 0x18 - (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:939 BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner
	.globl BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner
BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner: @ 0x08229547
	.string "{STR_VAR_2}さんの かちです\nおめでとう ございます!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner) > 0x18
	.error "BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner) < 0x18
	.space 0x18 - (. - BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:943 BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ (+1 aliases)
	.globl BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ: @ 0x0822955F
	.string "バトルトーナメント レベル50\nゆうしょうは {PLAYER}さん です!\lおめでとう ございます!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ) > 0x2d
	.error "BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ) < 0x2d
	.space 0x2d - (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:948 BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp (+1 aliases)
	.globl BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp: @ 0x0822958C
	.string "バトルトーナメント オープンレベル\nゆうしょうは {PLAYER}さん!\lおめでとう ございます!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp) > 0x2c
	.error "BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp) < 0x2c
	.space 0x2c - (. - BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:953 BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait
	.globl BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait
BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait: @ 0x082295B8
	.string "たいへんな ことに なりました!\pダブルノックアウトの ばあい\nバトルトーナメントの ルールに のっとり\lはんていと なります\pしばらく おまちください……!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait) > 0x50
	.error "BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait) < 0x50
	.space 0x50 - (. - BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:961 BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer
	.globl BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer
BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer: @ 0x08229608
	.string "しんぱんいん より\nはんていの けっかが でました!\pしょうしゃは\nなんと! なんと! なんと!\l{STR_VAR_1}さん です!\lおめでとうございます!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer) > 0x46
	.error "BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer) < 0x46
	.space 0x46 - (. - BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:969 BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer
	.globl BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer
BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer: @ 0x0822964E
	.string "しんぱんいん より\nはんていの けっかが でました!\pしょうしゃは\nなんと! なんと! なんと!\l{PLAYER}さん です!\lおめでとうございます!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer) > 0x46
	.error "BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer) < 0x46
	.space 0x46 - (. - BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer)
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
	.globl BattleFrontier_BattleDomeBattleRoom_Text_RisingStar
BattleFrontier_BattleDomeBattleRoom_Text_RisingStar: @ 0x082296A5
	.string "さらなる うえを めざして!\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_RisingStar) > 0x10
	.error "BattleFrontier_BattleDomeBattleRoom_Text_RisingStar may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_RisingStar) < 0x10
	.space 0x10 - (. - BattleFrontier_BattleDomeBattleRoom_Text_RisingStar)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:985 BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship
	.globl BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship
BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship: @ 0x082296B5
	.string "いっきに ゆうしょうまで\nのぼりつめて しまうのでしょうか!?\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship) > 0x21
	.error "BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship) < 0x21
	.space 0x21 - (. - BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:990 BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry
	.globl BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry
BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry: @ 0x082296D6
	.string "はつしゅつじょう はつゆうしょうの\nいぎょう たっせい なるか!?\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry) > 0x23
	.error "BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:995 BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged
	.globl BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged
BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged: @ 0x082296F9
	.string "ぜんかいの リベンジなるか!?\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged) > 0x11
	.error "BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged) < 0x11
	.space 0x11 - (. - BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1000 BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship
	.globl BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship
BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship: @ 0x0822970A
	.string "はじめての ゆうしょうへ むけて\nもえています!\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship) > 0x1a
	.error "BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1005 BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal
	.globl BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal
BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal: @ 0x08229724
	.string "この しあいに かてば\nいよいよ けっしょうせん です!\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal) > 0x1e
	.error "BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1010 BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue
	.globl BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue
BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue: @ 0x08229742
	.string "ひがんの はつゆうしょう なるか!?\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue) > 0x14
	.error "BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue) < 0x14
	.space 0x14 - (. - BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue)
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
	.globl BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer
BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer: @ 0x08229764
	.string "この ひとに かてる トレーナーは\nはたして いるのでしょうか!?\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer) > 0x23
	.error "BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1024 BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer
	.globl BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer
BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer: @ 0x08229787
	.string "この ひとの ために\nこの たいかいは あるのでしょうか!?\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer) > 0x20
	.error "BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer) < 0x20
	.space 0x20 - (. - BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1029 BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle
	.globl BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle
BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle: @ 0x082297A7
	.string "はたして れんぱ なるか!?\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle) > 0x10
	.error "BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle) < 0x10
	.space 0x10 - (. - BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1034 BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned
BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned: @ 0x082297B7
	.string "かえってきました!\nもと チャンピオン!\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned) != 0x16
	.error "BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned must retain its original byte length"
	.endif
	.globl gText_Rom_2297C1
	.set gText_Rom_2297C1, BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned + 0xa
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1038 BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned
	.globl BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned
BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned: @ 0x082297CD
	.string "あの つよさが もどってきました!\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned) > 0x13
	.error "BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned) < 0x13
	.space 0x13 - (. - BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1042 BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals
	.globl BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals
BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals: @ 0x082297E0
	.string "けっしょうに すすむのは\nやっぱり この ひと なんでしょうか!?\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals) > 0x23
	.error "BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1047 BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory
	.globl BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory
BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory: @ 0x08229803
	.string "みごとに ふっかつ ゆうしょう なるか!?\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory) > 0x17
	.error "BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1052 BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster
	.globl BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster
BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster: @ 0x0822981A
	.string "おうじゃの ふうかく ただよう!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster) > 0x11
	.error "BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster) < 0x11
	.space 0x11 - (. - BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1055 BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker
	.globl BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker
BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker: @ 0x0822982B
	.string "そして…… {PLAYER}さんの\nきろくを はばむ トレーナーは……\pそう…… そのなは!!\nバトルドームの コミッショナーに して!!\lわれらが ドームスーパースター!!\lヒース だぁーーーーーー!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker) > 0x60
	.error "BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker) < 0x60
	.space 0x60 - (. - BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1063 BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant
	.globl BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant
BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant: @ 0x0822988B
	.string "かんきゃく『ヒースっ!! ヒースっ!!\nヒースっ!! ヒースっ!! ヒースっ!!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant) > 0x29
	.error "BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant) < 0x29
	.space 0x29 - (. - BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1067 BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro
	.globl BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro
BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro: @ 0x082298B4
	.string "ヒース『アッハッハッ!!\pきこえるっ? この だいかんせい!\nわたしたちの しあいを まえに\lみんな ウズウズ してるよっ!!\pアッハッハッ!!\pキミは わたしと たたかえる\nこうふんと きんちょうで\lピクピク ビクビク してるねっ!!\pでも だいじょうぶっ!!\pバトルドームの いちばんぼしっ!!\nドームスーパースター ヒースの かがやきで\lきみを てらして あげる からっ!!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro) > 0xbf
	.error "BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro) < 0xbf
	.space 0xbf - (. - BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1079 BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy
	.globl BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy
BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy: @ 0x08229973
	.string "キミの せんりゃく! みせて ごらんっ!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy) > 0x15
	.error "BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy) < 0x15
	.space 0x15 - (. - BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1083 BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer
	.globl BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer
BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer: @ 0x08229988
	.string "なんとーーー! なんとーーーっ!\nたたかいに かったのは\l{PLAYER}さんだぁーーー!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer) > 0x28
	.error "BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer) < 0x28
	.space 0x28 - (. - BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1087 BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker
	.globl BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker
BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker: @ 0x082299B0
	.string "ドームスーパースター!!\nヒースの しょうりです!\pおめでとうーーーー! ヒース!!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker) > 0x2b
	.error "BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker) < 0x2b
	.space 0x2b - (. - BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1092 BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass
	.globl BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass
BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass: @ 0x082299DB
	.string "ヒース『きまり だからねっ!\nキミの フロンティアパスを かしてっ!!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass) > 0x24
	.error "BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass) < 0x24
	.space 0x24 - (. - BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1096 BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol
	.globl BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol
BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol: @ 0x082299FF
	.string "フロンティアパスに\nタクティクスシンボルが きざまれた!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol) > 0x1d
	.error "BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1100 BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime
	.globl BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime
BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime: @ 0x08229A1C
	.string "…… …… ……\pわたしは キミを ごかい してたよ\nつぎは こうは いかない からね……{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime) > 0x2e
	.error "BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime) < 0x2e
	.space 0x2e - (. - BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1105 BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched
	.globl BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched
BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched: @ 0x08229A4A
	.string "どこまで かちつづける つもり なのか?\nかんろく じゅうぶん!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched) > 0x21
	.error "BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched) < 0x21
	.space 0x21 - (. - BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1109 BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker
	.globl BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker
BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker: @ 0x08229A6B
	.string "…… そして みなさーーーーん!!\pついに! ついに あのトレーナーが\nかえって きたぞーーー!\pそう…… その トレーナーの なはーーー\nわれらが ドームスーパースターーーー!!\lヒース だぁーーーーーー!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker) > 0x69
	.error "BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker) < 0x69
	.space 0x69 - (. - BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1118 BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro
	.globl BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro
BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro: @ 0x08229AD4
	.string "ヒース『われるような かんせい……\nむせかえる ような ねっき……\lやっぱり ここは すばらしいよ……\p…… わたしは ドームスーパースター……\nみんなの きたいと あこがれの ほし……\lながれ きえさる ことなど できない……\pもっと ひかりっ! もっと かがやいてっ!\nここに やってくる すべての ひとびとを\lてらさなければ いけないっ!!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro) > 0xae
	.error "BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro) < 0xae
	.space 0xae - (. - BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1130 BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess
	.globl BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess
BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess: @ 0x08229B82
	.string "さあっ! わたしの すべてっ!\nここに ひろう するよっ!!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess) > 0x1f
	.error "BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess) < 0x1f
	.space 0x1f - (. - BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1134 BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed
	.globl BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed
BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed: @ 0x08229BA1
	.string "ヒース『ほーんと ステキっ! キミはっ!!\pすべてを だしきった わたしが\nかなわない なんて はじめてっ!!\pさあっ! キミの フロンティアパスを!!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed) > 0x4d
	.error "BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed) < 0x4d
	.space 0x4d - (. - BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1141 BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine
	.globl BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine
BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine: @ 0x08229BEE
	.string "タクティクスシンボルが\nきんいろに かがやいた!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine) > 0x19
	.error "BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine)
	.endif
	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1145 BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter
	.globl BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter
BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter: @ 0x08229C07
	.string "つよく! なにより かわいい キミっ!!\pキミには わたしの ような\nスーパースターに なれる\lかのうせいを かんじるよっ!\lまた あえるときを たのしみに しようっ!!{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter) > 0x56
	.error "BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter) < 0x56
	.space 0x56 - (. - BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter)
	.endif
	@ analyzed canonical ROM range 0x08229C5D-0x08229CB6
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08229C5D: @ 0x08229C5D
	.string "バトルトーナメント　レベル50\nゆうしょうは　{PLAYER}さんっ!\pおめでとう　ございます!!{EOS}"
EventText_JP_08229C89: @ 0x08229C89
	.string "バトルトーナメント　オープンレベル\nゆうしょうは　{PLAYER}さんっ!\pおめでとう　ございます!!{EOS}"
