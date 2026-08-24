	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:359 BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena
	.globl BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena
BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena: @ 0x0822F6F9
	.string "トレーナーの とうしを ためす ばしょ!!\pバトルアリーナへ\nようこそ おいでなされた!\pこちらでは かちぬきチームバトルの\nあんないを しておりますぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena) > 0x4e
	.error "BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena) < 0x4e
	.space 0x4e - (. - BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:365 BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
	.globl BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge: @ 0x0822F747
	.string "バトルアリーナに\nちょうせん されますかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge) > 0x17
	.error "BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22F75E
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22F75E: @ 0x0822F75E
	.string "またの ちょうせんを\nおまちして おりますぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22F75E) > 0x18
	.error "BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22F75E may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22F75E) < 0x18
	.space 0x18 - (. - BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22F75E)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:373 BattleFrontier_BattleArenaLobby_Text_ExplainChallenge
	.globl BattleFrontier_BattleArenaLobby_Text_ExplainChallenge
BattleFrontier_BattleArenaLobby_Text_ExplainChallenge: @ 0x0822F776
	.string "バトルアリーナは かちぬきチームバトルを\nおこなう しせつですぞ!\pさんかする かたには しゅつじょう させる\n3ひきの ポケモンと たたかいに だす\lじゅんばんを きめて いただきますぞ!\pたたかいの あいだは\nこの じゅんばん どおりに\lポケモンを だすことに なりますな!\pたたかいに いちど だした ポケモンは\nけっちゃくが つくまで\lこうたい させる ことが できませぬ!\pさらに 3ターン いないに\nたたかいの けっちゃくが つかなければ\lはんていと なりますぞ!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lレポートを かかないと\lつづけて ちょうせんが できないので\lおきをつけ くだされ!\pみごと 7にんぬきを なされた あかつきには\nバトルポイントを おおくり いたしますぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainChallenge) > 0x165
	.error "BattleFrontier_BattleArenaLobby_Text_ExplainChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainChallenge) < 0x165
	.space 0x165 - (. - BattleFrontier_BattleArenaLobby_Text_ExplainChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:394 BattleFrontier_BattleArenaLobby_Text_OkayToSave
	.globl BattleFrontier_BattleArenaLobby_Text_OkayToSave
BattleFrontier_BattleArenaLobby_Text_OkayToSave: @ 0x0822F8DB
	.string "バトルアリーナへ おつれする まえに\nレポートを かきますが よろしいですかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_OkayToSave) > 0x29
	.error "BattleFrontier_BattleArenaLobby_Text_OkayToSave may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_OkayToSave) < 0x29
	.space 0x29 - (. - BattleFrontier_BattleArenaLobby_Text_OkayToSave)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:398 BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
	.globl BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
BattleFrontier_BattleArenaLobby_Text_WhichLevelMode: @ 0x0822F904
	.string "バトルアリーナには\nレベル50と オープンレベルと ありますが\lどちらに まいられますかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_WhichLevelMode) > 0x2f
	.error "BattleFrontier_BattleArenaLobby_Text_WhichLevelMode may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_WhichLevelMode) < 0x2f
	.space 0x2f - (. - BattleFrontier_BattleArenaLobby_Text_WhichLevelMode)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:403 BattleFrontier_BattleArenaLobby_Text_SelectThreeMons
	.globl BattleFrontier_BattleArenaLobby_Text_SelectThreeMons
BattleFrontier_BattleArenaLobby_Text_SelectThreeMons: @ 0x0822F933
	.string "では さんかする ポケモンを\n3ひき おえらび くだされ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_SelectThreeMons) > 0x1e
	.error "BattleFrontier_BattleArenaLobby_Text_SelectThreeMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_SelectThreeMons) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattleArenaLobby_Text_SelectThreeMons)
	.endif
	@ field-script:0x22F569 FieldScriptText_22F951
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_22F951
FieldScriptText_22F951: @ 0x0822F951
	.string "おきゃくじん！！\pさんかできる　ポケモンが\n3ひき　おりませぬ！\pさんかする　ためには\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　よういして　くだされ！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませぬ！\pじゅんびが　できましたら\nまた　おこし　くだされ！"
	.byte EOS
	.if (. - FieldScriptText_22F951) != 0xa7
	.error "FieldScriptText_22F951 must retain its original byte length"
	.endif
	@ field-script:0x22F55C FieldScriptText_22F9F8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_22F9F8
FieldScriptText_22F9F8: @ 0x0822F9F8
	.string "おきゃくじん！！\pさんかできる　ポケモンが\n3ひき　おりませぬ！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　よういして　くだされ！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませぬ！\pじゅんびが　できましたら\nまた　おこし　くだされ！"
	.byte EOS
	.if (. - FieldScriptText_22F9F8) != 0xb2
	.error "FieldScriptText_22F9F8 must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:433 BattleFrontier_BattleArenaLobby_Text_GuideYouToArena
	.globl BattleFrontier_BattleArenaLobby_Text_GuideYouToArena
BattleFrontier_BattleArenaLobby_Text_GuideYouToArena: @ 0x0822FAAA
	.string "では バトルアリーナへ\nおつれいたしますぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_GuideYouToArena) > 0x17
	.error "BattleFrontier_BattleArenaLobby_Text_GuideYouToArena may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_GuideYouToArena) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleArenaLobby_Text_GuideYouToArena)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:437 BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown (+1 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown
BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown: @ 0x0822FAC1
	.string "おきゃくじん!\pぜんかい レポートを かいて\nしゅうりょう しませんでしたな?\pざんねんですが その ばあい\nちょうせんは むこうと なりますぞ!\pまた はじめから\nちょうせん してくだされ!!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown) > 0x62
	.error "BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown) < 0x62
	.space 0x62 - (. - BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:447 BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins
	.globl BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins
BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins: @ 0x0822FB23
	.string "7にんぬき たっせい\nおみごとで ございました!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins) > 0x19
	.error "BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:451 BattleFrontier_BattleArenaLobby_Text_RecordAchievement (+1 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_RecordAchievement
BattleFrontier_BattleArenaLobby_Text_RecordAchievement: @ 0x0822FB3C
	.string "せいせきを レポートに かきますので\nおまちくだされ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_RecordAchievement) > 0x1c
	.error "BattleFrontier_BattleArenaLobby_Text_RecordAchievement may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_RecordAchievement) < 0x1c
	.space 0x1c - (. - BattleFrontier_BattleArenaLobby_Text_RecordAchievement)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:456 BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize
	.globl BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize
BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize: @ 0x0822FB58
	.string "7にんぬきを たっせい されましたので\nこの しょうひんを おうけとり くだされ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize) > 0x2a
	.error "BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize) < 0x2a
	.space 0x2a - (. - BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_ReceivedPrize
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize: @ 0x0822FB82
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize) > 0xe
	.error "BattleFrontier_BattleArenaLobby_Text_ReceivedPrize may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize) < 0xe
	.space 0xe - (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:466 BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize (+1 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize
BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize: @ 0x0822FB90
	.string "……おおっ!\nどうぐが いっぱいの ようですな!\pどうぐを せいりしてから\nまた おこしくだされ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize) > 0x32
	.error "BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize) < 0x32
	.space 0x32 - (. - BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:472 BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave: @ 0x0822FBC2
	.string "おつかれさまでした!\pせいせきを レポートに かきますので\nおまちくだされ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave) != 0x27
	.error "BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22FBE9
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22FBE9: @ 0x0822FBE9
	.string "またの ちょうせんを\nおまちして おりますぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22FBE9) > 0x18
	.error "BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22FBE9 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22FBE9) < 0x18
	.space 0x18 - (. - BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_Copy_Rom_22FBE9)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:480 BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
	.globl BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame: @ 0x0822FC01
	.string "おまちしておりました!\pバトルアリーナに おつれする まえに\nレポートを かきますので おまちくだされ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame) > 0x35
	.error "BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame) < 0x35
	.space 0x35 - (. - BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:487 BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
	.globl BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
BattleFrontier_BattleArenaLobby_Text_RecordLastMatch: @ 0x0822FC36
	.string "バトルアリーナで\nさいごに おこなった たたかいを\lフロンティアパスに きろく されますかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_RecordLastMatch) > 0x30
	.error "BattleFrontier_BattleArenaLobby_Text_RecordLastMatch may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_RecordLastMatch) < 0x30
	.space 0x30 - (. - BattleFrontier_BattleArenaLobby_Text_RecordLastMatch)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:491 BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack
	.globl BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack
BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack: @ 0x0822FC66
	.string "はんていで まけちゃった……\pまもる ばっかりで\nせめなかったのが よくなかった みたい……"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack) > 0x2f
	.error "BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack) < 0x2f
	.space 0x2f - (. - BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:496 BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked
	.globl BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked
BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked: @ 0x0822FC95
	.string "はんていで かったぜ!\pあいての ポケモンに\nわざを かくじつに あてたのが よかったぜ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked) > 0x2e
	.error "BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked) < 0x2e
	.space 0x2e - (. - BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:501 BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw
	.globl BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw
BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw: @ 0x0822FCC3
	.string "はんていで ひきわけ だったよ\pじかんぎれに なったときに\nあいて ポケモンと のこりの HPが\lおなじ くらい だったからねぇ……"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw) > 0x43
	.error "BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw) < 0x43
	.space 0x43 - (. - BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:507 BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant
	.globl BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant
BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant: @ 0x0822FD06
	.string "バトルアリーナでは ポケモンの じゅんばんが\nとっても だいじ なのよ!\pたとえば 1ばんめの ポケモンの\nじゃくてん となる タイプに たいして\pこうかばつぐんの わざを もっている\nポケモンを 2ばんめに いれておけば\lいいチームに なると おもうわ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant) > 0x81
	.error "BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant) < 0x81
	.space 0x81 - (. - BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:518 BattleFrontier_BattleArenaLobby_Text_RulesAreListed
	.globl BattleFrontier_BattleArenaLobby_Text_RulesAreListed
BattleFrontier_BattleArenaLobby_Text_RulesAreListed: @ 0x0822FD87
	.string "かちぬきチームバトルの\nルールが かかれている!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_RulesAreListed) > 0x19
	.error "BattleFrontier_BattleArenaLobby_Text_RulesAreListed may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_RulesAreListed) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleArenaLobby_Text_RulesAreListed)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading: @ 0x0822FDA0
	.string "どの せつめいを よみますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading) > 0x10
	.error "BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading) < 0x10
	.space 0x10 - (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:524 BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules
BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules: @ 0x0822FDB0
	.string "かちぬきチームバトルは ふつうの たたかいと\nちがい とくべつな ルールが あります\pまず 1かいの たたかいは\n3ターンで しゅうりょうと なります\p3ターンで しょうぶが つかないときは\nしんぱんに よる はんていに なります\pはんていは ポケモンの たたかいかたを\nみて しょうはいを けってい します\pまた しょうぶの けっちゃくが つくまで\nポケモンの こうたいは できません"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules) != 0xc2
	.error "BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:536 BattleFrontier_BattleArenaLobby_Text_ExplainMindRules
	.globl BattleFrontier_BattleArenaLobby_Text_ExplainMindRules
BattleFrontier_BattleArenaLobby_Text_ExplainMindRules: @ 0x0822FE72
	.string "1つめの はんてい ポイントである\n「こころ」は\lせめる きもちを みられます\pどれだけ トレーナーが こうげきする わざを\nめいれい したかに よって\lひょうかが かわります"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainMindRules) > 0x59
	.error "BattleFrontier_BattleArenaLobby_Text_ExplainMindRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainMindRules) < 0x59
	.space 0x59 - (. - BattleFrontier_BattleArenaLobby_Text_ExplainMindRules)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:544 BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules
BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules: @ 0x0822FECB
	.string "2つめの はんてい ポイントである\n「わざ」は ポケモンの わざが\lうまく できたかを みられます\pわざが せいこう すると\nひょうかは あがります\pわざが しっぱい すると\nひょうかは さがります\pさらに あいてに わざを あてたときは\n「こうかはばつぐん」で あがり\l「こうかはいまひとつ」などで さがります\pまた 「まもる」や 「みきり」は\nだしても ひょうかは あがりません\pあいての 「まもる」や 「みきり」で\nわざを だせなくても\lひょうかは さがりません"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules) != 0xeb
	.error "BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:563 BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules
	.globl BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules
BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules: @ 0x0822FFB6
	.string "3つめの はんてい ポイントである\n「からだ」は たいせん したあとの\lポケモンの HPを みられます\pたいせんが はじまる まえの\nHPと くらべて\lたいせんごの HPが どれだけ あるかで\lひょうかが かわります"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules) > 0x6d
	.error "BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules) < 0x6d
	.space 0x6d - (. - BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules)
	.endif
