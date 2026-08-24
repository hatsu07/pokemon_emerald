	@ data/maps/SootopolisCity/scripts.inc:1381 SootopolisCity_Text_GymSign
	.globl SootopolisCity_Text_GymSign
SootopolisCity_Text_GymSign: @ 0x081E2C09
	.string "ルネ シティ ポケモンジム\nリーダー アダン\lみずも したたる ジムリーダー!{EOS}"
	.if (. - SootopolisCity_Text_GymSign) > 0x28
	.error "SootopolisCity_Text_GymSign may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_GymSign) < 0x28
	.space 0x28 - (. - SootopolisCity_Text_GymSign)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1384 SootopolisCity_Text_CitySign
	.globl SootopolisCity_Text_CitySign
SootopolisCity_Text_CitySign: @ 0x081E2C31
	.string "ここは ルネ シティ\nれきしが ねむる しんぴの まち{EOS}"
	.if (. - SootopolisCity_Text_CitySign) > 0x1c
	.error "SootopolisCity_Text_CitySign may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_CitySign) < 0x1c
	.space 0x1c - (. - SootopolisCity_Text_CitySign)
	.endif
	@ data/maps/SkyPillar_Outside/scripts.inc:139 SkyPillar_Outside_Text_DoorIsClosed (+1 aliases)
	.globl SkyPillar_Outside_Text_DoorIsClosed_Copy_SootopolisCity
SkyPillar_Outside_Text_DoorIsClosed_Copy_SootopolisCity: @ 0x081E2C4D
	.string "とびらは とざされて いる!{EOS}"
	.if (. - SkyPillar_Outside_Text_DoorIsClosed_Copy_SootopolisCity) > 0xf
	.error "SkyPillar_Outside_Text_DoorIsClosed_Copy_SootopolisCity may not grow beyond its original slot"
	.endif
	.if (. - SkyPillar_Outside_Text_DoorIsClosed_Copy_SootopolisCity) < 0xf
	.space 0xf - (. - SkyPillar_Outside_Text_DoorIsClosed_Copy_SootopolisCity)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1390 SootopolisCity_Text_PhysicallyFitLivingHere
	.globl SootopolisCity_Text_PhysicallyFitLivingHere
SootopolisCity_Text_PhysicallyFitLivingHere: @ 0x081E2C5C
	.string "うみに もぐったり\nかいだんを のぼったり おりたり……\pこのまちで くらして いると\nけっこう たくましく なるんだよね{EOS}"
	.if (. - SootopolisCity_Text_PhysicallyFitLivingHere) > 0x3e
	.error "SootopolisCity_Text_PhysicallyFitLivingHere may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_PhysicallyFitLivingHere) < 0x3e
	.space 0x3e - (. - SootopolisCity_Text_PhysicallyFitLivingHere)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1393 SootopolisCity_Text_GiantPokemonSuddenlyAppeared
	.globl SootopolisCity_Text_GiantPokemonSuddenlyAppeared
SootopolisCity_Text_GiantPokemonSuddenlyAppeared: @ 0x081E2C9A
	.string "おっきな ポケモンが とつぜん\nまちの まんなかに あらわれたんだ!\lしかも みたことない やつが 2ひきも!\pあの 2ひき……\nどうして ぶつかり あってるの?\lポケモンどうし なかよく できないの?{EOS}"
	.if (. - SootopolisCity_Text_GiantPokemonSuddenlyAppeared) > 0x66
	.error "SootopolisCity_Text_GiantPokemonSuddenlyAppeared may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_GiantPokemonSuddenlyAppeared) < 0x66
	.space 0x66 - (. - SootopolisCity_Text_GiantPokemonSuddenlyAppeared)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1396 SootopolisCity_Text_WhatIsThatGreenPokemon
	.globl SootopolisCity_Text_WhatIsThatGreenPokemon
SootopolisCity_Text_WhatIsThatGreenPokemon: @ 0x081E2D00
	.string "なに? なに? なに?\nあの みどりの ポケモン なにー!?{EOS}"
	.if (. - SootopolisCity_Text_WhatIsThatGreenPokemon) > 0x1f
	.error "SootopolisCity_Text_WhatIsThatGreenPokemon may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_WhatIsThatGreenPokemon) < 0x1f
	.space 0x1f - (. - SootopolisCity_Text_WhatIsThatGreenPokemon)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1399 SootopolisCity_Text_WhereDidLegendariesGo
	.globl SootopolisCity_Text_WhereDidLegendariesGo
SootopolisCity_Text_WhereDidLegendariesGo: @ 0x081E2D1F
	.string "グラードンと カイオーガ\nどこ いっちゃったんだろう……\pまた どこかで ひでりに したり\nおおあめ ふらせたり してるのかな?{EOS}"
	.if (. - SootopolisCity_Text_WhereDidLegendariesGo) > 0x41
	.error "SootopolisCity_Text_WhereDidLegendariesGo may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_WhereDidLegendariesGo) < 0x41
	.space 0x41 - (. - SootopolisCity_Text_WhereDidLegendariesGo)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1402 SootopolisCity_Text_TwoPokemonArentAngry
	.globl SootopolisCity_Text_TwoPokemonArentAngry
SootopolisCity_Text_TwoPokemonArentAngry: @ 0x081E2D60
	.string "なんとなく かんじるよ…… あの2ひき\nおこってる わけじゃ ないみたい\pたぶん…… じぶんの ちからを\nコントロール できなく なってるんだ……{EOS}"
	.if (. - SootopolisCity_Text_TwoPokemonArentAngry) > 0x4a
	.error "SootopolisCity_Text_TwoPokemonArentAngry may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_TwoPokemonArentAngry) < 0x4a
	.space 0x4a - (. - SootopolisCity_Text_TwoPokemonArentAngry)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1405 SootopolisCity_Text_FlyingMonStoppedRampage
	.globl SootopolisCity_Text_FlyingMonStoppedRampage
SootopolisCity_Text_FlyingMonStoppedRampage: @ 0x081E2DAA
	.string "そらから きた ポケモンが\nあばれていた 2ひきを\lおとなしく させちゃった……{EOS}"
	.if (. - SootopolisCity_Text_FlyingMonStoppedRampage) > 0x29
	.error "SootopolisCity_Text_FlyingMonStoppedRampage may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_FlyingMonStoppedRampage) < 0x29
	.space 0x29 - (. - SootopolisCity_Text_FlyingMonStoppedRampage)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1408 SootopolisCity_Text_WonderWhatWorldIsLike
	.globl SootopolisCity_Text_WonderWhatWorldIsLike
SootopolisCity_Text_WonderWhatWorldIsLike: @ 0x081E2DD3
	.string "ぼく…… まだ いちども このまちから\nそとに でたこと ないんだ\pあの まあるい そらの むこうには\nどんな せかいが あるのかな?{EOS}"
	.if (. - SootopolisCity_Text_WonderWhatWorldIsLike) > 0x44
	.error "SootopolisCity_Text_WonderWhatWorldIsLike may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_WonderWhatWorldIsLike) < 0x44
	.space 0x44 - (. - SootopolisCity_Text_WonderWhatWorldIsLike)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1411 SootopolisCity_Text_ThisIsWicked
	.globl SootopolisCity_Text_ThisIsWicked
SootopolisCity_Text_ThisIsWicked: @ 0x081E2E17
	.string "すげー だいはくりょく!{EOS}"
	.if (. - SootopolisCity_Text_ThisIsWicked) > 0xd
	.error "SootopolisCity_Text_ThisIsWicked may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_ThisIsWicked) < 0xd
	.space 0xd - (. - SootopolisCity_Text_ThisIsWicked)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1414 SootopolisCity_Text_ThatWasWicked
	.globl SootopolisCity_Text_ThatWasWicked
SootopolisCity_Text_ThatWasWicked: @ 0x081E2E24
	.string "すげー だいはくりょく だった!{EOS}"
	.if (. - SootopolisCity_Text_ThatWasWicked) > 0x11
	.error "SootopolisCity_Text_ThatWasWicked may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_ThatWasWicked) < 0x11
	.space 0x11 - (. - SootopolisCity_Text_ThatWasWicked)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1417 SootopolisCity_Text_GoRedAndBlueMon
	.globl SootopolisCity_Text_GoRedAndBlueMon
SootopolisCity_Text_GoRedAndBlueMon: @ 0x081E2E35
	.string "それいけ! あかい ポケモン!\nまけるな! あおい ポケモン!{EOS}"
	.if (. - SootopolisCity_Text_GoRedAndBlueMon) > 0x20
	.error "SootopolisCity_Text_GoRedAndBlueMon may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_GoRedAndBlueMon) < 0x20
	.space 0x20 - (. - SootopolisCity_Text_GoRedAndBlueMon)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1420 SootopolisCity_Text_DoYouKnowMonNames
	.globl SootopolisCity_Text_DoYouKnowMonNames
SootopolisCity_Text_DoYouKnowMonNames: @ 0x081E2E55
	.string "…… …… ……\pきみ あそこで たたかってる\nポケモンたちの なまえ しってる?{EOS}"
	.if (. - SootopolisCity_Text_DoYouKnowMonNames) > 0x2a
	.error "SootopolisCity_Text_DoYouKnowMonNames may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_DoYouKnowMonNames) < 0x2a
	.space 0x2a - (. - SootopolisCity_Text_DoYouKnowMonNames)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1423 SootopolisCity_Text_GreenOneSettlesThings
	.globl SootopolisCity_Text_GreenOneSettlesThings
SootopolisCity_Text_GreenOneSettlesThings: @ 0x081E2E7F
	.string "あかい ポケモンと あおい ポケモン\nどっちが かつのかと おもったら\lみどりの ポケモンかよ!\pこりゃ だいドンデンがえしだ!{EOS}"
	.if (. - SootopolisCity_Text_GreenOneSettlesThings) > 0x41
	.error "SootopolisCity_Text_GreenOneSettlesThings may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_GreenOneSettlesThings) < 0x41
	.space 0x41 - (. - SootopolisCity_Text_GreenOneSettlesThings)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1426 SootopolisCity_Text_SeeingLegendWithOwnEyes
	.globl SootopolisCity_Text_SeeingLegendWithOwnEyes
SootopolisCity_Text_SeeingLegendWithOwnEyes: @ 0x081E2EC0
	.string "ポケモンの たたかいに よって\nりくちと うみが つくられた という\lおおむかし からの いいつたえが\pいま めのまえで さいげん されている!\pうぉぉー! こんな すごいものを\nこの めで みられる なんてー!!{EOS}"
	.if (. - SootopolisCity_Text_SeeingLegendWithOwnEyes) > 0x6c
	.error "SootopolisCity_Text_SeeingLegendWithOwnEyes may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_SeeingLegendWithOwnEyes) < 0x6c
	.space 0x6c - (. - SootopolisCity_Text_SeeingLegendWithOwnEyes)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1429 SootopolisCity_Text_SawLegendWithOwnEyes
	.globl SootopolisCity_Text_SawLegendWithOwnEyes
SootopolisCity_Text_SawLegendWithOwnEyes: @ 0x081E2F2C
	.string "ポケモンの たたかいに よって\nりくちと うみが つくられた という\lおおむかし からの いいつたえが\pいま このまちで さいげん された!\pうぉぉー! こんな すごいものを\nこの めで みられた なんてー!!{EOS}"
	.if (. - SootopolisCity_Text_SawLegendWithOwnEyes) > 0x6a
	.error "SootopolisCity_Text_SawLegendWithOwnEyes may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_SawLegendWithOwnEyes) < 0x6a
	.space 0x6a - (. - SootopolisCity_Text_SawLegendWithOwnEyes)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1432 SootopolisCity_Text_BigPokemonFighting
	.globl SootopolisCity_Text_BigPokemonFighting
SootopolisCity_Text_BigPokemonFighting: @ 0x081E2F96
	.string "おっきな ポケモンと ポケモンが\nけんか してるよ!\pだれか とめて あげて!{EOS}"
	.if (. - SootopolisCity_Text_BigPokemonFighting) > 0x28
	.error "SootopolisCity_Text_BigPokemonFighting may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_BigPokemonFighting) < 0x28
	.space 0x28 - (. - SootopolisCity_Text_BigPokemonFighting)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1435 SootopolisCity_Text_PrettyMonCameFromSky
	.globl SootopolisCity_Text_PrettyMonCameFromSky
SootopolisCity_Text_PrettyMonCameFromSky: @ 0x081E2FBE
	.string "きれいな ポケモン\nおそらから おりて きた……{EOS}"
	.if (. - SootopolisCity_Text_PrettyMonCameFromSky) > 0x19
	.error "SootopolisCity_Text_PrettyMonCameFromSky may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_PrettyMonCameFromSky) < 0x19
	.space 0x19 - (. - SootopolisCity_Text_PrettyMonCameFromSky)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1438 SootopolisCity_Text_SootopolisWillBeWrecked
	.globl SootopolisCity_Text_SootopolisWillBeWrecked
SootopolisCity_Text_SootopolisWillBeWrecked: @ 0x081E2FD7
	.string "ひー ルネシティが こわれちゃうよー!{EOS}"
	.if (. - SootopolisCity_Text_SootopolisWillBeWrecked) > 0x14
	.error "SootopolisCity_Text_SootopolisWillBeWrecked may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_SootopolisWillBeWrecked) < 0x14
	.space 0x14 - (. - SootopolisCity_Text_SootopolisWillBeWrecked)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1441 SootopolisCity_Text_SootopolisDidntGetWrecked
	.globl SootopolisCity_Text_SootopolisDidntGetWrecked
SootopolisCity_Text_SootopolisDidntGetWrecked: @ 0x081E2FEB
	.string "ルネシティ こわれないで すんだよー!{EOS}"
	.if (. - SootopolisCity_Text_SootopolisDidntGetWrecked) > 0x14
	.error "SootopolisCity_Text_SootopolisDidntGetWrecked may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_SootopolisDidntGetWrecked) < 0x14
	.space 0x14 - (. - SootopolisCity_Text_SootopolisDidntGetWrecked)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1444 SootopolisCity_Text_NoOrdinaryTourist
	.globl SootopolisCity_Text_NoOrdinaryTourist
SootopolisCity_Text_NoOrdinaryTourist: @ 0x081E2FFF
	.string "ほう!\nわざわざ ルネに やってくるとは\lただの かんこうきゃく じゃ ないな!\pだからといって おかねを はらった\nかんこうきゃく でも ないな……{EOS}"
	.if (. - SootopolisCity_Text_NoOrdinaryTourist) > 0x4c
	.error "SootopolisCity_Text_NoOrdinaryTourist may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_NoOrdinaryTourist) < 0x4c
	.space 0x4c - (. - SootopolisCity_Text_NoOrdinaryTourist)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1447 SootopolisCity_Text_CityRegainedCalm
	.globl SootopolisCity_Text_CityRegainedCalm
SootopolisCity_Text_CityRegainedCalm: @ 0x081E304B
	.string "まちが また しずかに なった……{EOS}"
	.if (. - SootopolisCity_Text_CityRegainedCalm) > 0x12
	.error "SootopolisCity_Text_CityRegainedCalm may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_CityRegainedCalm) < 0x12
	.space 0x12 - (. - SootopolisCity_Text_CityRegainedCalm)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1450 SootopolisCity_Text_CaveOfOriginPleaseLeave
	.globl SootopolisCity_Text_CaveOfOriginPleaseLeave
SootopolisCity_Text_CaveOfOriginPleaseLeave: @ 0x081E305D
	.string "あなたは なんですかな?\pここは めざめのほこら……\pおくりびやまで しずめられた\nポケモンの たましいが\lよみがえると いわれる ばしょ……\pどうか おひきとり ください{EOS}"
	.if (. - SootopolisCity_Text_CaveOfOriginPleaseLeave) > 0x57
	.error "SootopolisCity_Text_CaveOfOriginPleaseLeave may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_CaveOfOriginPleaseLeave) < 0x57
	.space 0x57 - (. - SootopolisCity_Text_CaveOfOriginPleaseLeave)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1453 SootopolisCity_Text_LeadSuperiorTrainerToCave
	.globl SootopolisCity_Text_LeadSuperiorTrainerToCave
SootopolisCity_Text_LeadSuperiorTrainerToCave: @ 0x081E30B4
	.string "つよい いしと すぐれた さいのう\pそして たくさんの ポケモンを みてきた\nちしきと けいけん……\pそんな じんぶつが やってきたら\nこの ほこらへ あんない するよう\lミクリから もうしつけられて いたのです{EOS}"
	.if (. - SootopolisCity_Text_LeadSuperiorTrainerToCave) > 0x6b
	.error "SootopolisCity_Text_LeadSuperiorTrainerToCave may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_LeadSuperiorTrainerToCave) < 0x6b
	.space 0x6b - (. - SootopolisCity_Text_LeadSuperiorTrainerToCave)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1456 SootopolisCity_Text_AwakenedPokemonClash
	.globl SootopolisCity_Text_AwakenedPokemonClash
SootopolisCity_Text_AwakenedPokemonClash: @ 0x081E311F
	.string "おお……\pめざめた 2ひきの あらそいを\nもう 1ひきの めざめが しずめた……{EOS}"
	.if (. - SootopolisCity_Text_AwakenedPokemonClash) > 0x29
	.error "SootopolisCity_Text_AwakenedPokemonClash may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_AwakenedPokemonClash) < 0x29
	.space 0x29 - (. - SootopolisCity_Text_AwakenedPokemonClash)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1459 SootopolisCity_Text_CaveOfOriginSleepsToo
	.globl SootopolisCity_Text_CaveOfOriginSleepsToo
SootopolisCity_Text_CaveOfOriginSleepsToo: @ 0x081E3148
	.string "ここは めざめのほこら……\pけれど わざわいが きえさった いま\nほこらも しずかに ねむるのです……{EOS}"
	.if (. - SootopolisCity_Text_CaveOfOriginSleepsToo) > 0x34
	.error "SootopolisCity_Text_CaveOfOriginSleepsToo may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_CaveOfOriginSleepsToo) < 0x34
	.space 0x34 - (. - SootopolisCity_Text_CaveOfOriginSleepsToo)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1462 SootopolisCity_Text_SootopolisSkyBeautiful
	.globl SootopolisCity_Text_SootopolisSkyBeautiful
SootopolisCity_Text_SootopolisSkyBeautiful: @ 0x081E317C
	.string "ルネは かざんの\nかこうの なかに できた まち\pうえを みあげると\nかこうも いっしょに みえてしまって\lそらの すべては みえない\pでも だからこそ\nルネから みえる そらが\lいちばん うつくしいの{EOS}"
	.if (. - SootopolisCity_Text_SootopolisSkyBeautiful) > 0x66
	.error "SootopolisCity_Text_SootopolisSkyBeautiful may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_SootopolisSkyBeautiful) < 0x66
	.space 0x66 - (. - SootopolisCity_Text_SootopolisSkyBeautiful)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1465 SootopolisCity_Text_GiganticPokemonFight
	.globl SootopolisCity_Text_GiganticPokemonFight
SootopolisCity_Text_GiganticPokemonFight: @ 0x081E31E2
	.string "あんなに おおきな ポケモンが\n2ひきも あばれている なんて\lとても わたしたちの てに おえないわ!{EOS}"
	.if (. - SootopolisCity_Text_GiganticPokemonFight) > 0x35
	.error "SootopolisCity_Text_GiganticPokemonFight may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_GiganticPokemonFight) < 0x35
	.space 0x35 - (. - SootopolisCity_Text_GiganticPokemonFight)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1468 SootopolisCity_Text_FearedWorstWhenPokemonFlewDown
	.globl SootopolisCity_Text_FearedWorstWhenPokemonFlewDown
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown: @ 0x081E3217
	.string "3ひきめの おおきな ポケモンが\nそらから おりてきた ときには\lもう どうなることかと おもったわ……{EOS}"
	.if (. - SootopolisCity_Text_FearedWorstWhenPokemonFlewDown) > 0x35
	.error "SootopolisCity_Text_FearedWorstWhenPokemonFlewDown may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_FearedWorstWhenPokemonFlewDown) < 0x35
	.space 0x35 - (. - SootopolisCity_Text_FearedWorstWhenPokemonFlewDown)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1471 SootopolisCity_Text_NightSkyFavoriteScenery
	.globl SootopolisCity_Text_NightSkyFavoriteScenery
SootopolisCity_Text_NightSkyFavoriteScenery: @ 0x081E324C
	.string "かざんの かこう という\nわっかに かこまれた まるい よぞら\pその なかでは たくさんの ほしが\nいきている みたいに またたくの……\lわたしが いちばん すきな けしき{EOS}"
	.if (. - SootopolisCity_Text_NightSkyFavoriteScenery) > 0x57
	.error "SootopolisCity_Text_NightSkyFavoriteScenery may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_NightSkyFavoriteScenery) < 0x57
	.space 0x57 - (. - SootopolisCity_Text_NightSkyFavoriteScenery)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1474 SootopolisCity_Text_WeatherWentWild
	.globl SootopolisCity_Text_WeatherWentWild
SootopolisCity_Text_WeatherWentWild: @ 0x081E32A3
	.string "きょうの あさは いいてんき だったのよ\nそれが……\pとつぜん くもり はじめたと おもったら\nつよい あめが ふりだして\lかみなりも ゴロゴロ なりだして\lてんきが メチャメチャに なっちゃったの\pそれも これも ぜんぶ\nあの ポケモンの せい かしら……?{EOS}"
	.if (. - SootopolisCity_Text_WeatherWentWild) > 0x83
	.error "SootopolisCity_Text_WeatherWentWild may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_WeatherWentWild) < 0x83
	.space 0x83 - (. - SootopolisCity_Text_WeatherWentWild)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1477 SootopolisCity_Text_YouBroughtFlyingMon
	.globl SootopolisCity_Text_YouBroughtFlyingMon
SootopolisCity_Text_YouBroughtFlyingMon: @ 0x081E3326
	.string "えっ!\pあの そらから おりてきた ポケモンを\nつれてきたの って あなたなの!?\p……へえ やるじゃない!{EOS}"
	.if (. - SootopolisCity_Text_YouBroughtFlyingMon) > 0x37
	.error "SootopolisCity_Text_YouBroughtFlyingMon may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_YouBroughtFlyingMon) < 0x37
	.space 0x37 - (. - SootopolisCity_Text_YouBroughtFlyingMon)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1480 SootopolisCity_Text_GroudonPleaseStop
	.globl SootopolisCity_Text_GroudonPleaseStop
SootopolisCity_Text_GroudonPleaseStop: @ 0x081E335D
	.string "マツブサ『グ… グラードン……\nたのむから もう やめてくれ!\pおまえの ちからは もう わかった!\pこのままでは ルネ だけじゃない\nホウエンじゅうが\lめちゃめちゃに なってしまう!{EOS}"
	.if (. - SootopolisCity_Text_GroudonPleaseStop) > 0x5d
	.error "SootopolisCity_Text_GroudonPleaseStop may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_GroudonPleaseStop) < 0x5d
	.space 0x5d - (. - SootopolisCity_Text_GroudonPleaseStop)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1483 SootopolisCity_Text_AfterAllOurScheming
	.globl SootopolisCity_Text_AfterAllOurScheming
SootopolisCity_Text_AfterAllOurScheming: @ 0x081E33BA
	.string "マツブサ『ちょうこだい ポケモンは\nグラードンと カイオーガ だけじゃ\lなかったと いうのか……\pわれわれは ひっしに なって\nあれこれ うごきまわって きたが\lあの ポケモンの ひとはたらきで\lぜんぶ もとどおり というわけか……\pふ…… ふははは……{EOS}"
	.if (. - SootopolisCity_Text_AfterAllOurScheming) > 0x80
	.error "SootopolisCity_Text_AfterAllOurScheming may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_AfterAllOurScheming) < 0x80
	.space 0x80 - (. - SootopolisCity_Text_AfterAllOurScheming)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1486 SootopolisCity_Text_KyogreCalmDown
	.globl SootopolisCity_Text_KyogreCalmDown
SootopolisCity_Text_KyogreCalmDown: @ 0x081E343A
	.string "アオギリ『カイオーガ! どうした!?\nこれを みろ! べにいろのたま だぞ!\lおとなしくなるんだ! カイオーガ!\p…… …… ……\n…… …… ……\pだめだ! ぜんぜん きかない!{EOS}"
	.if (. - SootopolisCity_Text_KyogreCalmDown) > 0x5b
	.error "SootopolisCity_Text_KyogreCalmDown may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_KyogreCalmDown) < 0x5b
	.space 0x5b - (. - SootopolisCity_Text_KyogreCalmDown)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1489 SootopolisCity_Text_TryingMeaninglessToPokemon
	.globl SootopolisCity_Text_TryingMeaninglessToPokemon
SootopolisCity_Text_TryingMeaninglessToPokemon: @ 0x081E3495
	.string "アオギリ『カイオーガと グラードンは\nどこかへ とびさって しまった\pそして ホウエンの てんきも\nまた もとどおりに なった……\pはは ははは……\pおれたちの やろうと したことは\nポケモンから みれば\lちっぽけなこと だったの かもな……{EOS}"
	.if (. - SootopolisCity_Text_TryingMeaninglessToPokemon) > 0x7a
	.error "SootopolisCity_Text_TryingMeaninglessToPokemon may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_TryingMeaninglessToPokemon) < 0x7a
	.space 0x7a - (. - SootopolisCity_Text_TryingMeaninglessToPokemon)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1492 SootopolisCity_Text_InvolvedWithCrisisComeWithMe
	.globl SootopolisCity_Text_InvolvedWithCrisisComeWithMe
SootopolisCity_Text_InvolvedWithCrisisComeWithMe: @ 0x081E350F
	.string "ダイゴ『あそこで たたかって いるのは\nグラードン……\lそして カイオーガ……\pながい ねむりから めざめた\n2ひきの ちょうこだい ポケモンは\pやりばのない エネルギーを\nおたがいに ぶつけあっている……\p……{PLAYER}{KUN}\pここまで きた ということは\nきみは このじけんに かかわる\lかくごが できている ということだね\pよし! それなら\nきみに あわせたい ひとが いるんだ\pちょっと ボクに ついておいで{EOS}"
	.if (. - SootopolisCity_Text_InvolvedWithCrisisComeWithMe) > 0xcd
	.error "SootopolisCity_Text_InvolvedWithCrisisComeWithMe may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_InvolvedWithCrisisComeWithMe) < 0xcd
	.space 0xcd - (. - SootopolisCity_Text_InvolvedWithCrisisComeWithMe)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1495 SootopolisCity_Text_DoesThisMakeYourFearPokemon
	.globl SootopolisCity_Text_DoesThisMakeYourFearPokemon
SootopolisCity_Text_DoesThisMakeYourFearPokemon: @ 0x081E35DC
	.string "ダイゴ『ねえ {PLAYER}{KUN}\nグラードンと カイオーガを みて\lポケモンは こわいものだと おもったかい?\pでも そんなことは ないんだよ\nポケモンって ほんとうは もっと……\p……いや きみなら そんなことは\nもう とっくに きがついて いるよね{EOS}"
	.if (. - SootopolisCity_Text_DoesThisMakeYourFearPokemon) > 0x7a
	.error "SootopolisCity_Text_DoesThisMakeYourFearPokemon may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_DoesThisMakeYourFearPokemon) < 0x7a
	.space 0x7a - (. - SootopolisCity_Text_DoesThisMakeYourFearPokemon)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1498 SootopolisCity_Text_HereWereAreHelpWallace
	.globl SootopolisCity_Text_HereWereAreHelpWallace
SootopolisCity_Text_HereWereAreHelpWallace: @ 0x081E3656
	.string "ダイゴ『さあ ついた!\pこのおくに ミクリさん という\nひとが いるんだ\pきみなら かれの ちからに\nなって あげられると おもうよ……{EOS}"
	.if (. - SootopolisCity_Text_HereWereAreHelpWallace) > 0x45
	.error "SootopolisCity_Text_HereWereAreHelpWallace may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_HereWereAreHelpWallace) < 0x45
	.space 0x45 - (. - SootopolisCity_Text_HereWereAreHelpWallace)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1501 SootopolisCity_Text_KnowWhatsNeededToHelpHim
	.globl SootopolisCity_Text_KnowWhatsNeededToHelpHim
SootopolisCity_Text_KnowWhatsNeededToHelpHim: @ 0x081E369B
	.string "ダイゴ『きみなら かれの ちからに\nなって あげられると おもうよ……{EOS}"
	.if (. - SootopolisCity_Text_KnowWhatsNeededToHelpHim) > 0x24
	.error "SootopolisCity_Text_KnowWhatsNeededToHelpHim may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_KnowWhatsNeededToHelpHim) < 0x24
	.space 0x24 - (. - SootopolisCity_Text_KnowWhatsNeededToHelpHim)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1504 SootopolisCity_Text_NeverBeenToSkyPillar
	.globl SootopolisCity_Text_NeverBeenToSkyPillar
SootopolisCity_Text_NeverBeenToSkyPillar: @ 0x081E36BF
	.string "ダイゴ『そらのはしら……\nボクも まだ いったことが ないけど\lいったい どこに あるんだろうね{EOS}"
	.if (. - SootopolisCity_Text_NeverBeenToSkyPillar) > 0x31
	.error "SootopolisCity_Text_NeverBeenToSkyPillar may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_NeverBeenToSkyPillar) < 0x31
	.space 0x31 - (. - SootopolisCity_Text_NeverBeenToSkyPillar)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1507 SootopolisCity_Text_SoThatsRayquaza
	.globl SootopolisCity_Text_SoThatsRayquaza
SootopolisCity_Text_SoThatsRayquaza: @ 0x081E36F0
	.string "ダイゴ『あれが レックウザか……\pあばれていた 2ひきが おそれをなして\nさっていく なんて すごいや……{EOS}"
	.if (. - SootopolisCity_Text_SoThatsRayquaza) > 0x36
	.error "SootopolisCity_Text_SoThatsRayquaza may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_SoThatsRayquaza) < 0x36
	.space 0x36 - (. - SootopolisCity_Text_SoThatsRayquaza)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1510 SootopolisCity_Text_MaxieArchieLeft
	.globl SootopolisCity_Text_MaxieArchieLeft
SootopolisCity_Text_MaxieArchieLeft: @ 0x081E3726
	.string "ダイゴ『マツブサと アオギリの ふたりは\nどこかへ いって しまった ようだね\pもしかすると おくりびやまに\nたまを かえしに いったのかも……{EOS}"
	.if (. - SootopolisCity_Text_MaxieArchieLeft) > 0x49
	.error "SootopolisCity_Text_MaxieArchieLeft may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_MaxieArchieLeft) < 0x49
	.space 0x49 - (. - SootopolisCity_Text_MaxieArchieLeft)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1513 SootopolisCity_Text_HaventYouScaledSkyPillar
	.globl SootopolisCity_Text_HaventYouScaledSkyPillar
SootopolisCity_Text_HaventYouScaledSkyPillar: @ 0x081E376F
	.string "ミクリ『おや? {PLAYER}{KUN}\pあれから そらのはしらを のぼって\nいかなかったのかい?\pきみなら きっと いけるさ\nそらのはしらの おくじょうへ……{EOS}"
	.if (. - SootopolisCity_Text_HaventYouScaledSkyPillar) > 0x49
	.error "SootopolisCity_Text_HaventYouScaledSkyPillar may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_HaventYouScaledSkyPillar) < 0x49
	.space 0x49 - (. - SootopolisCity_Text_HaventYouScaledSkyPillar)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1516 SootopolisCity_Text_AquaMagmaDidntMeanHarm
	.globl SootopolisCity_Text_AquaMagmaDidntMeanHarm
SootopolisCity_Text_AquaMagmaDidntMeanHarm: @ 0x081E37B8
	.string "ミクリ『{PLAYER}{KUN}……\pマグマだんと アクアだんの ふたりも\nきっと わるぎは なかったの だろうね\pちょっと かれらの はなしを\nきいてやって みては どうかな……{EOS}"
	.if (. - SootopolisCity_Text_AquaMagmaDidntMeanHarm) > 0x53
	.error "SootopolisCity_Text_AquaMagmaDidntMeanHarm may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_AquaMagmaDidntMeanHarm) < 0x53
	.space 0x53 - (. - SootopolisCity_Text_AquaMagmaDidntMeanHarm)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1519 SootopolisCity_Text_ThankYouForHelpAcceptThis
	.globl SootopolisCity_Text_ThankYouForHelpAcceptThis
SootopolisCity_Text_ThankYouForHelpAcceptThis: @ 0x081E380B
	.string "ミクリ『{PLAYER}{KUN}……\nやはり わたしの めは ただしかった\pきみが ちからを かしてくれた おかげで\nルネシティは……\lいや ホウエンは すくわれたんだよ\pまちの みんなを だいひょうして\nおれいを いわせて もらうよ\l……ありがとう\pこれは わたしからの プレゼントだ\nうけとって くれたまえ!{EOS}"
	.if (. - SootopolisCity_Text_ThankYouForHelpAcceptThis) > 0x95
	.error "SootopolisCity_Text_ThankYouForHelpAcceptThis may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_ThankYouForHelpAcceptThis) < 0x95
	.space 0x95 - (. - SootopolisCity_Text_ThankYouForHelpAcceptThis)
	.endif

	@ data/maps/SootopolisCity/scripts.inc:1522 SootopolisCity_Text_ExplainWaterfallGoToGym
	.globl SootopolisCity_Text_ExplainWaterfallGoToGym
SootopolisCity_Text_ExplainWaterfallGoToGym: @ 0x081E38A0
	.string "その ひでんマシンは たきのぼり!\pレインバッジを もっていれば\nそのわざを おぼえさせた ポケモンが\lたきを のぼれるように なるのさ!\pそして…… レインバッジは\nどこで もらえるのか というと……\pもう おわかりだね\nそう! ルネの ジムリーダーに かつこと\pさあ じゅんびが できたら\nなかに はいって くれたまえ!{EOS}"
	.if (. - SootopolisCity_Text_ExplainWaterfallGoToGym) > 0xa3
	.error "SootopolisCity_Text_ExplainWaterfallGoToGym may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_ExplainWaterfallGoToGym) < 0xa3
	.space 0xa3 - (. - SootopolisCity_Text_ExplainWaterfallGoToGym)
	.endif
