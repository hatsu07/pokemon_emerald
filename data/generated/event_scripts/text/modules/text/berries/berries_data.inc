	@ data/text/berries.inc:1 PetalburgCity_Gym_Text_GiveEnigmaBerry
	.globl PetalburgCity_Gym_Text_GiveEnigmaBerry
PetalburgCity_Gym_Text_GiveEnigmaBerry: @ 0x082637C2
	.string "パパ『やあ {PLAYER}!\pめずらしい きのみを てに いれたから\nプレゼント するよ!{EOS}"
	.if (. - PetalburgCity_Gym_Text_GiveEnigmaBerry) > 0x29
	.error "PetalburgCity_Gym_Text_GiveEnigmaBerry may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Gym_Text_GiveEnigmaBerry) < 0x29
	.space 0x29 - (. - PetalburgCity_Gym_Text_GiveEnigmaBerry)
	.endif

	@ data/text/berries.inc:6 Route104_Text_PlantBerriesInSoilTakeThis
	.globl Route104_Text_PlantBerriesInSoilTakeThis
Route104_Text_PlantBerriesInSoilTakeThis: @ 0x082637EB
	.string "ふかふかの つちに はえている きのみは\nじゆうに とっても よいのじゃが…\p1つだけ きのみを おなじ ばしょに うめる\nそれが れいぎと いうものじゃ\pほれ これを わけてやろう{EOS}"
	.if (. - Route104_Text_PlantBerriesInSoilTakeThis) > 0x5c
	.error "Route104_Text_PlantBerriesInSoilTakeThis may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_PlantBerriesInSoilTakeThis) < 0x5c
	.space 0x5c - (. - Route104_Text_PlantBerriesInSoilTakeThis)
	.endif

	@ data/text/berries.inc:13 Route104_Text_TrainersOftenMakeMonHoldBerries
	.globl Route104_Text_TrainersOftenMakeMonHoldBerries
Route104_Text_TrainersOftenMakeMonHoldBerries: @ 0x08263847
	.string "あんた みたところ トレーナーじゃろ?\pトレーナーは よく きのみを ポケモンに\nもたせとるわい\pふやすも つかうも あんた しだいじゃ{EOS}"
	.if (. - Route104_Text_TrainersOftenMakeMonHoldBerries) > 0x45
	.error "Route104_Text_TrainersOftenMakeMonHoldBerries may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_TrainersOftenMakeMonHoldBerries) < 0x45
	.space 0x45 - (. - Route104_Text_TrainersOftenMakeMonHoldBerries)
	.endif

	@ data/text/berries.inc:19 Route111_Text_WateredPlantsEveryDayTakeBerry
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_WateredPlantsEveryDayTakeBerry
Route111_Text_WateredPlantsEveryDayTakeBerry: @ 0x0826388C
	.string "いつも みずを あげてたら\nたくさん はなが さいたんだ\pそしたら きのみも たくさん できた!\pはい!\nこれ あげる{EOS}"
	.if (. - Route111_Text_WateredPlantsEveryDayTakeBerry) != 0x3c
	.error "Route111_Text_WateredPlantsEveryDayTakeBerry must retain its original byte length"
	.endif

	@ data/text/berries.inc:26 Route111_Text_GoingToTryToMakeDifferentColorBerries
	.globl Route111_Text_GoingToTryToMakeDifferentColorBerries
Route111_Text_GoingToTryToMakeDifferentColorBerries: @ 0x082638C8
	.string "がんばって いろんな いろの\nきのみを そだてるんだ!\l{STR_VAR_1}も がんばってね!{EOS}"
	.if (. - Route111_Text_GoingToTryToMakeDifferentColorBerries) > 0x28
	.error "Route111_Text_GoingToTryToMakeDifferentColorBerries may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_GoingToTryToMakeDifferentColorBerries) < 0x28
	.space 0x28 - (. - Route111_Text_GoingToTryToMakeDifferentColorBerries)
	.endif

	@ data/text/berries.inc:31 Route111_Text_WhatColorBerriesToLookForToday
	.globl Route111_Text_WhatColorBerriesToLookForToday
Route111_Text_WhatColorBerriesToLookForToday: @ 0x082638F0
	.string "きょうは なにいろの きのみを\nさがそっかなー{EOS}"
	.if (. - Route111_Text_WhatColorBerriesToLookForToday) > 0x18
	.error "Route111_Text_WhatColorBerriesToLookForToday may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_WhatColorBerriesToLookForToday) < 0x18
	.space 0x18 - (. - Route111_Text_WhatColorBerriesToLookForToday)
	.endif

	@ data/text/berries.inc:35 Route114_Text_LoveUsingBerryCrushShareBerry
	.globl Route114_Text_LoveUsingBerryCrushShareBerry
Route114_Text_LoveUsingBerryCrushShareBerry: @ 0x08263908
	.string "きのみクラッシュが だいすきだから\nきのみを あつめているんだ\pよかったら きみにも わけて あげるよ!{EOS}"
	.if (. - Route114_Text_LoveUsingBerryCrushShareBerry) > 0x35
	.error "Route114_Text_LoveUsingBerryCrushShareBerry may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LoveUsingBerryCrushShareBerry) < 0x35
	.space 0x35 - (. - Route114_Text_LoveUsingBerryCrushShareBerry)
	.endif

	@ data/text/berries.inc:40 Route114_Text_TryBerryCrushWithFriends
	.globl Route114_Text_TryBerryCrushWithFriends
Route114_Text_TryBerryCrushWithFriends: @ 0x0826393D
	.string "きみも ともだちと\nきのみクラッシュ やってみなよ!{EOS}"
	.if (. - Route114_Text_TryBerryCrushWithFriends) > 0x1b
	.error "Route114_Text_TryBerryCrushWithFriends may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_TryBerryCrushWithFriends) < 0x1b
	.space 0x1b - (. - Route114_Text_TryBerryCrushWithFriends)
	.endif

	@ data/text/berries.inc:44 Route114_Text_FunToThinkAboutBerries
	.globl Route114_Text_FunToThinkAboutBerries
Route114_Text_FunToThinkAboutBerries: @ 0x08263958
	.string "どの きのみを うめるか?\nきのみは つかうのか ふやすのか?\pって なやむのも また たのしいよ{EOS}"
	.if (. - Route114_Text_FunToThinkAboutBerries) > 0x32
	.error "Route114_Text_FunToThinkAboutBerries may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_FunToThinkAboutBerries) < 0x32
	.space 0x32 - (. - Route114_Text_FunToThinkAboutBerries)
	.endif

	@ data/text/berries.inc:49 Route120_Text_BerriesExpressionOfLoveIsntIt
	.globl Route120_Text_BerriesExpressionOfLoveIsntIt
Route120_Text_BerriesExpressionOfLoveIsntIt: @ 0x0826398A
	.string "ひかりを いっぱい あびて\nそだつ きのみたち…\pそして きのみが げんきに そだつように\nじょうろで みずを あげる わたしたち…\pこれって あい だよね?{EOS}"
	.if (. - Route120_Text_BerriesExpressionOfLoveIsntIt) > 0x50
	.error "Route120_Text_BerriesExpressionOfLoveIsntIt may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_BerriesExpressionOfLoveIsntIt) < 0x50
	.space 0x50 - (. - Route120_Text_BerriesExpressionOfLoveIsntIt)
	.endif

	@ data/text/berries.inc:56 Route120_Text_YesYouUnderstand
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route120_Text_YesYouUnderstand
Route120_Text_YesYouUnderstand: @ 0x082639DA
	.string "うん うん!\nやっぱ わかるひとには わかるよね\pこれ あげる{EOS}"
	.if (. - Route120_Text_YesYouUnderstand) != 0x20
	.error "Route120_Text_YesYouUnderstand must retain its original byte length"
	.endif

	@ data/text/berries.inc:61 Route120_Text_MakeYourOwnImpressions
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route120_Text_MakeYourOwnImpressions
Route120_Text_MakeYourOwnImpressions: @ 0x082639FA
	.string "そっか……\nでも ちがうと かんじることも たいせつだね\pこれ あげる{EOS}"
	.if (. - Route120_Text_MakeYourOwnImpressions) != 0x24
	.error "Route120_Text_MakeYourOwnImpressions must retain its original byte length"
	.endif

	@ data/text/berries.inc:66 Route120_Text_BerryIsRareRaiseItWithCare
	.globl Route120_Text_BerryIsRareRaiseItWithCare
Route120_Text_BerryIsRareRaiseItWithCare: @ 0x08263A1E
	.string "その きのみは めずらしいもの らしいから\nたいせつに そだててね!{EOS}"
	.if (. - Route120_Text_BerryIsRareRaiseItWithCare) > 0x23
	.error "Route120_Text_BerryIsRareRaiseItWithCare may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_BerryIsRareRaiseItWithCare) < 0x23
	.space 0x23 - (. - Route120_Text_BerryIsRareRaiseItWithCare)
	.endif

	@ data/text/berries.inc:70 Route120_Text_IllGetMoreBerriesFromBerryMaster
	.globl Route120_Text_IllGetMoreBerriesFromBerryMaster
Route120_Text_IllGetMoreBerriesFromBerryMaster: @ 0x08263A41
	.string "また きのみめいじんに もらって こようっと{EOS}"
	.if (. - Route120_Text_IllGetMoreBerriesFromBerryMaster) > 0x17
	.error "Route120_Text_IllGetMoreBerriesFromBerryMaster may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_IllGetMoreBerriesFromBerryMaster) < 0x17
	.space 0x17 - (. - Route120_Text_IllGetMoreBerriesFromBerryMaster)
	.endif

	@ data/text/berries.inc:73 LilycoveCity_Text_BerrySuitsYou
	.globl LilycoveCity_Text_BerrySuitsYou
LilycoveCity_Text_BerrySuitsYou: @ 0x08263A58
	.string "やっぱり\pわたしに スーツが にあうように\nうみには しおかぜが にあうな\lそして きみには きのみが にあいそうだ……\pなんでだろうね?{EOS}"
	.if (. - LilycoveCity_Text_BerrySuitsYou) > 0x46
	.error "LilycoveCity_Text_BerrySuitsYou may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BerrySuitsYou) < 0x46
	.space 0x46 - (. - LilycoveCity_Text_BerrySuitsYou)
	.endif

	@ data/text/berries.inc:80 LilycoveCity_Text_BecauseYoureTrainer
	.globl LilycoveCity_Text_BecauseYoureTrainer
LilycoveCity_Text_BecauseYoureTrainer: @ 0x08263A9E
	.string "やっぱり それは…………\pきみが トレーナーだからだ!{EOS}"
	.if (. - LilycoveCity_Text_BecauseYoureTrainer) > 0x1c
	.error "LilycoveCity_Text_BecauseYoureTrainer may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BecauseYoureTrainer) < 0x1c
	.space 0x1c - (. - LilycoveCity_Text_BecauseYoureTrainer)
	.endif

	@ data/text/berries.inc:84 LilycoveCity_Text_PokeblocksSuitPokemon
	.globl LilycoveCity_Text_PokeblocksSuitPokemon
LilycoveCity_Text_PokeblocksSuitPokemon: @ 0x08263ABA
	.string "やっぱり\pわたしに シンプルさが にあうように\nポケモンには ポロックが にあうな{EOS}"
	.if (. - LilycoveCity_Text_PokeblocksSuitPokemon) > 0x2a
	.error "LilycoveCity_Text_PokeblocksSuitPokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_PokeblocksSuitPokemon) < 0x2a
	.space 0x2a - (. - LilycoveCity_Text_PokeblocksSuitPokemon)
	.endif

	@ data/text/berries.inc:89 Route123_BerryMastersHouse_Text_YoureDeservingOfBerry
	.globl Route123_BerryMastersHouse_Text_YoureDeservingOfBerry
Route123_BerryMastersHouse_Text_YoureDeservingOfBerry: @ 0x08263AE4
	.string "わしは きのみめいじんと よばれておる\pわしは せかいじゅうを うつくしい はなで\nうめつくそうと きのみを そだてて\lそして くばり まくって おるのじゃ\pきみにも きのみを わけて あげよう!{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_YoureDeservingOfBerry) > 0x63
	.error "Route123_BerryMastersHouse_Text_YoureDeservingOfBerry may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_YoureDeservingOfBerry) < 0x63
	.space 0x63 - (. - Route123_BerryMastersHouse_Text_YoureDeservingOfBerry)
	.endif

	@ data/text/berries.inc:96 Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother
	.globl Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother
Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother: @ 0x08263B47
	.string "ほれ えんりょ せずに もう ひとつ!{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother) > 0x14
	.error "Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother) < 0x14
	.space 0x14 - (. - Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother)
	.endif

	@ data/text/berries.inc:99 Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop
	.globl Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop
Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop: @ 0x08263B5B
	.string "カナズミの ちかくにある サン・トウカという\nフラワーショップも よろしくの\pせかいに はなを さかせましょう!{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop) > 0x39
	.error "Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop) < 0x39
	.space 0x39 - (. - Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop)
	.endif

	@ data/text/berries.inc:104 Route123_BerryMastersHouse_Text_DoneForToday
	.globl Route123_BerryMastersHouse_Text_DoneForToday
Route123_BerryMastersHouse_Text_DoneForToday: @ 0x08263B94
	.string "きょうは もう おしまいじゃ\nまた おいで\pせかいに はなを さかせましょう!{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_DoneForToday) > 0x28
	.error "Route123_BerryMastersHouse_Text_DoneForToday may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_DoneForToday) < 0x28
	.space 0x28 - (. - Route123_BerryMastersHouse_Text_DoneForToday)
	.endif

	@ data/text/berries.inc:109 Route123_BerryMastersHouse_Text_HeardAGoodSayingLately
	.globl Route123_BerryMastersHouse_Text_HeardAGoodSayingLately
Route123_BerryMastersHouse_Text_HeardAGoodSayingLately: @ 0x08263BBC
	.string "じいさんの きのみの そだてかたは\nそりゃあ せかいいちじゃ\pわしも はなが たかいわい\pところで あんた\nいい ことばを きいたことが ないかい?{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_HeardAGoodSayingLately) > 0x4b
	.error "Route123_BerryMastersHouse_Text_HeardAGoodSayingLately may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_HeardAGoodSayingLately) < 0x4b
	.space 0x4b - (. - Route123_BerryMastersHouse_Text_HeardAGoodSayingLately)
	.endif

	@ data/text/berries.inc:116 Route123_BerryMastersHouse_Text_InspirationalTakeThis
	.globl Route123_BerryMastersHouse_Text_InspirationalTakeThis
Route123_BerryMastersHouse_Text_InspirationalTakeThis: @ 0x08263C07
	.string "おお! とても よい ことばじゃ!\nかんどう したわい\pほれ これを もっていきなされ{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_InspirationalTakeThis) > 0x2c
	.error "Route123_BerryMastersHouse_Text_InspirationalTakeThis may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_InspirationalTakeThis) < 0x2c
	.space 0x2c - (. - Route123_BerryMastersHouse_Text_InspirationalTakeThis)
	.endif

	@ data/text/berries.inc:121 Route123_BerryMastersHouse_Text_GoodSayingTakeThis
	.globl Route123_BerryMastersHouse_Text_GoodSayingTakeThis
Route123_BerryMastersHouse_Text_GoodSayingTakeThis: @ 0x08263C33
	.string "おお! なかなか よい ことばじゃ\nあんたも たいしたもんじゃ\pほれ これを もっていきなされ{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_GoodSayingTakeThis) > 0x30
	.error "Route123_BerryMastersHouse_Text_GoodSayingTakeThis may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_GoodSayingTakeThis) < 0x30
	.space 0x30 - (. - Route123_BerryMastersHouse_Text_GoodSayingTakeThis)
	.endif

	@ data/text/berries.inc:126 Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife
	.globl Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife
Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife: @ 0x08263C63
	.string "まごたち 4にんも じいさんを しのぐ\nおおものに なるじゃろうて\pじんせい たのしいことが つきんのう!{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife) > 0x36
	.error "Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife) < 0x36
	.space 0x36 - (. - Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife)
	.endif

	@ data/text/berries.inc:131 Route123_BerryMastersHouse_Text_Ah
	.globl Route123_BerryMastersHouse_Text_Ah
Route123_BerryMastersHouse_Text_Ah: @ 0x08263C99
	.string "ほう……{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_Ah) > 0x5
	.error "Route123_BerryMastersHouse_Text_Ah may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_Ah) < 0x5
	.space 0x5 - (. - Route123_BerryMastersHouse_Text_Ah)
	.endif

	@ data/text/berries.inc:134 Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop
	.globl Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop
Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop: @ 0x08263C9E
	.string "こんにちは!\pはなを せかいに ひろめる\nフラワーショップ サン・トウカです!{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop) > 0x28
	.error "Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop) < 0x28
	.space 0x28 - (. - Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop)
	.endif

	@ data/text/berries.inc:139 Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries
	.globl Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries
Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries: @ 0x08263CC6
	.string "{PLAYER}{KUN} きのみの こと しりたい?{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries) > 0x13
	.error "Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries) < 0x13
	.space 0x13 - (. - Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries)
	.endif

	@ data/text/berries.inc:142 Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries
	.globl Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries
Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries: @ 0x08263CD9
	.string "あなたの なまえは……\p{PLAYER}{KUN}ね!\nとっても いい なまえだね!\l{PLAYER}{KUN} きのみのこと しりたい?{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries) > 0x34
	.error "Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries) < 0x34
	.space 0x34 - (. - Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries)
	.endif

	@ data/text/berries.inc:148 Route104_PrettyPetalFlowerShop_Text_BerriesExplanation
	.globl Route104_PrettyPetalFlowerShop_Text_BerriesExplanation
Route104_PrettyPetalFlowerShop_Text_BerriesExplanation: @ 0x08263D0D
	.string "きのみはね くろい ふかふかの つちの\nところで たまに とれるの\lでね……\pとったら その1つを また うめるの!\pそうすると その きのみ から\nめがでて みきが できて はながさいて\lまた きのみ が できるの\pそうやって はなを ふやして\nせかいじゅうを はなに するのが\lわたしの ゆめ なんだ!\pだから {PLAYER}{KUN}も きのみを うめて\nせかいに はなを ふやしてね!{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_BerriesExplanation) > 0xbd
	.error "Route104_PrettyPetalFlowerShop_Text_BerriesExplanation may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_BerriesExplanation) < 0xbd
	.space 0xbd - (. - Route104_PrettyPetalFlowerShop_Text_BerriesExplanation)
	.endif

	@ data/text/berries.inc:162 Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness
	.globl Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness
Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness: @ 0x08263DCA
	.string "おはなって とっても しあわせな きぶんに\nしてくれるよね{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness) > 0x1e
	.error "Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness) < 0x1e
	.space 0x1e - (. - Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness)
	.endif

	@ data/text/berries.inc:166 Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis
	.globl Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis
Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis: @ 0x08263DE8
	.string "こんにちは!\pおはなは せわを すれば するほど\nたくさん きれいに さいて くれるの\pあなたも せわを したく なった でしょ?\nこれ あげるわ{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis) > 0x4a
	.error "Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis) < 0x4a
	.space 0x4a - (. - Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis)
	.endif

	@ data/text/berries.inc:173 Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation
	.globl Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation
Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation: @ 0x08263E32
	.string "きのみが そだつ たびに\nじょうろで みずを あげてね!\pあとね\pきのみは ずっと ずっと ほうっておくと\nじめんに おちてしまうの\lでもね そこから また めがでて くるの!\pすごいよね!\nいきものの ちからを かんじるよね{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation) > 0x72
	.error "Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation) < 0x72
	.space 0x72 - (. - Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation)
	.endif

	@ data/text/berries.inc:183 Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers
	.globl Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers
Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers: @ 0x08263EA4
	.string "おねーちゃんたちを みならって\nがんばって おはなを そだててるの\pはい! これあげる!{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers) > 0x2d
	.error "Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers) < 0x2d
	.space 0x2d - (. - Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers)
	.endif

	@ data/text/berries.inc:188 Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries
	.globl Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries
Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries: @ 0x08263ED1
	.string "きのみは うめて おおきく したり\nポケモンに もたせたり できるの\pでも さいきん きのみを いくつか まぜると\nポケモンの おかしになる きかいが\lある らしいんだ\pあたしも おかし ほしー{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries) > 0x62
	.error "Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries) < 0x62
	.space 0x62 - (. - Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries)
	.endif

	@ data/text/berries.inc:196 SootopolisCity_Text_NameIsKiriHaveOneOfThese
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SootopolisCity_Text_NameIsKiriHaveOneOfThese
SootopolisCity_Text_NameIsKiriHaveOneOfThese: @ 0x08263F33
	.string "{STR_VAR_1} なまえ なんていうの?\p……… ……… ………\nへー いいねー\pわたしは キリ っていう なまえなの\pパパと ママが すくすくと そだって\nこころの あたたかい おんなのこに なって\lほしいっていう ねがいを こめたんだって!\p{STR_VAR_1}にも これ あげる{EOS}"
	.if (. - SootopolisCity_Text_NameIsKiriHaveOneOfThese) != 0x81
	.error "SootopolisCity_Text_NameIsKiriHaveOneOfThese must retain its original byte length"
	.endif
	@ field-script:0x1E25F3 FieldScriptText_263FB4
	.globl FieldScriptText_263FB4
FieldScriptText_263FB4: @ 0x08263FB4
	.string "あと　{0xFD}{0x02}には　キリの　だいすきな\nこの　きのみも　あげちゃう！{EOS}"
	.if (. - FieldScriptText_263FB4) > 0x21
	.error "FieldScriptText_263FB4 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_263FB4) < 0x21
	.space 0x21 - (. - FieldScriptText_263FB4)
	.endif
	@ data/text/berries.inc:210 SootopolisCity_Text_WhatKindOfWishInYourName
	.globl SootopolisCity_Text_WhatKindOfWishInYourName
SootopolisCity_Text_WhatKindOfWishInYourName: @ 0x08263FD5
	.string "{STR_VAR_1}の なまえには\nどんな ねがいが こめられてるの?{EOS}"
	.if (. - SootopolisCity_Text_WhatKindOfWishInYourName) > 0x1c
	.error "SootopolisCity_Text_WhatKindOfWishInYourName may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_WhatKindOfWishInYourName) < 0x1c
	.space 0x1c - (. - SootopolisCity_Text_WhatKindOfWishInYourName)
	.endif

	@ data/text/berries.inc:214 SootopolisCity_Text_LikeSeasonBornIn
	.globl SootopolisCity_Text_LikeSeasonBornIn
SootopolisCity_Text_LikeSeasonBornIn: @ 0x08263FF1
	.string "はる なつ あき ふゆ\nはるに うまれると はるが すきで\lなつに うまれると なつが すきなのかな?{EOS}"
	.if (. - SootopolisCity_Text_LikeSeasonBornIn) > 0x34
	.error "SootopolisCity_Text_LikeSeasonBornIn may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_LikeSeasonBornIn) < 0x34
	.space 0x34 - (. - SootopolisCity_Text_LikeSeasonBornIn)
	.endif

	@ data/text/berries.inc:219 SootopolisCity_Text_ThenILoveAutumn
	.globl SootopolisCity_Text_ThenILoveAutumn
SootopolisCity_Text_ThenILoveAutumn: @ 0x08264025
	.string "じゃあ キリは あきに うまれたから\nあきが だいすき!\p{STR_VAR_1}は いつが すき?{EOS}"
	.if (. - SootopolisCity_Text_ThenILoveAutumn) > 0x29
	.error "SootopolisCity_Text_ThenILoveAutumn may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_ThenILoveAutumn) < 0x29
	.space 0x29 - (. - SootopolisCity_Text_ThenILoveAutumn)
	.endif

	@ data/text/berries.inc:224 SootopolisCity_Text_OhDoesntMatter
	.globl SootopolisCity_Text_OhDoesntMatter
SootopolisCity_Text_OhDoesntMatter: @ 0x0826404E
	.string "そっか…\nかんけいないのか…\pしりたいことって たくさんあるなー{EOS}"
	.if (. - SootopolisCity_Text_OhDoesntMatter) > 0x21
	.error "SootopolisCity_Text_OhDoesntMatter may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_OhDoesntMatter) < 0x21
	.space 0x21 - (. - SootopolisCity_Text_OhDoesntMatter)
	.endif
