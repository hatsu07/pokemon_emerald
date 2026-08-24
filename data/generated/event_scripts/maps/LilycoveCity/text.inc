	@ data/maps/LilycoveCity/scripts.inc:410 LilycoveCity_Text_MayShoppingLetsBattle
	.globl LilycoveCity_Text_MayShoppingLetsBattle
LilycoveCity_Text_MayShoppingLetsBattle: @ 0x081E0696
	.string "ハルカ『あら!?\n{PLAYER}{KUN}も おかいもの?\pあたし ぬいぐるみとか ポスター\nいっぱい かっちゃった!\pもちろん ポケモン いっぱい つかまえたし\nちゃんと そだてて いるんだから!\pあたし としては {PLAYER}{KUN}が\nポケモン そだててるか しんぱい だな\pしょうぶ してあげるから\n{PLAYER}{KUN}の ポケモン みせてよ!{EOS}"
	.if (. - LilycoveCity_Text_MayShoppingLetsBattle) > 0x9d
	.error "LilycoveCity_Text_MayShoppingLetsBattle may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MayShoppingLetsBattle) < 0x9d
	.space 0x9d - (. - LilycoveCity_Text_MayShoppingLetsBattle)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:423 LilycoveCity_Text_MayNotRaisingPokemon
	.globl LilycoveCity_Text_MayNotRaisingPokemon
LilycoveCity_Text_MayNotRaisingPokemon: @ 0x081E0733
	.string "ハルカ『えー なんで?\n{PLAYER}{KUN} ポケモン そだててないの?\pそれじゃあ トレーナーとして\nまだまだ ね!{EOS}"
	.if (. - LilycoveCity_Text_MayNotRaisingPokemon) > 0x36
	.error "LilycoveCity_Text_MayNotRaisingPokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MayNotRaisingPokemon) < 0x36
	.space 0x36 - (. - LilycoveCity_Text_MayNotRaisingPokemon)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:429 LilycoveCity_Text_MayBattleMe
	.globl LilycoveCity_Text_MayBattleMe
LilycoveCity_Text_MayBattleMe: @ 0x081E0769
	.string "ハルカ『しょうぶ してあげるから\n{PLAYER}{KUN}の ポケモン みせてよ!{EOS}"
	.if (. - LilycoveCity_Text_MayBattleMe) > 0x22
	.error "LilycoveCity_Text_MayBattleMe may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MayBattleMe) < 0x22
	.space 0x22 - (. - LilycoveCity_Text_MayBattleMe)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:433 LilycoveCity_Text_MayWontBeBeaten
	.globl LilycoveCity_Text_MayWontBeBeaten
LilycoveCity_Text_MayWontBeBeaten: @ 0x081E078B
	.string "ハルカ『あたしの そだてた ポケモンが\n{PLAYER}{KUN}の ポケモンに\lまけるわけ ないんだから!{EOS}"
	.if (. - LilycoveCity_Text_MayWontBeBeaten) > 0x2e
	.error "LilycoveCity_Text_MayWontBeBeaten may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MayWontBeBeaten) < 0x2e
	.space 0x2e - (. - LilycoveCity_Text_MayWontBeBeaten)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:437 LilycoveCity_Text_MayDefeat (+1 aliases)
	.globl LilycoveCity_Text_MayDefeat
LilycoveCity_Text_MayDefeat: @ 0x081E07B9
	.string "…… …… ……\p103ばん どうろで\n{PLAYER}{KUN}と しょうぶ したこと\lおもいだしちゃった!\pあの しょうぶが あったから\n{PLAYER}{KUN} ここまで\lつよく なったんだね!{EOS}"
	.if (. - LilycoveCity_Text_MayDefeat) > 0x54
	.error "LilycoveCity_Text_MayDefeat may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MayDefeat) < 0x54
	.space 0x54 - (. - LilycoveCity_Text_MayDefeat)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:444 LilycoveCity_Text_MayGoingBackToLittleroot
	.globl LilycoveCity_Text_MayGoingBackToLittleroot
LilycoveCity_Text_MayGoingBackToLittleroot: @ 0x081E080D
	.string "ハルカ『あたし そろそろ\nミシロタウンに かえる つもりなの\pいろいろ ポケモン つかまえて\nずかんも けっこう できてきたから\lおとうさんに みせるんだ!{EOS}"
	.if (. - LilycoveCity_Text_MayGoingBackToLittleroot) > 0x4f
	.error "LilycoveCity_Text_MayGoingBackToLittleroot may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MayGoingBackToLittleroot) < 0x4f
	.space 0x4f - (. - LilycoveCity_Text_MayGoingBackToLittleroot)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:451 LilycoveCity_Text_MayYouGoingToCollectBadges
	.globl LilycoveCity_Text_MayYouGoingToCollectBadges
LilycoveCity_Text_MayYouGoingToCollectBadges: @ 0x081E085C
	.string "{PLAYER}{KUN}は どうするの?\pあちこちの ジムバッジを あつめて\nポケモンリーグ ちょうせん するの?\pじゃあ あたし {PLAYER}{KUN}が\nバッジを あつめている あいだに\lポケモンずかんを かんせい させちゃお!\pじゃね!{EOS}"
	.if (. - LilycoveCity_Text_MayYouGoingToCollectBadges) > 0x6b
	.error "LilycoveCity_Text_MayYouGoingToCollectBadges may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MayYouGoingToCollectBadges) < 0x6b
	.space 0x6b - (. - LilycoveCity_Text_MayYouGoingToCollectBadges)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:460 LilycoveCity_Text_MayYouGoingToPokemonLeague
	.globl LilycoveCity_Text_MayYouGoingToPokemonLeague
LilycoveCity_Text_MayYouGoingToPokemonLeague: @ 0x081E08C7
	.string "{PLAYER}{KUN}は どうするの?\pポケモンリーグ ちょうせん するの?\pそれとも ポケモンずかん\lかんせい させるの?\pポケモンしょうぶ じゃ まけちゃったけど\nずかんは あたしの ほうが\lさきに かんせい させるんだから!\pじゃね!{EOS}"
	.if (. - LilycoveCity_Text_MayYouGoingToPokemonLeague) > 0x72
	.error "LilycoveCity_Text_MayYouGoingToPokemonLeague may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MayYouGoingToPokemonLeague) < 0x72
	.space 0x72 - (. - LilycoveCity_Text_MayYouGoingToPokemonLeague)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:470 LilycoveCity_Text_MayYouGoingToBattleFrontier
	.globl LilycoveCity_Text_MayYouGoingToBattleFrontier
LilycoveCity_Text_MayYouGoingToBattleFrontier: @ 0x081E0939
	.string "{PLAYER}{KUN}は どうするの?\pバトルフロンティアに ちょうせん する?\nそれとも ずかんを かんせい させる?\pポケモンしょうぶ じゃ まけちゃったけど\nずかんは あたしの ほうが\lさきに かんせい させるんだから!\pじゃね!{EOS}"
	.if (. - LilycoveCity_Text_MayYouGoingToBattleFrontier) > 0x70
	.error "LilycoveCity_Text_MayYouGoingToBattleFrontier may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MayYouGoingToBattleFrontier) < 0x70
	.space 0x70 - (. - LilycoveCity_Text_MayYouGoingToBattleFrontier)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:480 LilycoveCity_Text_BrendanShoppingLetsBattle
	.globl LilycoveCity_Text_BrendanShoppingLetsBattle
LilycoveCity_Text_BrendanShoppingLetsBattle: @ 0x081E09A9
	.string "ユウキ『なんだ {PLAYER}か\pオレ とうさんに たのまれた\nかいものを してたんだ\lべつに ぬいぐるみ なんか かってないよ\pそれよりも ひさしぶりに あったんだ\pどっちが うまく\nポケモン そだてているか\lしょうぶ してやろうか?{EOS}"
	.if (. - LilycoveCity_Text_BrendanShoppingLetsBattle) > 0x72
	.error "LilycoveCity_Text_BrendanShoppingLetsBattle may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BrendanShoppingLetsBattle) < 0x72
	.space 0x72 - (. - LilycoveCity_Text_BrendanShoppingLetsBattle)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:488 LilycoveCity_Text_BrendanNoConfidence
	.globl LilycoveCity_Text_BrendanNoConfidence
LilycoveCity_Text_BrendanNoConfidence: @ 0x081E0A1B
	.string "ユウキ『なんだよ\nじしんが ないのかよ{EOS}"
	.if (. - LilycoveCity_Text_BrendanNoConfidence) > 0x14
	.error "LilycoveCity_Text_BrendanNoConfidence may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BrendanNoConfidence) < 0x14
	.space 0x14 - (. - LilycoveCity_Text_BrendanNoConfidence)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:492 LilycoveCity_Text_BrendanBattleMe
	.globl LilycoveCity_Text_BrendanBattleMe
LilycoveCity_Text_BrendanBattleMe: @ 0x081E0A2F
	.string "ユウキ『どっちが うまく\nポケモン そだてているか\lしょうぶ してやろうか?{EOS}"
	.if (. - LilycoveCity_Text_BrendanBattleMe) > 0x27
	.error "LilycoveCity_Text_BrendanBattleMe may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BrendanBattleMe) < 0x27
	.space 0x27 - (. - LilycoveCity_Text_BrendanBattleMe)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:496 LilycoveCity_Text_BrendanWontBeBeaten
	.globl LilycoveCity_Text_BrendanWontBeBeaten
LilycoveCity_Text_BrendanWontBeBeaten: @ 0x081E0A56
	.string "ユウキ『まあ オレが\n{PLAYER}に まけるわけ ないんだけど{EOS}"
	.if (. - LilycoveCity_Text_BrendanWontBeBeaten) > 0x1c
	.error "LilycoveCity_Text_BrendanWontBeBeaten may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BrendanWontBeBeaten) < 0x1c
	.space 0x1c - (. - LilycoveCity_Text_BrendanWontBeBeaten)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:500 LilycoveCity_Text_BrendanDefeat (+1 aliases)
	.globl LilycoveCity_Text_BrendanDefeat
LilycoveCity_Text_BrendanDefeat: @ 0x081E0A72
	.string "ふうん……\nかなり そだててるんだな\pちょっと くやしいな\nトレーナーとしては オレの ほうが\lセンパイ だったのに……{EOS}"
	.if (. - LilycoveCity_Text_BrendanDefeat) > 0x3d
	.error "LilycoveCity_Text_BrendanDefeat may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BrendanDefeat) < 0x3d
	.space 0x3d - (. - LilycoveCity_Text_BrendanDefeat)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:506 LilycoveCity_Text_BrendanGoingBackToLittleroot
	.globl LilycoveCity_Text_BrendanGoingBackToLittleroot
LilycoveCity_Text_BrendanGoingBackToLittleroot: @ 0x081E0AAF
	.string "ユウキ『オレ……\nミシロタウンに もどるつもり なんだ\pとうさんの てつだいで つくっている\nポケモンずかんも けっこう できてきたし\lいちど とうさんに みせておかないと{EOS}"
	.if (. - LilycoveCity_Text_BrendanGoingBackToLittleroot) > 0x57
	.error "LilycoveCity_Text_BrendanGoingBackToLittleroot may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BrendanGoingBackToLittleroot) < 0x57
	.space 0x57 - (. - LilycoveCity_Text_BrendanGoingBackToLittleroot)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:513 LilycoveCity_Text_BrendanYouGoingToCollectBadges
	.globl LilycoveCity_Text_BrendanYouGoingToCollectBadges
LilycoveCity_Text_BrendanYouGoingToCollectBadges: @ 0x081E0B06
	.string "{PLAYER}は どうする?\pやっぱり ぜんぶの ジムバッジ あつめて\nポケモンリーグ ちょうせん するのか?\pオレも そうしようかな\pまあ いいや\nとにかく がんばれよ!{EOS}"
	.if (. - LilycoveCity_Text_BrendanYouGoingToCollectBadges) > 0x52
	.error "LilycoveCity_Text_BrendanYouGoingToCollectBadges may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BrendanYouGoingToCollectBadges) < 0x52
	.space 0x52 - (. - LilycoveCity_Text_BrendanYouGoingToCollectBadges)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:520 LilycoveCity_Text_BrendanYouGoingToPokemonLeague
	.globl LilycoveCity_Text_BrendanYouGoingToPokemonLeague
LilycoveCity_Text_BrendanYouGoingToPokemonLeague: @ 0x081E0B58
	.string "{PLAYER}は どうする?\pそんなに つよいんだから\nポケモンリーグに ちょうせん するのか?\pオレだって もうちょっと\nポケモン そだてれば {PLAYER}よりも\lつよくなれる はずだからな\pまあ いいや\nとにかく がんばれよ!{EOS}"
	.if (. - LilycoveCity_Text_BrendanYouGoingToPokemonLeague) > 0x6b
	.error "LilycoveCity_Text_BrendanYouGoingToPokemonLeague may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BrendanYouGoingToPokemonLeague) < 0x6b
	.space 0x6b - (. - LilycoveCity_Text_BrendanYouGoingToPokemonLeague)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:529 LilycoveCity_Text_BrendanYouGoingToBattleFrontier
	.globl LilycoveCity_Text_BrendanYouGoingToBattleFrontier
LilycoveCity_Text_BrendanYouGoingToBattleFrontier: @ 0x081E0BC3
	.string "{PLAYER}は どうする?\pバトルフロンティアに ちょうせん する?\nそれとも ずかんを かんせい させる?\pそんなに つよいんだから\nバトルフロンティアに ちょうせん するか?\pオレだって もうちょっと\nポケモン そだてれば {PLAYER}よりも\lつよくなれる はずだからな\lバトルフロンティアに いってみようかな?\pまあ いいや\nとにかく がんばれよ!{EOS}"
	.if (. - LilycoveCity_Text_BrendanYouGoingToBattleFrontier) > 0xaa
	.error "LilycoveCity_Text_BrendanYouGoingToBattleFrontier may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BrendanYouGoingToBattleFrontier) < 0xaa
	.space 0xaa - (. - LilycoveCity_Text_BrendanYouGoingToBattleFrontier)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:543 LilycoveCity_Text_MovedLootIntoHideoutToday
	.globl LilycoveCity_Text_MovedLootIntoHideoutToday
LilycoveCity_Text_MovedLootIntoHideoutToday: @ 0x081E0C6D
	.string "ふふふ……\pきょうも うばった ブツを\nアジトに はこびこんだぞ……\pなっ なんだ おまえ!\nいっ いまのは ひとりごと だぞ!{EOS}"
	.if (. - LilycoveCity_Text_MovedLootIntoHideoutToday) > 0x41
	.error "LilycoveCity_Text_MovedLootIntoHideoutToday may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MovedLootIntoHideoutToday) < 0x41
	.space 0x41 - (. - LilycoveCity_Text_MovedLootIntoHideoutToday)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:550 LilycoveCity_Text_ChanceToDoBigThings
	.globl LilycoveCity_Text_ChanceToDoBigThings
LilycoveCity_Text_ChanceToDoBigThings: @ 0x081E0CAE
	.string "リーダーが なに かんがえてるのか\nしたっぱの オレには わからんが\pアクアだんに いると\nすごいこと できそうだぜ!\pなっ なんだ おまえ!\nいっ いまのは ひとりごと だぞ!{EOS}"
	.if (. - LilycoveCity_Text_ChanceToDoBigThings) > 0x5a
	.error "LilycoveCity_Text_ChanceToDoBigThings may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_ChanceToDoBigThings) < 0x5a
	.space 0x5a - (. - LilycoveCity_Text_ChanceToDoBigThings)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:558 LilycoveCity_Text_DontGoNearCaveInCove
	.globl LilycoveCity_Text_DontGoNearCaveInCove
LilycoveCity_Text_DontGoNearCaveInCove: @ 0x081E0D08
	.string "おい おまえ!\pいりえに ある\nどうくつには ちかづくなよ!\pなぜって? りゆうは どうでも いいんだ!\nおとなの いうこと きけよな!!{EOS}"
	.if (. - LilycoveCity_Text_DontGoNearCaveInCove) > 0x46
	.error "LilycoveCity_Text_DontGoNearCaveInCove may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_DontGoNearCaveInCove) < 0x46
	.space 0x46 - (. - LilycoveCity_Text_DontGoNearCaveInCove)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:564 LilycoveCity_Text_IfWorldBecomesOurs
	.globl LilycoveCity_Text_IfWorldBecomesOurs
LilycoveCity_Text_IfWorldBecomesOurs: @ 0x081E0D4E
	.string "この ひろい せかい すべてが\nおれら アクアだんの ものに なったら\lポケモンも しあわせに なれるはずだ!{EOS}"
	.if (. - LilycoveCity_Text_IfWorldBecomesOurs) > 0x38
	.error "LilycoveCity_Text_IfWorldBecomesOurs may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_IfWorldBecomesOurs) < 0x38
	.space 0x38 - (. - LilycoveCity_Text_IfWorldBecomesOurs)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:569 LilycoveCity_Text_WailmerLeapOutOfWater
	.globl LilycoveCity_Text_WailmerLeapOutOfWater
LilycoveCity_Text_WailmerLeapOutOfWater: @ 0x081E0D86
	.string "それっ! ホエルコ!\nそこで すいめんから ジャンプするのだ!{EOS}"
	.if (. - LilycoveCity_Text_WailmerLeapOutOfWater) > 0x20
	.error "LilycoveCity_Text_WailmerLeapOutOfWater may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_WailmerLeapOutOfWater) < 0x20
	.space 0x20 - (. - LilycoveCity_Text_WailmerLeapOutOfWater)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:573 LilycoveCity_Text_GetLostMessingUpTraining
	.globl LilycoveCity_Text_GetLostMessingUpTraining
LilycoveCity_Text_GetLostMessingUpTraining: @ 0x081E0DA6
	.string "……ん? なんだ おまえは?\pトレーニングの じゃまに なるから\nあっちに いっててくれ!{EOS}"
	.if (. - LilycoveCity_Text_GetLostMessingUpTraining) > 0x2e
	.error "LilycoveCity_Text_GetLostMessingUpTraining may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_GetLostMessingUpTraining) < 0x2e
	.space 0x2e - (. - LilycoveCity_Text_GetLostMessingUpTraining)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:578 LilycoveCity_Text_ContestHallInTown
	.globl LilycoveCity_Text_ContestHallInTown
LilycoveCity_Text_ContestHallInTown: @ 0x081E0DD4
	.string "この まちに ポケモンコンテストの\nかいじょうが あるんだな!\pということは よく そだった ポケモンが\nいっぱい あつまって いるんだな!\pわしの ハートは わくわく なんだな!{EOS}"
	.if (. - LilycoveCity_Text_ContestHallInTown) > 0x5b
	.error "LilycoveCity_Text_ContestHallInTown may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_ContestHallInTown) < 0x5b
	.space 0x5b - (. - LilycoveCity_Text_ContestHallInTown)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:585 LilycoveCity_Text_StrangeCaveInCove
	.globl LilycoveCity_Text_StrangeCaveInCove
LilycoveCity_Text_StrangeCaveInCove: @ 0x081E0E2F
	.string "まちの はずれの いりえに\nおかしな どうくつが あるの みた?{EOS}"
	.if (. - LilycoveCity_Text_StrangeCaveInCove) > 0x21
	.error "LilycoveCity_Text_StrangeCaveInCove may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_StrangeCaveInCove) < 0x21
	.space 0x21 - (. - LilycoveCity_Text_StrangeCaveInCove)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:589 LilycoveCity_Text_GoingToMoveDeleterForHMs
	.globl LilycoveCity_Text_GoingToMoveDeleterForHMs
LilycoveCity_Text_GoingToMoveDeleterForHMs: @ 0x081E0E50
	.string "あたしの ポケモン\nコンテストの ために あたらしい わざを\lおぼえさせる つもりなの!\pだからね わざわすれ じいさんに たのんで\nひでんわざを わすれさせて もらうのよ!{EOS}"
	.if (. - LilycoveCity_Text_GoingToMoveDeleterForHMs) > 0x58
	.error "LilycoveCity_Text_GoingToMoveDeleterForHMs may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_GoingToMoveDeleterForHMs) < 0x58
	.space 0x58 - (. - LilycoveCity_Text_GoingToMoveDeleterForHMs)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:595 LilycoveCity_Text_ImFromKanto
	.globl LilycoveCity_Text_ImFromKanto
LilycoveCity_Text_ImFromKanto: @ 0x081E0EA8
	.string "ぼくは カントーから きました!\pホウエン ちほうは みずと みどりに\nあふれた うつくしい ところ ですね!\p……ん? ということは?\pこの とち だけに せいそくする\nめずらしい ポケモンが いるのかも?{EOS}"
	.if (. - LilycoveCity_Text_ImFromKanto) > 0x69
	.error "LilycoveCity_Text_ImFromKanto may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_ImFromKanto) < 0x69
	.space 0x69 - (. - LilycoveCity_Text_ImFromKanto)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:603 LilycoveCity_Text_TeamAquaBeenTrainingWailmer
	.globl LilycoveCity_Text_TeamAquaBeenTrainingWailmer
LilycoveCity_Text_TeamAquaBeenTrainingWailmer: @ 0x081E0F11
	.string "アクアだんの れんちゅうが\nいりえで ホエルコを\lトレーニング してるんだよ!\pおいらたち ふなのり\nこのままじゃ うみに でられないよ!{EOS}"
	.if (. - LilycoveCity_Text_TeamAquaBeenTrainingWailmer) > 0x46
	.error "LilycoveCity_Text_TeamAquaBeenTrainingWailmer may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_TeamAquaBeenTrainingWailmer) < 0x46
	.space 0x46 - (. - LilycoveCity_Text_TeamAquaBeenTrainingWailmer)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:609 LilycoveCity_Text_SomeonePuntedTeamAquaOut
	.globl LilycoveCity_Text_SomeonePuntedTeamAquaOut
LilycoveCity_Text_SomeonePuntedTeamAquaOut: @ 0x081E0F57
	.string "あんた しってるかい?\pだれかが アクアだんを\nけちらしてくれた らしいんだ!\pおかげで ホエルコ いなくなって\nうみに でられるように なったよ!{EOS}"
	.if (. - LilycoveCity_Text_SomeonePuntedTeamAquaOut) > 0x4b
	.error "LilycoveCity_Text_SomeonePuntedTeamAquaOut may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_SomeonePuntedTeamAquaOut) < 0x4b
	.space 0x4b - (. - LilycoveCity_Text_SomeonePuntedTeamAquaOut)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:616 LilycoveCity_Text_SomeoneStoleMyPokemon
	.globl LilycoveCity_Text_SomeoneStoleMyPokemon
LilycoveCity_Text_SomeoneStoleMyPokemon: @ 0x081E0FA2
	.string "うみべの やどで なみの おとを\nききながら のんびり おひるね\l……を していたら\pわたしの ポケモン とられちゃった!\pはんにんは だれー!?\nアクアだん? アクアだん なのー!?{EOS}"
	.if (. - LilycoveCity_Text_SomeoneStoleMyPokemon) > 0x5d
	.error "LilycoveCity_Text_SomeoneStoleMyPokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_SomeoneStoleMyPokemon) < 0x5d
	.space 0x5d - (. - LilycoveCity_Text_SomeoneStoleMyPokemon)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:623 LilycoveCity_Text_MissingPokemonCameBack
	.globl LilycoveCity_Text_MissingPokemonCameBack
LilycoveCity_Text_MissingPokemonCameBack: @ 0x081E0FFF
	.string "いなくなってた わたしの ポケモン\nいつのまにか かえってきたの!{EOS}"
	.if (. - LilycoveCity_Text_MissingPokemonCameBack) > 0x22
	.error "LilycoveCity_Text_MissingPokemonCameBack may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MissingPokemonCameBack) < 0x22
	.space 0x22 - (. - LilycoveCity_Text_MissingPokemonCameBack)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:627 LilycoveCity_Text_ImArtDealer
	.globl LilycoveCity_Text_ImArtDealer
LilycoveCity_Text_ImArtDealer: @ 0x081E1021
	.string "わたしは ガショウ です!\pいや そういう なまえ なのではなく\nかちのある えを かったり うったりする\lしょくぎょうの なまえ なんです!\pこのまちの びじゅつかんに すばらしい\nめいが が あると きいたの ですが……{EOS}"
	.if (. - LilycoveCity_Text_ImArtDealer) > 0x71
	.error "LilycoveCity_Text_ImArtDealer may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_ImArtDealer) < 0x71
	.space 0x71 - (. - LilycoveCity_Text_ImArtDealer)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:634 LilycoveCity_Text_SeaRemainsForeverYoung
	.globl LilycoveCity_Text_SeaRemainsForeverYoung
LilycoveCity_Text_SeaRemainsForeverYoung: @ 0x081E1092
	.string "わしらが しわくちゃに なっても\nこのうみは いつまでも わかわかしく\lいのちの かがやきに あふれとる\pふほほ ふほほほほ……{EOS}"
	.if (. - LilycoveCity_Text_SeaRemainsForeverYoung) > 0x41
	.error "LilycoveCity_Text_SeaRemainsForeverYoung may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_SeaRemainsForeverYoung) < 0x41
	.space 0x41 - (. - LilycoveCity_Text_SeaRemainsForeverYoung)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:640 LilycoveCity_Text_SixtyYearsAgoHusbandProposed
	.globl LilycoveCity_Text_SixtyYearsAgoHusbandProposed
LilycoveCity_Text_SixtyYearsAgoHusbandProposed: @ 0x081E10D3
	.string "60ねんまえ ここで おじいしゃんが\nわしに プロポーズ してくれた ときから\lこのうみは うつくしいまま ですのじゃ\pむふふ むふふふふ……{EOS}"
	.if (. - LilycoveCity_Text_SixtyYearsAgoHusbandProposed) > 0x48
	.error "LilycoveCity_Text_SixtyYearsAgoHusbandProposed may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_SixtyYearsAgoHusbandProposed) < 0x48
	.space 0x48 - (. - LilycoveCity_Text_SixtyYearsAgoHusbandProposed)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:646 LilycoveCity_Text_TeamAquaRenovatedCavern
	.globl LilycoveCity_Text_TeamAquaRenovatedCavern
LilycoveCity_Text_TeamAquaRenovatedCavern: @ 0x081E111B
	.string "この いりえの ところに おかしな\nどうくつの いりぐちが ある じゃろう?\pいぜんは てんねんの どうくつ だったが\nアクアだん とかいう れんちゅうが\lかいぞうして あんなふうに したんじゃ!\p「しぜんを あいする アクアだん!」\n……と いっておるが\pいうことと やることが ちがっとる!{EOS}"
	.if (. - LilycoveCity_Text_TeamAquaRenovatedCavern) > 0x94
	.error "LilycoveCity_Text_TeamAquaRenovatedCavern may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_TeamAquaRenovatedCavern) < 0x94
	.space 0x94 - (. - LilycoveCity_Text_TeamAquaRenovatedCavern)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:657 LilycoveCity_Text_TeamAquaLotGoneForGood
	.globl LilycoveCity_Text_TeamAquaLotGoneForGood
LilycoveCity_Text_TeamAquaLotGoneForGood: @ 0x081E11AF
	.string "いりえに あった どうくつ……\nいつのまにやら カラッポに なっておる\pアクアだんの れんちゅう\nどこかへ いって しまったらしい のう{EOS}"
	.if (. - LilycoveCity_Text_TeamAquaLotGoneForGood) > 0x45
	.error "LilycoveCity_Text_TeamAquaLotGoneForGood may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_TeamAquaLotGoneForGood) < 0x45
	.space 0x45 - (. - LilycoveCity_Text_TeamAquaLotGoneForGood)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:664 LilycoveCity_Text_CitySign
	.globl LilycoveCity_Text_CitySign
LilycoveCity_Text_CitySign: @ 0x081E11F4
	.string "ここは ミナモ シティ\nりくちの さいはて うみの はじまり{EOS}"
	.if (. - LilycoveCity_Text_CitySign) > 0x1f
	.error "LilycoveCity_Text_CitySign may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_CitySign) < 0x1f
	.space 0x1f - (. - LilycoveCity_Text_CitySign)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:669 LilycoveCity_Text_ContestHallSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl LilycoveCity_Text_ContestHallSign
LilycoveCity_Text_ContestHallSign: @ 0x081E1213
	.string "ポケモンコンテスト かいじょう\nあつまれ! ポケモン トレーナー{EOS}"
	.if (. - LilycoveCity_Text_ContestHallSign) != 0x21
	.error "LilycoveCity_Text_ContestHallSign must retain its original byte length"
	.endif
	@ data/maps/LilycoveCity/scripts.inc:673 LilycoveCity_Text_MotelSign
	.globl LilycoveCity_Text_MotelSign
LilycoveCity_Text_MotelSign: @ 0x081E1234
	.string "「みんしゅく モナミ」\nミナモのモナミ と おぼえて ください{EOS}"
	.if (. - LilycoveCity_Text_MotelSign) > 0x20
	.error "LilycoveCity_Text_MotelSign may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MotelSign) < 0x20
	.space 0x20 - (. - LilycoveCity_Text_MotelSign)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:678 LilycoveCity_Text_MuseumSign
	.globl LilycoveCity_Text_MuseumSign
LilycoveCity_Text_MuseumSign: @ 0x081E1254
	.string "「ミナモ びじゅつかん」\nポケモン めいがてん かいさい ちゅう!{EOS}"
	.if (. - LilycoveCity_Text_MuseumSign) > 0x22
	.error "LilycoveCity_Text_MuseumSign may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MuseumSign) < 0x22
	.space 0x22 - (. - LilycoveCity_Text_MuseumSign)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:683 LilycoveCity_Text_MuseumSignPlayersExhibit
	.globl LilycoveCity_Text_MuseumSignPlayersExhibit
LilycoveCity_Text_MuseumSignPlayersExhibit: @ 0x081E1276
	.string "「ミナモ びじゅつかん」\p{PLAYER}の ポケモン コレクション\nかいさい ちゅう!{EOS}"
	.if (. - LilycoveCity_Text_MuseumSignPlayersExhibit) > 0x27
	.error "LilycoveCity_Text_MuseumSignPlayersExhibit may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MuseumSignPlayersExhibit) < 0x27
	.space 0x27 - (. - LilycoveCity_Text_MuseumSignPlayersExhibit)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:688 LilycoveCity_Text_HarborSignUnderConstruction
	.globl LilycoveCity_Text_HarborSignUnderConstruction
LilycoveCity_Text_HarborSignUnderConstruction: @ 0x081E129D
	.string "「ミナモ シティ ふねのりば」\pれんらくせん タイドリップごう は\nカイナシティにて けんぞう ちゅう!\pもう しばらく おまちください!{EOS}"
	.if (. - LilycoveCity_Text_HarborSignUnderConstruction) > 0x46
	.error "LilycoveCity_Text_HarborSignUnderConstruction may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_HarborSignUnderConstruction) < 0x46
	.space 0x46 - (. - LilycoveCity_Text_HarborSignUnderConstruction)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:695 LilycoveCity_Text_HarborSign
	.globl LilycoveCity_Text_HarborSign
LilycoveCity_Text_HarborSign: @ 0x081E12E3
	.string "「ミナモ シティ ふねのりば」\pれんらくせん タイドリップごうで\nふねの たびを おたのしみ ください!{EOS}"
	.if (. - LilycoveCity_Text_HarborSign) > 0x35
	.error "LilycoveCity_Text_HarborSign may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_HarborSign) < 0x35
	.space 0x35 - (. - LilycoveCity_Text_HarborSign)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:700 LilycoveCity_Text_TrainerFanClubSign
	.globl LilycoveCity_Text_TrainerFanClubSign
LilycoveCity_Text_TrainerFanClubSign: @ 0x081E1318
	.string "「ポケモン トレーナー ファンクラブ」\pかんばんに いろんな トレーナーの\nなまえが らくがき されている……{EOS}"
	.if (. - LilycoveCity_Text_TrainerFanClubSign) > 0x38
	.error "LilycoveCity_Text_TrainerFanClubSign may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_TrainerFanClubSign) < 0x38
	.space 0x38 - (. - LilycoveCity_Text_TrainerFanClubSign)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:705 LilycoveCity_Text_DepartmentStoreSign
	.globl LilycoveCity_Text_DepartmentStoreSign
LilycoveCity_Text_DepartmentStoreSign: @ 0x081E1350
	.string "「ミナモ デパート」\pグッズ いっぱい! ドキドキ いっぱい!\nなにかが みつかる すてきな ところ{EOS}"
	.if (. - LilycoveCity_Text_DepartmentStoreSign) > 0x33
	.error "LilycoveCity_Text_DepartmentStoreSign may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_DepartmentStoreSign) < 0x33
	.space 0x33 - (. - LilycoveCity_Text_DepartmentStoreSign)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:712 LilycoveCity_Text_MoveDeletersHouseSign
	.globl LilycoveCity_Text_MoveDeletersHouseSign
LilycoveCity_Text_MoveDeletersHouseSign: @ 0x081E1383
	.string "「わざわすれ じいさんの いえ」\nポケモンの わざ わすれさせます{EOS}"
	.if (. - LilycoveCity_Text_MoveDeletersHouseSign) > 0x22
	.error "LilycoveCity_Text_MoveDeletersHouseSign may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_MoveDeletersHouseSign) < 0x22
	.space 0x22 - (. - LilycoveCity_Text_MoveDeletersHouseSign)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:716 LilycoveCity_Text_DoYouKnowAboutBerryBlender
	.globl LilycoveCity_Text_DoYouKnowAboutBerryBlender
LilycoveCity_Text_DoYouKnowAboutBerryBlender: @ 0x081E13A5
	.string "きのみブレンダー っていう\nマシンを しってるかい?{EOS}"
	.if (. - LilycoveCity_Text_DoYouKnowAboutBerryBlender) > 0x1b
	.error "LilycoveCity_Text_DoYouKnowAboutBerryBlender may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_DoYouKnowAboutBerryBlender) < 0x1b
	.space 0x1b - (. - LilycoveCity_Text_DoYouKnowAboutBerryBlender)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:720 LilycoveCity_Text_FasterSpinBetterPokeblocks
	.globl LilycoveCity_Text_FasterSpinBetterPokeblocks
LilycoveCity_Text_FasterSpinBetterPokeblocks: @ 0x081E13C0
	.string "みんなで こうそくで まわし まくるんだ\pすっげー はやいと\nすっげー いいポロックが できるらしいぜ!{EOS}"
	.if (. - LilycoveCity_Text_FasterSpinBetterPokeblocks) > 0x35
	.error "LilycoveCity_Text_FasterSpinBetterPokeblocks may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_FasterSpinBetterPokeblocks) < 0x35
	.space 0x35 - (. - LilycoveCity_Text_FasterSpinBetterPokeblocks)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:726 LilycoveCity_Text_ExplainBerryBlender
	.globl LilycoveCity_Text_ExplainBerryBlender
LilycoveCity_Text_ExplainBerryBlender: @ 0x081E13F5
	.string "ポロックっていう おかしが できるんだぜ\pいいポロックを つくると ポケモンの\nコンディションも ぐーんと アップさ!{EOS}"
	.if (. - LilycoveCity_Text_ExplainBerryBlender) > 0x3c
	.error "LilycoveCity_Text_ExplainBerryBlender may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_ExplainBerryBlender) < 0x3c
	.space 0x3c - (. - LilycoveCity_Text_ExplainBerryBlender)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:732 LilycoveCity_Text_HeardTowerCalledSkyPillar
	.globl LilycoveCity_Text_HeardTowerCalledSkyPillar
LilycoveCity_Text_HeardTowerCalledSkyPillar: @ 0x081E1431
	.string "あのな どこかの すいどうに\nそらのはしら とかいう とうが\lたってる らしいぜ{EOS}"
	.if (. - LilycoveCity_Text_HeardTowerCalledSkyPillar) > 0x29
	.error "LilycoveCity_Text_HeardTowerCalledSkyPillar may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_HeardTowerCalledSkyPillar) < 0x29
	.space 0x29 - (. - LilycoveCity_Text_HeardTowerCalledSkyPillar)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:737 LilycoveCity_Text_SawTallTowerOnRoute131
	.globl LilycoveCity_Text_SawTallTowerOnRoute131
LilycoveCity_Text_SawTallTowerOnRoute131: @ 0x081E145A
	.string "オレな 131ばん すいどうの あたりで\nたかーい とうを みたんだけど\lもしかして それって……?{EOS}"
	.if (. - LilycoveCity_Text_SawTallTowerOnRoute131) > 0x33
	.error "LilycoveCity_Text_SawTallTowerOnRoute131 may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_SawTallTowerOnRoute131) < 0x33
	.space 0x33 - (. - LilycoveCity_Text_SawTallTowerOnRoute131)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:742 LilycoveCity_Text_JustArrivedAndSawRarePokemon
	.globl LilycoveCity_Text_JustArrivedAndSawRarePokemon
LilycoveCity_Text_JustArrivedAndSawRarePokemon: @ 0x081E148D
	.string "ぼくら しんこん りょこうで\nこのまちに きたばかり なんだけど\pドラゴンタイプの ポケモンが\nそらを とんで いくのを みたんだよ!\pホウエン ちほうには\nあんな かっこいい ポケモンが\lせいそく してるのかい?{EOS}"
	.if (. - LilycoveCity_Text_JustArrivedAndSawRarePokemon) > 0x6c
	.error "LilycoveCity_Text_JustArrivedAndSawRarePokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_JustArrivedAndSawRarePokemon) < 0x6c
	.space 0x6c - (. - LilycoveCity_Text_JustArrivedAndSawRarePokemon)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:750 LilycoveCity_Text_HoneymoonVowToSeeRarePokemon
	.globl LilycoveCity_Text_HoneymoonVowToSeeRarePokemon
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon: @ 0x081E14F9
	.string "わたしたちの しんこん りょこうは\nかくちの めずらしい ポケモンを\lできるだけ たくさん みること なんです\pこの まちに とうちゃく したら\nいきなり めずらしい ポケモンが みられて\lとても ハッピー だわ!{EOS}"
	.if (. - LilycoveCity_Text_HoneymoonVowToSeeRarePokemon) > 0x6c
	.error "LilycoveCity_Text_HoneymoonVowToSeeRarePokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_HoneymoonVowToSeeRarePokemon) < 0x6c
	.space 0x6c - (. - LilycoveCity_Text_HoneymoonVowToSeeRarePokemon)
	.endif
	@ analyzed canonical ROM range 0x081E1565-0x081E17BB
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_MossdeepCity_OnTransition: @ 0x081E1565
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081E156B
	.byte 0
EventScript_JP_081E156B: @ 0x081E156B
	clearflag 0x0064
	clearflag 0x0065
	clearflag 0x0066
	clearflag 0x0067
	checkflag 0x088A
	call_if 0x01, 0x08243106
	end
.globl EventScript_JP_081E1581
EventScript_JP_081E1581: @ 0x081E1581
	lock
	faceplayer
	checkflag 0x007B
	goto_if 0x01, EventScript_JP_081E1596
	loadword 0x00, MossdeepCity_Text_SpaceCenterReceivedLetter
	callstd 0x04
	release
	end
EventScript_JP_081E1596: @ 0x081E1596
	loadword 0x00, MossdeepCity_Text_SpaceCenterLaunchingRockets
	callstd 0x04
	release
	end
.globl EventScript_JP_081E15A0
EventScript_JP_081E15A0: @ 0x081E15A0
	lock
	faceplayer
	checkflag 0x007B
	goto_if 0x01, EventScript_JP_081E15B5
	loadword 0x00, MossdeepCity_Text_MossdeepTargetedByMagma
	callstd 0x04
	release
	end
EventScript_JP_081E15B5: @ 0x081E15B5
	loadword 0x00, MossdeepCity_Text_FeelReliefOnLand
	callstd 0x04
	release
	end
.globl EventScript_JP_081E15BF
EventScript_JP_081E15BF: @ 0x081E15BF
	loadword 0x00, MossdeepCity_Text_WailmerWatching
	callstd 0x02
	end
.globl EventScript_JP_081E15C8
EventScript_JP_081E15C8: @ 0x081E15C8
	loadword 0x00, MossdeepCity_Text_LifeNeedsSeaToLive
	callstd 0x02
	end
.globl EventScript_JP_081E15D1
EventScript_JP_081E15D1: @ 0x081E15D1
	loadword 0x00, MossdeepCity_Text_NiceIfWorldCoveredByFlowers
	callstd 0x02
	end
.globl EventScript_JP_081E15DA
EventScript_JP_081E15DA: @ 0x081E15DA
	loadword 0x00, MossdeepCity_Text_SpecialSpaceCenterRock
	callstd 0x02
	end
.globl EventScript_JP_081E15E3
EventScript_JP_081E15E3: @ 0x081E15E3
	loadword 0x00, MossdeepCity_Text_ItsAWhiteRock
	callstd 0x03
	end
.globl EventScript_JP_081E15EC
EventScript_JP_081E15EC: @ 0x081E15EC
	loadword 0x00, MossdeepCity_Text_GymSign
	callstd 0x03
	end
.globl EventScript_JP_081E15F5
EventScript_JP_081E15F5: @ 0x081E15F5
	loadword 0x00, MossdeepCity_Text_CitySign
	callstd 0x03
	end
.globl EventScript_JP_081E15FE
EventScript_JP_081E15FE: @ 0x081E15FE
	loadword 0x00, MossdeepCity_Text_SpaceCenterSign
	callstd 0x03
	end
.globl EventScript_JP_081E1607
EventScript_JP_081E1607: @ 0x081E1607
	setflag 0x087C
	setvar 0x4001, 0x0001
	end
.globl EventScript_JP_081E1610
EventScript_JP_081E1610: @ 0x081E1610
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x000E, LilycoveCity_Movement_Delay16_FaceRight_Delay16X4_FaceLeft_Delay16X2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000A, LilycoveCity_Movement_FaceRight_Delay16X3
	@ event command: applymovement
	applymovement 0x000B, LilycoveCity_Movement_FaceRight_Delay16X3
	@ event command: applymovement
	applymovement 0x000C, LilycoveCity_Movement_FaceRight_Delay16X3
	@ event command: applymovement
	applymovement 0x000D, LilycoveCity_Movement_FaceRight_Delay16X3
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, LilycoveCity_Movement_WalkDown_WalkRightX2_WalkDownX3_WalkRightX7
	@ event command: applymovement
	applymovement 0x000A, LilycoveCity_Movement_Delay16_Delay8_WalkDownX3_WalkRightX3_WalkDownX3_WalkRightX7
	@ event command: applymovement
	applymovement 0x000B, LilycoveCity_Movement_Delay16_Delay8_WalkDownX2_WalkRightX3_WalkDownX3_WalkRightX7
	@ event command: applymovement
	applymovement 0x000C, LilycoveCity_Movement_Delay16_Delay8_WalkDown_WalkRightX3_WalkDownX3_WalkRightX7
	@ event command: applymovement
	applymovement 0x000D, LilycoveCity_Movement_Delay16_Delay8_WalkRightX3_WalkDownX3_WalkRightX7
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x000E
	@ event command: removeobject
	removeobject 0x000A
	@ event command: removeobject
	removeobject 0x000B
	@ event command: removeobject
	removeobject 0x000C
	@ event command: removeobject
	removeobject 0x000D
	delay 0x001E
	setvar 0x405D, 0x0002
	setflag 0x0337
	releaseall
	end
LilycoveCity_Movement_Delay16_FaceRight_Delay16X4_FaceLeft_Delay16X2: @ 0x081E167C
	@ object movement sequence
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	step_end
LilycoveCity_Movement_FaceRight_Delay16X3: @ 0x081E1686
	@ object movement sequence
	face_right
	delay_16
	delay_16
	delay_16
	step_end
LilycoveCity_Movement_WalkDown_WalkRightX2_WalkDownX3_WalkRightX7: @ 0x081E168B
	@ object movement sequence
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LilycoveCity_Movement_Delay16_Delay8_WalkDownX3_WalkRightX3_WalkDownX3_WalkRightX7: @ 0x081E1699
	@ object movement sequence
	delay_16
	delay_8
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LilycoveCity_Movement_Delay16_Delay8_WalkDownX2_WalkRightX3_WalkDownX3_WalkRightX7: @ 0x081E16AC
	@ object movement sequence
	delay_16
	delay_8
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LilycoveCity_Movement_Delay16_Delay8_WalkDown_WalkRightX3_WalkDownX3_WalkRightX7: @ 0x081E16BE
	@ object movement sequence
	delay_16
	delay_8
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LilycoveCity_Movement_Delay16_Delay8_WalkRightX3_WalkDownX3_WalkRightX7: @ 0x081E16CF
	@ object movement sequence
	delay_16
	delay_8
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
.globl EventScript_JP_081E16DF
EventScript_JP_081E16DF: @ 0x081E16DF
	lock
	faceplayer
	loadword 0x00, MossdeepCity_Text_SurfExhilarating
	callstd 0x04
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081E16F5
EventScript_JP_081E16F5: @ 0x081E16F5
	lock
	faceplayer
	checkflag 0x0114
	goto_if 0x01, EventScript_JP_081E1737
	loadword 0x00, MossdeepCity_Text_WantKingsRockStevenGaveMe
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081E1741
	loadword 0x00, MossdeepCity_Text_YouCanKeepIt
	callstd 0x04
	setorcopyvar 0x8000, 0x00BB
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0114
	release
	end
EventScript_JP_081E1737: @ 0x081E1737
	loadword 0x00, MossdeepCity_Text_StevensHouseOverThere
	callstd 0x04
	release
	end
EventScript_JP_081E1741: @ 0x081E1741
	loadword 0x00, MossdeepCity_Text_WhatToDoWithWeirdRock
	callstd 0x04
	release
	end
.globl EventScript_JP_081E174B
EventScript_JP_081E174B: @ 0x081E174B
	loadword 0x00, MossdeepCity_Text_SootopolisNewGymLeader
	callstd 0x02
	end
.globl EventScript_JP_081E1754
EventScript_JP_081E1754: @ 0x081E1754
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	loadword 0x00, MossdeepCity_Text_ScottSomethingWrongWithTown
	callstd 0x04
	closemessage
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081E177F
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081E1791
	addvar 0x40D1, 0x0001
	@ event command: removeobject
	removeobject 0x0010
	release
	end
EventScript_JP_081E177F: @ 0x081E177F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_Movement_Delay16X2_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0010, LilycoveCity_Movement_WalkLeftX9
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081E1791: @ 0x081E1791
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_Movement_Delay16X2_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0010, LilycoveCity_Movement_WalkDown_WalkLeftX9
	@ event command: waitmovement
	waitmovement 0x0000
	return
LilycoveCity_Movement_Delay16X2_WalkInPlaceFastestLeft: @ 0x081E17A3
	@ object movement sequence
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
LilycoveCity_Movement_WalkLeftX9: @ 0x081E17A7
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
	step_end
LilycoveCity_Movement_WalkDown_WalkLeftX9: @ 0x081E17B1
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
