	@ data/text/berries.inc:1 PetalburgCity_Gym_Text_GiveEnigmaBerry
	.globl gText_Rom_2637C2
gText_Rom_2637C2: @ 0x082637C2
	.string "パパ『やあ {PLAYER}!\pめずらしい きのみを てに いれたから\nプレゼント するよ!$"
	.if (. - gText_Rom_2637C2) > 0x29
	.error "gText_Rom_2637C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2637C2) < 0x29
	.space 0x29 - (. - gText_Rom_2637C2)
	.endif

	@ data/text/berries.inc:6 Route104_Text_PlantBerriesInSoilTakeThis
	.globl gText_Rom_2637EB
gText_Rom_2637EB: @ 0x082637EB
	.string "ふかふかの つちに はえている きのみは\nじゆうに とっても よいのじゃが…\p1つだけ きのみを おなじ ばしょに うめる\nそれが れいぎと いうものじゃ\pほれ これを わけてやろう$"
	.if (. - gText_Rom_2637EB) > 0x5c
	.error "gText_Rom_2637EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2637EB) < 0x5c
	.space 0x5c - (. - gText_Rom_2637EB)
	.endif

	@ data/text/berries.inc:13 Route104_Text_TrainersOftenMakeMonHoldBerries
	.globl gText_Rom_263847
gText_Rom_263847: @ 0x08263847
	.string "あんた みたところ トレーナーじゃろ?\pトレーナーは よく きのみを ポケモンに\nもたせとるわい\pふやすも つかうも あんた しだいじゃ$"
	.if (. - gText_Rom_263847) > 0x45
	.error "gText_Rom_263847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263847) < 0x45
	.space 0x45 - (. - gText_Rom_263847)
	.endif

	@ data/text/berries.inc:19 Route111_Text_WateredPlantsEveryDayTakeBerry
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26388C
gText_Rom_26388C: @ 0x0826388C
	.string "いつも みずを あげてたら\nたくさん はなが さいたんだ\pそしたら きのみも たくさん できた!\pはい!\nこれ あげる$"
	.if (. - gText_Rom_26388C) != 0x3c
	.error "gText_Rom_26388C must retain its original byte length"
	.endif
	.globl gText_Rom_2638C4
	.set gText_Rom_2638C4, gText_Rom_26388C + 0x38

	@ data/text/berries.inc:26 Route111_Text_GoingToTryToMakeDifferentColorBerries
	.globl gText_Rom_2638C8
gText_Rom_2638C8: @ 0x082638C8
	.string "がんばって いろんな いろの\nきのみを そだてるんだ!\l{STR_VAR_1}も がんばってね!$"
	.if (. - gText_Rom_2638C8) > 0x28
	.error "gText_Rom_2638C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2638C8) < 0x28
	.space 0x28 - (. - gText_Rom_2638C8)
	.endif

	@ data/text/berries.inc:31 Route111_Text_WhatColorBerriesToLookForToday
	.globl gText_Rom_2638F0
gText_Rom_2638F0: @ 0x082638F0
	.string "きょうは なにいろの きのみを\nさがそっかなー$"
	.if (. - gText_Rom_2638F0) > 0x18
	.error "gText_Rom_2638F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2638F0) < 0x18
	.space 0x18 - (. - gText_Rom_2638F0)
	.endif

	@ data/text/berries.inc:35 Route114_Text_LoveUsingBerryCrushShareBerry
	.globl gText_Rom_263908
gText_Rom_263908: @ 0x08263908
	.string "きのみクラッシュが だいすきだから\nきのみを あつめているんだ\pよかったら きみにも わけて あげるよ!$"
	.if (. - gText_Rom_263908) > 0x35
	.error "gText_Rom_263908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263908) < 0x35
	.space 0x35 - (. - gText_Rom_263908)
	.endif

	@ data/text/berries.inc:40 Route114_Text_TryBerryCrushWithFriends
	.globl gText_Rom_26393D
gText_Rom_26393D: @ 0x0826393D
	.string "きみも ともだちと\nきのみクラッシュ やってみなよ!$"
	.if (. - gText_Rom_26393D) > 0x1b
	.error "gText_Rom_26393D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26393D) < 0x1b
	.space 0x1b - (. - gText_Rom_26393D)
	.endif

	@ data/text/berries.inc:44 Route114_Text_FunToThinkAboutBerries
	.globl gText_Rom_263958
gText_Rom_263958: @ 0x08263958
	.string "どの きのみを うめるか?\nきのみは つかうのか ふやすのか?\pって なやむのも また たのしいよ$"
	.if (. - gText_Rom_263958) > 0x32
	.error "gText_Rom_263958 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263958) < 0x32
	.space 0x32 - (. - gText_Rom_263958)
	.endif

	@ data/text/berries.inc:49 Route120_Text_BerriesExpressionOfLoveIsntIt
	.globl gText_Rom_26398A
gText_Rom_26398A: @ 0x0826398A
	.string "ひかりを いっぱい あびて\nそだつ きのみたち…\pそして きのみが げんきに そだつように\nじょうろで みずを あげる わたしたち…\pこれって あい だよね?$"
	.if (. - gText_Rom_26398A) > 0x50
	.error "gText_Rom_26398A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26398A) < 0x50
	.space 0x50 - (. - gText_Rom_26398A)
	.endif

	@ data/text/berries.inc:56 Route120_Text_YesYouUnderstand
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2639DA
gText_Rom_2639DA: @ 0x082639DA
	.string "うん うん!\nやっぱ わかるひとには わかるよね\pこれ あげる$"
	.if (. - gText_Rom_2639DA) != 0x20
	.error "gText_Rom_2639DA must retain its original byte length"
	.endif
	.globl gText_Rom_2639F6
	.set gText_Rom_2639F6, gText_Rom_2639DA + 0x1c

	@ data/text/berries.inc:61 Route120_Text_MakeYourOwnImpressions
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2639FA
gText_Rom_2639FA: @ 0x082639FA
	.string "そっか……\nでも ちがうと かんじることも たいせつだね\pこれ あげる$"
	.if (. - gText_Rom_2639FA) != 0x24
	.error "gText_Rom_2639FA must retain its original byte length"
	.endif
	.globl gText_Rom_263A1A
	.set gText_Rom_263A1A, gText_Rom_2639FA + 0x20

	@ data/text/berries.inc:66 Route120_Text_BerryIsRareRaiseItWithCare
	.globl gText_Rom_263A1E
gText_Rom_263A1E: @ 0x08263A1E
	.string "その きのみは めずらしいもの らしいから\nたいせつに そだててね!$"
	.if (. - gText_Rom_263A1E) > 0x23
	.error "gText_Rom_263A1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263A1E) < 0x23
	.space 0x23 - (. - gText_Rom_263A1E)
	.endif

	@ data/text/berries.inc:70 Route120_Text_IllGetMoreBerriesFromBerryMaster
	.globl gText_Rom_263A41
gText_Rom_263A41: @ 0x08263A41
	.string "また きのみめいじんに もらって こようっと$"
	.if (. - gText_Rom_263A41) > 0x17
	.error "gText_Rom_263A41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263A41) < 0x17
	.space 0x17 - (. - gText_Rom_263A41)
	.endif

	@ data/text/berries.inc:73 LilycoveCity_Text_BerrySuitsYou
	.globl gText_Rom_263A58
gText_Rom_263A58: @ 0x08263A58
	.string "やっぱり\pわたしに スーツが にあうように\nうみには しおかぜが にあうな\lそして きみには きのみが にあいそうだ……\pなんでだろうね?$"
	.if (. - gText_Rom_263A58) > 0x46
	.error "gText_Rom_263A58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263A58) < 0x46
	.space 0x46 - (. - gText_Rom_263A58)
	.endif
