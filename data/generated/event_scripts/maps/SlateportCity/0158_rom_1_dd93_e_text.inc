	@ data/maps/SlateportCity/scripts.inc:920 SlateportCity_Text_EnergyGuruSellWhatYouNeed
	.globl gText_Rom_1DC9BE
gText_Rom_1DC9BE: @ 0x081DC9BE
	.string "わし がんばりや!\nがんばって いろいろ うりますよ!{EOS}"
	.if (. - gText_Rom_1DC9BE) > 0x1c
	.error "gText_Rom_1DC9BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DC9BE) < 0x1c
	.space 0x1c - (. - gText_Rom_1DC9BE)
	.endif
	@ data/maps/SlateportCity/scripts.inc:924 SlateportCity_Text_OhYourPokemon
	.globl gText_Rom_1DC9DA
gText_Rom_1DC9DA: @ 0x081DC9DA
	.string "あら?\nきみの {STR_VAR_1}……{EOS}"
	.if (. - gText_Rom_1DC9DA) > 0xd
	.error "gText_Rom_1DC9DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DC9DA) < 0xd
	.space 0xd - (. - gText_Rom_1DC9DA)
	.endif
	@ data/maps/SlateportCity/scripts.inc:928 SlateportCity_Text_PleaseGiveItThisEffortRibbon
	.globl gText_Rom_1DC9E7
gText_Rom_1DC9E7: @ 0x081DC9E7
	.string "ものすごく がんばったのね!\pごほうびと して\nこの がんばリボンを つけてあげて!{EOS}"
	.if (. - gText_Rom_1DC9E7) > 0x2b
	.error "gText_Rom_1DC9E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DC9E7) < 0x2b
	.space 0x2b - (. - gText_Rom_1DC9E7)
	.endif
	@ data/maps/SlateportCity/scripts.inc:933 SlateportCity_Text_ReceivedEffortRibbon
	.globl gText_Rom_1DCA12
gText_Rom_1DCA12: @ 0x081DCA12
	.string "{PLAYER}は がんばリボンを もらった!{EOS}"
	.if (. - gText_Rom_1DCA12) > 0x12
	.error "gText_Rom_1DCA12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCA12) < 0x12
	.space 0x12 - (. - gText_Rom_1DCA12)
	.endif
	@ data/maps/SlateportCity/scripts.inc:936 SlateportCity_Text_PutEffortRibbonOnMon
	.globl gText_Rom_1DCA24
gText_Rom_1DCA24: @ 0x081DCA24
	.string "{PLAYER}は がんばリボンを\n{STR_VAR_1}に つけて あげた!{EOS}"
	.if (. - gText_Rom_1DCA24) > 0x19
	.error "gText_Rom_1DCA24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCA24) < 0x19
	.space 0x19 - (. - gText_Rom_1DCA24)
	.endif
	@ data/maps/SlateportCity/scripts.inc:940 SlateportCity_Text_GoForItLittleHarder
	.globl gText_Rom_1DCA3D
gText_Rom_1DCA3D: @ 0x081DCA3D
	.string "もっと がんばってみて!\pがんばれば わたしが ポケモンに\nいいもの あげるから!{EOS}"
	.if (. - gText_Rom_1DCA3D) > 0x2a
	.error "gText_Rom_1DCA3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCA3D) < 0x2a
	.space 0x2a - (. - gText_Rom_1DCA3D)
	.endif
	@ data/maps/SlateportCity/scripts.inc:945 SlateportCity_Text_EffortRibbonLooksGoodOnIt
	.globl gText_Rom_1DCA67
gText_Rom_1DCA67: @ 0x081DCA67
	.string "あっ! きみの {STR_VAR_1}\nがんばリボン にあってるよ!{EOS}"
	.if (. - gText_Rom_1DCA67) > 0x1a
	.error "gText_Rom_1DCA67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCA67) < 0x1a
	.space 0x1a - (. - gText_Rom_1DCA67)
	.endif
	@ data/maps/SlateportCity/scripts.inc:949 SlateportCity_Text_WonderIfLighthouseStartlesPokemon
	.globl gText_Rom_1DCA81
gText_Rom_1DCA81: @ 0x081DCA81
	.string "とうだいの あかりは\nすう10キロさき にも とどくんだ\pうみの なかの ポケモン\nまぶしくて おどろいて いないかな?{EOS}"
	.if (. - gText_Rom_1DCA81) > 0x3d
	.error "gText_Rom_1DCA81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCA81) < 0x3d
	.space 0x3d - (. - gText_Rom_1DCA81)
	.endif
	@ data/maps/SlateportCity/scripts.inc:955 SlateportCity_Text_SeaweedFullOfLife
	.globl gText_Rom_1DCABE
gText_Rom_1DCABE: @ 0x081DCABE
	.string "ほれ みてみろ!\pこのあたりで とれる かいそうは\nしんせん ピチピチ!\pいまにも おそい かかって きそうだ!{EOS}"
	.if (. - gText_Rom_1DCABE) > 0x39
	.error "gText_Rom_1DCABE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCABE) < 0x39
	.space 0x39 - (. - gText_Rom_1DCABE)
	.endif
	@ data/maps/SlateportCity/scripts.inc:961 SlateportCity_Text_HowTownIsBornAndGrows
	.globl gText_Rom_1DCAF7
gText_Rom_1DCAF7: @ 0x081DCAF7
	.string "みずの きれいな ところに\nたくさんの みのりが あつまり\pひとびとが やってくる ところに\nいちばが できる……\pこうして まちは おおきくなるのさ{EOS}"
	.if (. - gText_Rom_1DCAF7) > 0x4c
	.error "gText_Rom_1DCAF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCAF7) < 0x4c
	.space 0x4c - (. - gText_Rom_1DCAF7)
	.endif
	@ data/maps/SlateportCity/scripts.inc:968 SlateportCity_Text_SlateportWonderfulPlace
	.globl gText_Rom_1DCB43
gText_Rom_1DCB43: @ 0x081DCB43
	.string "うみの かおりが する ばしょで\nかいものが できるなんて……\pカイナって すてきな ところ!{EOS}"
	.if (. - gText_Rom_1DCB43) > 0x30
	.error "gText_Rom_1DCB43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCB43) < 0x30
	.space 0x30 - (. - gText_Rom_1DCB43)
	.endif
	@ data/maps/SlateportCity/scripts.inc:973 SlateportCity_Text_BuyBricksSoDecorWontGetDirty
	.globl gText_Rom_1DCB73
gText_Rom_1DCB73: @ 0x081DCB73
	.string "ぬいぐるみや クッションって\nゆかに おくと よごれちゃうでしょ?\pだから きれいなまま かざれるように\nぬいぐるみや クッションを おくための\lレンガを かいに きたの!{EOS}"
	.if (. - gText_Rom_1DCB73) > 0x57
	.error "gText_Rom_1DCB73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCB73) < 0x57
	.space 0x57 - (. - gText_Rom_1DCB73)
	.endif
	@ data/maps/SlateportCity/scripts.inc:980 SlateportCity_Text_GoingToCompeteInBattleTent
	.globl gText_Rom_1DCBCA
gText_Rom_1DCBCA: @ 0x081DCBCA
	.string "うぉー! バトルテントに\nぼくも しゅつじょう するぞおー!\pと そのまえに!\nポケモン つかまえて こなくちゃ!{EOS}"
	.if (. - gText_Rom_1DCBCA) > 0x3a
	.error "gText_Rom_1DCBCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCBCA) < 0x3a
	.space 0x3a - (. - gText_Rom_1DCBCA)
	.endif
	@ data/maps/SlateportCity/scripts.inc:986 SlateportCity_Text_BushedHikingFromMauville
	.globl gText_Rom_1DCC04
gText_Rom_1DCC04: @ 0x081DCC04
	.string "ふぅ ふぅ……\pおれは キンセツシティ から\nあるいて ここまで きたんだけど\lこの まちって ひろいなぁ……\pこんな ことなら じてんしゃに\nのって くれば よかったよ!{EOS}"
	.if (. - gText_Rom_1DCC04) > 0x57
	.error "gText_Rom_1DCC04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCC04) < 0x57
	.space 0x57 - (. - gText_Rom_1DCC04)
	.endif
	@ data/maps/SlateportCity/scripts.inc:994 SlateportCity_Text_EveryoneCallsHimCaptStern
	.globl gText_Rom_1DCC5B
gText_Rom_1DCC5B: @ 0x081DCC5B
	.string "この はくぶつかんを つくったのは\nクスノキさん といって\pかいていを たんさくする せんすいていの\nかんちょう でも あるんだ!\pせんすいていの かんちょうで\nはくぶつかんの かんちょう……\pまあ どっちにせよ\nクスノキかんちょう と よんでおけば\lまちがい ないよな!{EOS}"
	.if (. - gText_Rom_1DCC5B) > 0x89
	.error "gText_Rom_1DCC5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCC5B) < 0x89
	.space 0x89 - (. - gText_Rom_1DCC5B)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1005 SlateportCity_Text_WhatsLongLineOverThere
	.globl gText_Rom_1DCCE4
gText_Rom_1DCCE4: @ 0x081DCCE4
	.string "なんなのかしら\nあの ぎょうれつ?{EOS}"
	.if (. - gText_Rom_1DCCE4) > 0x12
	.error "gText_Rom_1DCCE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCCE4) < 0x12
	.space 0x12 - (. - gText_Rom_1DCCE4)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1009 SlateportCity_Text_VisitedMuseumOften
	.globl gText_Rom_1DCCF6
gText_Rom_1DCCF6: @ 0x081DCCF6
	.string "この はくぶつかん には\nこどもの ころ わたしも よく きました\pかんないの てんじひんを みて\nうみの しんぴに あこがれた ものです{EOS}"
	.if (. - gText_Rom_1DCCF6) > 0x46
	.error "gText_Rom_1DCCF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCCF6) < 0x46
	.space 0x46 - (. - gText_Rom_1DCCF6)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1015 SlateportCity_Text_QuitPushing
	.globl gText_Rom_1DCD3C
gText_Rom_1DCD3C: @ 0x081DCD3C
	.string "ちょっと あんた! おさないでよ!\nじゅんばん なんだから!{EOS}"
	.if (. - gText_Rom_1DCD3C) > 0x1f
	.error "gText_Rom_1DCD3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCD3C) < 0x1f
	.space 0x1f - (. - gText_Rom_1DCD3C)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1019 SlateportCity_Text_AquaHasPolicy
	.globl gText_Rom_1DCD5B
gText_Rom_1DCD5B: @ 0x081DCD5B
	.string "おれたち アクアだんの ポリシーは\n「げんち しゅうごう」 そして\l「げんち かいさん」 なんだぜ!{EOS}"
	.if (. - gText_Rom_1DCD5B) > 0x33
	.error "gText_Rom_1DCD5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCD5B) < 0x33
	.space 0x33 - (. - gText_Rom_1DCD5B)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1024 SlateportCity_Text_BossIsBrilliant
	.globl gText_Rom_1DCD8E
gText_Rom_1DCD8E: @ 0x081DCD8E
	.string "リーダーほど あたまの いい ひとが\nいまさら はくぶつかんに\lなんの ようじが あるんだ……?{EOS}"
	.if (. - gText_Rom_1DCD8E) > 0x31
	.error "gText_Rom_1DCD8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCD8E) < 0x31
	.space 0x31 - (. - gText_Rom_1DCD8E)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1029 SlateportCity_Text_WhatsNewSchemeIWonder
	.globl gText_Rom_1DCDBF
gText_Rom_1DCDBF: @ 0x081DCDBF
	.string "こんどの さくせんは なんだろう?\pリーダーを おこらせると こわいから\nしっぱい したくないぜ……{EOS}"
	.if (. - gText_Rom_1DCDBF) > 0x33
	.error "gText_Rom_1DCDBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCDBF) < 0x33
	.space 0x33 - (. - gText_Rom_1DCDBF)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1034 SlateportCity_Text_ShouldTakeItAll
	.globl gText_Rom_1DCDF2
gText_Rom_1DCDF2: @ 0x081DCDF2
	.string "はくぶつかんに ほしいもの あるなら\nまるごと うばっちゃえば いいのに……{EOS}"
	.if (. - gText_Rom_1DCDF2) > 0x27
	.error "gText_Rom_1DCDF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCDF2) < 0x27
	.space 0x27 - (. - gText_Rom_1DCDF2)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1038 SlateportCity_Text_DontButtIn
	.globl gText_Rom_1DCE19
gText_Rom_1DCE19: @ 0x081DCE19
	.string "おい こら!\nじゅんばん ぬかすなよ!{EOS}"
	.if (. - gText_Rom_1DCE19) > 0x14
	.error "gText_Rom_1DCE19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCE19) < 0x14
	.space 0x14 - (. - gText_Rom_1DCE19)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1042 SlateportCity_Text_RemindsMeOfLongLineForGames
	.globl gText_Rom_1DCE2D
gText_Rom_1DCE2D: @ 0x081DCE2D
	.string "ぎょうれつ というと\nだいにんきの ゲームを かったときを\lおもいだすなあ……{EOS}"
	.if (. - gText_Rom_1DCE2D) > 0x28
	.error "gText_Rom_1DCE2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCE2D) < 0x28
	.space 0x28 - (. - gText_Rom_1DCE2D)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1047 SlateportCity_Text_WhyAreWeLiningUp
	.globl gText_Rom_1DCE55
gText_Rom_1DCE55: @ 0x081DCE55
	.string "まじめに おかね はらわずに\nむりやり はいれば いいのによ!{EOS}"
	.if (. - gText_Rom_1DCE55) > 0x20
	.error "gText_Rom_1DCE55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCE55) < 0x20
	.space 0x20 - (. - gText_Rom_1DCE55)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1051 SlateportCity_Text_WhatDoYouWant
	.globl gText_Rom_1DCE75
gText_Rom_1DCE75: @ 0x081DCE75
	.string "なんだ なんだ!?{EOS}"
	.if (. - gText_Rom_1DCE75) > 0xa
	.error "gText_Rom_1DCE75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCE75) < 0xa
	.space 0xa - (. - gText_Rom_1DCE75)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1054 SlateportCity_Text_IllReadSignForYou
	.globl gText_Rom_1DCE7F
gText_Rom_1DCE7F: @ 0x081DCE7F
	.string "おまえ このカンバンが よみたいのか?\nなら オレが かわりに よんでやらぁ!{EOS}"
	.if (. - gText_Rom_1DCE7F) > 0x28
	.error "gText_Rom_1DCE7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCE7F) < 0x28
	.space 0x28 - (. - gText_Rom_1DCE7F)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1058 SlateportCity_Text_SaysSomethingLikeSeaIsEndless
	.globl gText_Rom_1DCEA7
gText_Rom_1DCEA7: @ 0x081DCEA7
	.string "えーと……\p『てしない それは の の』\p……って かいて あるぜ!{EOS}"
	.if (. - gText_Rom_1DCEA7) > 0x23
	.error "gText_Rom_1DCEA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCEA7) < 0x23
	.space 0x23 - (. - gText_Rom_1DCEA7)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1063 SlateportCity_Text_ShouldveBroughtMyGameBoy
	.globl gText_Rom_1DCECA
gText_Rom_1DCECA: @ 0x081DCECA
	.string "ぶつぶつぶつ……\pゲームボーイが あれば\nぎょうれつも たいくつ しないぜ\pぶつぶつぶつ……{EOS}"
	.if (. - gText_Rom_1DCECA) > 0x2f
	.error "gText_Rom_1DCECA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCECA) < 0x2f
	.space 0x2f - (. - gText_Rom_1DCECA)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1069 SlateportCity_Text_HotSpringsAfterOperation
	.globl gText_Rom_1DCEF9
gText_Rom_1DCEF9: @ 0x081DCEF9
	.string "このさくせんが おわったら\nおんせんに つれていって やる!\pって リーダーが いってたんだ\nたのしみ だなぁ……{EOS}"
	.if (. - gText_Rom_1DCEF9) > 0x3a
	.error "gText_Rom_1DCEF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCEF9) < 0x3a
	.space 0x3a - (. - gText_Rom_1DCEF9)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1075 SlateportCity_Text_SeaIsSoWet
	.globl gText_Rom_1DCF33
gText_Rom_1DCF33: @ 0x081DCF33
	.string "うみって おおきいなあ……\pひょっとして うみって\nポケモンが ながした なみだで\lできてるのかなあ……{EOS}"
	.if (. - gText_Rom_1DCF33) > 0x35
	.error "gText_Rom_1DCF33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCF33) < 0x35
	.space 0x35 - (. - gText_Rom_1DCF33)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1081 SlateportCity_Text_SinkOldBoats
	.globl gText_Rom_1DCF68
gText_Rom_1DCF68: @ 0x081DCF68
	.string "ふるく なって のれない ふねは\nどうするか しって いるかね?\pうみの そこに しずめて\nポケモンの すみかに してやるのだよ!{EOS}"
	.if (. - gText_Rom_1DCF68) > 0x42
	.error "gText_Rom_1DCF68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCF68) < 0x42
	.space 0x42 - (. - gText_Rom_1DCF68)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1087 SlateportCity_Text_BuyTooMuch
	.globl gText_Rom_1DCFAA
gText_Rom_1DCFAA: @ 0x081DCFAA
	.string "ここに くると うれしくて\nつい たくさん かいもの しちゃう!{EOS}"
	.if (. - gText_Rom_1DCFAA) > 0x21
	.error "gText_Rom_1DCFAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCFAA) < 0x21
	.space 0x21 - (. - gText_Rom_1DCFAA)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1091 SlateportCity_Text_GetNameRaterToHelpYou
	.globl gText_Rom_1DCFCB
gText_Rom_1DCFCB: @ 0x081DCFCB
	.string "ポケモンの ニックネームを かえたいなら\nせいめい はんだんしに たのむんだね!{EOS}"
	.if (. - gText_Rom_1DCFCB) > 0x29
	.error "gText_Rom_1DCFCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCFCB) < 0x29
	.space 0x29 - (. - gText_Rom_1DCFCB)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1095 SlateportCity_Text_CantChangeTradeMonName
	.globl gText_Rom_1DCFF4
gText_Rom_1DCFF4: @ 0x081DCFF4
	.string "ひとと こうかんした ポケモンは\nニックネームを かえられないわよ!\pだって つけた ひとの きもちが\nこめられて いるんですもの!{EOS}"
	.if (. - gText_Rom_1DCFF4) > 0x43
	.error "gText_Rom_1DCFF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCFF4) < 0x43
	.space 0x43 - (. - gText_Rom_1DCFF4)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1101 SlateportCity_Text_BattleTentBuiltRecently
	.globl gText_Rom_1DD037
gText_Rom_1DD037: @ 0x081DD037
	.string "さいきん カイナには\nバトルテントが できたんだ\lジムも いいけど バトルテントも いいぜ!\pおまえも つよい ポケモン さがしに\nいって みなよ!{EOS}"
	.if (. - gText_Rom_1DD037) > 0x4b
	.error "gText_Rom_1DD037 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD037) < 0x4b
	.space 0x4b - (. - gText_Rom_1DD037)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1108 SlateportCity_Text_CaptSternBeingInterviewed
	.globl gText_Rom_1DD082
gText_Rom_1DD082: @ 0x081DD082
	.string "ゆうめいな スターが きていたら\nサインを もらうつもり だったのに\pインタビュー されてるのは\nあれ…… クスノキさん でないかい?{EOS}"
	.if (. - gText_Rom_1DD082) > 0x44
	.error "gText_Rom_1DD082 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD082) < 0x44
	.space 0x44 - (. - gText_Rom_1DD082)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1114 SlateportCity_Text_InterviewerSoCool
	.globl gText_Rom_1DD0C6
gText_Rom_1DD0C6: @ 0x081DD0C6
	.string "あの インタビュアーの おねえさん\nかっこよくて びじん!\pあたしも おおきく なったら\nこくさい ジャーナリストに なるわ!{EOS}"
	.if (. - gText_Rom_1DD0C6) > 0x40
	.error "gText_Rom_1DD0C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD0C6) < 0x40
	.space 0x40 - (. - gText_Rom_1DD0C6)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1120 SlateportCity_Text_SternSaysDiscoveredSomething
	.globl gText_Rom_1DD106
gText_Rom_1DD106: @ 0x081DD106
	.string "クスノキかんちょうは うみの そこで\nなにかを はっけん したんだって!\pなんだろなー? なんだろなー?{EOS}"
	.if (. - gText_Rom_1DD106) > 0x35
	.error "gText_Rom_1DD106 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD106) < 0x35
	.space 0x35 - (. - gText_Rom_1DD106)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1125 SlateportCity_Text_CaptainComeBackWithBigFish
	.globl gText_Rom_1DD13B
gText_Rom_1DD13B: @ 0x081DD13B
	.string "なんだ なんだ!?\pかんちょうは うみの そこから\nおおもの でも つりあげたのか?{EOS}"
	.if (. - gText_Rom_1DD13B) > 0x2b
	.error "gText_Rom_1DD13B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD13B) < 0x2b
	.space 0x2b - (. - gText_Rom_1DD13B)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1130 SlateportCity_Text_AmIOnTV
	.globl gText_Rom_1DD166
gText_Rom_1DD166: @ 0x081DD166
	.string "みんなー! みてるかー!\nおれも テレビに うつってるかー?{EOS}"
	.if (. - gText_Rom_1DD166) > 0x1f
	.error "gText_Rom_1DD166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD166) < 0x1f
	.space 0x1f - (. - gText_Rom_1DD166)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1134 SlateportCity_Text_CaptainsACelebrity
	.globl gText_Rom_1DD185
gText_Rom_1DD185: @ 0x081DD185
	.string "テレビが しゅざいに くる なんて\nかんちょうも ゆうめいじん ですなあ!{EOS}"
	.if (. - gText_Rom_1DD185) > 0x26
	.error "gText_Rom_1DD185 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD185) < 0x26
	.space 0x26 - (. - gText_Rom_1DD185)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1138 SlateportCity_Text_BigSmileForCamera
	.globl gText_Rom_1DD1AB
gText_Rom_1DD1AB: @ 0x081DD1AB
	.string "ダイ『はい クスノキさん\nそこで えがお!{EOS}"
	.if (. - gText_Rom_1DD1AB) > 0x16
	.error "gText_Rom_1DD1AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD1AB) < 0x16
	.space 0x16 - (. - gText_Rom_1DD1AB)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1142 SlateportCity_Text_MostInvaluableExperience
	.globl gText_Rom_1DD1C1
gText_Rom_1DD1C1: @ 0x081DD1C1
	.string "マリ『なるほど なるほど それは\nきちょうな たいけんを なさいましたね……{EOS}"
	.if (. - gText_Rom_1DD1C1) > 0x27
	.error "gText_Rom_1DD1C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD1C1) < 0x27
	.space 0x27 - (. - gText_Rom_1DD1C1)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1146 SlateportCity_Text_SternMoveAheadWithExploration
	.globl gText_Rom_1DD1E8
gText_Rom_1DD1E8: @ 0x081DD1E8
	.string "クスノキ『……というわけで こんごも\nちょうさは つづけて いきますよ!{EOS}"
	.if (. - gText_Rom_1DD1E8) > 0x25
	.error "gText_Rom_1DD1E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD1E8) < 0x25
	.space 0x25 - (. - gText_Rom_1DD1E8)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1150 SlateportCity_Text_GabbyWonderfulThanksForInterview
	.globl gText_Rom_1DD20D
gText_Rom_1DD20D: @ 0x081DD20D
	.string "マリ『そうですか いやあ クスノキさん!\nきょうは おいそがしい ところ\lどうも ありがとう ございました!\pまた なにか はっけんが ありましたら\nぜひ しゅざい させて くださいね!{EOS}"
	.if (. - gText_Rom_1DD20D) > 0x5e
	.error "gText_Rom_1DD20D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD20D) < 0x5e
	.space 0x5e - (. - gText_Rom_1DD20D)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1157 SlateportCity_Text_SternWhewFirstInterview
	.globl gText_Rom_1DD26B
gText_Rom_1DD26B: @ 0x081DD26B
	.string "クスノキ『ふう……\pテレビカメラに うつされる なんて\nはじめて だったから きんちょう したよ!{EOS}"
	.if (. - gText_Rom_1DD26B) > 0x32
	.error "gText_Rom_1DD26B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD26B) < 0x32
	.space 0x32 - (. - gText_Rom_1DD26B)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1162 SlateportCity_Text_OhPlayerWeMadeDiscovery
	.globl gText_Rom_1DD29D
gText_Rom_1DD29D: @ 0x081DD29D
	.string "おっ! {PLAYER}{KUN}\nげんきそう だね!\pこんかいの かいてい ちょうさで\nすごい はっけんを したんだよ!\p128ばん すいどうで\nおおむかしに ぜつめつ したと いわれる\lポケモンの すみかと おもわれる\lかいてい どうくつを みつけた……{EOS}"
	.if (. - gText_Rom_1DD29D) > 0x79
	.error "gText_Rom_1DD29D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD29D) < 0x79
	.space 0x79 - (. - gText_Rom_1DD29D)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1172 SlateportCity_Text_AquaWillAssumeControlOfSubmarine
	.globl gText_Rom_1DD316
gText_Rom_1DD316: @ 0x081DD316
	.string "『フフフ……\nクスノキかんちょう とやら\pきみの せんすいていは\nわれわれ アクアだんが いただく!\pきみたちは われわれに だまって\nきょうりょく すれば いいのだよ!\pフフフ……\nこれから アクアだんが なにを するか\lたのしみに していたまえ!』{EOS}"
	.if (. - gText_Rom_1DD316) > 0x7f
	.error "gText_Rom_1DD316 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD316) < 0x7f
	.space 0x7f - (. - gText_Rom_1DD316)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1183 SlateportCity_Text_SternWhatWasAllThat
	.globl gText_Rom_1DD395
gText_Rom_1DD395: @ 0x081DD395
	.string "クスノキ『いまの こえは……?\pだれかが かくせいきを つかって……\pどこから はなしてるんだ……?{EOS}"
	.if (. - gText_Rom_1DD395) > 0x33
	.error "gText_Rom_1DD395 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD395) < 0x33
	.space 0x33 - (. - gText_Rom_1DD395)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1188 SlateportCity_Text_FromHarborTryingToTakeSub
	.globl gText_Rom_1DD3C8
gText_Rom_1DD3C8: @ 0x081DD3C8
	.string "ふねのりばの なか!\pせんすいていが…… うばわれる……?{EOS}"
	.if (. - gText_Rom_1DD3C8) > 0x1e
	.error "gText_Rom_1DD3C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD3C8) < 0x1e
	.space 0x1e - (. - gText_Rom_1DD3C8)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1192 SlateportCity_Text_PleaseComeWithMe
	.globl gText_Rom_1DD3E6
gText_Rom_1DD3E6: @ 0x081DD3E6
	.string "{PLAYER}{KUN}!\nいっしょに きてくれ!{EOS}"
	.if (. - gText_Rom_1DD3E6) > 0x12
	.error "gText_Rom_1DD3E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD3E6) < 0x12
	.space 0x12 - (. - gText_Rom_1DD3E6)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1196 SlateportCity_Text_BattleTentSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1DD3F8
gText_Rom_1DD3F8: @ 0x081DD3F8
	.string "バトルテント カイナシティ かいじょう\nさがせ! さいきょう ポケモン{EOS}"
	.if (. - gText_Rom_1DD3F8) != 0x24
	.error "gText_Rom_1DD3F8 must retain its original byte length"
	.endif
	.globl gText_Rom_1DD417
	.set gText_Rom_1DD417, gText_Rom_1DD3F8 + 0x1f
	@ data/maps/SlateportCity/scripts.inc:1200 SlateportCity_Text_SternsShipyardWantedSign
	.globl gText_Rom_1DD41C
gText_Rom_1DD41C: @ 0x081DD41C
	.string "「クスノキ ぞうせんじょ」\pなみを じざいに あやつる ふなのり\nだいぼしゅう してます!{EOS}"
	.if (. - gText_Rom_1DD41C) > 0x2e
	.error "gText_Rom_1DD41C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD41C) < 0x2e
	.space 0x2e - (. - gText_Rom_1DD41C)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1205 SlateportCity_Text_SternsShipyardNearsCompletion
	.globl gText_Rom_1DD44A
gText_Rom_1DD44A: @ 0x081DD44A
	.string "「クスノキ ぞうせんじょ」\pカイナと ミナモを むすぶ\nれんらくせん タイドリップごうは\lかんせい まで あと わずか!{EOS}"
	.if (. - gText_Rom_1DD44A) > 0x3d
	.error "gText_Rom_1DD44A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD44A) < 0x3d
	.space 0x3d - (. - gText_Rom_1DD44A)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1211 SlateportCity_Text_SternsShipyardFerryComplete
	.globl gText_Rom_1DD487
gText_Rom_1DD487: @ 0x081DD487
	.string "「クスノキ ぞうせんじょ」\pれんらくせん タイドリップごうに\nじょうせんを きぼう される かたは\lふねのりば うけつけ まで どうぞ!{EOS}"
	.if (. - gText_Rom_1DD487) > 0x45
	.error "gText_Rom_1DD487 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD487) < 0x45
	.space 0x45 - (. - gText_Rom_1DD487)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1217 SlateportCity_Text_PokemonFanClubSign
	.globl gText_Rom_1DD4CC
gText_Rom_1DD4CC: @ 0x081DD4CC
	.string "「ポケモン だいすきクラブ」\nポケモンが すきなひと みんな あつまれ!{EOS}"
	.if (. - gText_Rom_1DD4CC) > 0x25
	.error "gText_Rom_1DD4CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD4CC) < 0x25
	.space 0x25 - (. - gText_Rom_1DD4CC)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1221 SlateportCity_Text_OceanicMuseumSign
	.globl gText_Rom_1DD4F1
gText_Rom_1DD4F1: @ 0x081DD4F1
	.string "はてしない うみ……\nそれは いのちの みなもと……\p「うみの かがく はくぶつかん」{EOS}"
	.if (. - gText_Rom_1DD4F1) > 0x2c
	.error "gText_Rom_1DD4F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD4F1) < 0x2c
	.space 0x2c - (. - gText_Rom_1DD4F1)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1226 SlateportCity_Text_CitySign
	.globl gText_Rom_1DD51D
gText_Rom_1DD51D: @ 0x081DD51D
	.string "ここは カイナ シティ\nヒトと ポケモンが いきかう みなと{EOS}"
	.if (. - gText_Rom_1DD51D) > 0x1f
	.error "gText_Rom_1DD51D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD51D) < 0x1f
	.space 0x1f - (. - gText_Rom_1DD51D)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1230 SlateportCity_Text_MarketSign
	.globl gText_Rom_1DD53C
gText_Rom_1DD53C: @ 0x081DD53C
	.string "「カイナ いちば」\nここでしか かえない もの たくさん!{EOS}"
	.if (. - gText_Rom_1DD53C) > 0x1e
	.error "gText_Rom_1DD53C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD53C) < 0x1e
	.space 0x1e - (. - gText_Rom_1DD53C)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1234 SlateportCity_Text_HarborFerryUnderConstruction
	.globl gText_Rom_1DD55A
gText_Rom_1DD55A: @ 0x081DD55A
	.string "「カイナ シティ ふねのりば」\pれんらくせん タイドリップごう は\nぞうせんじょ にて けんぞう ちゅう!\pもう しばらく おまちください!{EOS}"
	.if (. - gText_Rom_1DD55A) > 0x47
	.error "gText_Rom_1DD55A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD55A) < 0x47
	.space 0x47 - (. - gText_Rom_1DD55A)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1240 SlateportCity_Text_HarborSign
	.globl gText_Rom_1DD5A1
gText_Rom_1DD5A1: @ 0x081DD5A1
	.string "「カイナ シティ ふねのりば」\pれんらくせん タイドリップごうで\nふねの たびを おたのしみ ください!{EOS}"
	.if (. - gText_Rom_1DD5A1) > 0x35
	.error "gText_Rom_1DD5A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD5A1) < 0x35
	.space 0x35 - (. - gText_Rom_1DD5A1)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1245 SlateportCity_Text_NameRatersHouseSign
	.globl gText_Rom_1DD5D6
gText_Rom_1DD5D6: @ 0x081DD5D6
	.string "「せいめい はんだんし の いえ」\nポケモンの なまえ うらないます{EOS}"
	.if (. - gText_Rom_1DD5D6) > 0x23
	.error "gText_Rom_1DD5D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD5D6) < 0x23
	.space 0x23 - (. - gText_Rom_1DD5D6)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1249 SlateportCity_Text_ExplainBerries
	.globl gText_Rom_1DD5F9
gText_Rom_1DD5F9: @ 0x081DD5F9
	.string "きずついた やせいの ポケモンは\nきのみを かじって けがを なおすの\pしってた?\pそれを もくげきした だれかが\nきのみから くすりを つくることを\lおもいついたの\pしってた?\pきのみを くすりに するためには\nこなごなに くだいて こなにするの\pしってた?\pあなた……\nきのみに きょうみが ありそうね!\pいいものを あげるわ{EOS}"
	.if (. - gText_Rom_1DD5F9) > 0xa6
	.error "gText_Rom_1DD5F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD5F9) < 0xa6
	.space 0xa6 - (. - gText_Rom_1DD5F9)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1264 SlateportCity_Text_ExplainBerryPowder
	.globl gText_Rom_1DD69F
gText_Rom_1DD69F: @ 0x081DD69F
	.string "さいきん ポケモンセンターの 2かいの\nダイレクト コーナー というところに\lきのみを つぶす きかいを\lおいて もらったの\pしってた?\pそこで きのみの こなを つくってきて!\pきのみの こなを\nたくさん つくって きてくれたら\lいろいろな くすりを あげるわ{EOS}"
	.if (. - gText_Rom_1DD69F) > 0x84
	.error "gText_Rom_1DD69F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD69F) < 0x84
	.space 0x84 - (. - gText_Rom_1DD69F)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1275 SlateportCity_Text_BroughtMeSomeBerryPowder
	.globl gText_Rom_1DD723
gText_Rom_1DD723: @ 0x081DD723
	.string "きのみの こなを もってきたの?{EOS}"
	.if (. - gText_Rom_1DD723) > 0x11
	.error "gText_Rom_1DD723 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD723) < 0x11
	.space 0x11 - (. - gText_Rom_1DD723)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1278 SlateportCity_Text_ExchangeWhatWithIt
	.globl gText_Rom_1DD734
gText_Rom_1DD734: @ 0x081DD734
	.string "なにと こうかん しましょ?{EOS}"
	.if (. - gText_Rom_1DD734) > 0xf
	.error "gText_Rom_1DD734 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD734) < 0xf
	.space 0xf - (. - gText_Rom_1DD734)
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
	.globl gText_Rom_1DD753
gText_Rom_1DD753: @ 0x081DD753
	.string "あれま!?\nこなが たりない じゃないの!{EOS}"
	.if (. - gText_Rom_1DD753) > 0x16
	.error "gText_Rom_1DD753 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD753) < 0x16
	.space 0x16 - (. - gText_Rom_1DD753)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1289 SlateportCity_Text_FineBerryPowderTradeSomethingElse
	.globl gText_Rom_1DD769
gText_Rom_1DD769: @ 0x081DD769
	.string "まあ いいこな だこと!\pあなたが くれた こなで\nまた いいくすりを つくれるわ!\pほかにも なにか こうかんする?{EOS}"
	.if (. - gText_Rom_1DD769) > 0x3c
	.error "gText_Rom_1DD769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD769) < 0x3c
	.space 0x3c - (. - gText_Rom_1DD769)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1295 SlateportCity_Text_WhenYouGetMoreBringItToMe
	.globl gText_Rom_1DD7A5
gText_Rom_1DD7A5: @ 0x081DD7A5
	.string "そう\nこなが できたら また よろしくね!{EOS}"
	.if (. - gText_Rom_1DD7A5) > 0x16
	.error "gText_Rom_1DD7A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD7A5) < 0x16
	.space 0x16 - (. - gText_Rom_1DD7A5)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1299 SlateportCity_Text_ComeBackToTradeBerryPowder
	.globl gText_Rom_1DD7BB
gText_Rom_1DD7BB: @ 0x081DD7BB
	.string "くすりと こうかん したくなったら\nまた ここに くるのよ\pわたしが いつも\nおみせ だしてるから ね\pしってた?{EOS}"
	.if (. - gText_Rom_1DD7BB) > 0x3a
	.error "gText_Rom_1DD7BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD7BB) < 0x3a
	.space 0x3a - (. - gText_Rom_1DD7BB)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1306 SlateportCity_Text_YouDroveTeamAquaAway
	.globl gText_Rom_1DD7F5
gText_Rom_1DD7F5: @ 0x081DD7F5
	.string "エニシダ『……あれ?\nきみとは まえに どこかで あったよね\pじこしょうかい したっけ?\nわたしは エニシダ って いうんだ\pいま ここから アクアだんが\nにげだして いったけど\lもしかして きみが やっつけたの かい?{EOS}"
	.if (. - gText_Rom_1DD7F5) > 0x6f
	.error "gText_Rom_1DD7F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD7F5) < 0x6f
	.space 0x6f - (. - gText_Rom_1DD7F5)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1315 SlateportCity_Text_MaybeThisTrainer
	.globl gText_Rom_1DD864
gText_Rom_1DD864: @ 0x081DD864
	.string "エニシダ『うーむ これは\nひょっとして ひょっとすると……{EOS}"
	.if (. - gText_Rom_1DD864) > 0x1e
	.error "gText_Rom_1DD864 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD864) < 0x1e
	.space 0x1e - (. - gText_Rom_1DD864)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1319 SlateportCity_Text_LetsRegisterEachOther
	.globl gText_Rom_1DD882
gText_Rom_1DD882: @ 0x081DD882
	.string "エニシダ『……よっし!\nきみとは なかよく なれそう だから\lおたがい ポケナビに\lなまえを とうろく しておこう!\p…… …… ……{EOS}"
	.if (. - gText_Rom_1DD882) > 0x44
	.error "gText_Rom_1DD882 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD882) < 0x44
	.space 0x44 - (. - gText_Rom_1DD882)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1326 SlateportCity_Text_RegisteredScott
	.globl gText_Rom_1DD8C6
gText_Rom_1DD8C6: @ 0x081DD8C6
	.string "エニシダ という ひとを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_1DD8C6) > 0x1c
	.error "gText_Rom_1DD8C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD8C6) < 0x1c
	.space 0x1c - (. - gText_Rom_1DD8C6)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1330 SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou
	.globl gText_Rom_1DD8E2
gText_Rom_1DD8E2: @ 0x081DD8E2
	.string "エニシダ『ホントは きみに\nくっついて いきたい ところ だけど\lほかのひとの さいのうも きになるし\pもうすこし いろんな まちを\nたずね あるいて みるよ!\pじゃあね {PLAYER}{KUN}!{EOS}"
	.if (. - gText_Rom_1DD8E2) > 0x5c
	.error "gText_Rom_1DD8E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD8E2) < 0x5c
	.space 0x5c - (. - gText_Rom_1DD8E2)
	.endif
	@ data/maps/SlateportCity/scripts.inc:1338 SlateportCity_Text_TakingBattleTentChallenge
	.globl gText_Rom_1DD93E
gText_Rom_1DD93E: @ 0x081DD93E
	.string "エニシダ『お おおっと\n{PLAYER}{KUN}か!\p……もしかして {PLAYER}{KUN}\nバトルテントに ちょうせん するのかい?\pうん! それは いいことだな!\nものすごく いいことだ!\lバトルテントには つよい トレーナーが\lとっても ふさわしい からね\pじゃ がんばってね!{EOS}"
	.if (. - gText_Rom_1DD93E) > 0x80
	.error "gText_Rom_1DD93E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD93E) < 0x80
	.space 0x80 - (. - gText_Rom_1DD93E)
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
	loadword 0x00, gText_Rom_1DE4C1
	callstd 0x02
	end
.globl EventScript_JP_081DD9F5
EventScript_JP_081DD9F5: @ 0x081DD9F5
	loadword 0x00, gText_Rom_1DE509
	callstd 0x02
	end
.globl EventScript_JP_081DD9FE
EventScript_JP_081DD9FE: @ 0x081DD9FE
	loadword 0x00, gText_Rom_1DE53B
	callstd 0x02
	end
.globl EventScript_JP_081DDA07
EventScript_JP_081DDA07: @ 0x081DDA07
	loadword 0x00, gText_Rom_1DE578
	callstd 0x02
	end
.globl EventScript_JP_081DDA10
EventScript_JP_081DDA10: @ 0x081DDA10
	loadword 0x00, gText_Rom_1DE59B
	callstd 0x03
	end
.globl EventScript_JP_081DDA19
EventScript_JP_081DDA19: @ 0x081DDA19
	loadword 0x00, gText_Rom_1DE5BA
	callstd 0x03
	end
.globl EventScript_JP_081DDA22
EventScript_JP_081DDA22: @ 0x081DDA22
	loadword 0x00, gText_Rom_1DE5E4
	callstd 0x03
	end
.globl EventScript_JP_081DDA2B
EventScript_JP_081DDA2B: @ 0x081DDA2B
	loadword 0x00, gText_Rom_1DE608
	callstd 0x03
	end
.globl EventScript_JP_081DDA34
EventScript_JP_081DDA34: @ 0x081DDA34
	lock
	faceplayer
	checkflag 0x0062
	goto_if 0x01, EventScript_JP_081DDA4C
	loadword 0x00, gText_Rom_1DE62C
	callstd 0x04
	setflag 0x0062
	release
	end
EventScript_JP_081DDA4C: @ 0x081DDA4C
	loadword 0x00, gText_Rom_1DE6DE
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
	loadword 0x00, gText_Rom_1DDE15
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_081DDA76: @ 0x081DDA76
	loadword 0x00, gText_Rom_1DDFD3
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
	loadword 0x00, gText_Rom_1DDE51
	callstd 0x04
	loadword 0x00, gText_Rom_1DDE96
	callstd 0x04
	loadword 0x00, gText_Rom_1DDF00
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
	loadword 0x00, gText_Rom_1DDF37
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
	loadword 0x00, gText_Rom_1DE142
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
	loadword 0x00, gText_Rom_1DE142
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
	loadword 0x00, gText_Rom_1DE235
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
	loadword 0x00, gText_Rom_1DE040
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0290, 0x0000, gText_Rom_1DE05D
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DE085
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DE09E
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1DE0F4
	callstd 0x04
	return
EventScript_JP_081DDCBC: @ 0x081DDCBC
	setflag 0x011C
	loadword 0x00, gText_Rom_1DDF95
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
	loadword 0x00, gText_Rom_1DE01F
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
	loadword 0x00, gText_Rom_1DE2EE
	callstd 0x04
	setorcopyvar 0x8000, 0x010F
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x00D0
	loadword 0x00, gText_Rom_1DE3C9
	callstd 0x04
	release
	end
EventScript_JP_081DDDB3: @ 0x081DDDB3
	loadword 0x00, gText_Rom_1DE3C9
	callstd 0x04
	release
	end
EventScript_JP_081DDDBD: @ 0x081DDDBD
	loadword 0x00, gText_Rom_1DE432
	callstd 0x04
	setorcopyvar 0x8000, 0x0138
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00D1
	loadword 0x00, gText_Rom_1DE48F
	callstd 0x04
	release
	end
EventScript_JP_081DDDE9: @ 0x081DDDE9
	loadword 0x00, gText_Rom_1DE48F
	callstd 0x04
	release
	end
