	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:325 BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle
	.globl gText_Rom_2312C1
gText_Rom_2312C1: @ 0x082312C1
	.string "トレーナーの ちしきを はかる ばしょ!!\nバトルファクトリーに ようこそ!\pバトルトレード シングルへの\nごあんないは こちらです!"
	.byte EOS
	.if (. - gText_Rom_2312C1) > 0x44
	.error "gText_Rom_2312C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2312C1) < 0x44
	.space 0x44 - (. - gText_Rom_2312C1)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:332 BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
	.globl gText_Rom_231305
gText_Rom_231305: @ 0x08231305
	.string "バトルトレード シングルに\nちょうせん しますか?"
	.byte EOS
	.if (. - gText_Rom_231305) > 0x1a
	.error "gText_Rom_231305 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231305) < 0x1a
	.space 0x1a - (. - gText_Rom_231305)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:336 BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge
	.globl gText_Rom_23131F
gText_Rom_23131F: @ 0x0823131F
	.string "こちらでは レンタルポケモンを つかった\nバトルトレード シングル という\lイベントを おこなって います!\pまずは バトルトレード せんようの\nポケモン 3ひきを おかし します!\pつぎに そちらの ポケモンを\nつかって シングルバトルを\lおこなって いただきます!\pたたかいに しょうりすると いちど だけ\nポケモンを トレード できます!\pトレードと たたかいを くりかえし\nみごと 7れんしょう したら\lバトルポイントを さしあげます!\pなお とちゅうで ちょうせんを\nちゅうだん したい ばあいは\lきちんと レポートを かかないと\lつづけて ちょうせんが できません!\pくれぐれも きをつけて くださいね!"
	.byte EOS
	.if (. - gText_Rom_23131F) > 0x135
	.error "gText_Rom_23131F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23131F) < 0x135
	.space 0x135 - (. - gText_Rom_23131F)
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
	.globl gText_Rom_231469
gText_Rom_231469: @ 0x08231469
	.string "レベル50と オープンレベルの イベント\nどちらに ちょうせん しますか?"
	.byte EOS
	.if (. - gText_Rom_231469) > 0x26
	.error "gText_Rom_231469 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231469) < 0x26
	.space 0x26 - (. - gText_Rom_231469)
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
	.globl gText_Rom_2314DC
gText_Rom_2314DC: @ 0x082314DC
	.string "おつかれさまでした!\pレンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!\pせいせきを レポートに かきますので\nしょうしょう おまちください!"
	.byte EOS
	.if (. - gText_Rom_2314DC) > 0x53
	.error "gText_Rom_2314DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2314DC) < 0x53
	.space 0x53 - (. - gText_Rom_2314DC)
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
	.globl gText_Rom_231554
gText_Rom_231554: @ 0x08231554
	.string "バトルトレード 7せん とっぱ\nおめでとう ございます!"
	.byte EOS
	.if (. - gText_Rom_231554) > 0x1d
	.error "gText_Rom_231554 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231554) < 0x1d
	.space 0x1d - (. - gText_Rom_231554)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:390 BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak
	.globl gText_Rom_231571
gText_Rom_231571: @ 0x08231571
	.string "7れんしょうを きねんして\nバトルポイントを さしあげます!"
	.byte EOS
	.if (. - gText_Rom_231571) > 0x1f
	.error "gText_Rom_231571 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231571) < 0x1f
	.space 0x1f - (. - gText_Rom_231571)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:395 BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints
	.globl gText_Rom_231590
gText_Rom_231590: @ 0x08231590
	.string "おやや?\pバトルポイントが いっぱい ですねー\pポイントを ごりようしてから\nまた きてください!"
	.byte EOS
	.if (. - gText_Rom_231590) > 0x32
	.error "gText_Rom_231590 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231590) < 0x32
	.space 0x32 - (. - gText_Rom_231590)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:401 BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2315C2
gText_Rom_2315C2: @ 0x082315C2
	.string "おまちしておりましたよ!\pちょうせんを さいかいする まえに\nレポートを かきます!"
	.byte EOS
	.if (. - gText_Rom_2315C2) != 0x2b
	.error "gText_Rom_2315C2 must retain its original byte length"
	.endif
	.globl gText_Rom_2315CF
	.set gText_Rom_2315CF, gText_Rom_2315C2 + 0xd
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:406 BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting
	.globl gText_Rom_2315ED
gText_Rom_2315ED: @ 0x082315ED
	.string "おきゃくさまー!!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しません でしたね!\pざんねんですが\nちょうせんは むこうと なります!"
	.byte EOS
	.if (. - gText_Rom_2315ED) > 0x4a
	.error "gText_Rom_2315ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2315ED) < 0x4a
	.space 0x4a - (. - gText_Rom_2315ED)
	.endif
