	@ data/maps/SlateportCity/scripts.inc:920 SlateportCity_Text_EnergyGuruSellWhatYouNeed
	.globl SlateportCity_Text_EnergyGuruSellWhatYouNeed
SlateportCity_Text_EnergyGuruSellWhatYouNeed: @ 0x081DC9BE
	.string "わし がんばりや!\nがんばって いろいろ うりますよ!{EOS}"
	.if (. - SlateportCity_Text_EnergyGuruSellWhatYouNeed) > 0x1c
	.error "SlateportCity_Text_EnergyGuruSellWhatYouNeed may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_EnergyGuruSellWhatYouNeed) < 0x1c
	.space 0x1c - (. - SlateportCity_Text_EnergyGuruSellWhatYouNeed)
	.endif
	@ data/maps/SlateportCity/scripts.inc:924 SlateportCity_Text_OhYourPokemon
	.globl SlateportCity_Text_OhYourPokemon
SlateportCity_Text_OhYourPokemon: @ 0x081DC9DA
	.string "あら?\nきみの {STR_VAR_1}……{EOS}"
	.if (. - SlateportCity_Text_OhYourPokemon) > 0xd
	.error "SlateportCity_Text_OhYourPokemon may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_OhYourPokemon) < 0xd
	.space 0xd - (. - SlateportCity_Text_OhYourPokemon)
	.endif
	@ data/maps/SlateportCity/scripts.inc:928 SlateportCity_Text_PleaseGiveItThisEffortRibbon
	.globl SlateportCity_Text_PleaseGiveItThisEffortRibbon
SlateportCity_Text_PleaseGiveItThisEffortRibbon: @ 0x081DC9E7
	.string "ものすごく がんばったのね!\pごほうびと して\nこの がんばリボンを つけてあげて!{EOS}"
	.if (. - SlateportCity_Text_PleaseGiveItThisEffortRibbon) > 0x2b
	.error "SlateportCity_Text_PleaseGiveItThisEffortRibbon may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_PleaseGiveItThisEffortRibbon) < 0x2b
	.space 0x2b - (. - SlateportCity_Text_PleaseGiveItThisEffortRibbon)
	.endif
	@ data/maps/SlateportCity/scripts.inc:933 SlateportCity_Text_ReceivedEffortRibbon
	.globl SlateportCity_Text_ReceivedEffortRibbon
SlateportCity_Text_ReceivedEffortRibbon: @ 0x081DCA12
	.string "{PLAYER}は がんばリボンを もらった!{EOS}"
	.if (. - SlateportCity_Text_ReceivedEffortRibbon) > 0x12
	.error "SlateportCity_Text_ReceivedEffortRibbon may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_ReceivedEffortRibbon) < 0x12
	.space 0x12 - (. - SlateportCity_Text_ReceivedEffortRibbon)
	.endif
	@ data/maps/SlateportCity/scripts.inc:936 SlateportCity_Text_PutEffortRibbonOnMon
	.globl SlateportCity_Text_PutEffortRibbonOnMon
SlateportCity_Text_PutEffortRibbonOnMon: @ 0x081DCA24
	.string "{PLAYER}は がんばリボンを\n{STR_VAR_1}に つけて あげた!{EOS}"
	.if (. - SlateportCity_Text_PutEffortRibbonOnMon) > 0x19
	.error "SlateportCity_Text_PutEffortRibbonOnMon may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_PutEffortRibbonOnMon) < 0x19
	.space 0x19 - (. - SlateportCity_Text_PutEffortRibbonOnMon)
	.endif
	@ data/maps/SlateportCity/scripts.inc:940 SlateportCity_Text_GoForItLittleHarder
	.globl SlateportCity_Text_GoForItLittleHarder
SlateportCity_Text_GoForItLittleHarder: @ 0x081DCA3D
	.string "もっと がんばってみて!\pがんばれば わたしが ポケモンに\nいいもの あげるから!{EOS}"
	.if (. - SlateportCity_Text_GoForItLittleHarder) > 0x2a
	.error "SlateportCity_Text_GoForItLittleHarder may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_GoForItLittleHarder) < 0x2a
	.space 0x2a - (. - SlateportCity_Text_GoForItLittleHarder)
	.endif
	@ data/maps/SlateportCity/scripts.inc:945 SlateportCity_Text_EffortRibbonLooksGoodOnIt
	.globl SlateportCity_Text_EffortRibbonLooksGoodOnIt
SlateportCity_Text_EffortRibbonLooksGoodOnIt: @ 0x081DCA67
	.string "あっ! きみの {STR_VAR_1}\nがんばリボン にあってるよ!{EOS}"
	.if (. - SlateportCity_Text_EffortRibbonLooksGoodOnIt) > 0x1a
	.error "SlateportCity_Text_EffortRibbonLooksGoodOnIt may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_EffortRibbonLooksGoodOnIt) < 0x1a
	.space 0x1a - (. - SlateportCity_Text_EffortRibbonLooksGoodOnIt)
	.endif
	@ data/maps/SlateportCity/scripts.inc:949 SlateportCity_Text_WonderIfLighthouseStartlesPokemon
	.globl SlateportCity_Text_WonderIfLighthouseStartlesPokemon
SlateportCity_Text_WonderIfLighthouseStartlesPokemon: @ 0x081DCA81
	.string "とうだいの あかりは\nすう10キロさき にも とどくんだ\pうみの なかの ポケモン\nまぶしくて おどろいて いないかな?{EOS}"
	.if (. - SlateportCity_Text_WonderIfLighthouseStartlesPokemon) > 0x3d
	.error "SlateportCity_Text_WonderIfLighthouseStartlesPokemon may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_WonderIfLighthouseStartlesPokemon) < 0x3d
	.space 0x3d - (. - SlateportCity_Text_WonderIfLighthouseStartlesPokemon)
	.endif
	@ data/maps/SlateportCity/scripts.inc:955 SlateportCity_Text_SeaweedFullOfLife
	.globl SlateportCity_Text_SeaweedFullOfLife
SlateportCity_Text_SeaweedFullOfLife: @ 0x081DCABE
	.string "ほれ みてみろ!\pこのあたりで とれる かいそうは\nしんせん ピチピチ!\pいまにも おそい かかって きそうだ!{EOS}"
	.if (. - SlateportCity_Text_SeaweedFullOfLife) > 0x39
	.error "SlateportCity_Text_SeaweedFullOfLife may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SeaweedFullOfLife) < 0x39
	.space 0x39 - (. - SlateportCity_Text_SeaweedFullOfLife)
	.endif
	@ data/maps/SlateportCity/scripts.inc:961 SlateportCity_Text_HowTownIsBornAndGrows
	.globl SlateportCity_Text_HowTownIsBornAndGrows
SlateportCity_Text_HowTownIsBornAndGrows: @ 0x081DCAF7
	.string "みずの きれいな ところに\nたくさんの みのりが あつまり\pひとびとが やってくる ところに\nいちばが できる……\pこうして まちは おおきくなるのさ{EOS}"
	.if (. - SlateportCity_Text_HowTownIsBornAndGrows) > 0x4c
	.error "SlateportCity_Text_HowTownIsBornAndGrows may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_HowTownIsBornAndGrows) < 0x4c
	.space 0x4c - (. - SlateportCity_Text_HowTownIsBornAndGrows)
	.endif
	@ data/maps/SlateportCity/scripts.inc:968 SlateportCity_Text_SlateportWonderfulPlace
	.globl SlateportCity_Text_SlateportWonderfulPlace
SlateportCity_Text_SlateportWonderfulPlace: @ 0x081DCB43
	.string "うみの かおりが する ばしょで\nかいものが できるなんて……\pカイナって すてきな ところ!{EOS}"
	.if (. - SlateportCity_Text_SlateportWonderfulPlace) > 0x30
	.error "SlateportCity_Text_SlateportWonderfulPlace may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SlateportWonderfulPlace) < 0x30
	.space 0x30 - (. - SlateportCity_Text_SlateportWonderfulPlace)
	.endif
	@ data/maps/SlateportCity/scripts.inc:973 SlateportCity_Text_BuyBricksSoDecorWontGetDirty
	.globl SlateportCity_Text_BuyBricksSoDecorWontGetDirty
SlateportCity_Text_BuyBricksSoDecorWontGetDirty: @ 0x081DCB73
	.string "ぬいぐるみや クッションって\nゆかに おくと よごれちゃうでしょ?\pだから きれいなまま かざれるように\nぬいぐるみや クッションを おくための\lレンガを かいに きたの!{EOS}"
	.if (. - SlateportCity_Text_BuyBricksSoDecorWontGetDirty) > 0x57
	.error "SlateportCity_Text_BuyBricksSoDecorWontGetDirty may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_BuyBricksSoDecorWontGetDirty) < 0x57
	.space 0x57 - (. - SlateportCity_Text_BuyBricksSoDecorWontGetDirty)
	.endif
	@ data/maps/SlateportCity/scripts.inc:980 SlateportCity_Text_GoingToCompeteInBattleTent
	.globl SlateportCity_Text_GoingToCompeteInBattleTent
SlateportCity_Text_GoingToCompeteInBattleTent: @ 0x081DCBCA
	.string "うぉー! バトルテントに\nぼくも しゅつじょう するぞおー!\pと そのまえに!\nポケモン つかまえて こなくちゃ!{EOS}"
	.if (. - SlateportCity_Text_GoingToCompeteInBattleTent) > 0x3a
	.error "SlateportCity_Text_GoingToCompeteInBattleTent may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_GoingToCompeteInBattleTent) < 0x3a
	.space 0x3a - (. - SlateportCity_Text_GoingToCompeteInBattleTent)
	.endif
	@ data/maps/SlateportCity/scripts.inc:986 SlateportCity_Text_BushedHikingFromMauville
	.globl SlateportCity_Text_BushedHikingFromMauville
SlateportCity_Text_BushedHikingFromMauville: @ 0x081DCC04
	.string "ふぅ ふぅ……\pおれは キンセツシティ から\nあるいて ここまで きたんだけど\lこの まちって ひろいなぁ……\pこんな ことなら じてんしゃに\nのって くれば よかったよ!{EOS}"
	.if (. - SlateportCity_Text_BushedHikingFromMauville) > 0x57
	.error "SlateportCity_Text_BushedHikingFromMauville may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_BushedHikingFromMauville) < 0x57
	.space 0x57 - (. - SlateportCity_Text_BushedHikingFromMauville)
	.endif
	@ data/maps/SlateportCity/scripts.inc:994 SlateportCity_Text_EveryoneCallsHimCaptStern
	.globl SlateportCity_Text_EveryoneCallsHimCaptStern
SlateportCity_Text_EveryoneCallsHimCaptStern: @ 0x081DCC5B
	.string "この はくぶつかんを つくったのは\nクスノキさん といって\pかいていを たんさくする せんすいていの\nかんちょう でも あるんだ!\pせんすいていの かんちょうで\nはくぶつかんの かんちょう……\pまあ どっちにせよ\nクスノキかんちょう と よんでおけば\lまちがい ないよな!{EOS}"
	.if (. - SlateportCity_Text_EveryoneCallsHimCaptStern) > 0x89
	.error "SlateportCity_Text_EveryoneCallsHimCaptStern may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_EveryoneCallsHimCaptStern) < 0x89
	.space 0x89 - (. - SlateportCity_Text_EveryoneCallsHimCaptStern)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1005 SlateportCity_Text_WhatsLongLineOverThere
	.globl SlateportCity_Text_WhatsLongLineOverThere
SlateportCity_Text_WhatsLongLineOverThere: @ 0x081DCCE4
	.string "なんなのかしら\nあの ぎょうれつ?{EOS}"
	.if (. - SlateportCity_Text_WhatsLongLineOverThere) > 0x12
	.error "SlateportCity_Text_WhatsLongLineOverThere may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_WhatsLongLineOverThere) < 0x12
	.space 0x12 - (. - SlateportCity_Text_WhatsLongLineOverThere)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1009 SlateportCity_Text_VisitedMuseumOften
	.globl SlateportCity_Text_VisitedMuseumOften
SlateportCity_Text_VisitedMuseumOften: @ 0x081DCCF6
	.string "この はくぶつかん には\nこどもの ころ わたしも よく きました\pかんないの てんじひんを みて\nうみの しんぴに あこがれた ものです{EOS}"
	.if (. - SlateportCity_Text_VisitedMuseumOften) > 0x46
	.error "SlateportCity_Text_VisitedMuseumOften may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_VisitedMuseumOften) < 0x46
	.space 0x46 - (. - SlateportCity_Text_VisitedMuseumOften)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1015 SlateportCity_Text_QuitPushing
	.globl SlateportCity_Text_QuitPushing
SlateportCity_Text_QuitPushing: @ 0x081DCD3C
	.string "ちょっと あんた! おさないでよ!\nじゅんばん なんだから!{EOS}"
	.if (. - SlateportCity_Text_QuitPushing) > 0x1f
	.error "SlateportCity_Text_QuitPushing may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_QuitPushing) < 0x1f
	.space 0x1f - (. - SlateportCity_Text_QuitPushing)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1019 SlateportCity_Text_AquaHasPolicy
	.globl SlateportCity_Text_AquaHasPolicy
SlateportCity_Text_AquaHasPolicy: @ 0x081DCD5B
	.string "おれたち アクアだんの ポリシーは\n「げんち しゅうごう」 そして\l「げんち かいさん」 なんだぜ!{EOS}"
	.if (. - SlateportCity_Text_AquaHasPolicy) > 0x33
	.error "SlateportCity_Text_AquaHasPolicy may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_AquaHasPolicy) < 0x33
	.space 0x33 - (. - SlateportCity_Text_AquaHasPolicy)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1024 SlateportCity_Text_BossIsBrilliant
	.globl SlateportCity_Text_BossIsBrilliant
SlateportCity_Text_BossIsBrilliant: @ 0x081DCD8E
	.string "リーダーほど あたまの いい ひとが\nいまさら はくぶつかんに\lなんの ようじが あるんだ……?{EOS}"
	.if (. - SlateportCity_Text_BossIsBrilliant) > 0x31
	.error "SlateportCity_Text_BossIsBrilliant may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_BossIsBrilliant) < 0x31
	.space 0x31 - (. - SlateportCity_Text_BossIsBrilliant)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1029 SlateportCity_Text_WhatsNewSchemeIWonder
	.globl SlateportCity_Text_WhatsNewSchemeIWonder
SlateportCity_Text_WhatsNewSchemeIWonder: @ 0x081DCDBF
	.string "こんどの さくせんは なんだろう?\pリーダーを おこらせると こわいから\nしっぱい したくないぜ……{EOS}"
	.if (. - SlateportCity_Text_WhatsNewSchemeIWonder) > 0x33
	.error "SlateportCity_Text_WhatsNewSchemeIWonder may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_WhatsNewSchemeIWonder) < 0x33
	.space 0x33 - (. - SlateportCity_Text_WhatsNewSchemeIWonder)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1034 SlateportCity_Text_ShouldTakeItAll
	.globl SlateportCity_Text_ShouldTakeItAll
SlateportCity_Text_ShouldTakeItAll: @ 0x081DCDF2
	.string "はくぶつかんに ほしいもの あるなら\nまるごと うばっちゃえば いいのに……{EOS}"
	.if (. - SlateportCity_Text_ShouldTakeItAll) > 0x27
	.error "SlateportCity_Text_ShouldTakeItAll may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_ShouldTakeItAll) < 0x27
	.space 0x27 - (. - SlateportCity_Text_ShouldTakeItAll)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1038 SlateportCity_Text_DontButtIn
	.globl SlateportCity_Text_DontButtIn
SlateportCity_Text_DontButtIn: @ 0x081DCE19
	.string "おい こら!\nじゅんばん ぬかすなよ!{EOS}"
	.if (. - SlateportCity_Text_DontButtIn) > 0x14
	.error "SlateportCity_Text_DontButtIn may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_DontButtIn) < 0x14
	.space 0x14 - (. - SlateportCity_Text_DontButtIn)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1042 SlateportCity_Text_RemindsMeOfLongLineForGames
	.globl SlateportCity_Text_RemindsMeOfLongLineForGames
SlateportCity_Text_RemindsMeOfLongLineForGames: @ 0x081DCE2D
	.string "ぎょうれつ というと\nだいにんきの ゲームを かったときを\lおもいだすなあ……{EOS}"
	.if (. - SlateportCity_Text_RemindsMeOfLongLineForGames) > 0x28
	.error "SlateportCity_Text_RemindsMeOfLongLineForGames may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_RemindsMeOfLongLineForGames) < 0x28
	.space 0x28 - (. - SlateportCity_Text_RemindsMeOfLongLineForGames)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1047 SlateportCity_Text_WhyAreWeLiningUp
	.globl SlateportCity_Text_WhyAreWeLiningUp
SlateportCity_Text_WhyAreWeLiningUp: @ 0x081DCE55
	.string "まじめに おかね はらわずに\nむりやり はいれば いいのによ!{EOS}"
	.if (. - SlateportCity_Text_WhyAreWeLiningUp) > 0x20
	.error "SlateportCity_Text_WhyAreWeLiningUp may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_WhyAreWeLiningUp) < 0x20
	.space 0x20 - (. - SlateportCity_Text_WhyAreWeLiningUp)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1051 SlateportCity_Text_WhatDoYouWant
	.globl SlateportCity_Text_WhatDoYouWant
SlateportCity_Text_WhatDoYouWant: @ 0x081DCE75
	.string "なんだ なんだ!?{EOS}"
	.if (. - SlateportCity_Text_WhatDoYouWant) > 0xa
	.error "SlateportCity_Text_WhatDoYouWant may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_WhatDoYouWant) < 0xa
	.space 0xa - (. - SlateportCity_Text_WhatDoYouWant)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1054 SlateportCity_Text_IllReadSignForYou
	.globl SlateportCity_Text_IllReadSignForYou
SlateportCity_Text_IllReadSignForYou: @ 0x081DCE7F
	.string "おまえ このカンバンが よみたいのか?\nなら オレが かわりに よんでやらぁ!{EOS}"
	.if (. - SlateportCity_Text_IllReadSignForYou) > 0x28
	.error "SlateportCity_Text_IllReadSignForYou may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_IllReadSignForYou) < 0x28
	.space 0x28 - (. - SlateportCity_Text_IllReadSignForYou)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1058 SlateportCity_Text_SaysSomethingLikeSeaIsEndless
	.globl SlateportCity_Text_SaysSomethingLikeSeaIsEndless
SlateportCity_Text_SaysSomethingLikeSeaIsEndless: @ 0x081DCEA7
	.string "えーと……\p『てしない それは の の』\p……って かいて あるぜ!{EOS}"
	.if (. - SlateportCity_Text_SaysSomethingLikeSeaIsEndless) > 0x23
	.error "SlateportCity_Text_SaysSomethingLikeSeaIsEndless may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SaysSomethingLikeSeaIsEndless) < 0x23
	.space 0x23 - (. - SlateportCity_Text_SaysSomethingLikeSeaIsEndless)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1063 SlateportCity_Text_ShouldveBroughtMyGameBoy
	.globl SlateportCity_Text_ShouldveBroughtMyGameBoy
SlateportCity_Text_ShouldveBroughtMyGameBoy: @ 0x081DCECA
	.string "ぶつぶつぶつ……\pゲームボーイが あれば\nぎょうれつも たいくつ しないぜ\pぶつぶつぶつ……{EOS}"
	.if (. - SlateportCity_Text_ShouldveBroughtMyGameBoy) > 0x2f
	.error "SlateportCity_Text_ShouldveBroughtMyGameBoy may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_ShouldveBroughtMyGameBoy) < 0x2f
	.space 0x2f - (. - SlateportCity_Text_ShouldveBroughtMyGameBoy)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1069 SlateportCity_Text_HotSpringsAfterOperation
	.globl SlateportCity_Text_HotSpringsAfterOperation
SlateportCity_Text_HotSpringsAfterOperation: @ 0x081DCEF9
	.string "このさくせんが おわったら\nおんせんに つれていって やる!\pって リーダーが いってたんだ\nたのしみ だなぁ……{EOS}"
	.if (. - SlateportCity_Text_HotSpringsAfterOperation) > 0x3a
	.error "SlateportCity_Text_HotSpringsAfterOperation may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_HotSpringsAfterOperation) < 0x3a
	.space 0x3a - (. - SlateportCity_Text_HotSpringsAfterOperation)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1075 SlateportCity_Text_SeaIsSoWet
	.globl SlateportCity_Text_SeaIsSoWet
SlateportCity_Text_SeaIsSoWet: @ 0x081DCF33
	.string "うみって おおきいなあ……\pひょっとして うみって\nポケモンが ながした なみだで\lできてるのかなあ……{EOS}"
	.if (. - SlateportCity_Text_SeaIsSoWet) > 0x35
	.error "SlateportCity_Text_SeaIsSoWet may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SeaIsSoWet) < 0x35
	.space 0x35 - (. - SlateportCity_Text_SeaIsSoWet)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1081 SlateportCity_Text_SinkOldBoats
	.globl SlateportCity_Text_SinkOldBoats
SlateportCity_Text_SinkOldBoats: @ 0x081DCF68
	.string "ふるく なって のれない ふねは\nどうするか しって いるかね?\pうみの そこに しずめて\nポケモンの すみかに してやるのだよ!{EOS}"
	.if (. - SlateportCity_Text_SinkOldBoats) > 0x42
	.error "SlateportCity_Text_SinkOldBoats may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SinkOldBoats) < 0x42
	.space 0x42 - (. - SlateportCity_Text_SinkOldBoats)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1087 SlateportCity_Text_BuyTooMuch
	.globl SlateportCity_Text_BuyTooMuch
SlateportCity_Text_BuyTooMuch: @ 0x081DCFAA
	.string "ここに くると うれしくて\nつい たくさん かいもの しちゃう!{EOS}"
	.if (. - SlateportCity_Text_BuyTooMuch) > 0x21
	.error "SlateportCity_Text_BuyTooMuch may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_BuyTooMuch) < 0x21
	.space 0x21 - (. - SlateportCity_Text_BuyTooMuch)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1091 SlateportCity_Text_GetNameRaterToHelpYou
	.globl SlateportCity_Text_GetNameRaterToHelpYou
SlateportCity_Text_GetNameRaterToHelpYou: @ 0x081DCFCB
	.string "ポケモンの ニックネームを かえたいなら\nせいめい はんだんしに たのむんだね!{EOS}"
	.if (. - SlateportCity_Text_GetNameRaterToHelpYou) > 0x29
	.error "SlateportCity_Text_GetNameRaterToHelpYou may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_GetNameRaterToHelpYou) < 0x29
	.space 0x29 - (. - SlateportCity_Text_GetNameRaterToHelpYou)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1095 SlateportCity_Text_CantChangeTradeMonName
	.globl SlateportCity_Text_CantChangeTradeMonName
SlateportCity_Text_CantChangeTradeMonName: @ 0x081DCFF4
	.string "ひとと こうかんした ポケモンは\nニックネームを かえられないわよ!\pだって つけた ひとの きもちが\nこめられて いるんですもの!{EOS}"
	.if (. - SlateportCity_Text_CantChangeTradeMonName) > 0x43
	.error "SlateportCity_Text_CantChangeTradeMonName may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_CantChangeTradeMonName) < 0x43
	.space 0x43 - (. - SlateportCity_Text_CantChangeTradeMonName)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1101 SlateportCity_Text_BattleTentBuiltRecently
	.globl SlateportCity_Text_BattleTentBuiltRecently
SlateportCity_Text_BattleTentBuiltRecently: @ 0x081DD037
	.string "さいきん カイナには\nバトルテントが できたんだ\lジムも いいけど バトルテントも いいぜ!\pおまえも つよい ポケモン さがしに\nいって みなよ!{EOS}"
	.if (. - SlateportCity_Text_BattleTentBuiltRecently) > 0x4b
	.error "SlateportCity_Text_BattleTentBuiltRecently may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_BattleTentBuiltRecently) < 0x4b
	.space 0x4b - (. - SlateportCity_Text_BattleTentBuiltRecently)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1108 SlateportCity_Text_CaptSternBeingInterviewed
	.globl SlateportCity_Text_CaptSternBeingInterviewed
SlateportCity_Text_CaptSternBeingInterviewed: @ 0x081DD082
	.string "ゆうめいな スターが きていたら\nサインを もらうつもり だったのに\pインタビュー されてるのは\nあれ…… クスノキさん でないかい?{EOS}"
	.if (. - SlateportCity_Text_CaptSternBeingInterviewed) > 0x44
	.error "SlateportCity_Text_CaptSternBeingInterviewed may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_CaptSternBeingInterviewed) < 0x44
	.space 0x44 - (. - SlateportCity_Text_CaptSternBeingInterviewed)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1114 SlateportCity_Text_InterviewerSoCool
	.globl SlateportCity_Text_InterviewerSoCool
SlateportCity_Text_InterviewerSoCool: @ 0x081DD0C6
	.string "あの インタビュアーの おねえさん\nかっこよくて びじん!\pあたしも おおきく なったら\nこくさい ジャーナリストに なるわ!{EOS}"
	.if (. - SlateportCity_Text_InterviewerSoCool) > 0x40
	.error "SlateportCity_Text_InterviewerSoCool may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_InterviewerSoCool) < 0x40
	.space 0x40 - (. - SlateportCity_Text_InterviewerSoCool)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1120 SlateportCity_Text_SternSaysDiscoveredSomething
	.globl SlateportCity_Text_SternSaysDiscoveredSomething
SlateportCity_Text_SternSaysDiscoveredSomething: @ 0x081DD106
	.string "クスノキかんちょうは うみの そこで\nなにかを はっけん したんだって!\pなんだろなー? なんだろなー?{EOS}"
	.if (. - SlateportCity_Text_SternSaysDiscoveredSomething) > 0x35
	.error "SlateportCity_Text_SternSaysDiscoveredSomething may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SternSaysDiscoveredSomething) < 0x35
	.space 0x35 - (. - SlateportCity_Text_SternSaysDiscoveredSomething)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1125 SlateportCity_Text_CaptainComeBackWithBigFish
	.globl SlateportCity_Text_CaptainComeBackWithBigFish
SlateportCity_Text_CaptainComeBackWithBigFish: @ 0x081DD13B
	.string "なんだ なんだ!?\pかんちょうは うみの そこから\nおおもの でも つりあげたのか?{EOS}"
	.if (. - SlateportCity_Text_CaptainComeBackWithBigFish) > 0x2b
	.error "SlateportCity_Text_CaptainComeBackWithBigFish may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_CaptainComeBackWithBigFish) < 0x2b
	.space 0x2b - (. - SlateportCity_Text_CaptainComeBackWithBigFish)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1130 SlateportCity_Text_AmIOnTV
	.globl SlateportCity_Text_AmIOnTV
SlateportCity_Text_AmIOnTV: @ 0x081DD166
	.string "みんなー! みてるかー!\nおれも テレビに うつってるかー?{EOS}"
	.if (. - SlateportCity_Text_AmIOnTV) > 0x1f
	.error "SlateportCity_Text_AmIOnTV may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_AmIOnTV) < 0x1f
	.space 0x1f - (. - SlateportCity_Text_AmIOnTV)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1134 SlateportCity_Text_CaptainsACelebrity
	.globl SlateportCity_Text_CaptainsACelebrity
SlateportCity_Text_CaptainsACelebrity: @ 0x081DD185
	.string "テレビが しゅざいに くる なんて\nかんちょうも ゆうめいじん ですなあ!{EOS}"
	.if (. - SlateportCity_Text_CaptainsACelebrity) > 0x26
	.error "SlateportCity_Text_CaptainsACelebrity may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_CaptainsACelebrity) < 0x26
	.space 0x26 - (. - SlateportCity_Text_CaptainsACelebrity)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1138 SlateportCity_Text_BigSmileForCamera
	.globl SlateportCity_Text_BigSmileForCamera
SlateportCity_Text_BigSmileForCamera: @ 0x081DD1AB
	.string "ダイ『はい クスノキさん\nそこで えがお!{EOS}"
	.if (. - SlateportCity_Text_BigSmileForCamera) > 0x16
	.error "SlateportCity_Text_BigSmileForCamera may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_BigSmileForCamera) < 0x16
	.space 0x16 - (. - SlateportCity_Text_BigSmileForCamera)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1142 SlateportCity_Text_MostInvaluableExperience
	.globl SlateportCity_Text_MostInvaluableExperience
SlateportCity_Text_MostInvaluableExperience: @ 0x081DD1C1
	.string "マリ『なるほど なるほど それは\nきちょうな たいけんを なさいましたね……{EOS}"
	.if (. - SlateportCity_Text_MostInvaluableExperience) > 0x27
	.error "SlateportCity_Text_MostInvaluableExperience may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_MostInvaluableExperience) < 0x27
	.space 0x27 - (. - SlateportCity_Text_MostInvaluableExperience)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1146 SlateportCity_Text_SternMoveAheadWithExploration
	.globl SlateportCity_Text_SternMoveAheadWithExploration
SlateportCity_Text_SternMoveAheadWithExploration: @ 0x081DD1E8
	.string "クスノキ『……というわけで こんごも\nちょうさは つづけて いきますよ!{EOS}"
	.if (. - SlateportCity_Text_SternMoveAheadWithExploration) > 0x25
	.error "SlateportCity_Text_SternMoveAheadWithExploration may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SternMoveAheadWithExploration) < 0x25
	.space 0x25 - (. - SlateportCity_Text_SternMoveAheadWithExploration)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1150 SlateportCity_Text_GabbyWonderfulThanksForInterview
	.globl SlateportCity_Text_GabbyWonderfulThanksForInterview
SlateportCity_Text_GabbyWonderfulThanksForInterview: @ 0x081DD20D
	.string "マリ『そうですか いやあ クスノキさん!\nきょうは おいそがしい ところ\lどうも ありがとう ございました!\pまた なにか はっけんが ありましたら\nぜひ しゅざい させて くださいね!{EOS}"
	.if (. - SlateportCity_Text_GabbyWonderfulThanksForInterview) > 0x5e
	.error "SlateportCity_Text_GabbyWonderfulThanksForInterview may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_GabbyWonderfulThanksForInterview) < 0x5e
	.space 0x5e - (. - SlateportCity_Text_GabbyWonderfulThanksForInterview)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1157 SlateportCity_Text_SternWhewFirstInterview
	.globl SlateportCity_Text_SternWhewFirstInterview
SlateportCity_Text_SternWhewFirstInterview: @ 0x081DD26B
	.string "クスノキ『ふう……\pテレビカメラに うつされる なんて\nはじめて だったから きんちょう したよ!{EOS}"
	.if (. - SlateportCity_Text_SternWhewFirstInterview) > 0x32
	.error "SlateportCity_Text_SternWhewFirstInterview may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SternWhewFirstInterview) < 0x32
	.space 0x32 - (. - SlateportCity_Text_SternWhewFirstInterview)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1162 SlateportCity_Text_OhPlayerWeMadeDiscovery
	.globl SlateportCity_Text_OhPlayerWeMadeDiscovery
SlateportCity_Text_OhPlayerWeMadeDiscovery: @ 0x081DD29D
	.string "おっ! {PLAYER}{KUN}\nげんきそう だね!\pこんかいの かいてい ちょうさで\nすごい はっけんを したんだよ!\p128ばん すいどうで\nおおむかしに ぜつめつ したと いわれる\lポケモンの すみかと おもわれる\lかいてい どうくつを みつけた……{EOS}"
	.if (. - SlateportCity_Text_OhPlayerWeMadeDiscovery) > 0x79
	.error "SlateportCity_Text_OhPlayerWeMadeDiscovery may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_OhPlayerWeMadeDiscovery) < 0x79
	.space 0x79 - (. - SlateportCity_Text_OhPlayerWeMadeDiscovery)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1172 SlateportCity_Text_AquaWillAssumeControlOfSubmarine
	.globl SlateportCity_Text_AquaWillAssumeControlOfSubmarine
SlateportCity_Text_AquaWillAssumeControlOfSubmarine: @ 0x081DD316
	.string "『フフフ……\nクスノキかんちょう とやら\pきみの せんすいていは\nわれわれ アクアだんが いただく!\pきみたちは われわれに だまって\nきょうりょく すれば いいのだよ!\pフフフ……\nこれから アクアだんが なにを するか\lたのしみに していたまえ!』{EOS}"
	.if (. - SlateportCity_Text_AquaWillAssumeControlOfSubmarine) > 0x7f
	.error "SlateportCity_Text_AquaWillAssumeControlOfSubmarine may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_AquaWillAssumeControlOfSubmarine) < 0x7f
	.space 0x7f - (. - SlateportCity_Text_AquaWillAssumeControlOfSubmarine)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1183 SlateportCity_Text_SternWhatWasAllThat
	.globl SlateportCity_Text_SternWhatWasAllThat
SlateportCity_Text_SternWhatWasAllThat: @ 0x081DD395
	.string "クスノキ『いまの こえは……?\pだれかが かくせいきを つかって……\pどこから はなしてるんだ……?{EOS}"
	.if (. - SlateportCity_Text_SternWhatWasAllThat) > 0x33
	.error "SlateportCity_Text_SternWhatWasAllThat may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SternWhatWasAllThat) < 0x33
	.space 0x33 - (. - SlateportCity_Text_SternWhatWasAllThat)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1188 SlateportCity_Text_FromHarborTryingToTakeSub
	.globl SlateportCity_Text_FromHarborTryingToTakeSub
SlateportCity_Text_FromHarborTryingToTakeSub: @ 0x081DD3C8
	.string "ふねのりばの なか!\pせんすいていが…… うばわれる……?{EOS}"
	.if (. - SlateportCity_Text_FromHarborTryingToTakeSub) > 0x1e
	.error "SlateportCity_Text_FromHarborTryingToTakeSub may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_FromHarborTryingToTakeSub) < 0x1e
	.space 0x1e - (. - SlateportCity_Text_FromHarborTryingToTakeSub)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1192 SlateportCity_Text_PleaseComeWithMe
	.globl SlateportCity_Text_PleaseComeWithMe
SlateportCity_Text_PleaseComeWithMe: @ 0x081DD3E6
	.string "{PLAYER}{KUN}!\nいっしょに きてくれ!{EOS}"
	.if (. - SlateportCity_Text_PleaseComeWithMe) > 0x12
	.error "SlateportCity_Text_PleaseComeWithMe may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_PleaseComeWithMe) < 0x12
	.space 0x12 - (. - SlateportCity_Text_PleaseComeWithMe)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1196 SlateportCity_Text_BattleTentSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SlateportCity_Text_BattleTentSign
SlateportCity_Text_BattleTentSign: @ 0x081DD3F8
	.string "バトルテント カイナシティ かいじょう\nさがせ! さいきょう ポケモン{EOS}"
	.if (. - SlateportCity_Text_BattleTentSign) != 0x24
	.error "SlateportCity_Text_BattleTentSign must retain its original byte length"
	.endif
	.globl gText_Rom_1DD417
	.set gText_Rom_1DD417, SlateportCity_Text_BattleTentSign + 0x1f
	@ data/maps/SlateportCity/scripts.inc:1200 SlateportCity_Text_SternsShipyardWantedSign
	.globl SlateportCity_Text_SternsShipyardWantedSign
SlateportCity_Text_SternsShipyardWantedSign: @ 0x081DD41C
	.string "「クスノキ ぞうせんじょ」\pなみを じざいに あやつる ふなのり\nだいぼしゅう してます!{EOS}"
	.if (. - SlateportCity_Text_SternsShipyardWantedSign) > 0x2e
	.error "SlateportCity_Text_SternsShipyardWantedSign may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SternsShipyardWantedSign) < 0x2e
	.space 0x2e - (. - SlateportCity_Text_SternsShipyardWantedSign)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1205 SlateportCity_Text_SternsShipyardNearsCompletion
	.globl SlateportCity_Text_SternsShipyardNearsCompletion
SlateportCity_Text_SternsShipyardNearsCompletion: @ 0x081DD44A
	.string "「クスノキ ぞうせんじょ」\pカイナと ミナモを むすぶ\nれんらくせん タイドリップごうは\lかんせい まで あと わずか!{EOS}"
	.if (. - SlateportCity_Text_SternsShipyardNearsCompletion) > 0x3d
	.error "SlateportCity_Text_SternsShipyardNearsCompletion may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SternsShipyardNearsCompletion) < 0x3d
	.space 0x3d - (. - SlateportCity_Text_SternsShipyardNearsCompletion)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1211 SlateportCity_Text_SternsShipyardFerryComplete
	.globl SlateportCity_Text_SternsShipyardFerryComplete
SlateportCity_Text_SternsShipyardFerryComplete: @ 0x081DD487
	.string "「クスノキ ぞうせんじょ」\pれんらくせん タイドリップごうに\nじょうせんを きぼう される かたは\lふねのりば うけつけ まで どうぞ!{EOS}"
	.if (. - SlateportCity_Text_SternsShipyardFerryComplete) > 0x45
	.error "SlateportCity_Text_SternsShipyardFerryComplete may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_SternsShipyardFerryComplete) < 0x45
	.space 0x45 - (. - SlateportCity_Text_SternsShipyardFerryComplete)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1217 SlateportCity_Text_PokemonFanClubSign
	.globl SlateportCity_Text_PokemonFanClubSign
SlateportCity_Text_PokemonFanClubSign: @ 0x081DD4CC
	.string "「ポケモン だいすきクラブ」\nポケモンが すきなひと みんな あつまれ!{EOS}"
	.if (. - SlateportCity_Text_PokemonFanClubSign) > 0x25
	.error "SlateportCity_Text_PokemonFanClubSign may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_PokemonFanClubSign) < 0x25
	.space 0x25 - (. - SlateportCity_Text_PokemonFanClubSign)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1221 SlateportCity_Text_OceanicMuseumSign
	.globl SlateportCity_Text_OceanicMuseumSign
SlateportCity_Text_OceanicMuseumSign: @ 0x081DD4F1
	.string "はてしない うみ……\nそれは いのちの みなもと……\p「うみの かがく はくぶつかん」{EOS}"
	.if (. - SlateportCity_Text_OceanicMuseumSign) > 0x2c
	.error "SlateportCity_Text_OceanicMuseumSign may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_OceanicMuseumSign) < 0x2c
	.space 0x2c - (. - SlateportCity_Text_OceanicMuseumSign)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1226 SlateportCity_Text_CitySign
	.globl SlateportCity_Text_CitySign
SlateportCity_Text_CitySign: @ 0x081DD51D
	.string "ここは カイナ シティ\nヒトと ポケモンが いきかう みなと{EOS}"
	.if (. - SlateportCity_Text_CitySign) > 0x1f
	.error "SlateportCity_Text_CitySign may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_CitySign) < 0x1f
	.space 0x1f - (. - SlateportCity_Text_CitySign)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1230 SlateportCity_Text_MarketSign
	.globl SlateportCity_Text_MarketSign
SlateportCity_Text_MarketSign: @ 0x081DD53C
	.string "「カイナ いちば」\nここでしか かえない もの たくさん!{EOS}"
	.if (. - SlateportCity_Text_MarketSign) > 0x1e
	.error "SlateportCity_Text_MarketSign may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_MarketSign) < 0x1e
	.space 0x1e - (. - SlateportCity_Text_MarketSign)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1234 SlateportCity_Text_HarborFerryUnderConstruction
	.globl SlateportCity_Text_HarborFerryUnderConstruction
SlateportCity_Text_HarborFerryUnderConstruction: @ 0x081DD55A
	.string "「カイナ シティ ふねのりば」\pれんらくせん タイドリップごう は\nぞうせんじょ にて けんぞう ちゅう!\pもう しばらく おまちください!{EOS}"
	.if (. - SlateportCity_Text_HarborFerryUnderConstruction) > 0x47
	.error "SlateportCity_Text_HarborFerryUnderConstruction may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_HarborFerryUnderConstruction) < 0x47
	.space 0x47 - (. - SlateportCity_Text_HarborFerryUnderConstruction)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1240 SlateportCity_Text_HarborSign
	.globl SlateportCity_Text_HarborSign
SlateportCity_Text_HarborSign: @ 0x081DD5A1
	.string "「カイナ シティ ふねのりば」\pれんらくせん タイドリップごうで\nふねの たびを おたのしみ ください!{EOS}"
	.if (. - SlateportCity_Text_HarborSign) > 0x35
	.error "SlateportCity_Text_HarborSign may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_HarborSign) < 0x35
	.space 0x35 - (. - SlateportCity_Text_HarborSign)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1245 SlateportCity_Text_NameRatersHouseSign
	.globl SlateportCity_Text_NameRatersHouseSign
SlateportCity_Text_NameRatersHouseSign: @ 0x081DD5D6
	.string "「せいめい はんだんし の いえ」\nポケモンの なまえ うらないます{EOS}"
	.if (. - SlateportCity_Text_NameRatersHouseSign) > 0x23
	.error "SlateportCity_Text_NameRatersHouseSign may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_NameRatersHouseSign) < 0x23
	.space 0x23 - (. - SlateportCity_Text_NameRatersHouseSign)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1249 SlateportCity_Text_ExplainBerries
	.globl SlateportCity_Text_ExplainBerries
SlateportCity_Text_ExplainBerries: @ 0x081DD5F9
	.string "きずついた やせいの ポケモンは\nきのみを かじって けがを なおすの\pしってた?\pそれを もくげきした だれかが\nきのみから くすりを つくることを\lおもいついたの\pしってた?\pきのみを くすりに するためには\nこなごなに くだいて こなにするの\pしってた?\pあなた……\nきのみに きょうみが ありそうね!\pいいものを あげるわ{EOS}"
	.if (. - SlateportCity_Text_ExplainBerries) > 0xa6
	.error "SlateportCity_Text_ExplainBerries may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_ExplainBerries) < 0xa6
	.space 0xa6 - (. - SlateportCity_Text_ExplainBerries)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1264 SlateportCity_Text_ExplainBerryPowder
	.globl SlateportCity_Text_ExplainBerryPowder
SlateportCity_Text_ExplainBerryPowder: @ 0x081DD69F
	.string "さいきん ポケモンセンターの 2かいの\nダイレクト コーナー というところに\lきのみを つぶす きかいを\lおいて もらったの\pしってた?\pそこで きのみの こなを つくってきて!\pきのみの こなを\nたくさん つくって きてくれたら\lいろいろな くすりを あげるわ{EOS}"
	.if (. - SlateportCity_Text_ExplainBerryPowder) > 0x84
	.error "SlateportCity_Text_ExplainBerryPowder may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_ExplainBerryPowder) < 0x84
	.space 0x84 - (. - SlateportCity_Text_ExplainBerryPowder)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1275 SlateportCity_Text_BroughtMeSomeBerryPowder
	.globl SlateportCity_Text_BroughtMeSomeBerryPowder
SlateportCity_Text_BroughtMeSomeBerryPowder: @ 0x081DD723
	.string "きのみの こなを もってきたの?{EOS}"
	.if (. - SlateportCity_Text_BroughtMeSomeBerryPowder) > 0x11
	.error "SlateportCity_Text_BroughtMeSomeBerryPowder may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_BroughtMeSomeBerryPowder) < 0x11
	.space 0x11 - (. - SlateportCity_Text_BroughtMeSomeBerryPowder)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1278 SlateportCity_Text_ExchangeWhatWithIt
	.globl SlateportCity_Text_ExchangeWhatWithIt
SlateportCity_Text_ExchangeWhatWithIt: @ 0x081DD734
	.string "なにと こうかん しましょ?{EOS}"
	.if (. - SlateportCity_Text_ExchangeWhatWithIt) > 0xf
	.error "SlateportCity_Text_ExchangeWhatWithIt may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_ExchangeWhatWithIt) < 0xf
	.space 0xf - (. - SlateportCity_Text_ExchangeWhatWithIt)
	.endif
	@ field-script:0x1DC8CD FieldScriptText_1DD743
	.globl gText_Rom_1DD743
gText_Rom_1DD743: @ 0x081DD743
	.string "{0xFD}{0x02}　と\nこうかん　するのね？{EOS}"
	.if (. - gText_Rom_1DD743) > 0x10
	.error "gText_Rom_1DD743 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD743) < 0x10
	.space 0x10 - (. - gText_Rom_1DD743)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1285 SlateportCity_Text_DontHaveEnoughBerryPowder
	.globl SlateportCity_Text_DontHaveEnoughBerryPowder
SlateportCity_Text_DontHaveEnoughBerryPowder: @ 0x081DD753
	.string "あれま!?\nこなが たりない じゃないの!{EOS}"
	.if (. - SlateportCity_Text_DontHaveEnoughBerryPowder) > 0x16
	.error "SlateportCity_Text_DontHaveEnoughBerryPowder may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_DontHaveEnoughBerryPowder) < 0x16
	.space 0x16 - (. - SlateportCity_Text_DontHaveEnoughBerryPowder)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1289 SlateportCity_Text_FineBerryPowderTradeSomethingElse
	.globl SlateportCity_Text_FineBerryPowderTradeSomethingElse
SlateportCity_Text_FineBerryPowderTradeSomethingElse: @ 0x081DD769
	.string "まあ いいこな だこと!\pあなたが くれた こなで\nまた いいくすりを つくれるわ!\pほかにも なにか こうかんする?{EOS}"
	.if (. - SlateportCity_Text_FineBerryPowderTradeSomethingElse) > 0x3c
	.error "SlateportCity_Text_FineBerryPowderTradeSomethingElse may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_FineBerryPowderTradeSomethingElse) < 0x3c
	.space 0x3c - (. - SlateportCity_Text_FineBerryPowderTradeSomethingElse)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1295 SlateportCity_Text_WhenYouGetMoreBringItToMe
	.globl SlateportCity_Text_WhenYouGetMoreBringItToMe
SlateportCity_Text_WhenYouGetMoreBringItToMe: @ 0x081DD7A5
	.string "そう\nこなが できたら また よろしくね!{EOS}"
	.if (. - SlateportCity_Text_WhenYouGetMoreBringItToMe) > 0x16
	.error "SlateportCity_Text_WhenYouGetMoreBringItToMe may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_WhenYouGetMoreBringItToMe) < 0x16
	.space 0x16 - (. - SlateportCity_Text_WhenYouGetMoreBringItToMe)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1299 SlateportCity_Text_ComeBackToTradeBerryPowder
	.globl SlateportCity_Text_ComeBackToTradeBerryPowder
SlateportCity_Text_ComeBackToTradeBerryPowder: @ 0x081DD7BB
	.string "くすりと こうかん したくなったら\nまた ここに くるのよ\pわたしが いつも\nおみせ だしてるから ね\pしってた?{EOS}"
	.if (. - SlateportCity_Text_ComeBackToTradeBerryPowder) > 0x3a
	.error "SlateportCity_Text_ComeBackToTradeBerryPowder may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_ComeBackToTradeBerryPowder) < 0x3a
	.space 0x3a - (. - SlateportCity_Text_ComeBackToTradeBerryPowder)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1306 SlateportCity_Text_YouDroveTeamAquaAway
	.globl SlateportCity_Text_YouDroveTeamAquaAway
SlateportCity_Text_YouDroveTeamAquaAway: @ 0x081DD7F5
	.string "エニシダ『……あれ?\nきみとは まえに どこかで あったよね\pじこしょうかい したっけ?\nわたしは エニシダ って いうんだ\pいま ここから アクアだんが\nにげだして いったけど\lもしかして きみが やっつけたの かい?{EOS}"
	.if (. - SlateportCity_Text_YouDroveTeamAquaAway) > 0x6f
	.error "SlateportCity_Text_YouDroveTeamAquaAway may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_YouDroveTeamAquaAway) < 0x6f
	.space 0x6f - (. - SlateportCity_Text_YouDroveTeamAquaAway)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1315 SlateportCity_Text_MaybeThisTrainer
	.globl SlateportCity_Text_MaybeThisTrainer
SlateportCity_Text_MaybeThisTrainer: @ 0x081DD864
	.string "エニシダ『うーむ これは\nひょっとして ひょっとすると……{EOS}"
	.if (. - SlateportCity_Text_MaybeThisTrainer) > 0x1e
	.error "SlateportCity_Text_MaybeThisTrainer may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_MaybeThisTrainer) < 0x1e
	.space 0x1e - (. - SlateportCity_Text_MaybeThisTrainer)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1319 SlateportCity_Text_LetsRegisterEachOther
	.globl SlateportCity_Text_LetsRegisterEachOther
SlateportCity_Text_LetsRegisterEachOther: @ 0x081DD882
	.string "エニシダ『……よっし!\nきみとは なかよく なれそう だから\lおたがい ポケナビに\lなまえを とうろく しておこう!\p…… …… ……{EOS}"
	.if (. - SlateportCity_Text_LetsRegisterEachOther) > 0x44
	.error "SlateportCity_Text_LetsRegisterEachOther may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_LetsRegisterEachOther) < 0x44
	.space 0x44 - (. - SlateportCity_Text_LetsRegisterEachOther)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1326 SlateportCity_Text_RegisteredScott
	.globl SlateportCity_Text_RegisteredScott
SlateportCity_Text_RegisteredScott: @ 0x081DD8C6
	.string "エニシダ という ひとを\nポケナビに とうろく した!{EOS}"
	.if (. - SlateportCity_Text_RegisteredScott) > 0x1c
	.error "SlateportCity_Text_RegisteredScott may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_RegisteredScott) < 0x1c
	.space 0x1c - (. - SlateportCity_Text_RegisteredScott)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1330 SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou
	.globl SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou: @ 0x081DD8E2
	.string "エニシダ『ホントは きみに\nくっついて いきたい ところ だけど\lほかのひとの さいのうも きになるし\pもうすこし いろんな まちを\nたずね あるいて みるよ!\pじゃあね {PLAYER}{KUN}!{EOS}"
	.if (. - SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou) > 0x5c
	.error "SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou) < 0x5c
	.space 0x5c - (. - SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1338 SlateportCity_Text_TakingBattleTentChallenge
	.globl SlateportCity_Text_TakingBattleTentChallenge
SlateportCity_Text_TakingBattleTentChallenge: @ 0x081DD93E
	.string "エニシダ『お おおっと\n{PLAYER}{KUN}か!\p……もしかして {PLAYER}{KUN}\nバトルテントに ちょうせん するのかい?\pうん! それは いいことだな!\nものすごく いいことだ!\lバトルテントには つよい トレーナーが\lとっても ふさわしい からね\pじゃ がんばってね!{EOS}"
	.if (. - SlateportCity_Text_TakingBattleTentChallenge) > 0x80
	.error "SlateportCity_Text_TakingBattleTentChallenge may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Text_TakingBattleTentChallenge) < 0x80
	.space 0x80 - (. - SlateportCity_Text_TakingBattleTentChallenge)
	.endif
	@ analyzed canonical ROM range 0x081DD9BE-0x081DDDF2
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_MauvilleCity_OnTransition: @ 0x081DD9BE
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081DD9C4
	.byte 0
EventScript_JP_081DD9C4: @ 0x081DD9C4
	setflag 0x0878
	clearflag 0x009D
	clearflag 0x03C1
	setflag 0x0892
	clearflag 0x0063
	setvar 0x4093, 0x0000
	checkflag 0x00D1
	call_if 0x01, EventScript_JP_081DD9E2
	end
EventScript_JP_081DD9E2: @ 0x081DD9E2
	clearflag 0x0391
	setflag 0x0390
	setflag 0x005B
	return
.globl EventScript_JP_081DD9EC
EventScript_JP_081DD9EC: @ 0x081DD9EC
	loadword 0x00, MauvilleCity_Text_NurseHurtMonBackToHealth
	callstd 0x02
	end
.globl EventScript_JP_081DD9F5
EventScript_JP_081DD9F5: @ 0x081DD9F5
	loadword 0x00, MauvilleCity_Text_AllSortsOfPeopleComeThrough
	callstd 0x02
	end
.globl EventScript_JP_081DD9FE
EventScript_JP_081DD9FE: @ 0x081DD9FE
	loadword 0x00, MauvilleCity_Text_RydelVeryGenerous
	callstd 0x02
	end
.globl EventScript_JP_081DDA07
EventScript_JP_081DDA07: @ 0x081DDA07
	loadword 0x00, MauvilleCity_Text_PokemonCanJumpYouOnBike
	callstd 0x02
	end
.globl EventScript_JP_081DDA10
EventScript_JP_081DDA10: @ 0x081DDA10
	loadword 0x00, MauvilleCity_Text_CitySign
	callstd 0x03
	end
.globl EventScript_JP_081DDA19
EventScript_JP_081DDA19: @ 0x081DDA19
	loadword 0x00, MauvilleCity_Text_GymSign
	callstd 0x03
	end
.globl EventScript_JP_081DDA22
EventScript_JP_081DDA22: @ 0x081DDA22
	loadword 0x00, MauvilleCity_Text_BikeShopSign
	callstd 0x03
	end
.globl EventScript_JP_081DDA2B
EventScript_JP_081DDA2B: @ 0x081DDA2B
	loadword 0x00, MauvilleCity_Text_GameCornerSign
	callstd 0x03
	end
.globl EventScript_JP_081DDA34
EventScript_JP_081DDA34: @ 0x081DDA34
	lock
	faceplayer
	checkflag 0x0062
	goto_if 0x01, EventScript_JP_081DDA4C
	loadword 0x00, MauvilleCity_Text_ExplainTV
	callstd 0x04
	setflag 0x0062
	release
	end
EventScript_JP_081DDA4C: @ 0x081DDA4C
	loadword 0x00, MauvilleCity_Text_BeenCheckingOutTV
	callstd 0x04
	release
	end
.globl EventScript_JP_081DDA56
EventScript_JP_081DDA56: @ 0x081DDA56
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x011C
	goto_if 0x01, EventScript_JP_081DDA76
	loadword 0x00, MauvilleCity_Text_UncleHesTooPeppy
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_081DDA76: @ 0x081DDA76
	loadword 0x00, MauvilleCity_Text_UncleCanYouBattleWally
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DDA8B
EventScript_JP_081DDA8B: @ 0x081DDA8B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x011C
	goto_if 0x01, EventScript_JP_081DDCC9
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MauvilleCity_Text_WallyWantToChallengeGym
	callstd 0x04
	loadword 0x00, MauvilleCity_Text_UncleYourePushingIt
	callstd 0x04
	loadword 0x00, MauvilleCity_Text_WallyWeCanBeatAnyone
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MauvilleCity_Text_WallyWillYouBattleMe
	callstd 0x05
	goto EventScript_JP_081DDAE6
	.byte 0x02
EventScript_JP_081DDAE6: @ 0x081DDAE6
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081DDC73
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081DDCBC
	closemessage
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081DDB19
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081DDB76
	end
EventScript_JP_081DDB19: @ 0x081DDB19
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_Delay16_WalkInPlaceFastestLeft_2
	@ event command: applymovement
	applymovement 0x0006, SlateportCity_Movement_WalkLeftX2_WalkDownX2_WalkLeft
	@ event command: applymovement
	applymovement 0x0007, SlateportCity_Movement_WalkLeftX3_WalkDownX2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x001E
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_Delay16_Delay8_Delay4_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x0007, SlateportCity_Movement_WalkRightX2_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MauvilleCity_Text_UncleVisitUsSometime
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_Delay16_Delay8_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0007, SlateportCity_Movement_WalkLeftX8
	@ event command: applymovement
	applymovement 0x0006, SlateportCity_Movement_Delay16X2_WalkLeftX8_Delay8_1
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DDBCC
	.byte 0x02
EventScript_JP_081DDB76: @ 0x081DDB76
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_Delay16_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x0006, SlateportCity_Movement_WalkDownX2_WalkLeftX3
	@ event command: applymovement
	applymovement 0x0007, SlateportCity_Movement_WalkLeft_WalkDownX2_WalkLeftX2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x001E
	@ event command: applymovement
	applymovement 0x0007, SlateportCity_Movement_WalkRight_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MauvilleCity_Text_UncleVisitUsSometime
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_Delay16X3_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0007, SlateportCity_Movement_WalkDown_WalkLeftX8
	@ event command: applymovement
	applymovement 0x0006, SlateportCity_Movement_Delay16X2_WalkLeftX8_Delay8_2
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DDBCC
	.byte 0x02
EventScript_JP_081DDBCC: @ 0x081DDBCC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: removeobject
	removeobject 0x0006
	@ event command: removeobject
	removeobject 0x0007
	clearflag 0x0326
	clearflag 0x0329
	setflag 0x00BE
	setvar 0x40F2, 0x0000
	setflag 0x0088
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081DDC2C
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081DDC3A
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MauvilleCity_Text_ScottYouDidntHoldBack
	callstd 0x04
	closemessage
	addvar 0x40D1, 0x0001
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081DDC4F
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081DDC61
	@ event command: removeobject
	removeobject 0x000B
	releaseall
	end
EventScript_JP_081DDC2C: @ 0x081DDC2C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: addobject
	addobject 0x000B
	@ event command: applymovement
	applymovement 0x000B, SlateportCity_Movement_WalkUpX6_WalkLeftX4_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DDC3A: @ 0x081DDC3A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setobjectxyperm 0x000B, 0x000C, 0x000D
	@ event command: addobject
	addobject 0x000B
	@ event command: applymovement
	applymovement 0x000B, SlateportCity_Movement_WalkUpX5_WalkLeftX5_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DDC4F: @ 0x081DDC4F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_Delay16_WalkInPlaceFastestLeft_1
	@ event command: applymovement
	applymovement 0x000B, SlateportCity_Movement_WalkLeftX9
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DDC61: @ 0x081DDC61
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, SlateportCity_Movement_Delay16X2_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x000B, SlateportCity_Movement_WalkDown_WalkLeftX9
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DDC73: @ 0x081DDC73
	loadword 0x00, MauvilleCity_Text_WallyHereICome
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0290, 0x0000, MauvilleCity_Text_WallyDefeat
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MauvilleCity_Text_WallyIllGoBackToVerdanturf
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MauvilleCity_Text_ThankYouNotEnoughToBattle
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MauvilleCity_Text_UncleNoNeedToBeDown
	callstd 0x04
	return
EventScript_JP_081DDCBC: @ 0x081DDCBC
	setflag 0x011C
	loadword 0x00, MauvilleCity_Text_WallyMyUncleWontKnowImStrong
	callstd 0x04
	release
	end
EventScript_JP_081DDCC9: @ 0x081DDCC9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MauvilleCity_Text_WallyPleaseBattleMe
	callstd 0x05
	goto EventScript_JP_081DDAE6
	.byte 0x02
SlateportCity_Movement_WalkLeftX2_WalkDownX2_WalkLeft: @ 0x081DDCE1
	@ object movement sequence
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end
SlateportCity_Movement_WalkDownX2_WalkLeftX3: @ 0x081DDCE7
	@ object movement sequence
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end
SlateportCity_Movement_Delay16X2_WalkLeftX8_Delay8_1: @ 0x081DDCED
	@ object movement sequence
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end
SlateportCity_Movement_Delay16X2_WalkLeftX8_Delay8_2: @ 0x081DDCF9
	@ object movement sequence
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end
SlateportCity_Movement_Delay16_Delay8_WalkInPlaceFastestLeft: @ 0x081DDD05
	@ object movement sequence
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end
SlateportCity_Movement_Delay16X3_WalkInPlaceFastestLeft: @ 0x081DDD09
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
SlateportCity_Movement_Delay16_WalkInPlaceFastestLeft_1: @ 0x081DDD0E
	@ object movement sequence
	delay_16
	walk_in_place_fastest_left
	step_end
SlateportCity_Movement_Delay16X2_WalkInPlaceFastestLeft: @ 0x081DDD11
	@ object movement sequence
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
SlateportCity_Movement_Delay16_WalkInPlaceFastestDown: @ 0x081DDD15
	@ object movement sequence
	delay_16
	walk_in_place_fastest_down
	step_end
SlateportCity_Movement_Delay16_WalkInPlaceFastestLeft_2: @ 0x081DDD18
	@ object movement sequence
	delay_16
	walk_in_place_fastest_left
	step_end
SlateportCity_Movement_WalkLeftX3_WalkDownX2: @ 0x081DDD1B
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end
SlateportCity_Movement_WalkLeft_WalkDownX2_WalkLeftX2: @ 0x081DDD21
	@ object movement sequence
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	step_end
SlateportCity_Movement_Delay16_Delay8_Delay4_WalkInPlaceFastestDown: @ 0x081DDD27
	@ object movement sequence
	delay_16
	delay_8
	delay_4
	walk_in_place_fastest_down
	step_end
SlateportCity_Movement_WalkRightX2_WalkInPlaceFastestUp: @ 0x081DDD2C
	@ object movement sequence
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
SlateportCity_Movement_WalkRight_WalkUp: @ 0x081DDD30
	@ object movement sequence
	walk_right
	walk_up
	step_end
SlateportCity_Movement_WalkLeftX8: @ 0x081DDD33
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
SlateportCity_Movement_WalkDown_WalkLeftX8: @ 0x081DDD3C
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
	step_end
SlateportCity_Movement_WalkUpX6_WalkLeftX4_WalkInPlaceFastestUp: @ 0x081DDD46
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
SlateportCity_Movement_WalkUpX5_WalkLeftX5_WalkUp: @ 0x081DDD52
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end
SlateportCity_Movement_WalkLeftX9: @ 0x081DDD5E
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
SlateportCity_Movement_WalkDown_WalkLeftX9: @ 0x081DDD68
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
.globl EventScript_JP_081DDD73
EventScript_JP_081DDD73: @ 0x081DDD73
	lock
	faceplayer
	checkflag 0x00D1
	goto_if 0x01, EventScript_JP_081DDDE9
	compare_var_to_value 0x40BA, 0x0002
	goto_if 0x01, EventScript_JP_081DDDBD
	checkflag 0x00D0
	goto_if 0x01, EventScript_JP_081DDDB3
	loadword 0x00, MauvilleCity_Text_WattsonNeedFavorTakeKey
	callstd 0x04
	setorcopyvar 0x8000, 0x010F
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x00D0
	loadword 0x00, MauvilleCity_Text_WattsonWontBeChallenge
	callstd 0x04
	release
	end
EventScript_JP_081DDDB3: @ 0x081DDDB3
	loadword 0x00, MauvilleCity_Text_WattsonWontBeChallenge
	callstd 0x04
	release
	end
EventScript_JP_081DDDBD: @ 0x081DDDBD
	loadword 0x00, MauvilleCity_Text_WattsonThanksTakeTM
	callstd 0x04
	setorcopyvar 0x8000, 0x0138
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00D1
	loadword 0x00, MauvilleCity_Text_WattsonYoungTakeCharge
	callstd 0x04
	release
	end
EventScript_JP_081DDDE9: @ 0x081DDDE9
	loadword 0x00, MauvilleCity_Text_WattsonYoungTakeCharge
	callstd 0x04
	release
	end
