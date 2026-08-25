	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:439 BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle
BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle: @ 0x08227461
	.string "トレーナーの せんりゃくを ためす ばしょ!\nバトルドームへ ようこそ!\pこちらでは\nシングル バトルトーナメントの\lごあんないを しております{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle) != 0x49
	.error "BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:446 BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge
	.globl BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge
BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge: @ 0x082274AA
	.string "シングル バトルトーナメントに\nちょうせん しますか?{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge) > 0x1c
	.error "BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge) < 0x1c
	.space 0x1c - (. - BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:450 BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain
BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain: @ 0x082274C6
	.string "またの ごりようを おまちして おります{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain) != 0x15
	.error "BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:453 BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge
	.globl BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge
BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge: @ 0x082274DB
	.string "シングル バトルトーナメントは\nシングルバトルで おこなわれる\lトーナメントたいかい です\pさんかする かたには しゅつじょう させる\nポケモンを 3ひき えらんで いただきます\pしあいでは 3ひきの てもち ポケモンから\n1ひきを ひかえにして\l2ひきずつで たいせんを おこないます\pだす ポケモンは たいせん あいての\nポケモンを よくみて えらんで くださいね\pトーナメントを 4かい かちすすむと\nみごと ゆうしょうと なります\pバトルポイントが もらえますので\nがんばって くださいね!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lちゃんと レポートを かかないと\lつづけて ちょうせんが できないので\lきをつけて くださいね!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge) > 0x149
	.error "BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge) < 0x149
	.space 0x149 - (. - BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:474 BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge
BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge: @ 0x08227624
	.string "バトルドームへ ごあんないする まえに\nレポートを かきますが よろしいですか?{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge) != 0x29
	.error "BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:478 BattleFrontier_BattleDomeLobby_Text_WhichLevelMode
	.globl BattleFrontier_BattleDomeLobby_Text_WhichLevelMode
BattleFrontier_BattleDomeLobby_Text_WhichLevelMode: @ 0x0822764D
	.string "トーナメントには\nレベル50と オープンレベルと ありますが\lどちらに ちょうせん しますか?{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_WhichLevelMode) > 0x30
	.error "BattleFrontier_BattleDomeLobby_Text_WhichLevelMode may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_WhichLevelMode) < 0x30
	.space 0x30 - (. - BattleFrontier_BattleDomeLobby_Text_WhichLevelMode)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:483 BattleFrontier_BattleDomeLobby_Text_SelectThreeMons
	.globl BattleFrontier_BattleDomeLobby_Text_SelectThreeMons
BattleFrontier_BattleDomeLobby_Text_SelectThreeMons: @ 0x0822767D
	.string "それでは さんかする ポケモンを\n3ひき おえらび ください{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_SelectThreeMons) > 0x1f
	.error "BattleFrontier_BattleDomeLobby_Text_SelectThreeMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_SelectThreeMons) < 0x1f
	.space 0x1f - (. - BattleFrontier_BattleDomeLobby_Text_SelectThreeMons)
	.endif
	@ field-script:0x2271E9 FieldScriptText_22769C
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_22769C
FieldScriptText_22769C: @ 0x0822769C
	.string "おきゃくさま！\pさんかできる　ポケモンが　3ひき　いません！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できません！\pじゅんびが　できましたら\nまた　おこし　ください{EOS}"
	.if (. - FieldScriptText_22769C) != 0x75
	.error "FieldScriptText_22769C must retain its original byte length"
	.endif
	@ field-script:0x2271DC FieldScriptText_227711
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_227711
FieldScriptText_227711: @ 0x08227711
	.string "おきゃくさま！\pさんかできる　ポケモンが　3ひき　いません！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できません！\pじゅんびが　できましたら\nまた　おこし　ください{EOS}"
	.if (. - FieldScriptText_227711) != 0xae
	.error "FieldScriptText_227711 must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:506 BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome
	.globl BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome
BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome: @ 0x082277BF
	.string "それでは バトルドームへ\nごあんない します!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome) > 0x18
	.error "BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome) < 0x18
	.space 0x18 - (. - BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:510 BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting (+1 aliases)
	.globl BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting_Copy_Rom_2277D7
BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting_Copy_Rom_2277D7: @ 0x082277D7
	.string "おきゃくさま!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しませんでしたね?\pもうしわけ ありませんが そのばあい\nちょうせんは むこうと なります{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting_Copy_Rom_2277D7) > 0x51
	.error "BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting_Copy_Rom_2277D7 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting_Copy_Rom_2277D7) < 0x51
	.space 0x51 - (. - BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting_Copy_Rom_2277D7)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:517 BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney
	.globl BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney
BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney: @ 0x08227828
	.string "バトルトーナメント ゆうしょう\nおめでとう ございます!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney) > 0x1d
	.error "BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:522 BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize
	.globl BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize
BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize: @ 0x08227845
	.string "ゆうしょう されましたので\nこの しょうひんを さしあげます!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize) > 0x20
	.error "BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize) < 0x20
	.space 0x20 - (. - BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Data
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Data: @ 0x08227865
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!{EOS}"
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Data) > 0xe
	.error "BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Data may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Data) < 0xe
	.space 0xe - (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Data)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:532 BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom
BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom: @ 0x08227873
	.string "……あら どうぐが いっぱいですね\pどうぐを せいりしてから\nまたおこしください{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom) != 0x29
	.error "BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:537 BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying (+1 aliases)
	.globl BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying_Copy_Rom_22789C
BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying_Copy_Rom_22789C: @ 0x0822789C
	.string "おつかれさまでした!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying_Copy_Rom_22789C) > 0xb
	.error "BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying_Copy_Rom_22789C may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying_Copy_Rom_22789C) < 0xb
	.space 0xb - (. - BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying_Copy_Rom_22789C)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:540 BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved (+1 aliases)
	.globl BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved_Copy_Rom_2278A7
BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved_Copy_Rom_2278A7: @ 0x082278A7
	.string "せいせきを レポートに かきますので\nおまちください{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved_Copy_Rom_2278A7) > 0x1b
	.error "BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved_Copy_Rom_2278A7 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved_Copy_Rom_2278A7) < 0x1b
	.space 0x1b - (. - BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved_Copy_Rom_2278A7)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:544 BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou
	.globl BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou
BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou: @ 0x082278C2
	.string "おまちしておりました!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou) > 0xc
	.error "BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou) < 0xc
	.space 0xc - (. - BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou)
	.endif
	@ field-script:0x226FAD FieldScriptText_2278CE
	.globl FieldScriptText_2278CE
FieldScriptText_2278CE: @ 0x082278CE
	.string "バトルドームに　ごあんないする　まえに\nレポートを　かきますので　おまちください{EOS}"
	.if (. - FieldScriptText_2278CE) > 0x29
	.error "FieldScriptText_2278CE may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2278CE) < 0x29
	.space 0x29 - (. - FieldScriptText_2278CE)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:551 BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle
BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle: @ 0x082278F7
	.string "トレーナーの せんりゃくを ためす ばしょ!\nバトルドームへ ようこそ!\pこちらでは\nダブル バトルトーナメントの\lごあんないを しております{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle) != 0x48
	.error "BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:558 BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge
	.globl BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge
BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge: @ 0x0822793F
	.string "ダブル バトルトーナメントに\nちょうせん しますか?{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge) > 0x1b
	.error "BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge) < 0x1b
	.space 0x1b - (. - BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:562 BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge
	.globl BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge
BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge: @ 0x0822795A
	.string "ダブル バトルトーナメントは\nダブルバトルで おこなわれる\lトーナメントたいかい です\pさんかする かたには しゅつじょう させる\nポケモンを 3ひき えらんで いただきます\pしあいでは 3ひきの てもち ポケモンから\n1ひきを ひかえにして\l2ひきによる ダブルバトルの\lたいせんを おこないます\pだす ポケモンは たいせん あいての\nポケモンを よくみて えらんで くださいね\pトーナメントを 4かい かちすすむと\nみごと ゆうしょうと なります\pゆうしょうされると バトルポイントが\nもらえますので がんばってください!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lちゃんと レポートを かかないと\lつづけて ちょうせんが できないので\lきをつけて くださいね{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge) > 0x156
	.error "BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge) < 0x156
	.space 0x156 - (. - BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:583 BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50
	.globl BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50: @ 0x08227AB0
	.string "ぜんかい おこなわれた レベル50\nシングル バトルトーナメントの けっかだ!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50) > 0x28
	.error "BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50) < 0x28
	.space 0x28 - (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:587 BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50
	.globl BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50: @ 0x08227AD8
	.string "ぜんかい おこなわれた レベル50\nダブル バトルトーナメントの けっかだ!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50) > 0x27
	.error "BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50) < 0x27
	.space 0x27 - (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:591 BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen
	.globl BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen: @ 0x08227AFF
	.string "ぜんかい おこなわれた オープンレベル\nシングル バトルトーナメントの けっかだ!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen) > 0x2a
	.error "BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen) < 0x2a
	.space 0x2a - (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:595 BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen
	.globl BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen: @ 0x08227B29
	.string "ぜんかい おこなわれた オープンレベル\nダブル バトルトーナメントの けっかだ!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen) > 0x29
	.error "BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen) < 0x29
	.space 0x29 - (. - BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:599 BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough
	.globl BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough
BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough: @ 0x08227B52
	.string "きみは みた?\nぜんかいの バトルトーナメント!\pゆうしょう した\n{STR_VAR_1}は ほんと つよかったんだよ\pパソコンの よこに ある モニターで\nけっかを みてみると いいよ{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough) > 0x55
	.error "BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough) < 0x55
	.space 0x55 - (. - BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:607 BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier
	.globl BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier
BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier: @ 0x08227BA7
	.string "バトルフロンティア……\nわたしの ゆめ だった……{EOS}"
	.if (. - BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier) > 0x1a
	.error "BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier) < 0x1a
	.space 0x1a - (. - BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:612 BattleFrontier_OutsideWest_Text_BattleDomeSign2
	.globl BattleFrontier_OutsideWest_Text_BattleDomeSign2
BattleFrontier_OutsideWest_Text_BattleDomeSign2: @ 0x08227BC1
	.string "ここは バトルドーム\nめざせ むてきの スーパースター!{EOS}"
	.if (. - BattleFrontier_OutsideWest_Text_BattleDomeSign2) > 0x1d
	.error "BattleFrontier_OutsideWest_Text_BattleDomeSign2 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_BattleDomeSign2) < 0x1d
	.space 0x1d - (. - BattleFrontier_OutsideWest_Text_BattleDomeSign2)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:617 BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction
	.globl BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction
BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction: @ 0x08227BDE
	.string "ここは ??????\nただいま けんせつちゅう!{EOS}"
	.if (. - BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction) > 0x19
	.error "BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction) < 0x19
	.space 0x19 - (. - BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:621 BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation
	.globl BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation
BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation: @ 0x08227BF7
	.string "バトルドームで れんぱを つづけていくと\nその うわさを ききつけて\lつよい トレーナーが あつまって くるの\pれんぱを つづけてこそ\nしんの スーパースター ね!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation) > 0x53
	.error "BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation) < 0x53
	.space 0x53 - (. - BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:630 BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound
	.globl BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound
BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound: @ 0x08227C4A
	.string "1かいせんで いきなり\nゆうしょうこうほと あたっちゃって\lもう ボコボコに やられたよ……{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound) > 0x2f
	.error "BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound) < 0x2f
	.space 0x2f - (. - BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:635 BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully
	.globl BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully
BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully: @ 0x08227C79
	.string "この ポケモンを ひかえに していれば\nかてたんだよなー\pしあいに だす ポケモン えらびは\nあいての ポケモンを よく みることが\lほんとうに たいせつだよ!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully) > 0x51
	.error "BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully) < 0x51
	.space 0x51 - (. - BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:642 BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker
	.globl BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker
BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker: @ 0x08227CCA
	.string "おめでとう ございます!\pみごと ドームスーパースターを たおし\nバトルトーナメントに\lゆうしょう されましたね!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker) > 0x3a
	.error "BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker) < 0x3a
	.space 0x3a - (. - BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:647 BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints
	.globl BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints
BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints: @ 0x08227D04
	.string "おきゃくさまの\nうつくしい せんりゃくを たたえ\lバトルポイントを さしあげます!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints) > 0x2a
	.error "BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints) < 0x2a
	.space 0x2a - (. - BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:652 BattleFrontier_BattleDomeLobby_Text_RecordLastMatch
	.globl BattleFrontier_BattleDomeLobby_Text_RecordLastMatch
BattleFrontier_BattleDomeLobby_Text_RecordLastMatch: @ 0x08227D2E
	.string "バトルドームで\nさいごに おこなった たたかいを\lフロンティアパスに きろく されますか?{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_RecordLastMatch) > 0x2e
	.error "BattleFrontier_BattleDomeLobby_Text_RecordLastMatch may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_RecordLastMatch) < 0x2e
	.space 0x2e - (. - BattleFrontier_BattleDomeLobby_Text_RecordLastMatch)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:657 BattleFrontier_BattleDomeLobby_Text_RulesAreListed
	.globl BattleFrontier_BattleDomeLobby_Text_RulesAreListed
BattleFrontier_BattleDomeLobby_Text_RulesAreListed: @ 0x08227D5C
	.string "バトルトーナメントの\nルールが かかれている!{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_RulesAreListed) > 0x18
	.error "BattleFrontier_BattleDomeLobby_Text_RulesAreListed may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_RulesAreListed) < 0x18
	.space 0x18 - (. - BattleFrontier_BattleDomeLobby_Text_RulesAreListed)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Data_227D74
BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Data_227D74: @ 0x08227D74
	.string "どの せつめいを よみますか?{EOS}"
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Data_227D74) > 0x10
	.error "BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Data_227D74 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Data_227D74) < 0x10
	.space 0x10 - (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Data_227D74)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:664 BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules
	.globl BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules
BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules: @ 0x08227D84
	.string "トーナメントの くみあわせは\nトレーナーが つれている\lポケモンの ちからを みて つくられます\pさいしょから つよい トレーナーどうしは\nあたらないように なっています{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules) > 0x56
	.error "BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules) < 0x56
	.space 0x56 - (. - BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:671 BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree
	.globl BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree
BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree: @ 0x08227DDA
	.string "トーナメントひょうは\nしあいまえの ひかえしつで\lかかりいんが みせてくれます\pトーナメントひょう には\n「ぜんかいの しあいけっか」\p「トレーナーの もっている\n ポケモンの じょうほう」\p「トレーナーの たたかいかた」\p……などの じょうほうが かかれているので\nしっかりと みましょう{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree) > 0x92
	.error "BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree) < 0x92
	.space 0x92 - (. - BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:682 BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules
BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules: @ 0x08227E6C
	.string "トーナメントの しあいで\nおなじターンで どうじに たおれて\lダブルノックアウトに なった ときは\lしあいを みていた しんぱんだんに よる\lはんていで しょうしゃを けってい します{EOS}"
	.if (. - BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules) != 0x5d
	.error "BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules must retain its original byte length"
	.endif
	@ ANALYSIS: SOURCE_RANGE offset=0x227EC9, size=0x55E
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattleDomeCorridor_OnFrame: @ 0x08227EC9
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattleDomeCorridor_OnFrame
	.byte 0
gMapScriptConditionTable_BattleFrontier_BattleDomeCorridor_OnFrame: @ 0x08227ECF
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08227ED9
	.2byte 0
EventScript_JP_08227ED9: @ 0x08227ED9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x0010
	setvar 0x4000, 0x0001
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08227F2C
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomeCorridor_Movement_WalkLeftX10_WalkUp
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkLeftX10_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x000D, 0x0003
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomeCorridor_Movement_WalkUp_SetInvisible
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomeCorridor_Movement_WalkUpX2_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x000D, 0x0003
	waitdooranim
	goto EventScript_JP_08227F5A
EventScript_JP_08227F2C: @ 0x08227F2C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomeCorridor_Movement_WalkRightX14_WalkUp
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkRightX14_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x0025, 0x0003
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomeCorridor_Movement_WalkUp_SetInvisible_1
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomeCorridor_Movement_WalkUpX2_SetInvisible_1
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x0025, 0x0003
	waitdooranim
EventScript_JP_08227F5A: @ 0x08227F5A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8006, 0x0000
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_DOME_PRE_BATTLE_ROOM, 0xFF, 0x0005, 0x0007
	.byte 0x27, 0x02
BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkLeftX10_WalkInPlaceFastestUp: @ 0x08227F6C
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkUpX2_SetInvisible: @ 0x08227F79
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkLeftX10_WalkUp: @ 0x08227F7D
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkUp_SetInvisible: @ 0x08227F89
	@ object movement sequence
	walk_up
	set_invisible
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkRightX14_WalkInPlaceFastestUp: @ 0x08227F8C
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkUpX2_SetInvisible_1: @ 0x08227F9D
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkRightX14_WalkUp: @ 0x08227FA1
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end
BattleFrontier_BattleDomeCorridor_Movement_WalkUp_SetInvisible_1: @ 0x08227FB1
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_up
	set_invisible
	step_end
	.globl BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkRightX11_WalkUpX2_SetInvisible
BattleFrontier_BattleDomeCorridor_Movement_WalkUp_WalkRightX11_WalkUpX2_SetInvisible: @ 0x08227FB4
	.byte 0x09, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x09, 0x09, 0x54, 0xFE
gMapScriptDispatch_BattleFrontier_BattleDomePreBattleRoom_OnFrame_OnWarpIntoMap: @ 0x08227FC4
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattleDomePreBattleRoom_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_BattleFrontier_BattleDomePreBattleRoom_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_BattleFrontier_BattleDomePreBattleRoom_OnWarpIntoMap: @ 0x08227FCF
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08227FD9
	.2byte 0
EventScript_JP_08227FD9: @ 0x08227FD9
	setvar 0x4001, 0x0001
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_BattleFrontier_BattleDomePreBattleRoom_OnFrame: @ 0x08227FE3
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08227FED
	.2byte 0
EventScript_JP_08227FED: @ 0x08227FED
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x8006, 0x0001
	goto_if 0x01, EventScript_JP_08228392
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x4000, 0x0001
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUpX4
	@ event command: waitmovement
	waitmovement 0x0000
	lockall
EventScript_JP_0822801A: @ 0x0822801A
	call EventScript_JP_082282C6
	waitmessage
	copyvar 0x8000, 0x800D
	call 0x0821F921
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822808C
	multichoice 0x10, 0x00, 0x49, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082281A8
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082281C0
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228238
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_082280D8
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228114
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_08228142
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822801A
EventScript_JP_0822808C: @ 0x0822808C
	multichoice 0x10, 0x02, 0x6B, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082281A8
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082281C0
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228238
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228114
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228142
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822801A
EventScript_JP_082280D8: @ 0x082280D8
	message BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_228716
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822801A
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822810A
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822801A
EventScript_JP_0822810A: @ 0x0822810A
	call 0x0821F8F5
	goto EventScript_JP_0822801A
EventScript_JP_08228114: @ 0x08228114
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822801A
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228186
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822801A
EventScript_JP_08228142: @ 0x08228142
	message BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822801A
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228174
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822801A
EventScript_JP_08228174: @ 0x08228174
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000C
	setvar 0x8005, 0x0009
	@ event command: special
	special CallBattleDomeFunction
	goto EventScript_JP_08228A26
EventScript_JP_08228186: @ 0x08228186
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait
	waitmessage
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0002
	@ event command: special
	special CallBattleDomeFunction
	playse 0x0037
	waitse
	fadescreen 0x01
	setvar 0x8004, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	end
EventScript_JP_082281A8: @ 0x082281A8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer
	callstd 0x04
	fadescreen 0x01
	setvar 0x8004, 0x0006
	@ event command: special
	special CallBattleDomeFunction
	waitstate
	goto EventScript_JP_0822801A
EventScript_JP_082281C0: @ 0x082281C0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_082281D5
	fadescreen 0x01
	setvar 0x8004, 0x0007
	@ event command: special
	special CallBattleDomeFunction
	waitstate
	goto EventScript_JP_0822801A
EventScript_JP_082281D5: @ 0x082281D5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228214
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822821D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228226
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822822F
	return
EventScript_JP_08228214: @ 0x08228214
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1
	callstd 0x04
	return
EventScript_JP_0822821D: @ 0x0822821D
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2
	callstd 0x04
	return
EventScript_JP_08228226: @ 0x08228226
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals
	callstd 0x04
	return
EventScript_JP_0822822F: @ 0x0822822F
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals
	callstd 0x04
	return
EventScript_JP_08228238: @ 0x08228238
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons
	waitmessage
	waitbuttonpress
	fadescreen 0x01
	call 0x082202F8
	copyvar 0x8004, 0x800D
	setvar 0x8005, 0x0002
	@ event command: special
	special ChoosePartyForBattleFrontier
	waitstate
	setvar 0x8004, 0x0015
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822801A
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0008
	@ event command: special
	special CallBattleDomeFunction
	setvar 0x8004, 0x0012
	@ event command: special
	special CallBattleDomeFunction
	setvar 0x8004, 0x0009
	@ event command: special
	special CallBattleDomeFunction
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkRight_FaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUp_1
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x0005, 0x0001
	waitdooranim
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUp_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x0005, 0x0001
	waitdooranim
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM, 0xFF, 0x0009, 0x0005
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_082282C6: @ 0x082282C6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228305
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822830B
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228311
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228317
	return
EventScript_JP_08228305: @ 0x08228305
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1
	return
EventScript_JP_0822830B: @ 0x0822830B
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2
	return
EventScript_JP_08228311: @ 0x08228311
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals
	return
EventScript_JP_08228317: @ 0x08228317
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0009
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228356
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822836B
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228356
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_0822836B
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals
	return
EventScript_JP_08228356: @ 0x08228356
	checkflag 0x0001
	goto_if 0x01, EventScript_JP_08228380
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228736
	callstd 0x04
	setflag 0x0001
	return
EventScript_JP_0822836B: @ 0x0822836B
	checkflag 0x0001
	goto_if 0x01, EventScript_JP_08228389
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228786
	callstd 0x04
	setflag 0x0001
	return
EventScript_JP_08228380: @ 0x08228380
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287D6
	callstd 0x04
	return
EventScript_JP_08228389: @ 0x08228389
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287FF
	callstd 0x04
	return
EventScript_JP_08228392: @ 0x08228392
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x0001
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth
	callstd 0x04
	@ event command: special
	special LoadPlayerParty
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	playfanfare 0x0170
	waitfanfare
	@ event command: special
	special HealPlayerParty
	call EventScript_JP_082283CB
	fadescreen 0x01
	setvar 0x8004, 0x000B
	@ event command: special
	special CallBattleDomeFunction
	waitstate
	goto EventScript_JP_0822801A
EventScript_JP_082283CB: @ 0x082283CB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082283FF
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228408
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228411
	return
EventScript_JP_082283FF: @ 0x082283FF
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete
	callstd 0x04
	return
EventScript_JP_08228408: @ 0x08228408
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete
	callstd 0x04
	return
EventScript_JP_08228411: @ 0x08228411
	loadword 0x00, BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete
	callstd 0x04
	return
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkRight_FaceLeft: @ 0x0822841A
	@ object movement sequence
	walk_right
	face_left
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUpX4: @ 0x0822841D
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUp_1: @ 0x08228422
	@ object movement sequence
	walk_up
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUp_SetInvisible: @ 0x08228424
	@ object movement sequence
	walk_up
	set_invisible
	step_end
