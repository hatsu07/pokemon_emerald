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
	.globl gText_Rom_231454
gText_Rom_231454: @ 0x08231454
	.string "またの ごりようを おまちしていますよ!"
	.byte EOS
	.if (. - gText_Rom_231454) > 0x15
	.error "gText_Rom_231454 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231454) < 0x15
	.space 0x15 - (. - gText_Rom_231454)
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
	.globl gText_Rom_23148F
gText_Rom_23148F: @ 0x0823148F
	.string "では ちょうせんを はじめる まえに\nレポートを かきますが よろしいですか?"
	.byte EOS
	.if (. - gText_Rom_23148F) > 0x28
	.error "gText_Rom_23148F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23148F) < 0x28
	.space 0x28 - (. - gText_Rom_23148F)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:366 BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping (+1 aliases)
	.globl gText_Rom_2314B7
gText_Rom_2314B7: @ 0x082314B7
	.string "それでは ポケモンを\nおあずかり します!"
	.byte EOS
	.if (. - gText_Rom_2314B7) > 0x16
	.error "gText_Rom_2314B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2314B7) < 0x16
	.space 0x16 - (. - gText_Rom_2314B7)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:370 BattleFrontier_BattleFactoryLobby_Text_StepThisWay (+1 aliases)
	.globl gText_Rom_2314CD
gText_Rom_2314CD: @ 0x082314CD
	.string "さあさあ こちらに どうぞ!"
	.byte EOS
	.if (. - gText_Rom_2314CD) > 0xf
	.error "gText_Rom_2314CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2314CD) < 0xf
	.space 0xf - (. - gText_Rom_2314CD)
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
	.globl gText_Rom_23152F
gText_Rom_23152F: @ 0x0823152F
	.string "レンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!"
	.byte EOS
	.if (. - gText_Rom_23152F) > 0x25
	.error "gText_Rom_23152F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23152F) < 0x25
	.space 0x25 - (. - gText_Rom_23152F)
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
	.globl gText_Rom_2315CF
	.set gText_Rom_2315CF, BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume + 0xd
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
