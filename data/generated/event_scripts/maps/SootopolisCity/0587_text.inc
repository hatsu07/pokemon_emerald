	@ data/maps/SootopolisCity/scripts.inc:1381 SootopolisCity_Text_GymSign
	.globl gText_Rom_1E2C09
gText_Rom_1E2C09: @ 0x081E2C09
	.string "ルネ シティ ポケモンジム\nリーダー アダン\lみずも したたる ジムリーダー!{EOS}"
	.if (. - gText_Rom_1E2C09) > 0x28
	.error "gText_Rom_1E2C09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2C09) < 0x28
	.space 0x28 - (. - gText_Rom_1E2C09)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1384 SootopolisCity_Text_CitySign
	.globl gText_Rom_1E2C31
gText_Rom_1E2C31: @ 0x081E2C31
	.string "ここは ルネ シティ\nれきしが ねむる しんぴの まち{EOS}"
	.if (. - gText_Rom_1E2C31) > 0x1c
	.error "gText_Rom_1E2C31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2C31) < 0x1c
	.space 0x1c - (. - gText_Rom_1E2C31)
	.endif
	@ data/maps/SkyPillar_Outside/scripts.inc:139 SkyPillar_Outside_Text_DoorIsClosed (+1 aliases)
	.globl gText_Rom_1E2C4D
gText_Rom_1E2C4D: @ 0x081E2C4D
	.string "とびらは とざされて いる!{EOS}"
	.if (. - gText_Rom_1E2C4D) > 0xf
	.error "gText_Rom_1E2C4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2C4D) < 0xf
	.space 0xf - (. - gText_Rom_1E2C4D)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1390 SootopolisCity_Text_PhysicallyFitLivingHere
	.globl gText_Rom_1E2C5C
gText_Rom_1E2C5C: @ 0x081E2C5C
	.string "うみに もぐったり\nかいだんを のぼったり おりたり……\pこのまちで くらして いると\nけっこう たくましく なるんだよね{EOS}"
	.if (. - gText_Rom_1E2C5C) > 0x3e
	.error "gText_Rom_1E2C5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2C5C) < 0x3e
	.space 0x3e - (. - gText_Rom_1E2C5C)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1393 SootopolisCity_Text_GiantPokemonSuddenlyAppeared
	.globl gText_Rom_1E2C9A
gText_Rom_1E2C9A: @ 0x081E2C9A
	.string "おっきな ポケモンが とつぜん\nまちの まんなかに あらわれたんだ!\lしかも みたことない やつが 2ひきも!\pあの 2ひき……\nどうして ぶつかり あってるの?\lポケモンどうし なかよく できないの?{EOS}"
	.if (. - gText_Rom_1E2C9A) > 0x66
	.error "gText_Rom_1E2C9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2C9A) < 0x66
	.space 0x66 - (. - gText_Rom_1E2C9A)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1396 SootopolisCity_Text_WhatIsThatGreenPokemon
	.globl gText_Rom_1E2D00
gText_Rom_1E2D00: @ 0x081E2D00
	.string "なに? なに? なに?\nあの みどりの ポケモン なにー!?{EOS}"
	.if (. - gText_Rom_1E2D00) > 0x1f
	.error "gText_Rom_1E2D00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2D00) < 0x1f
	.space 0x1f - (. - gText_Rom_1E2D00)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1399 SootopolisCity_Text_WhereDidLegendariesGo
	.globl gText_Rom_1E2D1F
gText_Rom_1E2D1F: @ 0x081E2D1F
	.string "グラードンと カイオーガ\nどこ いっちゃったんだろう……\pまた どこかで ひでりに したり\nおおあめ ふらせたり してるのかな?{EOS}"
	.if (. - gText_Rom_1E2D1F) > 0x41
	.error "gText_Rom_1E2D1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2D1F) < 0x41
	.space 0x41 - (. - gText_Rom_1E2D1F)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1402 SootopolisCity_Text_TwoPokemonArentAngry
	.globl gText_Rom_1E2D60
gText_Rom_1E2D60: @ 0x081E2D60
	.string "なんとなく かんじるよ…… あの2ひき\nおこってる わけじゃ ないみたい\pたぶん…… じぶんの ちからを\nコントロール できなく なってるんだ……{EOS}"
	.if (. - gText_Rom_1E2D60) > 0x4a
	.error "gText_Rom_1E2D60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2D60) < 0x4a
	.space 0x4a - (. - gText_Rom_1E2D60)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1405 SootopolisCity_Text_FlyingMonStoppedRampage
	.globl gText_Rom_1E2DAA
gText_Rom_1E2DAA: @ 0x081E2DAA
	.string "そらから きた ポケモンが\nあばれていた 2ひきを\lおとなしく させちゃった……{EOS}"
	.if (. - gText_Rom_1E2DAA) > 0x29
	.error "gText_Rom_1E2DAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2DAA) < 0x29
	.space 0x29 - (. - gText_Rom_1E2DAA)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1408 SootopolisCity_Text_WonderWhatWorldIsLike
	.globl gText_Rom_1E2DD3
gText_Rom_1E2DD3: @ 0x081E2DD3
	.string "ぼく…… まだ いちども このまちから\nそとに でたこと ないんだ\pあの まあるい そらの むこうには\nどんな せかいが あるのかな?{EOS}"
	.if (. - gText_Rom_1E2DD3) > 0x44
	.error "gText_Rom_1E2DD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2DD3) < 0x44
	.space 0x44 - (. - gText_Rom_1E2DD3)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1411 SootopolisCity_Text_ThisIsWicked
	.globl gText_Rom_1E2E17
gText_Rom_1E2E17: @ 0x081E2E17
	.string "すげー だいはくりょく!{EOS}"
	.if (. - gText_Rom_1E2E17) > 0xd
	.error "gText_Rom_1E2E17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2E17) < 0xd
	.space 0xd - (. - gText_Rom_1E2E17)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1414 SootopolisCity_Text_ThatWasWicked
	.globl gText_Rom_1E2E24
gText_Rom_1E2E24: @ 0x081E2E24
	.string "すげー だいはくりょく だった!{EOS}"
	.if (. - gText_Rom_1E2E24) > 0x11
	.error "gText_Rom_1E2E24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2E24) < 0x11
	.space 0x11 - (. - gText_Rom_1E2E24)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1417 SootopolisCity_Text_GoRedAndBlueMon
	.globl gText_Rom_1E2E35
gText_Rom_1E2E35: @ 0x081E2E35
	.string "それいけ! あかい ポケモン!\nまけるな! あおい ポケモン!{EOS}"
	.if (. - gText_Rom_1E2E35) > 0x20
	.error "gText_Rom_1E2E35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2E35) < 0x20
	.space 0x20 - (. - gText_Rom_1E2E35)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1420 SootopolisCity_Text_DoYouKnowMonNames
	.globl gText_Rom_1E2E55
gText_Rom_1E2E55: @ 0x081E2E55
	.string "…… …… ……\pきみ あそこで たたかってる\nポケモンたちの なまえ しってる?{EOS}"
	.if (. - gText_Rom_1E2E55) > 0x2a
	.error "gText_Rom_1E2E55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2E55) < 0x2a
	.space 0x2a - (. - gText_Rom_1E2E55)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1423 SootopolisCity_Text_GreenOneSettlesThings
	.globl gText_Rom_1E2E7F
gText_Rom_1E2E7F: @ 0x081E2E7F
	.string "あかい ポケモンと あおい ポケモン\nどっちが かつのかと おもったら\lみどりの ポケモンかよ!\pこりゃ だいドンデンがえしだ!{EOS}"
	.if (. - gText_Rom_1E2E7F) > 0x41
	.error "gText_Rom_1E2E7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2E7F) < 0x41
	.space 0x41 - (. - gText_Rom_1E2E7F)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1426 SootopolisCity_Text_SeeingLegendWithOwnEyes
	.globl gText_Rom_1E2EC0
gText_Rom_1E2EC0: @ 0x081E2EC0
	.string "ポケモンの たたかいに よって\nりくちと うみが つくられた という\lおおむかし からの いいつたえが\pいま めのまえで さいげん されている!\pうぉぉー! こんな すごいものを\nこの めで みられる なんてー!!{EOS}"
	.if (. - gText_Rom_1E2EC0) > 0x6c
	.error "gText_Rom_1E2EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2EC0) < 0x6c
	.space 0x6c - (. - gText_Rom_1E2EC0)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1429 SootopolisCity_Text_SawLegendWithOwnEyes
	.globl gText_Rom_1E2F2C
gText_Rom_1E2F2C: @ 0x081E2F2C
	.string "ポケモンの たたかいに よって\nりくちと うみが つくられた という\lおおむかし からの いいつたえが\pいま このまちで さいげん された!\pうぉぉー! こんな すごいものを\nこの めで みられた なんてー!!{EOS}"
	.if (. - gText_Rom_1E2F2C) > 0x6a
	.error "gText_Rom_1E2F2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2F2C) < 0x6a
	.space 0x6a - (. - gText_Rom_1E2F2C)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1432 SootopolisCity_Text_BigPokemonFighting
	.globl gText_Rom_1E2F96
gText_Rom_1E2F96: @ 0x081E2F96
	.string "おっきな ポケモンと ポケモンが\nけんか してるよ!\pだれか とめて あげて!{EOS}"
	.if (. - gText_Rom_1E2F96) > 0x28
	.error "gText_Rom_1E2F96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2F96) < 0x28
	.space 0x28 - (. - gText_Rom_1E2F96)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1435 SootopolisCity_Text_PrettyMonCameFromSky
	.globl gText_Rom_1E2FBE
gText_Rom_1E2FBE: @ 0x081E2FBE
	.string "きれいな ポケモン\nおそらから おりて きた……{EOS}"
	.if (. - gText_Rom_1E2FBE) > 0x19
	.error "gText_Rom_1E2FBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2FBE) < 0x19
	.space 0x19 - (. - gText_Rom_1E2FBE)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1438 SootopolisCity_Text_SootopolisWillBeWrecked
	.globl gText_Rom_1E2FD7
gText_Rom_1E2FD7: @ 0x081E2FD7
	.string "ひー ルネシティが こわれちゃうよー!{EOS}"
	.if (. - gText_Rom_1E2FD7) > 0x14
	.error "gText_Rom_1E2FD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2FD7) < 0x14
	.space 0x14 - (. - gText_Rom_1E2FD7)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1441 SootopolisCity_Text_SootopolisDidntGetWrecked
	.globl gText_Rom_1E2FEB
gText_Rom_1E2FEB: @ 0x081E2FEB
	.string "ルネシティ こわれないで すんだよー!{EOS}"
	.if (. - gText_Rom_1E2FEB) > 0x14
	.error "gText_Rom_1E2FEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2FEB) < 0x14
	.space 0x14 - (. - gText_Rom_1E2FEB)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1444 SootopolisCity_Text_NoOrdinaryTourist
	.globl gText_Rom_1E2FFF
gText_Rom_1E2FFF: @ 0x081E2FFF
	.string "ほう!\nわざわざ ルネに やってくるとは\lただの かんこうきゃく じゃ ないな!\pだからといって おかねを はらった\nかんこうきゃく でも ないな……{EOS}"
	.if (. - gText_Rom_1E2FFF) > 0x4c
	.error "gText_Rom_1E2FFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2FFF) < 0x4c
	.space 0x4c - (. - gText_Rom_1E2FFF)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1447 SootopolisCity_Text_CityRegainedCalm
	.globl gText_Rom_1E304B
gText_Rom_1E304B: @ 0x081E304B
	.string "まちが また しずかに なった……{EOS}"
	.if (. - gText_Rom_1E304B) > 0x12
	.error "gText_Rom_1E304B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E304B) < 0x12
	.space 0x12 - (. - gText_Rom_1E304B)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1450 SootopolisCity_Text_CaveOfOriginPleaseLeave
	.globl gText_Rom_1E305D
gText_Rom_1E305D: @ 0x081E305D
	.string "あなたは なんですかな?\pここは めざめのほこら……\pおくりびやまで しずめられた\nポケモンの たましいが\lよみがえると いわれる ばしょ……\pどうか おひきとり ください{EOS}"
	.if (. - gText_Rom_1E305D) > 0x57
	.error "gText_Rom_1E305D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E305D) < 0x57
	.space 0x57 - (. - gText_Rom_1E305D)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1453 SootopolisCity_Text_LeadSuperiorTrainerToCave
	.globl gText_Rom_1E30B4
gText_Rom_1E30B4: @ 0x081E30B4
	.string "つよい いしと すぐれた さいのう\pそして たくさんの ポケモンを みてきた\nちしきと けいけん……\pそんな じんぶつが やってきたら\nこの ほこらへ あんない するよう\lミクリから もうしつけられて いたのです{EOS}"
	.if (. - gText_Rom_1E30B4) > 0x6b
	.error "gText_Rom_1E30B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E30B4) < 0x6b
	.space 0x6b - (. - gText_Rom_1E30B4)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1456 SootopolisCity_Text_AwakenedPokemonClash
	.globl gText_Rom_1E311F
gText_Rom_1E311F: @ 0x081E311F
	.string "おお……\pめざめた 2ひきの あらそいを\nもう 1ひきの めざめが しずめた……{EOS}"
	.if (. - gText_Rom_1E311F) > 0x29
	.error "gText_Rom_1E311F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E311F) < 0x29
	.space 0x29 - (. - gText_Rom_1E311F)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1459 SootopolisCity_Text_CaveOfOriginSleepsToo
	.globl gText_Rom_1E3148
gText_Rom_1E3148: @ 0x081E3148
	.string "ここは めざめのほこら……\pけれど わざわいが きえさった いま\nほこらも しずかに ねむるのです……{EOS}"
	.if (. - gText_Rom_1E3148) > 0x34
	.error "gText_Rom_1E3148 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3148) < 0x34
	.space 0x34 - (. - gText_Rom_1E3148)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1462 SootopolisCity_Text_SootopolisSkyBeautiful
	.globl gText_Rom_1E317C
gText_Rom_1E317C: @ 0x081E317C
	.string "ルネは かざんの\nかこうの なかに できた まち\pうえを みあげると\nかこうも いっしょに みえてしまって\lそらの すべては みえない\pでも だからこそ\nルネから みえる そらが\lいちばん うつくしいの{EOS}"
	.if (. - gText_Rom_1E317C) > 0x66
	.error "gText_Rom_1E317C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E317C) < 0x66
	.space 0x66 - (. - gText_Rom_1E317C)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1465 SootopolisCity_Text_GiganticPokemonFight
	.globl gText_Rom_1E31E2
gText_Rom_1E31E2: @ 0x081E31E2
	.string "あんなに おおきな ポケモンが\n2ひきも あばれている なんて\lとても わたしたちの てに おえないわ!{EOS}"
	.if (. - gText_Rom_1E31E2) > 0x35
	.error "gText_Rom_1E31E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E31E2) < 0x35
	.space 0x35 - (. - gText_Rom_1E31E2)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1468 SootopolisCity_Text_FearedWorstWhenPokemonFlewDown
	.globl gText_Rom_1E3217
gText_Rom_1E3217: @ 0x081E3217
	.string "3ひきめの おおきな ポケモンが\nそらから おりてきた ときには\lもう どうなることかと おもったわ……{EOS}"
	.if (. - gText_Rom_1E3217) > 0x35
	.error "gText_Rom_1E3217 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3217) < 0x35
	.space 0x35 - (. - gText_Rom_1E3217)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1471 SootopolisCity_Text_NightSkyFavoriteScenery
	.globl gText_Rom_1E324C
gText_Rom_1E324C: @ 0x081E324C
	.string "かざんの かこう という\nわっかに かこまれた まるい よぞら\pその なかでは たくさんの ほしが\nいきている みたいに またたくの……\lわたしが いちばん すきな けしき{EOS}"
	.if (. - gText_Rom_1E324C) > 0x57
	.error "gText_Rom_1E324C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E324C) < 0x57
	.space 0x57 - (. - gText_Rom_1E324C)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1474 SootopolisCity_Text_WeatherWentWild
	.globl gText_Rom_1E32A3
gText_Rom_1E32A3: @ 0x081E32A3
	.string "きょうの あさは いいてんき だったのよ\nそれが……\pとつぜん くもり はじめたと おもったら\nつよい あめが ふりだして\lかみなりも ゴロゴロ なりだして\lてんきが メチャメチャに なっちゃったの\pそれも これも ぜんぶ\nあの ポケモンの せい かしら……?{EOS}"
	.if (. - gText_Rom_1E32A3) > 0x83
	.error "gText_Rom_1E32A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E32A3) < 0x83
	.space 0x83 - (. - gText_Rom_1E32A3)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1477 SootopolisCity_Text_YouBroughtFlyingMon
	.globl gText_Rom_1E3326
gText_Rom_1E3326: @ 0x081E3326
	.string "えっ!\pあの そらから おりてきた ポケモンを\nつれてきたの って あなたなの!?\p……へえ やるじゃない!{EOS}"
	.if (. - gText_Rom_1E3326) > 0x37
	.error "gText_Rom_1E3326 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3326) < 0x37
	.space 0x37 - (. - gText_Rom_1E3326)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1480 SootopolisCity_Text_GroudonPleaseStop
	.globl gText_Rom_1E335D
gText_Rom_1E335D: @ 0x081E335D
	.string "マツブサ『グ… グラードン……\nたのむから もう やめてくれ!\pおまえの ちからは もう わかった!\pこのままでは ルネ だけじゃない\nホウエンじゅうが\lめちゃめちゃに なってしまう!{EOS}"
	.if (. - gText_Rom_1E335D) > 0x5d
	.error "gText_Rom_1E335D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E335D) < 0x5d
	.space 0x5d - (. - gText_Rom_1E335D)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1483 SootopolisCity_Text_AfterAllOurScheming
	.globl gText_Rom_1E33BA
gText_Rom_1E33BA: @ 0x081E33BA
	.string "マツブサ『ちょうこだい ポケモンは\nグラードンと カイオーガ だけじゃ\lなかったと いうのか……\pわれわれは ひっしに なって\nあれこれ うごきまわって きたが\lあの ポケモンの ひとはたらきで\lぜんぶ もとどおり というわけか……\pふ…… ふははは……{EOS}"
	.if (. - gText_Rom_1E33BA) > 0x80
	.error "gText_Rom_1E33BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E33BA) < 0x80
	.space 0x80 - (. - gText_Rom_1E33BA)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1486 SootopolisCity_Text_KyogreCalmDown
	.globl gText_Rom_1E343A
gText_Rom_1E343A: @ 0x081E343A
	.string "アオギリ『カイオーガ! どうした!?\nこれを みろ! べにいろのたま だぞ!\lおとなしくなるんだ! カイオーガ!\p…… …… ……\n…… …… ……\pだめだ! ぜんぜん きかない!{EOS}"
	.if (. - gText_Rom_1E343A) > 0x5b
	.error "gText_Rom_1E343A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E343A) < 0x5b
	.space 0x5b - (. - gText_Rom_1E343A)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1489 SootopolisCity_Text_TryingMeaninglessToPokemon
	.globl gText_Rom_1E3495
gText_Rom_1E3495: @ 0x081E3495
	.string "アオギリ『カイオーガと グラードンは\nどこかへ とびさって しまった\pそして ホウエンの てんきも\nまた もとどおりに なった……\pはは ははは……\pおれたちの やろうと したことは\nポケモンから みれば\lちっぽけなこと だったの かもな……{EOS}"
	.if (. - gText_Rom_1E3495) > 0x7a
	.error "gText_Rom_1E3495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3495) < 0x7a
	.space 0x7a - (. - gText_Rom_1E3495)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1492 SootopolisCity_Text_InvolvedWithCrisisComeWithMe
	.globl gText_Rom_1E350F
gText_Rom_1E350F: @ 0x081E350F
	.string "ダイゴ『あそこで たたかって いるのは\nグラードン……\lそして カイオーガ……\pながい ねむりから めざめた\n2ひきの ちょうこだい ポケモンは\pやりばのない エネルギーを\nおたがいに ぶつけあっている……\p……{PLAYER}{KUN}\pここまで きた ということは\nきみは このじけんに かかわる\lかくごが できている ということだね\pよし! それなら\nきみに あわせたい ひとが いるんだ\pちょっと ボクに ついておいで{EOS}"
	.if (. - gText_Rom_1E350F) > 0xcd
	.error "gText_Rom_1E350F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E350F) < 0xcd
	.space 0xcd - (. - gText_Rom_1E350F)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1495 SootopolisCity_Text_DoesThisMakeYourFearPokemon
	.globl gText_Rom_1E35DC
gText_Rom_1E35DC: @ 0x081E35DC
	.string "ダイゴ『ねえ {PLAYER}{KUN}\nグラードンと カイオーガを みて\lポケモンは こわいものだと おもったかい?\pでも そんなことは ないんだよ\nポケモンって ほんとうは もっと……\p……いや きみなら そんなことは\nもう とっくに きがついて いるよね{EOS}"
	.if (. - gText_Rom_1E35DC) > 0x7a
	.error "gText_Rom_1E35DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E35DC) < 0x7a
	.space 0x7a - (. - gText_Rom_1E35DC)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1498 SootopolisCity_Text_HereWereAreHelpWallace
	.globl gText_Rom_1E3656
gText_Rom_1E3656: @ 0x081E3656
	.string "ダイゴ『さあ ついた!\pこのおくに ミクリさん という\nひとが いるんだ\pきみなら かれの ちからに\nなって あげられると おもうよ……{EOS}"
	.if (. - gText_Rom_1E3656) > 0x45
	.error "gText_Rom_1E3656 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3656) < 0x45
	.space 0x45 - (. - gText_Rom_1E3656)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1501 SootopolisCity_Text_KnowWhatsNeededToHelpHim
	.globl gText_Rom_1E369B
gText_Rom_1E369B: @ 0x081E369B
	.string "ダイゴ『きみなら かれの ちからに\nなって あげられると おもうよ……{EOS}"
	.if (. - gText_Rom_1E369B) > 0x24
	.error "gText_Rom_1E369B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E369B) < 0x24
	.space 0x24 - (. - gText_Rom_1E369B)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1504 SootopolisCity_Text_NeverBeenToSkyPillar
	.globl gText_Rom_1E36BF
gText_Rom_1E36BF: @ 0x081E36BF
	.string "ダイゴ『そらのはしら……\nボクも まだ いったことが ないけど\lいったい どこに あるんだろうね{EOS}"
	.if (. - gText_Rom_1E36BF) > 0x31
	.error "gText_Rom_1E36BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E36BF) < 0x31
	.space 0x31 - (. - gText_Rom_1E36BF)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1507 SootopolisCity_Text_SoThatsRayquaza
	.globl gText_Rom_1E36F0
gText_Rom_1E36F0: @ 0x081E36F0
	.string "ダイゴ『あれが レックウザか……\pあばれていた 2ひきが おそれをなして\nさっていく なんて すごいや……{EOS}"
	.if (. - gText_Rom_1E36F0) > 0x36
	.error "gText_Rom_1E36F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E36F0) < 0x36
	.space 0x36 - (. - gText_Rom_1E36F0)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1510 SootopolisCity_Text_MaxieArchieLeft
	.globl gText_Rom_1E3726
gText_Rom_1E3726: @ 0x081E3726
	.string "ダイゴ『マツブサと アオギリの ふたりは\nどこかへ いって しまった ようだね\pもしかすると おくりびやまに\nたまを かえしに いったのかも……{EOS}"
	.if (. - gText_Rom_1E3726) > 0x49
	.error "gText_Rom_1E3726 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3726) < 0x49
	.space 0x49 - (. - gText_Rom_1E3726)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1513 SootopolisCity_Text_HaventYouScaledSkyPillar
	.globl gText_Rom_1E376F
gText_Rom_1E376F: @ 0x081E376F
	.string "ミクリ『おや? {PLAYER}{KUN}\pあれから そらのはしらを のぼって\nいかなかったのかい?\pきみなら きっと いけるさ\nそらのはしらの おくじょうへ……{EOS}"
	.if (. - gText_Rom_1E376F) > 0x49
	.error "gText_Rom_1E376F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E376F) < 0x49
	.space 0x49 - (. - gText_Rom_1E376F)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1516 SootopolisCity_Text_AquaMagmaDidntMeanHarm
	.globl gText_Rom_1E37B8
gText_Rom_1E37B8: @ 0x081E37B8
	.string "ミクリ『{PLAYER}{KUN}……\pマグマだんと アクアだんの ふたりも\nきっと わるぎは なかったの だろうね\pちょっと かれらの はなしを\nきいてやって みては どうかな……{EOS}"
	.if (. - gText_Rom_1E37B8) > 0x53
	.error "gText_Rom_1E37B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E37B8) < 0x53
	.space 0x53 - (. - gText_Rom_1E37B8)
	.endif
	@ data/maps/SootopolisCity/scripts.inc:1519 SootopolisCity_Text_ThankYouForHelpAcceptThis
	.globl gText_Rom_1E380B
gText_Rom_1E380B: @ 0x081E380B
	.string "ミクリ『{PLAYER}{KUN}……\nやはり わたしの めは ただしかった\pきみが ちからを かしてくれた おかげで\nルネシティは……\lいや ホウエンは すくわれたんだよ\pまちの みんなを だいひょうして\nおれいを いわせて もらうよ\l……ありがとう\pこれは わたしからの プレゼントだ\nうけとって くれたまえ!{EOS}"
	.if (. - gText_Rom_1E380B) > 0x95
	.error "gText_Rom_1E380B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E380B) < 0x95
	.space 0x95 - (. - gText_Rom_1E380B)
	.endif

	@ data/maps/SootopolisCity/scripts.inc:1522 SootopolisCity_Text_ExplainWaterfallGoToGym
	.globl gText_Rom_1E38A0
gText_Rom_1E38A0: @ 0x081E38A0
	.string "その ひでんマシンは たきのぼり!\pレインバッジを もっていれば\nそのわざを おぼえさせた ポケモンが\lたきを のぼれるように なるのさ!\pそして…… レインバッジは\nどこで もらえるのか というと……\pもう おわかりだね\nそう! ルネの ジムリーダーに かつこと\pさあ じゅんびが できたら\nなかに はいって くれたまえ!{EOS}"
	.if (. - gText_Rom_1E38A0) > 0xa3
	.error "gText_Rom_1E38A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E38A0) < 0xa3
	.space 0xa3 - (. - gText_Rom_1E38A0)
	.endif
