	@ data/maps/LilycoveCity_ContestHall/scripts.inc:313 LilycoveCity_ContestHall_Text_TodayWonSmartnessContest
	.globl LilycoveCity_ContestHall_Text_TodayWonSmartnessContest
LilycoveCity_ContestHall_Text_TodayWonSmartnessContest: @ 0x08207A83
	.string "うつくしさ コンテストで\nゆうしょうした この ポケモンを\lきょうは かしこさ コンテストで\lゆうしょう させたんだぜ！\pああ じぶんの さいのうが こわい……{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_TodayWonSmartnessContest) > 0x51
	.error "LilycoveCity_ContestHall_Text_TodayWonSmartnessContest may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_TodayWonSmartnessContest) < 0x51
	.space 0x51 - (. - LilycoveCity_ContestHall_Text_TodayWonSmartnessContest)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:316 LilycoveCity_ContestHall_Text_EnteredBunchOfContests
	.globl LilycoveCity_ContestHall_Text_EnteredBunchOfContests
LilycoveCity_ContestHall_Text_EnteredBunchOfContests: @ 0x08207AD4
	.string "なんども コンテストに でていて\nなんとなく わかって きたんだけど\pたとえば かっこいいコンテストで\nかっこいいわざを だすと うけるけど\lかしこいアピールや かわいいアピールは\lなぜか うけが わるいんだよな……{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_EnteredBunchOfContests) > 0x6d
	.error "LilycoveCity_ContestHall_Text_EnteredBunchOfContests may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_EnteredBunchOfContests) < 0x6d
	.space 0x6d - (. - LilycoveCity_ContestHall_Text_EnteredBunchOfContests)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:319 LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks
	.globl LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks
LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks: @ 0x08207B41
	.string "さっき ゆうしょう した おにいさん\nすっごい たくさんの しゅるいの\lポロックを もってた！\pあれだけ もってれば\nゆうしょう できるのかな?{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks) > 0x49
	.error "LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks) < 0x49
	.space 0x49 - (. - LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:322 LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous
	.globl LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous
LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous: @ 0x08207B8A
	.string "かーっ ひろいね ここは！\nいなかの コンテスト かいじょう とは\lきんちょうかんが ちがうね！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous) > 0x31
	.error "LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous) < 0x31
	.space 0x31 - (. - LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:325 LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal
	.globl LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal
LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal: @ 0x08207BBB
	.string "しかい『はあい かしこい ポケモンと\nそして トレーナーの みなさーん！\lがんばってくださーーい！\lレッツ！ アピール！！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal) > 0x3e
	.error "LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal) < 0x3e
	.space 0x3e - (. - LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:328 LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest
	.globl LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest
LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest: @ 0x08207BF9
	.string "しんさいん『コンテスト たのしんでますか?\pおともだちを 3にん つれてくれば\n4にん いっしょに さんか できますよ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest) > 0x3d
	.error "LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest) < 0x3d
	.space 0x3d - (. - LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:331 LilycoveCity_ContestHall_Text_EnteredWrongContest
	.globl LilycoveCity_ContestHall_Text_EnteredWrongContest
LilycoveCity_ContestHall_Text_EnteredWrongContest: @ 0x08207C36
	.string "あわわわ……\nでる コンテスト まちがえた……\pたくましい ポケモンを\nかしこさ コンテストに……\pよ よしっ\nかしこそうな いわくだき たのむぞ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_EnteredWrongContest) > 0x4b
	.error "LilycoveCity_ContestHall_Text_EnteredWrongContest may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_EnteredWrongContest) < 0x4b
	.space 0x4b - (. - LilycoveCity_ContestHall_Text_EnteredWrongContest)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:334 LilycoveCity_ContestHall_Text_RaisedMonToBeSmart
	.globl LilycoveCity_ContestHall_Text_RaisedMonToBeSmart
LilycoveCity_ContestHall_Text_RaisedMonToBeSmart: @ 0x08207C81
	.string "わしが ながねん\nちしきの すべてを かけて\lかしこく そだてた ポケモン！\pわかい やつらの ポケモン なんぞに\nそう やすやすと まけたりは せんぞ！\pばあさん みとるかー！?{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_RaisedMonToBeSmart) > 0x5b
	.error "LilycoveCity_ContestHall_Text_RaisedMonToBeSmart may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_RaisedMonToBeSmart) < 0x5b
	.space 0x5b - (. - LilycoveCity_ContestHall_Text_RaisedMonToBeSmart)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:337 LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext
	.globl LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext
LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext: @ 0x08207CDC
	.string "よし！ おれの ポケモンが\nこのつぎに かしこい わざをだせば\lいっきに かいじょうが エキサイトするぞ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext) > 0x36
	.error "LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext) < 0x36
	.space 0x36 - (. - LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:340 LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife
	.globl LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife
LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife: @ 0x08207D12
	.string "やだあ！\pわたしの ズバットちゃんの\nきゅうけつが あんまり すてきで\lつづけて なんども だしてたら\lなんか がっかり されちゃってるー！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife) > 0x47
	.error "LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife) < 0x47
	.space 0x47 - (. - LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:343 LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa
	.globl LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa
LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa: @ 0x08207D59
	.string "キャー！ おじいさん すてきー！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa) > 0x11
	.error "LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa) < 0x11
	.space 0x11 - (. - LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:346 LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves
	.globl LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves
LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves: @ 0x08207D6A
	.string "おなじ ポケモンを つかっていても\nトレーナーに よって\lぜんぜん ちがう わざで\lアピールして くるんだよね\pそれは しょうぶと いっしょだね！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves) > 0x4a
	.error "LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves) < 0x4a
	.space 0x4a - (. - LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:349 LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers
	.globl LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers
LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers: @ 0x08207DB4
	.string "トレーナーより ポケモンの ほうが\nあたま よさそうに みえるなあ{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers) > 0x22
	.error "LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers) < 0x22
	.space 0x22 - (. - LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:352 LilycoveCity_ContestHall_Text_StillLoveSmartnessContests
	.globl LilycoveCity_ContestHall_Text_StillLoveSmartnessContests
LilycoveCity_ContestHall_Text_StillLoveSmartnessContests: @ 0x08207DD6
	.string "やっぱり かしこさ コンテストよ！\pちせいてきな みどりいろが\nうーん クールだわー！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_StillLoveSmartnessContests) > 0x2c
	.error "LilycoveCity_ContestHall_Text_StillLoveSmartnessContests may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_StillLoveSmartnessContests) < 0x2c
	.space 0x2c - (. - LilycoveCity_ContestHall_Text_StillLoveSmartnessContests)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:355 LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest
	.globl LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest
LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest: @ 0x08207E02
	.string "しかい『あら? あなたも\nうつくしさ コンテストに でるの?\lがんばってね！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest) > 0x27
	.error "LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest) < 0x27
	.space 0x27 - (. - LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:358 LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty
	.globl LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty
LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty: @ 0x08207E29
	.string "しんさいん『どの ポケモンも\nじつに うつくしい ですなぁ！\pおもわず さいてんを わすれますよ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty) > 0x32
	.error "LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty) < 0x32
	.space 0x32 - (. - LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:361 LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty
	.globl LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty
LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty: @ 0x08207E5B
	.string "こんなに うつくしい ポケモン\nほかに いないわよ ねえ\pみんなの めを くぎづけに しちゃうわ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty) > 0x32
	.error "LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty) < 0x32
	.space 0x32 - (. - LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:364 LilycoveCity_ContestHall_Text_OverdidGrooming
	.globl LilycoveCity_ContestHall_Text_OverdidGrooming
LilycoveCity_ContestHall_Text_OverdidGrooming: @ 0x08207E8D
	.string "うわーん！\pこの コンテストの ために\nいっしょけんめい けづくろい したら\pやりすぎて あたしの ポケモン\nボサボサに なっちゃった！\pどうしよう……{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_OverdidGrooming) > 0x4d
	.error "LilycoveCity_ContestHall_Text_OverdidGrooming may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_OverdidGrooming) < 0x4d
	.space 0x4d - (. - LilycoveCity_ContestHall_Text_OverdidGrooming)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:367 LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam
	.globl LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam
LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam: @ 0x08207EDA
	.string "この まぶしすぎる オーロラビームに\nしんさいんも めを あけられない！\p……あれ?\nそれじゃ いみが ないのか?{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam) > 0x3a
	.error "LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam) < 0x3a
	.space 0x3a - (. - LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:370 LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe
	.globl LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe
LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe: @ 0x08207F14
	.string "この きれいな ポケモン\nあたしの わかい ころに そっくり！\pって いったら…… とうちゃんが\nのんでた おちゃを ふきだしたよ\pあたし なんか へんなこと いったかね?{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe) > 0x57
	.error "LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe) < 0x57
	.space 0x57 - (. - LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:373 LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy
	.globl LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy
LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy: @ 0x08207F6B
	.string "やっぱり じょせいと しては\pうつくしさコンテストで かてると\nいつもより ちょっぴり うれしいのよねー！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy) > 0x36
	.error "LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy) < 0x36
	.space 0x36 - (. - LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:376 LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon
	.globl LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon
LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon: @ 0x08207FA1
	.string "うわっはっは！\pべっぴんな ポケモンちゃん が\nいっぱいだ……\lこりゃ はなやかで ええのう！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon) > 0x30
	.error "LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon) < 0x30
	.space 0x30 - (. - LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:379 LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone
	.globl LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone
LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone: @ 0x08207FD1
	.string "ただ うつくしい だけじゃ\nなかなか かてないわよ！\pあたしの ポケモンみたいに\nおていれして ツヤツヤ じゃなきゃ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone) > 0x3c
	.error "LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone) < 0x3c
	.space 0x3c - (. - LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:382 LilycoveCity_ContestHall_Text_InTheMiddleOfContest
	.globl LilycoveCity_ContestHall_Text_InTheMiddleOfContest
LilycoveCity_ContestHall_Text_InTheMiddleOfContest: @ 0x0820800D
	.string "しかい『あら あらー！\nいまは コンテスト ちゅう ですよー！\pうけつけで エントリー してから\nでて くださーい！ ねっ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_InTheMiddleOfContest) > 0x3f
	.error "LilycoveCity_ContestHall_Text_InTheMiddleOfContest may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_InTheMiddleOfContest) < 0x3f
	.space 0x3f - (. - LilycoveCity_ContestHall_Text_InTheMiddleOfContest)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:385 LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals
	.globl LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals
LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals: @ 0x0820804C
	.string "しんさいん『おお\nみんな かわいい アピールだなあ！\pおおっ なんて かわいい\nみずあそびの アピールなんだろう！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals) > 0x3a
	.error "LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals) < 0x3a
	.space 0x3a - (. - LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:388 LilycoveCity_ContestHall_Text_MyAzurillWasDistracted
	.globl LilycoveCity_ContestHall_Text_MyAzurillWasDistracted
LilycoveCity_ContestHall_Text_MyAzurillWasDistracted: @ 0x08208086
	.string "ああ ぼくの ルリリちゃんが\nほかの ポケモンに きを とられちゃった！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_MyAzurillWasDistracted) > 0x25
	.error "LilycoveCity_ContestHall_Text_MyAzurillWasDistracted may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_MyAzurillWasDistracted) < 0x25
	.space 0x25 - (. - LilycoveCity_ContestHall_Text_MyAzurillWasDistracted)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:391 LilycoveCity_ContestHall_Text_NeverWonBattleButContest
	.globl LilycoveCity_ContestHall_Text_NeverWonBattleButContest
LilycoveCity_ContestHall_Text_NeverWonBattleButContest: @ 0x082080AB
	.string "わたしの ポケモンって しょうぶだと\n1ども かった こと ないけど\lコンテストは おとくい なのよ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_NeverWonBattleButContest) > 0x34
	.error "LilycoveCity_ContestHall_Text_NeverWonBattleButContest may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_NeverWonBattleButContest) < 0x34
	.space 0x34 - (. - LilycoveCity_ContestHall_Text_NeverWonBattleButContest)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:394 LilycoveCity_ContestHall_Text_PetalDanceIsMarvel
	.globl LilycoveCity_ContestHall_Text_PetalDanceIsMarvel
LilycoveCity_ContestHall_Text_PetalDanceIsMarvel: @ 0x082080DF
	.string "ぼくの ポケモンの かれいな\nはなびらのまい……\lだれにも じゃまは させないぞ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_PetalDanceIsMarvel) > 0x2a
	.error "LilycoveCity_ContestHall_Text_PetalDanceIsMarvel may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_PetalDanceIsMarvel) < 0x2a
	.space 0x2a - (. - LilycoveCity_ContestHall_Text_PetalDanceIsMarvel)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:397 LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter
	.globl LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter
LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter: @ 0x08208109
	.string "どなたの ポケモンも\nほんとうに かわいいわねえ\pでも わたしの ポケモンが\nかわいく アピール すれば……\pきっと もっと かわいい はずよ{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter) > 0x48
	.error "LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter) < 0x48
	.space 0x48 - (. - LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:400 LilycoveCity_ContestHall_Text_MyChildIsInContest
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl LilycoveCity_ContestHall_Text_MyChildIsInContest
LilycoveCity_ContestHall_Text_MyChildIsInContest: @ 0x08208151
	.string "うちのこが コンテストに でてるんですよ{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_MyChildIsInContest) != 0x15
	.error "LilycoveCity_ContestHall_Text_MyChildIsInContest must retain its original byte length"
	.endif
	.globl gText_Rom_208162
	.set gText_Rom_208162, LilycoveCity_ContestHall_Text_MyChildIsInContest + 0x11
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:403 LilycoveCity_ContestHall_Text_ComeOnDear
	.globl LilycoveCity_ContestHall_Text_ComeOnDear
LilycoveCity_ContestHall_Text_ComeOnDear: @ 0x08208166
	.string "ほらっ がんばって！\nあなたの ポケモンが いちばんよっ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_ComeOnDear) > 0x1e
	.error "LilycoveCity_ContestHall_Text_ComeOnDear may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_ComeOnDear) < 0x1e
	.space 0x1e - (. - LilycoveCity_ContestHall_Text_ComeOnDear)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:406 LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest
	.globl LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest
LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest: @ 0x08208184
	.string "ワシは あの おんなのこが\nいちばん かわいいと おもうな……\pえっ? ポケモンの みためを\nくらべてるんか！?{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest) > 0x39
	.error "LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest) < 0x39
	.space 0x39 - (. - LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:409 LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn
	.globl LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn
LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn: @ 0x082081BD
	.string "ああん みてたら\nあの ポケモン ほしく なっちゃった\lつかまえに いこっと！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn) > 0x28
	.error "LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn) < 0x28
	.space 0x28 - (. - LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:412 LilycoveCity_ContestHall_Text_BeautyContestStage
	.globl LilycoveCity_ContestHall_Text_BeautyContestStage
LilycoveCity_ContestHall_Text_BeautyContestStage: @ 0x082081E5
	.string "うつくしさコンテスト ステージ\nビューティフル ポケモンに クラクラ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_BeautyContestStage) > 0x24
	.error "LilycoveCity_ContestHall_Text_BeautyContestStage may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_BeautyContestStage) < 0x24
	.space 0x24 - (. - LilycoveCity_ContestHall_Text_BeautyContestStage)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:415 LilycoveCity_ContestHall_Text_CuteContestStage
	.globl LilycoveCity_ContestHall_Text_CuteContestStage
LilycoveCity_ContestHall_Text_CuteContestStage: @ 0x08208209
	.string "かわいさコンテスト ステージ\nキュートな ポケモンに ウキウキ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_CuteContestStage) > 0x21
	.error "LilycoveCity_ContestHall_Text_CuteContestStage may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_CuteContestStage) < 0x21
	.space 0x21 - (. - LilycoveCity_ContestHall_Text_CuteContestStage)
	.endif
	@ data/maps/LilycoveCity_ContestHall/scripts.inc:418 LilycoveCity_ContestHall_Text_SmartContestStage
	.globl LilycoveCity_ContestHall_Text_SmartContestStage
LilycoveCity_ContestHall_Text_SmartContestStage: @ 0x0820822A
	.string "かしこさコンテスト ステージ\nインテリ ポケモンに トロトロ！{EOS}"
	.if (. - LilycoveCity_ContestHall_Text_SmartContestStage) > 0x20
	.error "LilycoveCity_ContestHall_Text_SmartContestStage may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestHall_Text_SmartContestStage) < 0x20
	.space 0x20 - (. - LilycoveCity_ContestHall_Text_SmartContestStage)
	.endif
	@ analyzed canonical ROM range 0x0820824A-0x082082B5
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LilycoveCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x0820824A
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08208255
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_08208255: @ 0x08208255
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setrespawn 0x0008
	goto EventScript_JP_0820825E
	.byte 0x02
EventScript_JP_0820825E: @ 0x0820825E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special SetLilycoveLadyGfx
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08208278
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820827C
	end
EventScript_JP_08208278: @ 0x08208278
	setflag 0x03E1
	end
EventScript_JP_0820827C: @ 0x0820827C
	clearflag 0x03E1
	end
.globl EventScript_JP_08208280
EventScript_JP_08208280: @ 0x08208280
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_0820828E
EventScript_JP_0820828E: @ 0x0820828E
	loadword 0x00, LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon
	callstd 0x02
	end
.globl EventScript_JP_08208297
EventScript_JP_08208297: @ 0x08208297
	lock
	faceplayer
	checkflag 0x086D
	goto_if 0x01, EventScript_JP_082082AC
	loadword 0x00, LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels
	callstd 0x04
	release
	end
EventScript_JP_082082AC: @ 0x082082AC
	loadword 0x00, LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels
	callstd 0x04
	release
	end
