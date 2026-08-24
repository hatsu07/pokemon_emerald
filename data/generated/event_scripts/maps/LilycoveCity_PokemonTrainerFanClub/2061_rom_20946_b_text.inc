	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:560 LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer
	.globl gText_Rom_208B17
gText_Rom_208B17: @ 0x08208B17
	.string "いいあ！\n{PLAYER}だ！！{EOS}"
	.if (. - gText_Rom_208B17) > 0xb
	.error "gText_Rom_208B17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208B17) < 0xb
	.space 0xb - (. - gText_Rom_208B17)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:563 LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan
	.globl gText_Rom_208B22
gText_Rom_208B22: @ 0x08208B22
	.string "きいたよ！\nきみ つよいんだってな\pここでは みんな\nだれが いちばん つよい トレーナーか\lはなしを してるんだけど\pおれ きみの うわさを きいて\nきみの ファンに なることに したよ！\pこれからも つよい トレーナーと\nバンバン たたかって\pおれたちに あつい\nたたかいを みせてくれよ！\pそうすれば きっと みんなも\nきみの ことを みなおすと おもうんだ\pじゃあ きたい してるよ！\n{PLAYER}！！{EOS}"
	.if (. - gText_Rom_208B22) > 0xca
	.error "gText_Rom_208B22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208B22) < 0xca
	.space 0xca - (. - gText_Rom_208B22)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:566 LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin
	.globl gText_Rom_208BEC
gText_Rom_208BEC: @ 0x08208BEC
	.string "おう {PLAYER}！！\nおうえん してるぞ！！{EOS}"
	.if (. - gText_Rom_208BEC) > 0x14
	.error "gText_Rom_208BEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208BEC) < 0x14
	.space 0x14 - (. - gText_Rom_208BEC)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:569 LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest
	.globl gText_Rom_208C00
gText_Rom_208C00: @ 0x08208C00
	.string "あいつらは しらないんだ\nきみが いちばん すごいって ことをさ！\pそうだろ {PLAYER}！\nこんじょう みせてくれ！{EOS}"
	.if (. - gText_Rom_208C00) > 0x38
	.error "gText_Rom_208C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208C00) < 0x38
	.space 0x38 - (. - gText_Rom_208C00)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:572 LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary
	.globl gText_Rom_208C38
gText_Rom_208C38: @ 0x08208C38
	.string "きみには わるいけど いま いちばん\nちゅうもくの トレーナーは\lまちがいなく {STR_VAR_1} だね！\pあの つよさは\nだたものじゃ ないよ{EOS}"
	.if (. - gText_Rom_208C38) > 0x42
	.error "gText_Rom_208C38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208C38) < 0x42
	.space 0x42 - (. - gText_Rom_208C38)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:575 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen
	.globl gText_Rom_208C7A
gText_Rom_208C7A: @ 0x08208C7A
	.string "くそー いまは {STR_VAR_1}が\nいちばん つよいって いってるのに\pだれも きいて くれない……{EOS}"
	.if (. - gText_Rom_208C7A) > 0x2d
	.error "gText_Rom_208C7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208C7A) < 0x2d
	.space 0x2d - (. - gText_Rom_208C7A)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:578 LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer
	.globl gText_Rom_208CA7
gText_Rom_208CA7: @ 0x08208CA7
	.string "さいきん つぎつぎと ジムリーダーを\nたおしている っていう\pつよい トレーナーが\nあらわれた らしいんだ\pきみ しらないかい?{EOS}"
	.if (. - gText_Rom_208CA7) > 0x41
	.error "gText_Rom_208CA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208CA7) < 0x41
	.space 0x41 - (. - gText_Rom_208CA7)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:581 LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou
	.globl gText_Rom_208CE8
gText_Rom_208CE8: @ 0x08208CE8
	.string "あ！\n{PLAYER}！！\pがんばってね\nおうえん してるから！{EOS}"
	.if (. - gText_Rom_208CE8) > 0x1b
	.error "gText_Rom_208CE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208CE8) < 0x1b
	.space 0x1b - (. - gText_Rom_208CE8)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:584 LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan
	.globl gText_Rom_208D03
gText_Rom_208D03: @ 0x08208D03
	.string "トウキさま……\pあ！\nちがう ちがう！\pわたしは あくまで あなたの\nファン なんだからね！\pだから あたしの ために\nがんばってよ！{EOS}"
	.if (. - gText_Rom_208D03) > 0x44
	.error "gText_Rom_208D03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208D03) < 0x44
	.space 0x44 - (. - gText_Rom_208D03)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:587 LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly
	.globl gText_Rom_208D47
gText_Rom_208D47: @ 0x08208D47
	.string "やっぱり わたしは トウキさま しか\nすきに なれないのよねー{EOS}"
	.if (. - gText_Rom_208D47) > 0x20
	.error "gText_Rom_208D47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208D47) < 0x20
	.space 0x20 - (. - gText_Rom_208D47)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:590 LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly
	.globl gText_Rom_208D67
gText_Rom_208D67: @ 0x08208D67
	.string "だれも トウキさまの\nみりょくを わかって くれないの……\pいいわ！\pわたし ひとりでも トウキさまの ことを\nおうえん しつづけるから！{EOS}"
	.if (. - gText_Rom_208D67) > 0x46
	.error "gText_Rom_208D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208D67) < 0x46
	.space 0x46 - (. - gText_Rom_208D67)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:593 LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly
	.globl gText_Rom_208DAD
gText_Rom_208DAD: @ 0x08208DAD
	.string "わたしの いちばん すきな\nトレーナーは なんと いっても\pムロの ジムリーダー\nトウキさまよ！{EOS}"
	.if (. - gText_Rom_208DAD) > 0x31
	.error "gText_Rom_208DAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208DAD) < 0x31
	.space 0x31 - (. - gText_Rom_208DAD)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:596 LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather
	.globl gText_Rom_208DDE
gText_Rom_208DDE: @ 0x08208DDE
	.string "きみは ついに あらゆる めんで\nきみの おとうさんを こえたな！\pこの わしが いって いるんだから\nまちがいない！{EOS}"
	.if (. - gText_Rom_208DDE) > 0x3c
	.error "gText_Rom_208DDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208DDE) < 0x3c
	.space 0x3c - (. - gText_Rom_208DDE)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:599 LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling
	.globl gText_Rom_208E1A
gText_Rom_208E1A: @ 0x08208E1A
	.string "きみの おとうさんは ピンチに なっても\nあきらめずに たたかって いたよ……\pわしは しっているよ\pきみは いくら まけても けっして\nあきらめない という ことを！\lだから がんばってくれ！{EOS}"
	.if (. - gText_Rom_208E1A) > 0x62
	.error "gText_Rom_208E1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208E1A) < 0x62
	.space 0x62 - (. - gText_Rom_208E1A)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:602 LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman
	.globl gText_Rom_208E7C
gText_Rom_208E7C: @ 0x08208E7C
	.string "きみより センリさんの ほうが\nもっと つよくて かっこよく\lみごたえの ある たたかいを していたぞ！\pいくら きみが つよいと\nいわれて いても\pきみの おとうさんに くらべたら\nまだまだ だな{EOS}"
	.if (. - gText_Rom_208E7C) > 0x64
	.error "gText_Rom_208E7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208E7C) < 0x64
	.space 0x64 - (. - gText_Rom_208E7C)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:605 LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent
	.globl gText_Rom_208EE0
gText_Rom_208EE0: @ 0x08208EE0
	.string "きみも センリさんと おなじ ふんいき\nというか はくりょくが でてきたね\pしかし センリさん とは けっていてきに\nちがう ものが ある！\p……それは わたしからは いえない\nじぶんで さがして みるんだな{EOS}"
	.if (. - gText_Rom_208EE0) > 0x69
	.error "gText_Rom_208EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208EE0) < 0x69
	.space 0x69 - (. - gText_Rom_208EE0)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:608 LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers
	.globl gText_Rom_208F49
gText_Rom_208F49: @ 0x08208F49
	.string "ここにいる みんなは\nポケモンしょうぶが だいすきでね\pだれが いちばん つよい トレーナーか\nはなしを して いるんだ！\pきみも ゆうめいに なれば\nみんな ファンに なるかもな！{EOS}"
	.if (. - gText_Rom_208F49) > 0x5c
	.error "gText_Rom_208F49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208F49) < 0x5c
	.space 0x5c - (. - gText_Rom_208F49)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:611 LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer
	.globl gText_Rom_208FA5
gText_Rom_208FA5: @ 0x08208FA5
	.string "うわー！ {PLAYER}だー\nほんもの だー\pあくしゅ してー\nあくしゅ！{EOS}"
	.if (. - gText_Rom_208FA5) > 0x21
	.error "gText_Rom_208FA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208FA5) < 0x21
	.space 0x21 - (. - gText_Rom_208FA5)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:614 LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
	.globl gText_Rom_208FC6
gText_Rom_208FC6: @ 0x08208FC6
	.string "……わたし いつまでも {PLAYER}の こと\nおうえん する からね！\pわたし もう {PLAYER}の まける\nとこなんて みたくないよ\p{PLAYER} ほんとは\nつよいんだ もんね！{EOS}"
	.if (. - gText_Rom_208FC6) > 0x4f
	.error "gText_Rom_208FC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208FC6) < 0x4f
	.space 0x4f - (. - gText_Rom_208FC6)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:617 LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool
	.globl gText_Rom_209015
gText_Rom_209015: @ 0x08209015
	.string "{STR_VAR_1}さん って かっこいい……\pねえ みんなも\nそう おもうでしょー?{EOS}"
	.if (. - gText_Rom_209015) > 0x24
	.error "gText_Rom_209015 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209015) < 0x24
	.space 0x24 - (. - gText_Rom_209015)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:620 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe
	.globl gText_Rom_209039
gText_Rom_209039: @ 0x08209039
	.string "{STR_VAR_1}さん って ほんとうに\nかっこいい よねぇ……\pわたし ひとりに なっても\nずうっと おうえん するんだー！{EOS}"
	.if (. - gText_Rom_209039) > 0x39
	.error "gText_Rom_209039 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209039) < 0x39
	.space 0x39 - (. - gText_Rom_209039)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:623 LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat
	.globl gText_Rom_209072
gText_Rom_209072: @ 0x08209072
	.string "わたしのね\nすきな トレーナーは\pかっこよくて\pつよくて\pそれでいて やさしい\pそんな トレーナーが いいなぁ……{EOS}"
	.if (. - gText_Rom_209072) > 0x3a
	.error "gText_Rom_209072 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209072) < 0x3a
	.space 0x3a - (. - gText_Rom_209072)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:626 LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou
	.globl gText_Rom_2090AC
gText_Rom_2090AC: @ 0x082090AC
	.string "あ！ {PLAYER}だー！\nすげー！\pぼくも おおきく なったら\n{PLAYER} みたいに つよく なりたいよ！{EOS}"
	.if (. - gText_Rom_2090AC) > 0x2f
	.error "gText_Rom_2090AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2090AC) < 0x2f
	.space 0x2f - (. - gText_Rom_2090AC)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:629 LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou
	.globl gText_Rom_2090DB
gText_Rom_2090DB: @ 0x082090DB
	.string "……\nぼく ひとりに なったって\pずっと {PLAYER}の ことを\nおうえん するよ！\pだって {PLAYER}の こと\nしんじてるもん！{EOS}"
	.if (. - gText_Rom_2090DB) > 0x3b
	.error "gText_Rom_2090DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2090DB) < 0x3b
	.space 0x3b - (. - gText_Rom_2090DB)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:632 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool
	.globl gText_Rom_209116
gText_Rom_209116: @ 0x08209116
	.string "{STR_VAR_1}って かっこいいよねー\nぼく あくしゅ してほしいなー{EOS}"
	.if (. - gText_Rom_209116) > 0x1e
	.error "gText_Rom_209116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209116) < 0x1e
	.space 0x1e - (. - gText_Rom_209116)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:635 LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_209134
gText_Rom_209134: @ 0x08209134
	.string "……\nぼく ひとりに なったって\pぜったい {STR_VAR_1}の ファンを\nやめない からね！\pだって ぼく きいたんだもん\n{STR_VAR_1}は ぜったいに まけないって{EOS}"
	.if (. - gText_Rom_209134) != 0x49
	.error "gText_Rom_209134 must retain its original byte length"
	.endif
	.globl gText_Rom_209179
	.set gText_Rom_209179, gText_Rom_209134 + 0x45
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:638 LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll
	.globl gText_Rom_20917D
gText_Rom_20917D: @ 0x0820917D
	.string "{PLAYER}！\nやっぱり すごいよ きみは！\pぼくは きみを はじめて みたときから\nすごい やつだって おもってたよ！\lやはり ぼくのめは たしかな ようだね！{EOS}"
	.if (. - gText_Rom_20917D) > 0x4e
	.error "gText_Rom_20917D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20917D) < 0x4e
	.space 0x4e - (. - gText_Rom_20917D)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:641 LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner
	.globl gText_Rom_2091CB
gText_Rom_2091CB: @ 0x082091CB
	.string "まあ ほかの やつの\nことなんて きにするなよ\lぼくが ついて いるんだ！\pきみは しんぱい しないで いつもどおり\nたたかって いれば いいんだよ{EOS}"
	.if (. - gText_Rom_2091CB) > 0x4b
	.error "gText_Rom_2091CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2091CB) < 0x4b
	.space 0x4b - (. - gText_Rom_2091CB)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:644 LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne
	.globl gText_Rom_209216
gText_Rom_209216: @ 0x08209216
	.string "きみも なかなか\nいい トレーナーだと おもうけど\pいまは やっぱり {STR_VAR_1}が\nいちばんだと おもうんだ\pまあ ぼくが おもっている だけだから\nあまり きにしなくて いいよ{EOS}"
	.if (. - gText_Rom_209216) > 0x57
	.error "gText_Rom_209216 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209216) < 0x57
	.space 0x57 - (. - gText_Rom_209216)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:647 LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer
	.globl gText_Rom_20926D
gText_Rom_20926D: @ 0x0820926D
	.string "きみは ほんとうに つよいな……\n{STR_VAR_1} より つよいかも しれない\pでも {STR_VAR_1} には\nぼくが ひつよう なんだ\pだって ぼくが {STR_VAR_1}を\nおうえん しなきゃ\lだれが おうえん するんだ！{EOS}"
	.if (. - gText_Rom_20926D) > 0x5d
	.error "gText_Rom_20926D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20926D) < 0x5d
	.space 0x5d - (. - gText_Rom_20926D)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:650 LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind
	.globl gText_Rom_2092CA
gText_Rom_2092CA: @ 0x082092CA
	.string "みなおしたわ！\nあなたって ほんとうに つよいのね！\pどうしたら そんなに つよく なれるのか\nおしえて もらいたいわ{EOS}"
	.if (. - gText_Rom_2092CA) > 0x3c
	.error "gText_Rom_2092CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2092CA) < 0x3c
	.space 0x3c - (. - gText_Rom_2092CA)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:653 LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation
	.globl gText_Rom_209306
gText_Rom_209306: @ 0x08209306
	.string "あなたって ピンチに なれば なるほど\nみりょくてきな たたかいを するのよね\lつぎの たいせんが たのしみだわ！{EOS}"
	.if (. - gText_Rom_209306) > 0x3a
	.error "gText_Rom_209306 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209306) < 0x3a
	.space 0x3a - (. - gText_Rom_209306)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:656 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout
	.globl gText_Rom_209340
gText_Rom_209340: @ 0x08209340
	.string "さいきんの トレーナーは\nやっぱり {STR_VAR_1}よね！\lあの つよさは ただもの じゃないわ\pあなたも いいせん いってるけど\n{STR_VAR_1}に くらべたら まだまだねー{EOS}"
	.if (. - gText_Rom_209340) > 0x4d
	.error "gText_Rom_209340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209340) < 0x4d
	.space 0x4d - (. - gText_Rom_209340)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:659 LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger
	.globl gText_Rom_20938D
gText_Rom_20938D: @ 0x0820938D
	.string "あなたって ほんとうに\nにんき ものよね……\pつよいし ポケモンにも やさしいし\nいうこと ないわ\pでもね！ わたしは\n{STR_VAR_1}を しんじているの！\p{STR_VAR_1}の ほうが ぜったいに\nつよいに きまってるん だから！{EOS}"
	.if (. - gText_Rom_20938D) > 0x68
	.error "gText_Rom_20938D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20938D) < 0x68
	.space 0x68 - (. - gText_Rom_20938D)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:662 LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive
	.globl gText_Rom_2093F5
gText_Rom_2093F5: @ 0x082093F5
	.string "おぬし……\pやるな！{EOS}"
	.if (. - gText_Rom_2093F5) > 0xb
	.error "gText_Rom_2093F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2093F5) < 0xb
	.space 0xb - (. - gText_Rom_2093F5)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:665 LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth
	.globl gText_Rom_209400
gText_Rom_209400: @ 0x08209400
	.string "おぬしの しんの ちからは\nこの わしだけが しっていれば よいのじゃ\pみなには その ひめられた ちから\nわかるまい……{EOS}"
	.if (. - gText_Rom_209400) > 0x3e
	.error "gText_Rom_209400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209400) < 0x3e
	.space 0x3e - (. - gText_Rom_209400)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:668 LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential
	.globl gText_Rom_20943E
gText_Rom_20943E: @ 0x0820943E
	.string "うむ おぬし なかなかの\nめを しておるな\pじゃが！\p……うーむ\nまだまだの ようじゃな{EOS}"
	.if (. - gText_Rom_20943E) > 0x2d
	.error "gText_Rom_20943E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20943E) < 0x2d
	.space 0x2d - (. - gText_Rom_20943E)
	.endif
	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:671 LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength
	.globl gText_Rom_20946B
gText_Rom_20946B: @ 0x0820946B
	.string "たしかに おぬしは\nとてつもなく つよいかも しれない\pじゃが！\nわしには わかる\pその つよさは まだ\nしんの つよさとは いわないのじゃ！\lしんの つよさとは！\p……\pじつは わしも\nよく わからんのじゃ{EOS}"
	.if (. - gText_Rom_20946B) > 0x69
	.error "gText_Rom_20946B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20946B) < 0x69
	.space 0x69 - (. - gText_Rom_20946B)
	.endif
	@ analyzed canonical ROM range 0x082094D4-0x08209BC4
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LilycoveCity_Harbor_OnTransition: @ 0x082094D4
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082094DA
	.byte 0
EventScript_JP_082094DA: @ 0x082094DA
	@ event command: setescapewarp
	setescapewarp MAP_ID_LILYCOVE_CITY, 0xFF, 0x000C, 0x0021
	.byte 0x02
.globl EventScript_JP_082094E3
EventScript_JP_082094E3: @ 0x082094E3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, EventScript_JP_08209A21
	call EventScript_JP_08209668
	call EventScript_JP_0820969A
	call EventScript_JP_082096CC
	call EventScript_JP_082096FE
	call EventScript_JP_08209730
	call EventScript_JP_0820977A
	compare_var_to_value 0x400C, 0x0002
	goto_if 0x01, EventScript_JP_08209824
	compare_var_to_value 0x400B, 0x0001
	goto_if 0x01, EventScript_JP_082097C4
	compare_var_to_value 0x400B, 0x0002
	goto_if 0x01, EventScript_JP_082097F4
	compare_var_to_value 0x400B, 0x0004
	goto_if 0x01, EventScript_JP_08209824
	compare_var_to_value 0x400B, 0x0008
	goto_if 0x01, EventScript_JP_082098F1
	compare_var_to_value 0x400B, 0x0000
	goto_if 0x05, EventScript_JP_08209921
	goto EventScript_JP_08209554
	.byte 0x02
EventScript_JP_08209554: @ 0x08209554
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x400A, 0x0000
	goto_if 0x01, EventScript_JP_08209A2B
	loadword 0x00, gText_Rom_209BF3
	callstd 0x04
	message gText_Rom_209C52
	waitmessage
	goto EventScript_JP_08209573
	.byte 0x02
EventScript_JP_08209573: @ 0x08209573
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	@ event command: special
	special display_text_and_get_width_internal
	waitstate
	@ event command: special
	special GetLilycoveSSTidalSelection
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0820961D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08209645
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082095DD
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_082095ED
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_082095FD
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_0820960D
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_08209AFA
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08209AFA
	end
EventScript_JP_082095DD: @ 0x082095DD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_08209AA0
	@ event command: warp
	warp MAP_ID_SOUTHERN_ISLAND_EXTERIOR, 0xFF, 0x000D, 0x0016
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082095ED: @ 0x082095ED
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_08209AA0
	@ event command: warp
	warp MAP_ID_NAVEL_ROCK_HARBOR, 0xFF, 0x0008, 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082095FD: @ 0x082095FD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_08209AA0
	@ event command: warp
	warp MAP_ID_BIRTH_ISLAND_HARBOR, 0xFF, 0x0008, 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_0820960D: @ 0x0820960D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_08209AA0
	@ event command: warp
	warp MAP_ID_FARAWAY_ISLAND_ENTRANCE, 0xFF, 0x000D, 0x0026
	.byte 0x27, 0x6C, 0x02
EventScript_JP_0820961D: @ 0x0820961D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_209C8F
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08209A94
	setvar 0x40B4, 0x0005
	call EventScript_JP_08209AA0
	@ event command: warp
	warp MAP_ID_SS_TIDAL_CORRIDOR, 0xFF, 0x0001, 0x000A
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209645: @ 0x08209645
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_209C9B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08209A94
	call EventScript_JP_08209AA0
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_OUTSIDE_WEST, 0xFF, 0x0013, 0x0043
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209668: @ 0x08209668
	setvar 0x400E, 0x0000
	checkflag 0x08B3
	goto_if 0x00, 0x08244178
	checkitem 0x0113, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08244178
	setvar 0x400E, 0x0001
	checkflag 0x01AE
	goto_if 0x01, 0x08244178
	setvar 0x400E, 0x0002
	return
EventScript_JP_0820969A: @ 0x0820969A
	setvar 0x400D, 0x0000
	checkflag 0x08D5
	goto_if 0x00, 0x08244178
	checkitem 0x0173, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08244178
	setvar 0x400D, 0x0001
	checkflag 0x01AF
	goto_if 0x01, 0x08244178
	setvar 0x400D, 0x0002
	return
EventScript_JP_082096CC: @ 0x082096CC
	setvar 0x400C, 0x0000
	checkflag 0x08D6
	goto_if 0x00, 0x08244178
	checkitem 0x0178, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08244178
	setvar 0x400C, 0x0001
	checkflag 0x01B0
	goto_if 0x01, 0x08244178
	setvar 0x400C, 0x0002
	return
EventScript_JP_082096FE: @ 0x082096FE
	setvar 0x4009, 0x0000
	checkflag 0x08E0
	goto_if 0x00, 0x08244178
	checkitem 0x0172, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08244178
	setvar 0x4009, 0x0001
	checkflag 0x01DB
	goto_if 0x01, 0x08244178
	setvar 0x4009, 0x0002
	return
EventScript_JP_08209730: @ 0x08209730
	setvar 0x400B, 0x0000
	compare_var_to_value 0x400E, 0x0002
	call_if 0x01, EventScript_JP_08209762
	compare_var_to_value 0x400D, 0x0002
	call_if 0x01, EventScript_JP_08209768
	compare_var_to_value 0x400C, 0x0002
	call_if 0x01, EventScript_JP_0820976E
	compare_var_to_value 0x4009, 0x0002
	call_if 0x01, EventScript_JP_08209774
	return
EventScript_JP_08209762: @ 0x08209762
	addvar 0x400B, 0x0001
	return
EventScript_JP_08209768: @ 0x08209768
	addvar 0x400B, 0x0002
	return
EventScript_JP_0820976E: @ 0x0820976E
	addvar 0x400B, 0x0004
	return
EventScript_JP_08209774: @ 0x08209774
	addvar 0x400B, 0x0008
	return
EventScript_JP_0820977A: @ 0x0820977A
	setvar 0x400A, 0x0000
	compare_var_to_value 0x400E, 0x0001
	call_if 0x01, EventScript_JP_082097AC
	compare_var_to_value 0x400D, 0x0001
	call_if 0x01, EventScript_JP_082097B2
	compare_var_to_value 0x400C, 0x0001
	call_if 0x01, EventScript_JP_082097B8
	compare_var_to_value 0x4009, 0x0001
	call_if 0x01, EventScript_JP_082097BE
	return
EventScript_JP_082097AC: @ 0x082097AC
	addvar 0x400A, 0x0001
	return
EventScript_JP_082097B2: @ 0x082097B2
	addvar 0x400A, 0x0002
	return
EventScript_JP_082097B8: @ 0x082097B8
	addvar 0x400A, 0x0004
	return
EventScript_JP_082097BE: @ 0x082097BE
	addvar 0x400A, 0x0008
	return
EventScript_JP_082097C4: @ 0x082097C4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x01AE
	loadword 0x00, gText_Rom_2634B6
	callstd 0x04
	closemessage
	call EventScript_JP_082099C2
	loadword 0x00, gText_Rom_2634D5
	callstd 0x04
	goto EventScript_JP_082097E3
	.byte 0x02
EventScript_JP_082097E3: @ 0x082097E3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	call EventScript_JP_082099E8
	@ event command: warp
	warp MAP_ID_SOUTHERN_ISLAND_EXTERIOR, 0xFF, 0x000D, 0x0016
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082097F4: @ 0x082097F4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x01AF
	loadword 0x00, gText_Rom_2634B6
	callstd 0x04
	closemessage
	call EventScript_JP_082099C2
	loadword 0x00, gText_Rom_275D2A
	callstd 0x04
	goto EventScript_JP_08209813
	.byte 0x02
EventScript_JP_08209813: @ 0x08209813
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	call EventScript_JP_082099E8
	@ event command: warp
	warp MAP_ID_BIRTH_ISLAND_HARBOR, 0xFF, 0x0008, 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209824: @ 0x08209824
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x01B0
	loadword 0x00, gText_Rom_263476
	callstd 0x04
	closemessage
	call EventScript_JP_082099C2
	loadword 0x00, gText_Rom_275C60
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209B2A
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209B35
	@ event command: addobject
	addobject 0x0005
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209B49
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209B54
	loadword 0x00, gText_Rom_275CB6
	callstd 0x04
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209B5F
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209B6A
	loadword 0x00, gText_Rom_275CDA
	callstd 0x04
	closemessage
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209B75
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209B8E
	setvar 0x8004, 0x0002
	call 0x08243265
	@ event command: warp
	warp MAP_ID_FARAWAY_ISLAND_ENTRANCE, 0xFF, 0x000D, 0x0026
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082098E0: @ 0x082098E0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	call EventScript_JP_082099E8
	@ event command: warp
	warp MAP_ID_FARAWAY_ISLAND_ENTRANCE, 0xFF, 0x000D, 0x0026
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082098F1: @ 0x082098F1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x01DB
	loadword 0x00, gText_Rom_2634B6
	callstd 0x04
	closemessage
	call EventScript_JP_082099C2
	loadword 0x00, gText_Rom_275D2A
	callstd 0x04
	goto EventScript_JP_08209910
	.byte 0x02
EventScript_JP_08209910: @ 0x08209910
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	call EventScript_JP_082099E8
	@ event command: warp
	warp MAP_ID_NAVEL_ROCK_HARBOR, 0xFF, 0x0008, 0x0004
	.byte 0x27, 0x6C, 0x02
EventScript_JP_08209921: @ 0x08209921
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2634B6
	callstd 0x04
	closemessage
	call EventScript_JP_082099C2
	message gText_Rom_275DF2
	waitmessage
	setvar 0x8004, 0x0001
	@ event command: special
	special display_text_and_get_width_internal
	waitstate
	@ event command: special
	special GetLilycoveSSTidalSelection
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082097E3
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08209910
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08209813
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_082098E0
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_0820998A
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0820998A
	release
	end
EventScript_JP_0820998A: @ 0x0820998A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_263578
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x001E
	@ event command: removeobject
	removeobject 0x0004
	delay 0x001E
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: showobjectat
	showobjectat 0x0001, MAP_ID_LILYCOVE_CITY_HARBOR
	delay 0x001E
	loadword 0x00, gText_Rom_209C81
	callstd 0x04
	release
	end
EventScript_JP_082099C2: @ 0x082099C2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x001E
	@ event command: hideobjectat
	hideobjectat 0x800F, MAP_ID_LILYCOVE_CITY_HARBOR
	delay 0x003C
	@ event command: addobject
	addobject 0x0004
	delay 0x001E
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_082099E8: @ 0x082099E8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x001E
	@ event command: removeobject
	removeobject 0x0004
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209AEF
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209AE4
	delay 0x001E
	@ event command: hideobjectat
	hideobjectat 0x00FF, MAP_ID_PETALBURG_CITY
	setvar 0x8004, 0x0002
	call 0x08243265
	return
EventScript_JP_08209A21: @ 0x08209A21
	loadword 0x00, gText_Rom_209BC5
	callstd 0x04
	release
	end
EventScript_JP_08209A2B: @ 0x08209A2B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_209BF3
	callstd 0x04
	message gText_Rom_209C52
	waitmessage
	goto EventScript_JP_08209573
	.byte 0x02, 0x0F, 0x00, 0x16, 0x9C, 0x20, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0x8F, 0x9C, 0x20
	.byte 0x08, 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x94, 0x9A, 0x20, 0x08, 0x16, 0xB4
	.byte 0x40, 0x05, 0x00, 0x04, 0xA0, 0x9A, 0x20, 0x08, 0x39, 0x19, 0x29, 0xFF, 0x01, 0x00, 0x0A, 0x00
	.byte 0x27, 0x6C, 0x02, 0x0F, 0x00, 0x9B, 0x9C, 0x20, 0x08, 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00
	.byte 0x06, 0x01, 0x94, 0x9A, 0x20, 0x08, 0x04, 0xA0, 0x9A, 0x20, 0x08, 0x39, 0x1A, 0x04, 0xFF, 0x13
	.byte 0x00, 0x43, 0x00, 0x27, 0x6C, 0x02
EventScript_JP_08209A94: @ 0x08209A94
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_209CBE
	waitmessage
	goto EventScript_JP_08209573
	.byte 0x02
EventScript_JP_08209AA0: @ 0x08209AA0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_209CAA
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x001E
	@ event command: hideobjectat
	hideobjectat 0x800F, MAP_ID_LILYCOVE_CITY_HARBOR
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_08209AEF
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08209AE4
	delay 0x001E
	@ event command: hideobjectat
	hideobjectat 0x00FF, MAP_ID_PETALBURG_CITY
	setvar 0x8004, 0x0002
	call 0x08243265
	return
EventScript_JP_08209AE4: @ 0x08209AE4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_PokemonTrainerFanClub_Movement_WalkRight_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08209AEF: @ 0x08209AEF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_PokemonTrainerFanClub_Movement_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08209AFA: @ 0x08209AFA
	loadword 0x00, gText_Rom_209C81
	callstd 0x04
	release
	end
LilycoveCity_PokemonTrainerFanClub_Movement_WalkRight_WalkInPlaceFastestUp: @ 0x08209B04
	@ object movement sequence
	walk_right
	walk_in_place_fastest_up
	step_end
LilycoveCity_PokemonTrainerFanClub_Movement_WalkUp: @ 0x08209B07
	@ object movement sequence
	walk_up
	step_end
	.globl LilycoveCity_PokemonTrainerFanClub_Movement_WalkUp_1
LilycoveCity_PokemonTrainerFanClub_Movement_WalkUp_1: @ 0x08209B09
	.byte 0x09, 0xFE
.globl EventScript_JP_08209B0B
EventScript_JP_08209B0B: @ 0x08209B0B
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_08209B20
	loadword 0x00, gText_Rom_209CCE
	callstd 0x04
	release
	end
EventScript_JP_08209B20: @ 0x08209B20
	loadword 0x00, gText_Rom_209D18
	callstd 0x04
	release
	end
EventScript_JP_08209B2A: @ 0x08209B2A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_PokemonTrainerFanClub_Movement_WalkInPlaceFastestRight_LockFacingDirection_WalkLeft_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08209B35: @ 0x08209B35
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_PokemonTrainerFanClub_Movement_LockFacingDirection_WalkDown_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	return
LilycoveCity_PokemonTrainerFanClub_Movement_WalkInPlaceFastestRight_LockFacingDirection_WalkLeft_UnlockFacingDirection: @ 0x08209B40
	@ object movement sequence
	walk_in_place_fastest_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end
LilycoveCity_PokemonTrainerFanClub_Movement_LockFacingDirection_WalkDown_UnlockFacingDirection: @ 0x08209B45
	@ object movement sequence
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end
EventScript_JP_08209B49: @ 0x08209B49
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08209B54: @ 0x08209B54
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08209B5F: @ 0x08209B5F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08209B6A: @ 0x08209B6A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08209B75: @ 0x08209B75
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0005, LilycoveCity_PokemonTrainerFanClub_Movement_WalkInPlaceFastestUp_Delay8_SetInvisible
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_PokemonTrainerFanClub_Movement_Delay16_WalkUp_Delay16_SetInvisible
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_PokemonTrainerFanClub_Movement_Delay16X3_WalkRight_WalkInPlaceFastestUp_Delay16_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08209B8E: @ 0x08209B8E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0005, LilycoveCity_PokemonTrainerFanClub_Movement_WalkInPlaceFastestUp_Delay8_SetInvisible
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_PokemonTrainerFanClub_Movement_Delay16_WalkRight_WalkInPlaceFastestUp_Delay16_SetInvisible
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_PokemonTrainerFanClub_Movement_Delay16X3_WalkUp_Delay16_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	return
LilycoveCity_PokemonTrainerFanClub_Movement_WalkInPlaceFastestUp_Delay8_SetInvisible: @ 0x08209BA7
	@ object movement sequence
	walk_in_place_fastest_up
	delay_8
	set_invisible
	step_end
LilycoveCity_PokemonTrainerFanClub_Movement_Delay16_WalkUp_Delay16_SetInvisible: @ 0x08209BAB
	@ object movement sequence
	delay_16
	walk_up
	delay_16
	set_invisible
	step_end
LilycoveCity_PokemonTrainerFanClub_Movement_Delay16X3_WalkRight_WalkInPlaceFastestUp_Delay16_SetInvisible: @ 0x08209BB0
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	walk_right
	walk_in_place_fastest_up
	delay_16
	set_invisible
	step_end
LilycoveCity_PokemonTrainerFanClub_Movement_Delay16_WalkRight_WalkInPlaceFastestUp_Delay16_SetInvisible: @ 0x08209BB8
	@ object movement sequence
	delay_16
	walk_right
	walk_in_place_fastest_up
	delay_16
	set_invisible
	step_end
LilycoveCity_PokemonTrainerFanClub_Movement_Delay16X3_WalkUp_Delay16_SetInvisible: @ 0x08209BBE
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	walk_up
	delay_16
	set_invisible
	step_end
