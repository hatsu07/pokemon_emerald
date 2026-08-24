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
	.globl gText_Rom_2638C4
	.set gText_Rom_2638C4, Route111_Text_WateredPlantsEveryDayTakeBerry + 0x38

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
	.globl gText_Rom_2639F6
	.set gText_Rom_2639F6, Route120_Text_YesYouUnderstand + 0x1c

	@ data/text/berries.inc:61 Route120_Text_MakeYourOwnImpressions
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route120_Text_MakeYourOwnImpressions
Route120_Text_MakeYourOwnImpressions: @ 0x082639FA
	.string "そっか……\nでも ちがうと かんじることも たいせつだね\pこれ あげる{EOS}"
	.if (. - Route120_Text_MakeYourOwnImpressions) != 0x24
	.error "Route120_Text_MakeYourOwnImpressions must retain its original byte length"
	.endif
	.globl gText_Rom_263A1A
	.set gText_Rom_263A1A, Route120_Text_MakeYourOwnImpressions + 0x20

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
