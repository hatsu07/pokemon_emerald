	@ data/maps/LilycoveCity/scripts.inc:410 LilycoveCity_Text_MayShoppingLetsBattle
	.globl gText_Rom_1E0696
gText_Rom_1E0696: @ 0x081E0696
	.string "ハルカ『あら!?\n{PLAYER}{KUN}も おかいもの?\pあたし ぬいぐるみとか ポスター\nいっぱい かっちゃった!\pもちろん ポケモン いっぱい つかまえたし\nちゃんと そだてて いるんだから!\pあたし としては {PLAYER}{KUN}が\nポケモン そだててるか しんぱい だな\pしょうぶ してあげるから\n{PLAYER}{KUN}の ポケモン みせてよ!{EOS}"
	.if (. - gText_Rom_1E0696) > 0x9d
	.error "gText_Rom_1E0696 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0696) < 0x9d
	.space 0x9d - (. - gText_Rom_1E0696)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:423 LilycoveCity_Text_MayNotRaisingPokemon
	.globl gText_Rom_1E0733
gText_Rom_1E0733: @ 0x081E0733
	.string "ハルカ『えー なんで?\n{PLAYER}{KUN} ポケモン そだててないの?\pそれじゃあ トレーナーとして\nまだまだ ね!{EOS}"
	.if (. - gText_Rom_1E0733) > 0x36
	.error "gText_Rom_1E0733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0733) < 0x36
	.space 0x36 - (. - gText_Rom_1E0733)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:429 LilycoveCity_Text_MayBattleMe
	.globl gText_Rom_1E0769
gText_Rom_1E0769: @ 0x081E0769
	.string "ハルカ『しょうぶ してあげるから\n{PLAYER}{KUN}の ポケモン みせてよ!{EOS}"
	.if (. - gText_Rom_1E0769) > 0x22
	.error "gText_Rom_1E0769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0769) < 0x22
	.space 0x22 - (. - gText_Rom_1E0769)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:433 LilycoveCity_Text_MayWontBeBeaten
	.globl gText_Rom_1E078B
gText_Rom_1E078B: @ 0x081E078B
	.string "ハルカ『あたしの そだてた ポケモンが\n{PLAYER}{KUN}の ポケモンに\lまけるわけ ないんだから!{EOS}"
	.if (. - gText_Rom_1E078B) > 0x2e
	.error "gText_Rom_1E078B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E078B) < 0x2e
	.space 0x2e - (. - gText_Rom_1E078B)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:437 LilycoveCity_Text_MayDefeat (+1 aliases)
	.globl gText_Rom_1E07B9
gText_Rom_1E07B9: @ 0x081E07B9
	.string "…… …… ……\p103ばん どうろで\n{PLAYER}{KUN}と しょうぶ したこと\lおもいだしちゃった!\pあの しょうぶが あったから\n{PLAYER}{KUN} ここまで\lつよく なったんだね!{EOS}"
	.if (. - gText_Rom_1E07B9) > 0x54
	.error "gText_Rom_1E07B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E07B9) < 0x54
	.space 0x54 - (. - gText_Rom_1E07B9)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:444 LilycoveCity_Text_MayGoingBackToLittleroot
	.globl gText_Rom_1E080D
gText_Rom_1E080D: @ 0x081E080D
	.string "ハルカ『あたし そろそろ\nミシロタウンに かえる つもりなの\pいろいろ ポケモン つかまえて\nずかんも けっこう できてきたから\lおとうさんに みせるんだ!{EOS}"
	.if (. - gText_Rom_1E080D) > 0x4f
	.error "gText_Rom_1E080D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E080D) < 0x4f
	.space 0x4f - (. - gText_Rom_1E080D)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:451 LilycoveCity_Text_MayYouGoingToCollectBadges
	.globl gText_Rom_1E085C
gText_Rom_1E085C: @ 0x081E085C
	.string "{PLAYER}{KUN}は どうするの?\pあちこちの ジムバッジを あつめて\nポケモンリーグ ちょうせん するの?\pじゃあ あたし {PLAYER}{KUN}が\nバッジを あつめている あいだに\lポケモンずかんを かんせい させちゃお!\pじゃね!{EOS}"
	.if (. - gText_Rom_1E085C) > 0x6b
	.error "gText_Rom_1E085C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E085C) < 0x6b
	.space 0x6b - (. - gText_Rom_1E085C)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:460 LilycoveCity_Text_MayYouGoingToPokemonLeague
	.globl gText_Rom_1E08C7
gText_Rom_1E08C7: @ 0x081E08C7
	.string "{PLAYER}{KUN}は どうするの?\pポケモンリーグ ちょうせん するの?\pそれとも ポケモンずかん\lかんせい させるの?\pポケモンしょうぶ じゃ まけちゃったけど\nずかんは あたしの ほうが\lさきに かんせい させるんだから!\pじゃね!{EOS}"
	.if (. - gText_Rom_1E08C7) > 0x72
	.error "gText_Rom_1E08C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E08C7) < 0x72
	.space 0x72 - (. - gText_Rom_1E08C7)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:470 LilycoveCity_Text_MayYouGoingToBattleFrontier
	.globl gText_Rom_1E0939
gText_Rom_1E0939: @ 0x081E0939
	.string "{PLAYER}{KUN}は どうするの?\pバトルフロンティアに ちょうせん する?\nそれとも ずかんを かんせい させる?\pポケモンしょうぶ じゃ まけちゃったけど\nずかんは あたしの ほうが\lさきに かんせい させるんだから!\pじゃね!{EOS}"
	.if (. - gText_Rom_1E0939) > 0x70
	.error "gText_Rom_1E0939 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0939) < 0x70
	.space 0x70 - (. - gText_Rom_1E0939)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:480 LilycoveCity_Text_BrendanShoppingLetsBattle
	.globl gText_Rom_1E09A9
gText_Rom_1E09A9: @ 0x081E09A9
	.string "ユウキ『なんだ {PLAYER}か\pオレ とうさんに たのまれた\nかいものを してたんだ\lべつに ぬいぐるみ なんか かってないよ\pそれよりも ひさしぶりに あったんだ\pどっちが うまく\nポケモン そだてているか\lしょうぶ してやろうか?{EOS}"
	.if (. - gText_Rom_1E09A9) > 0x72
	.error "gText_Rom_1E09A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E09A9) < 0x72
	.space 0x72 - (. - gText_Rom_1E09A9)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:488 LilycoveCity_Text_BrendanNoConfidence
	.globl gText_Rom_1E0A1B
gText_Rom_1E0A1B: @ 0x081E0A1B
	.string "ユウキ『なんだよ\nじしんが ないのかよ{EOS}"
	.if (. - gText_Rom_1E0A1B) > 0x14
	.error "gText_Rom_1E0A1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0A1B) < 0x14
	.space 0x14 - (. - gText_Rom_1E0A1B)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:492 LilycoveCity_Text_BrendanBattleMe
	.globl gText_Rom_1E0A2F
gText_Rom_1E0A2F: @ 0x081E0A2F
	.string "ユウキ『どっちが うまく\nポケモン そだてているか\lしょうぶ してやろうか?{EOS}"
	.if (. - gText_Rom_1E0A2F) > 0x27
	.error "gText_Rom_1E0A2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0A2F) < 0x27
	.space 0x27 - (. - gText_Rom_1E0A2F)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:496 LilycoveCity_Text_BrendanWontBeBeaten
	.globl gText_Rom_1E0A56
gText_Rom_1E0A56: @ 0x081E0A56
	.string "ユウキ『まあ オレが\n{PLAYER}に まけるわけ ないんだけど{EOS}"
	.if (. - gText_Rom_1E0A56) > 0x1c
	.error "gText_Rom_1E0A56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0A56) < 0x1c
	.space 0x1c - (. - gText_Rom_1E0A56)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:500 LilycoveCity_Text_BrendanDefeat (+1 aliases)
	.globl gText_Rom_1E0A72
gText_Rom_1E0A72: @ 0x081E0A72
	.string "ふうん……\nかなり そだててるんだな\pちょっと くやしいな\nトレーナーとしては オレの ほうが\lセンパイ だったのに……{EOS}"
	.if (. - gText_Rom_1E0A72) > 0x3d
	.error "gText_Rom_1E0A72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0A72) < 0x3d
	.space 0x3d - (. - gText_Rom_1E0A72)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:506 LilycoveCity_Text_BrendanGoingBackToLittleroot
	.globl gText_Rom_1E0AAF
gText_Rom_1E0AAF: @ 0x081E0AAF
	.string "ユウキ『オレ……\nミシロタウンに もどるつもり なんだ\pとうさんの てつだいで つくっている\nポケモンずかんも けっこう できてきたし\lいちど とうさんに みせておかないと{EOS}"
	.if (. - gText_Rom_1E0AAF) > 0x57
	.error "gText_Rom_1E0AAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0AAF) < 0x57
	.space 0x57 - (. - gText_Rom_1E0AAF)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:513 LilycoveCity_Text_BrendanYouGoingToCollectBadges
	.globl gText_Rom_1E0B06
gText_Rom_1E0B06: @ 0x081E0B06
	.string "{PLAYER}は どうする?\pやっぱり ぜんぶの ジムバッジ あつめて\nポケモンリーグ ちょうせん するのか?\pオレも そうしようかな\pまあ いいや\nとにかく がんばれよ!{EOS}"
	.if (. - gText_Rom_1E0B06) > 0x52
	.error "gText_Rom_1E0B06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0B06) < 0x52
	.space 0x52 - (. - gText_Rom_1E0B06)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:520 LilycoveCity_Text_BrendanYouGoingToPokemonLeague
	.globl gText_Rom_1E0B58
gText_Rom_1E0B58: @ 0x081E0B58
	.string "{PLAYER}は どうする?\pそんなに つよいんだから\nポケモンリーグに ちょうせん するのか?\pオレだって もうちょっと\nポケモン そだてれば {PLAYER}よりも\lつよくなれる はずだからな\pまあ いいや\nとにかく がんばれよ!{EOS}"
	.if (. - gText_Rom_1E0B58) > 0x6b
	.error "gText_Rom_1E0B58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0B58) < 0x6b
	.space 0x6b - (. - gText_Rom_1E0B58)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:529 LilycoveCity_Text_BrendanYouGoingToBattleFrontier
	.globl gText_Rom_1E0BC3
gText_Rom_1E0BC3: @ 0x081E0BC3
	.string "{PLAYER}は どうする?\pバトルフロンティアに ちょうせん する?\nそれとも ずかんを かんせい させる?\pそんなに つよいんだから\nバトルフロンティアに ちょうせん するか?\pオレだって もうちょっと\nポケモン そだてれば {PLAYER}よりも\lつよくなれる はずだからな\lバトルフロンティアに いってみようかな?\pまあ いいや\nとにかく がんばれよ!{EOS}"
	.if (. - gText_Rom_1E0BC3) > 0xaa
	.error "gText_Rom_1E0BC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0BC3) < 0xaa
	.space 0xaa - (. - gText_Rom_1E0BC3)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:543 LilycoveCity_Text_MovedLootIntoHideoutToday
	.globl gText_Rom_1E0C6D
gText_Rom_1E0C6D: @ 0x081E0C6D
	.string "ふふふ……\pきょうも うばった ブツを\nアジトに はこびこんだぞ……\pなっ なんだ おまえ!\nいっ いまのは ひとりごと だぞ!{EOS}"
	.if (. - gText_Rom_1E0C6D) > 0x41
	.error "gText_Rom_1E0C6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0C6D) < 0x41
	.space 0x41 - (. - gText_Rom_1E0C6D)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:550 LilycoveCity_Text_ChanceToDoBigThings
	.globl gText_Rom_1E0CAE
gText_Rom_1E0CAE: @ 0x081E0CAE
	.string "リーダーが なに かんがえてるのか\nしたっぱの オレには わからんが\pアクアだんに いると\nすごいこと できそうだぜ!\pなっ なんだ おまえ!\nいっ いまのは ひとりごと だぞ!{EOS}"
	.if (. - gText_Rom_1E0CAE) > 0x5a
	.error "gText_Rom_1E0CAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0CAE) < 0x5a
	.space 0x5a - (. - gText_Rom_1E0CAE)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:558 LilycoveCity_Text_DontGoNearCaveInCove
	.globl gText_Rom_1E0D08
gText_Rom_1E0D08: @ 0x081E0D08
	.string "おい おまえ!\pいりえに ある\nどうくつには ちかづくなよ!\pなぜって? りゆうは どうでも いいんだ!\nおとなの いうこと きけよな!!{EOS}"
	.if (. - gText_Rom_1E0D08) > 0x46
	.error "gText_Rom_1E0D08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0D08) < 0x46
	.space 0x46 - (. - gText_Rom_1E0D08)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:564 LilycoveCity_Text_IfWorldBecomesOurs
	.globl gText_Rom_1E0D4E
gText_Rom_1E0D4E: @ 0x081E0D4E
	.string "この ひろい せかい すべてが\nおれら アクアだんの ものに なったら\lポケモンも しあわせに なれるはずだ!{EOS}"
	.if (. - gText_Rom_1E0D4E) > 0x38
	.error "gText_Rom_1E0D4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0D4E) < 0x38
	.space 0x38 - (. - gText_Rom_1E0D4E)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:569 LilycoveCity_Text_WailmerLeapOutOfWater
	.globl gText_Rom_1E0D86
gText_Rom_1E0D86: @ 0x081E0D86
	.string "それっ! ホエルコ!\nそこで すいめんから ジャンプするのだ!{EOS}"
	.if (. - gText_Rom_1E0D86) > 0x20
	.error "gText_Rom_1E0D86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0D86) < 0x20
	.space 0x20 - (. - gText_Rom_1E0D86)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:573 LilycoveCity_Text_GetLostMessingUpTraining
	.globl gText_Rom_1E0DA6
gText_Rom_1E0DA6: @ 0x081E0DA6
	.string "……ん? なんだ おまえは?\pトレーニングの じゃまに なるから\nあっちに いっててくれ!{EOS}"
	.if (. - gText_Rom_1E0DA6) > 0x2e
	.error "gText_Rom_1E0DA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0DA6) < 0x2e
	.space 0x2e - (. - gText_Rom_1E0DA6)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:578 LilycoveCity_Text_ContestHallInTown
	.globl gText_Rom_1E0DD4
gText_Rom_1E0DD4: @ 0x081E0DD4
	.string "この まちに ポケモンコンテストの\nかいじょうが あるんだな!\pということは よく そだった ポケモンが\nいっぱい あつまって いるんだな!\pわしの ハートは わくわく なんだな!{EOS}"
	.if (. - gText_Rom_1E0DD4) > 0x5b
	.error "gText_Rom_1E0DD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0DD4) < 0x5b
	.space 0x5b - (. - gText_Rom_1E0DD4)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:585 LilycoveCity_Text_StrangeCaveInCove
	.globl gText_Rom_1E0E2F
gText_Rom_1E0E2F: @ 0x081E0E2F
	.string "まちの はずれの いりえに\nおかしな どうくつが あるの みた?{EOS}"
	.if (. - gText_Rom_1E0E2F) > 0x21
	.error "gText_Rom_1E0E2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0E2F) < 0x21
	.space 0x21 - (. - gText_Rom_1E0E2F)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:589 LilycoveCity_Text_GoingToMoveDeleterForHMs
	.globl gText_Rom_1E0E50
gText_Rom_1E0E50: @ 0x081E0E50
	.string "あたしの ポケモン\nコンテストの ために あたらしい わざを\lおぼえさせる つもりなの!\pだからね わざわすれ じいさんに たのんで\nひでんわざを わすれさせて もらうのよ!{EOS}"
	.if (. - gText_Rom_1E0E50) > 0x58
	.error "gText_Rom_1E0E50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0E50) < 0x58
	.space 0x58 - (. - gText_Rom_1E0E50)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:595 LilycoveCity_Text_ImFromKanto
	.globl gText_Rom_1E0EA8
gText_Rom_1E0EA8: @ 0x081E0EA8
	.string "ぼくは カントーから きました!\pホウエン ちほうは みずと みどりに\nあふれた うつくしい ところ ですね!\p……ん? ということは?\pこの とち だけに せいそくする\nめずらしい ポケモンが いるのかも?{EOS}"
	.if (. - gText_Rom_1E0EA8) > 0x69
	.error "gText_Rom_1E0EA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0EA8) < 0x69
	.space 0x69 - (. - gText_Rom_1E0EA8)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:603 LilycoveCity_Text_TeamAquaBeenTrainingWailmer
	.globl gText_Rom_1E0F11
gText_Rom_1E0F11: @ 0x081E0F11
	.string "アクアだんの れんちゅうが\nいりえで ホエルコを\lトレーニング してるんだよ!\pおいらたち ふなのり\nこのままじゃ うみに でられないよ!{EOS}"
	.if (. - gText_Rom_1E0F11) > 0x46
	.error "gText_Rom_1E0F11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0F11) < 0x46
	.space 0x46 - (. - gText_Rom_1E0F11)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:609 LilycoveCity_Text_SomeonePuntedTeamAquaOut
	.globl gText_Rom_1E0F57
gText_Rom_1E0F57: @ 0x081E0F57
	.string "あんた しってるかい?\pだれかが アクアだんを\nけちらしてくれた らしいんだ!\pおかげで ホエルコ いなくなって\nうみに でられるように なったよ!{EOS}"
	.if (. - gText_Rom_1E0F57) > 0x4b
	.error "gText_Rom_1E0F57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0F57) < 0x4b
	.space 0x4b - (. - gText_Rom_1E0F57)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:616 LilycoveCity_Text_SomeoneStoleMyPokemon
	.globl gText_Rom_1E0FA2
gText_Rom_1E0FA2: @ 0x081E0FA2
	.string "うみべの やどで なみの おとを\nききながら のんびり おひるね\l……を していたら\pわたしの ポケモン とられちゃった!\pはんにんは だれー!?\nアクアだん? アクアだん なのー!?{EOS}"
	.if (. - gText_Rom_1E0FA2) > 0x5d
	.error "gText_Rom_1E0FA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0FA2) < 0x5d
	.space 0x5d - (. - gText_Rom_1E0FA2)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:623 LilycoveCity_Text_MissingPokemonCameBack
	.globl gText_Rom_1E0FFF
gText_Rom_1E0FFF: @ 0x081E0FFF
	.string "いなくなってた わたしの ポケモン\nいつのまにか かえってきたの!{EOS}"
	.if (. - gText_Rom_1E0FFF) > 0x22
	.error "gText_Rom_1E0FFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0FFF) < 0x22
	.space 0x22 - (. - gText_Rom_1E0FFF)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:627 LilycoveCity_Text_ImArtDealer
	.globl gText_Rom_1E1021
gText_Rom_1E1021: @ 0x081E1021
	.string "わたしは ガショウ です!\pいや そういう なまえ なのではなく\nかちのある えを かったり うったりする\lしょくぎょうの なまえ なんです!\pこのまちの びじゅつかんに すばらしい\nめいが が あると きいたの ですが……{EOS}"
	.if (. - gText_Rom_1E1021) > 0x71
	.error "gText_Rom_1E1021 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1021) < 0x71
	.space 0x71 - (. - gText_Rom_1E1021)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:634 LilycoveCity_Text_SeaRemainsForeverYoung
	.globl gText_Rom_1E1092
gText_Rom_1E1092: @ 0x081E1092
	.string "わしらが しわくちゃに なっても\nこのうみは いつまでも わかわかしく\lいのちの かがやきに あふれとる\pふほほ ふほほほほ……{EOS}"
	.if (. - gText_Rom_1E1092) > 0x41
	.error "gText_Rom_1E1092 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1092) < 0x41
	.space 0x41 - (. - gText_Rom_1E1092)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:640 LilycoveCity_Text_SixtyYearsAgoHusbandProposed
	.globl gText_Rom_1E10D3
gText_Rom_1E10D3: @ 0x081E10D3
	.string "60ねんまえ ここで おじいしゃんが\nわしに プロポーズ してくれた ときから\lこのうみは うつくしいまま ですのじゃ\pむふふ むふふふふ……{EOS}"
	.if (. - gText_Rom_1E10D3) > 0x48
	.error "gText_Rom_1E10D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E10D3) < 0x48
	.space 0x48 - (. - gText_Rom_1E10D3)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:646 LilycoveCity_Text_TeamAquaRenovatedCavern
	.globl gText_Rom_1E111B
gText_Rom_1E111B: @ 0x081E111B
	.string "この いりえの ところに おかしな\nどうくつの いりぐちが ある じゃろう?\pいぜんは てんねんの どうくつ だったが\nアクアだん とかいう れんちゅうが\lかいぞうして あんなふうに したんじゃ!\p「しぜんを あいする アクアだん!」\n……と いっておるが\pいうことと やることが ちがっとる!{EOS}"
	.if (. - gText_Rom_1E111B) > 0x94
	.error "gText_Rom_1E111B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E111B) < 0x94
	.space 0x94 - (. - gText_Rom_1E111B)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:657 LilycoveCity_Text_TeamAquaLotGoneForGood
	.globl gText_Rom_1E11AF
gText_Rom_1E11AF: @ 0x081E11AF
	.string "いりえに あった どうくつ……\nいつのまにやら カラッポに なっておる\pアクアだんの れんちゅう\nどこかへ いって しまったらしい のう{EOS}"
	.if (. - gText_Rom_1E11AF) > 0x45
	.error "gText_Rom_1E11AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E11AF) < 0x45
	.space 0x45 - (. - gText_Rom_1E11AF)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:664 LilycoveCity_Text_CitySign
	.globl gText_Rom_1E11F4
gText_Rom_1E11F4: @ 0x081E11F4
	.string "ここは ミナモ シティ\nりくちの さいはて うみの はじまり{EOS}"
	.if (. - gText_Rom_1E11F4) > 0x1f
	.error "gText_Rom_1E11F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E11F4) < 0x1f
	.space 0x1f - (. - gText_Rom_1E11F4)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:669 LilycoveCity_Text_ContestHallSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E1213
gText_Rom_1E1213: @ 0x081E1213
	.string "ポケモンコンテスト かいじょう\nあつまれ! ポケモン トレーナー{EOS}"
	.if (. - gText_Rom_1E1213) != 0x21
	.error "gText_Rom_1E1213 must retain its original byte length"
	.endif
	.globl gText_Rom_1E122E
	.set gText_Rom_1E122E, gText_Rom_1E1213 + 0x1b
	@ data/maps/LilycoveCity/scripts.inc:673 LilycoveCity_Text_MotelSign
	.globl gText_Rom_1E1234
gText_Rom_1E1234: @ 0x081E1234
	.string "「みんしゅく モナミ」\nミナモのモナミ と おぼえて ください{EOS}"
	.if (. - gText_Rom_1E1234) > 0x20
	.error "gText_Rom_1E1234 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1234) < 0x20
	.space 0x20 - (. - gText_Rom_1E1234)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:678 LilycoveCity_Text_MuseumSign
	.globl gText_Rom_1E1254
gText_Rom_1E1254: @ 0x081E1254
	.string "「ミナモ びじゅつかん」\nポケモン めいがてん かいさい ちゅう!{EOS}"
	.if (. - gText_Rom_1E1254) > 0x22
	.error "gText_Rom_1E1254 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1254) < 0x22
	.space 0x22 - (. - gText_Rom_1E1254)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:683 LilycoveCity_Text_MuseumSignPlayersExhibit
	.globl gText_Rom_1E1276
gText_Rom_1E1276: @ 0x081E1276
	.string "「ミナモ びじゅつかん」\p{PLAYER}の ポケモン コレクション\nかいさい ちゅう!{EOS}"
	.if (. - gText_Rom_1E1276) > 0x27
	.error "gText_Rom_1E1276 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1276) < 0x27
	.space 0x27 - (. - gText_Rom_1E1276)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:688 LilycoveCity_Text_HarborSignUnderConstruction
	.globl gText_Rom_1E129D
gText_Rom_1E129D: @ 0x081E129D
	.string "「ミナモ シティ ふねのりば」\pれんらくせん タイドリップごう は\nカイナシティにて けんぞう ちゅう!\pもう しばらく おまちください!{EOS}"
	.if (. - gText_Rom_1E129D) > 0x46
	.error "gText_Rom_1E129D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E129D) < 0x46
	.space 0x46 - (. - gText_Rom_1E129D)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:695 LilycoveCity_Text_HarborSign
	.globl gText_Rom_1E12E3
gText_Rom_1E12E3: @ 0x081E12E3
	.string "「ミナモ シティ ふねのりば」\pれんらくせん タイドリップごうで\nふねの たびを おたのしみ ください!{EOS}"
	.if (. - gText_Rom_1E12E3) > 0x35
	.error "gText_Rom_1E12E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E12E3) < 0x35
	.space 0x35 - (. - gText_Rom_1E12E3)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:700 LilycoveCity_Text_TrainerFanClubSign
	.globl gText_Rom_1E1318
gText_Rom_1E1318: @ 0x081E1318
	.string "「ポケモン トレーナー ファンクラブ」\pかんばんに いろんな トレーナーの\nなまえが らくがき されている……{EOS}"
	.if (. - gText_Rom_1E1318) > 0x38
	.error "gText_Rom_1E1318 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1318) < 0x38
	.space 0x38 - (. - gText_Rom_1E1318)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:705 LilycoveCity_Text_DepartmentStoreSign
	.globl gText_Rom_1E1350
gText_Rom_1E1350: @ 0x081E1350
	.string "「ミナモ デパート」\pグッズ いっぱい! ドキドキ いっぱい!\nなにかが みつかる すてきな ところ{EOS}"
	.if (. - gText_Rom_1E1350) > 0x33
	.error "gText_Rom_1E1350 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1350) < 0x33
	.space 0x33 - (. - gText_Rom_1E1350)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:712 LilycoveCity_Text_MoveDeletersHouseSign
	.globl gText_Rom_1E1383
gText_Rom_1E1383: @ 0x081E1383
	.string "「わざわすれ じいさんの いえ」\nポケモンの わざ わすれさせます{EOS}"
	.if (. - gText_Rom_1E1383) > 0x22
	.error "gText_Rom_1E1383 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1383) < 0x22
	.space 0x22 - (. - gText_Rom_1E1383)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:716 LilycoveCity_Text_DoYouKnowAboutBerryBlender
	.globl gText_Rom_1E13A5
gText_Rom_1E13A5: @ 0x081E13A5
	.string "きのみブレンダー っていう\nマシンを しってるかい?{EOS}"
	.if (. - gText_Rom_1E13A5) > 0x1b
	.error "gText_Rom_1E13A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E13A5) < 0x1b
	.space 0x1b - (. - gText_Rom_1E13A5)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:720 LilycoveCity_Text_FasterSpinBetterPokeblocks
	.globl gText_Rom_1E13C0
gText_Rom_1E13C0: @ 0x081E13C0
	.string "みんなで こうそくで まわし まくるんだ\pすっげー はやいと\nすっげー いいポロックが できるらしいぜ!{EOS}"
	.if (. - gText_Rom_1E13C0) > 0x35
	.error "gText_Rom_1E13C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E13C0) < 0x35
	.space 0x35 - (. - gText_Rom_1E13C0)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:726 LilycoveCity_Text_ExplainBerryBlender
	.globl gText_Rom_1E13F5
gText_Rom_1E13F5: @ 0x081E13F5
	.string "ポロックっていう おかしが できるんだぜ\pいいポロックを つくると ポケモンの\nコンディションも ぐーんと アップさ!{EOS}"
	.if (. - gText_Rom_1E13F5) > 0x3c
	.error "gText_Rom_1E13F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E13F5) < 0x3c
	.space 0x3c - (. - gText_Rom_1E13F5)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:732 LilycoveCity_Text_HeardTowerCalledSkyPillar
	.globl gText_Rom_1E1431
gText_Rom_1E1431: @ 0x081E1431
	.string "あのな どこかの すいどうに\nそらのはしら とかいう とうが\lたってる らしいぜ{EOS}"
	.if (. - gText_Rom_1E1431) > 0x29
	.error "gText_Rom_1E1431 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1431) < 0x29
	.space 0x29 - (. - gText_Rom_1E1431)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:737 LilycoveCity_Text_SawTallTowerOnRoute131
	.globl gText_Rom_1E145A
gText_Rom_1E145A: @ 0x081E145A
	.string "オレな 131ばん すいどうの あたりで\nたかーい とうを みたんだけど\lもしかして それって……?{EOS}"
	.if (. - gText_Rom_1E145A) > 0x33
	.error "gText_Rom_1E145A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E145A) < 0x33
	.space 0x33 - (. - gText_Rom_1E145A)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:742 LilycoveCity_Text_JustArrivedAndSawRarePokemon
	.globl gText_Rom_1E148D
gText_Rom_1E148D: @ 0x081E148D
	.string "ぼくら しんこん りょこうで\nこのまちに きたばかり なんだけど\pドラゴンタイプの ポケモンが\nそらを とんで いくのを みたんだよ!\pホウエン ちほうには\nあんな かっこいい ポケモンが\lせいそく してるのかい?{EOS}"
	.if (. - gText_Rom_1E148D) > 0x6c
	.error "gText_Rom_1E148D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E148D) < 0x6c
	.space 0x6c - (. - gText_Rom_1E148D)
	.endif
	@ data/maps/LilycoveCity/scripts.inc:750 LilycoveCity_Text_HoneymoonVowToSeeRarePokemon
	.globl gText_Rom_1E14F9
gText_Rom_1E14F9: @ 0x081E14F9
	.string "わたしたちの しんこん りょこうは\nかくちの めずらしい ポケモンを\lできるだけ たくさん みること なんです\pこの まちに とうちゃく したら\nいきなり めずらしい ポケモンが みられて\lとても ハッピー だわ!{EOS}"
	.if (. - gText_Rom_1E14F9) > 0x6c
	.error "gText_Rom_1E14F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E14F9) < 0x6c
	.space 0x6c - (. - gText_Rom_1E14F9)
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
	loadword 0x00, gText_Rom_1E18C3
	callstd 0x04
	release
	end
EventScript_JP_081E1596: @ 0x081E1596
	loadword 0x00, gText_Rom_1E1917
	callstd 0x04
	release
	end
.globl EventScript_JP_081E15A0
EventScript_JP_081E15A0: @ 0x081E15A0
	lock
	faceplayer
	checkflag 0x007B
	goto_if 0x01, EventScript_JP_081E15B5
	loadword 0x00, gText_Rom_1E193A
	callstd 0x04
	release
	end
EventScript_JP_081E15B5: @ 0x081E15B5
	loadword 0x00, gText_Rom_1E19B8
	callstd 0x04
	release
	end
.globl EventScript_JP_081E15BF
EventScript_JP_081E15BF: @ 0x081E15BF
	loadword 0x00, gText_Rom_1E1865
	callstd 0x02
	end
.globl EventScript_JP_081E15C8
EventScript_JP_081E15C8: @ 0x081E15C8
	loadword 0x00, gText_Rom_1E1A2A
	callstd 0x02
	end
.globl EventScript_JP_081E15D1
EventScript_JP_081E15D1: @ 0x081E15D1
	loadword 0x00, gText_Rom_1E19FB
	callstd 0x02
	end
.globl EventScript_JP_081E15DA
EventScript_JP_081E15DA: @ 0x081E15DA
	loadword 0x00, gText_Rom_1E1AEE
	callstd 0x02
	end
.globl EventScript_JP_081E15E3
EventScript_JP_081E15E3: @ 0x081E15E3
	loadword 0x00, gText_Rom_1E1B7D
	callstd 0x03
	end
.globl EventScript_JP_081E15EC
EventScript_JP_081E15EC: @ 0x081E15EC
	loadword 0x00, gText_Rom_1E1B87
	callstd 0x03
	end
.globl EventScript_JP_081E15F5
EventScript_JP_081E15F5: @ 0x081E15F5
	loadword 0x00, gText_Rom_1E1BB2
	callstd 0x03
	end
.globl EventScript_JP_081E15FE
EventScript_JP_081E15FE: @ 0x081E15FE
	loadword 0x00, gText_Rom_1E1BD5
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
	loadword 0x00, gText_Rom_1E1A9E
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
	loadword 0x00, gText_Rom_1E17BC
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081E1741
	loadword 0x00, gText_Rom_1E17FC
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
	loadword 0x00, gText_Rom_1E1831
	callstd 0x04
	release
	end
EventScript_JP_081E1741: @ 0x081E1741
	loadword 0x00, gText_Rom_1E1845
	callstd 0x04
	release
	end
.globl EventScript_JP_081E174B
EventScript_JP_081E174B: @ 0x081E174B
	loadword 0x00, gText_Rom_1E1C8D
	callstd 0x02
	end
.globl EventScript_JP_081E1754
EventScript_JP_081E1754: @ 0x081E1754
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	loadword 0x00, gText_Rom_1E1BF8
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
