	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:325 BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle
	.globl BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle
BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle: @ 0x082312C1
	.string "トレーナーの ちしきを はかる ばしょ!!\nバトルファクトリーに ようこそ!\pバトルトレード シングルへの\nごあんないは こちらです!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle) > 0x44
	.error "BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle) < 0x44
	.space 0x44 - (. - BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:332 BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
	.globl BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge: @ 0x08231305
	.string "バトルトレード シングルに\nちょうせん しますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge) > 0x1a
	.error "BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:336 BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge
	.globl BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge
BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge: @ 0x0823131F
	.string "こちらでは レンタルポケモンを つかった\nバトルトレード シングル という\lイベントを おこなって います!\pまずは バトルトレード せんようの\nポケモン 3ひきを おかし します!\pつぎに そちらの ポケモンを\nつかって シングルバトルを\lおこなって いただきます!\pたたかいに しょうりすると いちど だけ\nポケモンを トレード できます!\pトレードと たたかいを くりかえし\nみごと 7れんしょう したら\lバトルポイントを さしあげます!\pなお とちゅうで ちょうせんを\nちゅうだん したい ばあいは\lきちんと レポートを かかないと\lつづけて ちょうせんが できません!\pくれぐれも きをつけて くださいね!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge) > 0x135
	.error "BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge) < 0x135
	.space 0x135 - (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:354 BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit
BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit: @ 0x08231454
	.string "またの ごりようを おまちしていますよ!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit) > 0x15
	.error "BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit) < 0x15
	.space 0x15 - (. - BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:357 BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
	.globl BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode: @ 0x08231469
	.string "レベル50と オープンレベルの イベント\nどちらに ちょうせん しますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode) > 0x26
	.error "BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode) < 0x26
	.space 0x26 - (. - BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:361 BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge
BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge: @ 0x0823148F
	.string "では ちょうせんを はじめる まえに\nレポートを かきますが よろしいですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge) > 0x28
	.error "BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge) < 0x28
	.space 0x28 - (. - BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:366 BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping
BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping: @ 0x082314B7
	.string "それでは ポケモンを\nおあずかり します!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping) > 0x16
	.error "BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping) < 0x16
	.space 0x16 - (. - BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:370 BattleFrontier_BattleFactoryLobby_Text_StepThisWay (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_StepThisWay
BattleFrontier_BattleFactoryLobby_Text_StepThisWay: @ 0x082314CD
	.string "さあさあ こちらに どうぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_StepThisWay) > 0xf
	.error "BattleFrontier_BattleFactoryLobby_Text_StepThisWay may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_StepThisWay) < 0xf
	.space 0xf - (. - BattleFrontier_BattleFactoryLobby_Text_StepThisWay)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:373 BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
	.globl BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults: @ 0x082314DC
	.string "おつかれさまでした!\pレンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!\pせいせきを レポートに かきますので\nしょうしょう おまちください!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults) > 0x53
	.error "BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults) < 0x53
	.space 0x53 - (. - BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:381 BattleFrontier_BattleFactoryLobby_Text_ReturnMons (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_ReturnMons
BattleFrontier_BattleFactoryLobby_Text_ReturnMons: @ 0x0823152F
	.string "レンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ReturnMons) > 0x25
	.error "BattleFrontier_BattleFactoryLobby_Text_ReturnMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ReturnMons) < 0x25
	.space 0x25 - (. - BattleFrontier_BattleFactoryLobby_Text_ReturnMons)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:385 BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins
	.globl BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins
BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins: @ 0x08231554
	.string "バトルトレード 7せん とっぱ\nおめでとう ございます!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins) > 0x1d
	.error "BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:390 BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak
	.globl BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak: @ 0x08231571
	.string "7れんしょうを きねんして\nバトルポイントを さしあげます!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak) > 0x1f
	.error "BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak) < 0x1f
	.space 0x1f - (. - BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:395 BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints
	.globl BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints
BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints: @ 0x08231590
	.string "おやや?\pバトルポイントが いっぱい ですねー\pポイントを ごりようしてから\nまた きてください!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints) > 0x32
	.error "BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints) < 0x32
	.space 0x32 - (. - BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:401 BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume: @ 0x082315C2
	.string "おまちしておりましたよ!\pちょうせんを さいかいする まえに\nレポートを かきます!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume) != 0x2b
	.error "BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:406 BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting
	.globl BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting
BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting: @ 0x082315ED
	.string "おきゃくさまー!!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しません でしたね!\pざんねんですが\nちょうせんは むこうと なります!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting) > 0x4a
	.error "BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting) < 0x4a
	.space 0x4a - (. - BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:413 BattleFrontier_BattleFactoryLobby_Text_WellReturnMons (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_WellReturnMons
BattleFrontier_BattleFactoryLobby_Text_WellReturnMons: @ 0x08231637
	.string "おきゃくさまの ポケモンを\nおかえしします!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WellReturnMons) > 0x17
	.error "BattleFrontier_BattleFactoryLobby_Text_WellReturnMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WellReturnMons) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleFactoryLobby_Text_WellReturnMons)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_BattleFrontier_BattleFactoryLobby
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_BattleFrontier_BattleFactoryLobby: @ 0x0823164E
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_BattleFrontier_BattleFactoryLobby) > 0xe
	.error "BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_BattleFrontier_BattleFactoryLobby may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_BattleFrontier_BattleFactoryLobby) < 0xe
	.space 0xe - (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_BattleFrontier_BattleFactoryLobby)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:421 BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle
	.globl BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle
BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle: @ 0x0823165C
	.string "トレーナーの ちしきを はかる ばしょ!!\nバトルファクトリーに ようこそ!\pバトルトレード ダブルの\nごあんないは こちらです!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle) > 0x42
	.error "BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle) < 0x42
	.space 0x42 - (. - BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:428 BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
	.globl BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge: @ 0x0823169E
	.string "バトルトレード ダブルに\nちょうせん しますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge) > 0x19
	.error "BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:432 BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge
	.globl BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge
BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge: @ 0x082316B7
	.string "こちらでは レンタルポケモンを つかった\nバトルトレード ダブル という\lイベントを おこなって います\pまずは バトルトレード せんようの\nポケモン 3ひきを おかし します!\pつぎに そちらの ポケモンを\nつかって ダブルバトルを\lおこなって いただきます!\pたたかいに しょうりすると いちど だけ\nポケモンを トレード できます!\pトレードと たたかいを くりかえし\nみごと 7れんしょうを したら\lバトルポイントを さしあげます!\pなお とちゅうで ちょうせんを\nちゅうだん したい ときには\lきちんと レポートを かかないと\lつづけて ちょうせんが できません!\pくれぐれも きをつけて くださいね!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge) > 0x133
	.error "BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge) < 0x133
	.space 0x133 - (. - BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:450 BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead
	.globl BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead
BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead: @ 0x082317EA
	.string "ファクトリーヘッドへの しょうり!\nならびに 7れんしょう たっせい\lおめでとう ございます!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead) > 0x30
	.error "BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead) < 0x30
	.space 0x30 - (. - BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:455 BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints
	.globl BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints: @ 0x0823181A
	.string "おきゃくさまの ふかい ちしきを たたえ\nバトルポイントを さしあげます!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints) > 0x26
	.error "BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints) < 0x26
	.space 0x26 - (. - BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:460 BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
	.globl BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave: @ 0x08231840
	.string "レンタルポケモンと\nおあずかり していた ポケモンを\lこうかん しましょう!\pせいせきを レポートに かきますので\nしょうしょう おまちください!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave) > 0x4a
	.error "BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave) < 0x4a
	.space 0x4a - (. - BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:466 BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
	.globl BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch: @ 0x0823188A
	.string "バトルファクトリーで\nさいごに おこなった たたかいを\lフロンティアパスに きろく いたしますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch) > 0x32
	.error "BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch) < 0x32
	.space 0x32 - (. - BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:471 BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves
	.globl BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves
BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves: @ 0x082318BC
	.string "ちょっと! キミ!\pポケモンを そだてなくても\nちょうせん できる から らくしょうー!\pとか おもってない?\pここは ポケモンと そのわざに\nかんする ちしきが ないと\lかちぬけない ひじょうに きびしー\lところ なのよ!!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves) > 0x72
	.error "BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves) < 0x72
	.space 0x72 - (. - BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:483 BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon
	.globl BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon
BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon: @ 0x0823192E
	.string "しゅるいに だまされて よわいポケモンと\nこうかん しちゃった……\pボロまけ……"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon) > 0x29
	.error "BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon) < 0x29
	.space 0x29 - (. - BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:488 BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons
	.globl BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons
BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons: @ 0x08231957
	.string "ダメダメねー!\pトレーナーが いいポケモン もってたら\nたたかいの あいだに\lチェック しとかなきゃ!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons) > 0x34
	.error "BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons) < 0x34
	.space 0x34 - (. - BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:495 BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints
	.globl BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints
BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints: @ 0x0823198B
	.string "ここの スタッフさぁ たたかいの まえに\nつぎに たたかう トレーナーのこと\lちょっとだけ おしえて くれるだろー?\pでも オレ いい おとな なのに\nあいつらの せつめいの いみが\lぜんぜん わからないんだ よう"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints) > 0x6c
	.error "BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints) < 0x6c
	.space 0x6c - (. - BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:502 BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried
	.globl BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried
BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried: @ 0x082319F7
	.string "ぼくってー バッチリー つよいけどー\nすっごくー あきっぽい からさー\lとりあえずー\lばんばん トレード しながらー\lたたかってたのさー\lそしたらさー\lつづけてー バトルトレードにー\lちょうせん したときー\lレンタル してくれるー\lポケモンのー\lしゅるいがさー\lなんかさー\lちょっとさー\lちがったんだよねー"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried) > 0x9a
	.error "BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried) < 0x9a
	.space 0x9a - (. - BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:510 BattleFrontier_BattleFactoryLobby_Text_RulesAreListed
	.globl BattleFrontier_BattleFactoryLobby_Text_RulesAreListed
BattleFrontier_BattleFactoryLobby_Text_RulesAreListed: @ 0x08231A91
	.string "バトルトレードの ルールが かかれている!"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RulesAreListed) > 0x16
	.error "BattleFrontier_BattleFactoryLobby_Text_RulesAreListed may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_RulesAreListed) < 0x16
	.space 0x16 - (. - BattleFrontier_BattleFactoryLobby_Text_RulesAreListed)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_BattleFrontier_BattleFactoryLobby
BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_BattleFrontier_BattleFactoryLobby: @ 0x08231AA7
	.string "どの せつめいを よみますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_BattleFrontier_BattleFactoryLobby) > 0x10
	.error "BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_BattleFrontier_BattleFactoryLobby may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_BattleFrontier_BattleFactoryLobby) < 0x10
	.space 0x10 - (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_BattleFrontier_BattleFactoryLobby)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:516 BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules
BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules: @ 0x08231AB7
	.string "バトルトレードで つかうことの できる\nポケモンは 3ひき まで です\pレンタルするとき トレードするとき\nどちらの とき でも\lおなじ しゅるいの ポケモンを\l2ひき いじょう もつことは できません"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules) != 0x66
	.error "BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:523 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules: @ 0x08231B1D
	.string "トレードが できる あいては\nあなたが たたかいで\lたおした トレーナーです\pトレードで うけとる ことが できるのは\nトレーナーが つかっていた ポケモンです"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules) > 0x51
	.error "BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules) < 0x51
	.space 0x51 - (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:529 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules
	.globl BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules: @ 0x08231B6E
	.string "いちど たたかいに かつ たびに\n1かい 1ひき だけ ポケモンを\lトレード することが できます\p1かいの ちょうせんで\nトレードが できるのは\l6にんめの トレーナーまで です"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules) > 0x5b
	.error "BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules) < 0x5b
	.space 0x5b - (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:536 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules: @ 0x08231BC9
	.string "トレードを おこなう ときには\n2つ ちゅういする ことが あります\pその1 トレードを おこなう ときは\nあいてから うけとる ポケモンの\lつよさは かくにん できません\pその2 ちょうせんを はじめた ときに\nかりた レンタルポケモンの じゅんばんが\lトレードの あとの たたかいにも\lひきつがれます"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules) > 0x99
	.error "BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules) < 0x99
	.space 0x99 - (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:548 BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules
	.globl BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules
BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules: @ 0x08231C62
	.string "オープンレベルの ちょうせんでは\nレンタルできる ポケモンも\lあいての トレーナーが つかう ポケモンも\lすべて レベル100に なります"
	.byte EOS
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules) > 0x46
	.error "BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules) < 0x46
	.space 0x46 - (. - BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules)
	.endif
	@ Embedded ROM bytes: file offset 0x231CA8, size 0x70B
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x02, 0xDD, 0x1C, 0x23, 0x08, 0x04, 0xB3, 0x1C, 0x23, 0x08, 0x00, 0x01, 0x40, 0x00, 0x00, 0xBD
	.byte 0x1C, 0x23, 0x08, 0x00, 0x00, 0x16, 0x01, 0x40, 0x01, 0x00, 0x21, 0x06, 0x80, 0x01, 0x00, 0x06
	.byte 0x05, 0xD8, 0x1C, 0x23, 0x08, 0x57, 0x01, 0x00, 0x08, 0x00, 0x07, 0x00, 0x5B, 0x01, 0x00, 0x01
	.byte 0x5B, 0xFF, 0x00, 0x02, 0x02, 0x00, 0x40, 0x00, 0x00, 0xE7, 0x1C, 0x23, 0x08, 0x00, 0x00, 0x21
	.byte 0x06, 0x80, 0x01, 0x00, 0x06, 0x01, 0x93, 0x1D, 0x23, 0x08, 0x16, 0x00, 0x40, 0x01, 0x00, 0x4F
	.byte 0x01, 0x00, 0x97, 0x23, 0x23, 0x08, 0x4F, 0xFF, 0x00, 0x85, 0x23, 0x23, 0x08, 0x51, 0x00, 0x00
	.byte 0x21, 0x06, 0x80, 0x02, 0x00, 0x06, 0x01, 0x57, 0x20, 0x23, 0x08, 0x16, 0x04, 0x80, 0x0D, 0x00
	.byte 0x25, 0xEE, 0x00, 0x16, 0x04, 0x80, 0x0C, 0x00, 0x25, 0xEE, 0x00, 0x16, 0x04, 0x80, 0x0E, 0x00
	.byte 0x25, 0xEE, 0x00, 0x1A, 0x05, 0x80, 0x0D, 0x80, 0x16, 0x04, 0x80, 0x0F, 0x00, 0x25, 0xEE, 0x00
	.byte 0x1A, 0x06, 0x80, 0x0D, 0x80, 0x04, 0x7E, 0x20, 0x23, 0x08, 0x04, 0xEF, 0x21, 0x23, 0x08, 0x0F
	.byte 0x00, 0xB3, 0x23, 0x23, 0x08, 0x09, 0x04, 0x97, 0x01, 0x16, 0x04, 0x80, 0x08, 0x00, 0x25, 0xEE
	.byte 0x00, 0x16, 0x04, 0x80, 0x06, 0x00, 0x25, 0xEE, 0x00, 0x27, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay @ ROM pointer 0x0823287D
	.byte 0x09, 0x04, 0x68, 0x04, 0xF8, 0x02, 0x22, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x07, 0x01, 0x67
	.byte 0x23, 0x23, 0x08, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x07, 0x01, 0x76, 0x23, 0x23, 0x08, 0x51, 0x00
	.byte 0x00, 0x39, 0x1A, 0x21, 0xFF, 0x06, 0x00, 0x0B, 0x00, 0x27, 0x02, 0x16, 0x04, 0x80, 0x09, 0x00
	.byte 0x25, 0xEE, 0x00, 0x16, 0x04, 0x80, 0x10, 0x00, 0x25, 0xEE, 0x00, 0x0F, 0x00, 0xF8, 0x23, 0x23
	.byte 0x08, 0x09, 0x04, 0x31, 0x70, 0x01, 0x32, 0x25, 0x00, 0x00, 0x16, 0x04, 0x80, 0x09, 0x00, 0x25
	.byte 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x14, 0x1E, 0x23, 0x08, 0x2F, 0x07, 0x01
	.byte 0x30, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_WaitFewMoments
	.byte 0x09, 0x04, 0x68, 0x4F, 0x01, 0x00, 0xAA, 0x23, 0x23
	.byte 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_UnderstoodSirWillDo
	.byte 0x09, 0x04, 0x68, 0x4F, 0x01, 0x00
	.byte 0xAE, 0x23, 0x23, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_MessageFromHeadComeRightNow
	.byte 0x09, 0x04, 0x68
	.byte 0x28, 0x10, 0x00, 0x05, 0xA4, 0x22, 0x23, 0x08, 0x02, 0x16, 0x04, 0x80, 0x09, 0x00, 0x25, 0xE7
	.byte 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x05, 0xA4, 0x22, 0x23, 0x08, 0x16, 0x04, 0x80, 0x01
	.byte 0x00, 0x16, 0x05, 0x80, 0x02, 0x00, 0x25, 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x07, 0x01
	.byte 0x0B, 0x20, 0x23, 0x08, 0x21, 0x0D, 0x80, 0x02, 0x00, 0x07, 0x01, 0x12, 0x20, 0x23, 0x08, 0x21
	.byte 0x0D, 0x80, 0x03, 0x00, 0x07, 0x01, 0x19, 0x20, 0x23, 0x08, 0x21, 0x0D, 0x80, 0x04, 0x00, 0x07
	.byte 0x01, 0x20, 0x20, 0x23, 0x08, 0x21, 0x0D, 0x80, 0x05, 0x00, 0x07, 0x01, 0x27, 0x20, 0x23, 0x08
	.byte 0x21, 0x0D, 0x80, 0x06, 0x00, 0x07, 0x01, 0x2E, 0x20, 0x23, 0x08, 0x04, 0x21, 0xF9, 0x21, 0x08
	.byte 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xB4, 0x1E, 0x23, 0x08, 0x6F, 0x13, 0x04, 0x67, 0x01
	.byte 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x86, 0x1F, 0x23, 0x08
	.byte 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xEA, 0x1E, 0x23, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00
	.byte 0x06, 0x01, 0x26, 0x1F, 0x23, 0x08, 0x21, 0x00, 0x80, 0x03, 0x00, 0x06, 0x01, 0x54, 0x1F, 0x23
	.byte 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x01, 0x1E, 0x23, 0x08, 0x6F, 0x14, 0x06, 0x68
	.byte 0x01, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x86, 0x1F, 0x23
	.byte 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0x26, 0x1F, 0x23, 0x08, 0x21, 0x00, 0x80, 0x02
	.byte 0x00, 0x06, 0x01, 0x54, 0x1F, 0x23, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x01, 0x1E
	.byte 0x23, 0x08, 0x67, 0xAF, 0x28, 0x23, 0x08, 0x66, 0x70, 0x14, 0x08, 0x5E, 0x01, 0x00, 0x19, 0x00
	.byte 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0x01, 0x1E, 0x23, 0x08, 0x21, 0x00
	.byte 0x80, 0x00, 0x00, 0x06, 0x01, 0x1C, 0x1F, 0x23, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01
	.byte 0x01, 0x1E, 0x23, 0x08, 0x04, 0xF5, 0xF8, 0x21, 0x08, 0x05, 0x01, 0x1E, 0x23, 0x08, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame @ ROM pointer 0x082324CA
	.byte 0x09, 0x05, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x01, 0x1E
	.byte 0x23, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0x35, 0x20, 0x23, 0x08, 0x21, 0x00, 0x80
	.byte 0x7F, 0x00, 0x06, 0x01, 0x01, 0x1E, 0x23, 0x08, 0x67, 0xE3, 0x24, 0x23, 0x08, 0x66, 0x70, 0x14
	.byte 0x08, 0x5E, 0x01, 0x00, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0x01, 0x1E, 0x23, 0x08, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x11, 0x2B, 0x23, 0x08, 0x21
	.byte 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x01, 0x1E, 0x23, 0x08, 0x16, 0x04, 0x80, 0x0C, 0x00, 0x25
	.byte 0xEE, 0x00, 0x16, 0x04, 0x80, 0x0E, 0x00, 0x25, 0xEE, 0x00, 0x1A, 0x05, 0x80, 0x0D, 0x80, 0x16
	.byte 0x04, 0x80, 0x0F, 0x00, 0x25, 0xEE, 0x00, 0x1A, 0x06, 0x80, 0x0D, 0x80, 0x04, 0x7E, 0x20, 0x23
	.byte 0x08, 0x04, 0xEF, 0x21, 0x23, 0x08, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon @ ROM pointer 0x08232839
	.byte 0x09, 0x05, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x62, 0x1D
	.byte 0x23, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xE0, 0x1F, 0x23, 0x08, 0x21, 0x00, 0x80
	.byte 0x7F, 0x00, 0x06, 0x01, 0x62, 0x1D, 0x23, 0x08, 0x97, 0x01, 0x16, 0x04, 0x80, 0x07, 0x00, 0x25
	.byte 0xEE, 0x00, 0x27, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x62, 0x1D, 0x23, 0x08, 0x16, 0x04
	.byte 0x80, 0x08, 0x00, 0x25, 0xEE, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete @ ROM pointer 0x0823285F
	.byte 0x09, 0x04, 0x05, 0x62, 0x1D, 0x23, 0x08, 0x67
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent @ ROM pointer 0x08232415
	.byte 0x66, 0x03, 0x67, 0x33, 0x24, 0x23, 0x08, 0x66, 0x03, 0x67
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor4thOpponent
	.byte 0x66, 0x03
	.byte 0x67
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor5thOpponent
	.byte 0x66, 0x03, 0x67
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor6thOpponent @ ROM pointer 0x0823248D
	.byte 0x66, 0x03, 0x67
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor7thOpponent
	.byte 0x66, 0x03, 0x67, 0x8B, 0x28, 0x23, 0x08, 0x66, 0x16
	.byte 0x04, 0x80, 0x03, 0x00, 0x16, 0x05, 0x80, 0x02, 0x00, 0x25, 0xEE, 0x00, 0x2F, 0x37, 0x00, 0x30
	.byte 0x97, 0x01, 0x16, 0x04, 0x80, 0x04, 0x00, 0x25, 0xE7, 0x00, 0x02, 0x25, 0x27, 0x00, 0x16, 0x04
	.byte 0x80, 0x0A, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x25, 0xEE, 0x00, 0x16, 0x04, 0x80, 0x02, 0x00
	.byte 0x16, 0x05, 0x80, 0x06, 0x00, 0x16, 0x06, 0x80, 0x01, 0x00, 0x25, 0xE7, 0x00, 0x05, 0x01, 0x1E
	.byte 0x23, 0x08, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent @ ROM pointer 0x082324FF
	.byte 0x09, 0x04, 0x21, 0x05, 0x80, 0x00, 0x00, 0x07, 0x01, 0x4D, 0x21, 0x23, 0x08, 0x21, 0x05, 0x80
	.byte 0x01, 0x00, 0x07, 0x01, 0x56, 0x21, 0x23, 0x08, 0x21, 0x05, 0x80, 0x02, 0x00, 0x07, 0x01, 0x5F
	.byte 0x21, 0x23, 0x08, 0x21, 0x05, 0x80, 0x03, 0x00, 0x07, 0x01, 0x68, 0x21, 0x23, 0x08, 0x21, 0x05
	.byte 0x80, 0x04, 0x00, 0x07, 0x01, 0x71, 0x21, 0x23, 0x08, 0x21, 0x05, 0x80, 0x05, 0x00, 0x07, 0x01
	.byte 0x7A, 0x21, 0x23, 0x08, 0x21, 0x05, 0x80, 0x06, 0x00, 0x07, 0x01, 0x83, 0x21, 0x23, 0x08, 0x21
	.byte 0x05, 0x80, 0x07, 0x00, 0x07, 0x01, 0x8C, 0x21, 0x23, 0x08, 0x21, 0x05, 0x80, 0x08, 0x00, 0x07
	.byte 0x01, 0x95, 0x21, 0x23, 0x08, 0x21, 0x05, 0x80, 0x0A, 0x00, 0x07, 0x01, 0x9E, 0x21, 0x23, 0x08
	.byte 0x21, 0x05, 0x80, 0x0B, 0x00, 0x07, 0x01, 0xA7, 0x21, 0x23, 0x08, 0x21, 0x05, 0x80, 0x0C, 0x00
	.byte 0x07, 0x01, 0xB0, 0x21, 0x23, 0x08, 0x21, 0x05, 0x80, 0x0D, 0x00, 0x07, 0x01, 0xB9, 0x21, 0x23
	.byte 0x08, 0x21, 0x05, 0x80, 0x0E, 0x00, 0x07, 0x01, 0xC2, 0x21, 0x23, 0x08, 0x21, 0x05, 0x80, 0x0F
	.byte 0x00, 0x07, 0x01, 0xCB, 0x21, 0x23, 0x08, 0x21, 0x05, 0x80, 0x10, 0x00, 0x07, 0x01, 0xD4, 0x21
	.byte 0x23, 0x08, 0x21, 0x05, 0x80, 0x11, 0x00, 0x07, 0x01, 0xDD, 0x21, 0x23, 0x08, 0x21, 0x05, 0x80
	.byte 0x12, 0x00, 0x07, 0x01, 0xE6, 0x21, 0x23, 0x08, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInNormalType
	.byte 0x09
	.byte 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFightingType @ ROM pointer 0x082325C1
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFlyingType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPoisonType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGroundType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInRockType @ ROM pointer 0x0823265D
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInBugType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGhostType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInSteelType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFireType @ ROM pointer 0x08232541
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInWaterType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGrassType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInElectricType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPsychicType @ ROM pointer 0x08232629
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInIceType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInDragonType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInDarkType
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerHasNoClearFavorite @ ROM pointer 0x082326DF
	.byte 0x09, 0x04, 0x03, 0x21, 0x06, 0x80, 0x00, 0x00, 0x07, 0x01, 0x53, 0x22, 0x23, 0x08, 0x21, 0x06
	.byte 0x80, 0x01, 0x00, 0x07, 0x01, 0x5C, 0x22, 0x23, 0x08, 0x21, 0x06, 0x80, 0x02, 0x00, 0x07, 0x01
	.byte 0x65, 0x22, 0x23, 0x08, 0x21, 0x06, 0x80, 0x03, 0x00, 0x07, 0x01, 0x6E, 0x22, 0x23, 0x08, 0x21
	.byte 0x06, 0x80, 0x04, 0x00, 0x07, 0x01, 0x77, 0x22, 0x23, 0x08, 0x21, 0x06, 0x80, 0x05, 0x00, 0x07
	.byte 0x01, 0x80, 0x22, 0x23, 0x08, 0x21, 0x06, 0x80, 0x06, 0x00, 0x07, 0x01, 0x89, 0x22, 0x23, 0x08
	.byte 0x21, 0x06, 0x80, 0x07, 0x00, 0x07, 0x01, 0x92, 0x22, 0x23, 0x08, 0x21, 0x06, 0x80, 0x08, 0x00
	.byte 0x07, 0x01, 0x9B, 0x22, 0x23, 0x08, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleUnrestrained
	.byte 0x09, 0x04, 0x03
	.byte 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleTotalPreparation
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleSlowAndSteady
	.byte 0x09
	.byte 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleEndurance @ ROM pointer 0x08232726
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleHighRisk
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleWeakenFoe
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleImpossibleToPredict
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleDependsOnFlow @ ROM pointer 0x0823276B
	.byte 0x09, 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleFlexible
	.byte 0x09, 0x04, 0x03, 0x67
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_PreparedToFaceHead
	.byte 0x66, 0x04, 0x21, 0xF9, 0x21, 0x08, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xFB, 0x22
	.byte 0x23, 0x08, 0x6F, 0x13, 0x04, 0x67, 0x01, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00
	.byte 0x00, 0x06, 0x01, 0x31, 0x23, 0x23, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xEA, 0x1E
	.byte 0x23, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x26, 0x1F, 0x23, 0x08, 0x21, 0x00, 0x80
	.byte 0x03, 0x00, 0x06, 0x01, 0x54, 0x1F, 0x23, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0xA4
	.byte 0x22, 0x23, 0x08, 0x6F, 0x14, 0x06, 0x68, 0x01, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80
	.byte 0x00, 0x00, 0x06, 0x01, 0x31, 0x23, 0x23, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0x26
	.byte 0x1F, 0x23, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x54, 0x1F, 0x23, 0x08, 0x21, 0x00
	.byte 0x80, 0x7F, 0x00, 0x06, 0x01, 0xA4, 0x22, 0x23, 0x08, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryPreBattleRoom_Text_CantTellAnythingAboutHead
	.byte 0x09
	.byte 0x04, 0x0F, 0x00, 0x39, 0x28, 0x23, 0x08, 0x09, 0x05, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00
	.byte 0x80, 0x00, 0x00, 0x06, 0x01, 0x62, 0x1D, 0x23, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0xE0, 0x1F, 0x23, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x62, 0x1D, 0x23, 0x08, 0x4F
	.byte 0x01, 0x00, 0x9E, 0x23, 0x23, 0x08, 0x4F, 0xFF, 0x00, 0x8B, 0x23, 0x23, 0x08, 0x03, 0x4F, 0x01
	.byte 0x00, 0xA4, 0x23, 0x23, 0x08, 0x4F, 0xFF, 0x00, 0x91, 0x23, 0x23, 0x08, 0x03, 0x09, 0x09, 0x09
	.byte 0x09, 0x09, 0xFE, 0x09, 0x0A, 0x0A, 0x09, 0x09, 0xFE, 0x09, 0x0B, 0x0B, 0x09, 0x09, 0xFE, 0x09
	.byte 0x09, 0x09, 0x09, 0x09, 0x00, 0xFE, 0x0A, 0x0A, 0x09, 0x09, 0x54, 0xFE, 0x0B, 0x0B, 0x09, 0x09
	.byte 0x54, 0xFE, 0x0A, 0x0A, 0x0A, 0xFE, 0x0B, 0x0B, 0x0B, 0x00, 0xFE
