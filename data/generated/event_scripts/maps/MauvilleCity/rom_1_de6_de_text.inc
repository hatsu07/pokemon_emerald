	@ data/maps/MauvilleCity/scripts.inc:462 MauvilleCity_Text_UncleHesTooPeppy
	.globl MauvilleCity_Text_UncleHesTooPeppy
MauvilleCity_Text_UncleHesTooPeppy: @ 0x081DDE15
	.string "おじさん『このこは ポケモンの おかげで\nげんきに なれたような もんだけど\lちょっと げんきに なりすぎ なんだ……{EOS}"
	.if (. - MauvilleCity_Text_UncleHesTooPeppy) > 0x3c
	.error "MauvilleCity_Text_UncleHesTooPeppy may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_UncleHesTooPeppy) < 0x3c
	.space 0x3c - (. - MauvilleCity_Text_UncleHesTooPeppy)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:467 MauvilleCity_Text_WallyWantToChallengeGym
	.globl MauvilleCity_Text_WallyWantToChallengeGym
MauvilleCity_Text_WallyWantToChallengeGym: @ 0x081DDE51
	.string "ミツル『おじさん おねがい だから!\pじぶんが どれくらい つよくなったか\nこのジムで ためして みたいんだ!\pね ね いいでしょう!?{EOS}"
	.if (. - MauvilleCity_Text_WallyWantToChallengeGym) > 0x45
	.error "MauvilleCity_Text_WallyWantToChallengeGym may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WallyWantToChallengeGym) < 0x45
	.space 0x45 - (. - MauvilleCity_Text_WallyWantToChallengeGym)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:473 MauvilleCity_Text_UncleYourePushingIt
	.globl MauvilleCity_Text_UncleYourePushingIt
MauvilleCity_Text_UncleYourePushingIt: @ 0x081DDE96
	.string "おじさん『まあまあ ミツルくん!\pたしかに ポケモンと いっしょに\nくらすように なってから\lきみは ずいぶん げんきに なった!\pだからって いきなり ポケモンジムに\nちょうせん なんて むり してないかい?{EOS}"
	.if (. - MauvilleCity_Text_UncleYourePushingIt) > 0x6a
	.error "MauvilleCity_Text_UncleYourePushingIt may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_UncleYourePushingIt) < 0x6a
	.space 0x6a - (. - MauvilleCity_Text_UncleYourePushingIt)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:481 MauvilleCity_Text_WallyWeCanBeatAnyone
	.globl MauvilleCity_Text_WallyWeCanBeatAnyone
MauvilleCity_Text_WallyWeCanBeatAnyone: @ 0x081DDF00
	.string "ミツル『むり なんか してません\pぼくと ラルトスが ちからを あわせれば\nだれにだって かてる はずです!{EOS}"
	.if (. - MauvilleCity_Text_WallyWeCanBeatAnyone) > 0x37
	.error "MauvilleCity_Text_WallyWeCanBeatAnyone may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WallyWeCanBeatAnyone) < 0x37
	.space 0x37 - (. - MauvilleCity_Text_WallyWeCanBeatAnyone)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:486 MauvilleCity_Text_WallyWillYouBattleMe
	.globl MauvilleCity_Text_WallyWillYouBattleMe
MauvilleCity_Text_WallyWillYouBattleMe: @ 0x081DDF37
	.string "ミツル『あっ! {PLAYER}さん!\pぼく あれから つよくなったんだ!\pそれを {PLAYER}さんにも\nおじさんにも わかって もらいたいんです!\p{PLAYER}さん おねがいです!\nぼくと しょうぶ してください{EOS}"
	.if (. - MauvilleCity_Text_WallyWillYouBattleMe) > 0x5e
	.error "MauvilleCity_Text_WallyWillYouBattleMe may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WallyWillYouBattleMe) < 0x5e
	.space 0x5e - (. - MauvilleCity_Text_WallyWillYouBattleMe)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:494 MauvilleCity_Text_WallyMyUncleWontKnowImStrong
	.globl MauvilleCity_Text_WallyMyUncleWontKnowImStrong
MauvilleCity_Text_WallyMyUncleWontKnowImStrong: @ 0x081DDF95
	.string "ミツル『{PLAYER}さんが\nぼくと しょうぶ してくれないと……\pおじさんに ぼくが つよくなったこと\nわかって もらえないよ……{EOS}"
	.if (. - MauvilleCity_Text_WallyMyUncleWontKnowImStrong) > 0x3e
	.error "MauvilleCity_Text_WallyMyUncleWontKnowImStrong may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WallyMyUncleWontKnowImStrong) < 0x3e
	.space 0x3e - (. - MauvilleCity_Text_WallyMyUncleWontKnowImStrong)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:500 MauvilleCity_Text_UncleCanYouBattleWally
	.globl MauvilleCity_Text_UncleCanYouBattleWally
MauvilleCity_Text_UncleCanYouBattleWally: @ 0x081DDFD3
	.string "おじさん『{PLAYER}{KUN}とやら\nわるいけど ミツルくんと\lしょうぶ してあげて くれないかな?\pこのままだと なにを いっても\nきいて もらえそうに ないよ{EOS}"
	.if (. - MauvilleCity_Text_UncleCanYouBattleWally) > 0x4c
	.error "MauvilleCity_Text_UncleCanYouBattleWally may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_UncleCanYouBattleWally) < 0x4c
	.space 0x4c - (. - MauvilleCity_Text_UncleCanYouBattleWally)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:507 MauvilleCity_Text_WallyPleaseBattleMe
	.globl MauvilleCity_Text_WallyPleaseBattleMe
MauvilleCity_Text_WallyPleaseBattleMe: @ 0x081DE01F
	.string "ミツル『{PLAYER}さん おねがいです!\nぼくと しょうぶ してください{EOS}"
	.if (. - MauvilleCity_Text_WallyPleaseBattleMe) > 0x21
	.error "MauvilleCity_Text_WallyPleaseBattleMe may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WallyPleaseBattleMe) < 0x21
	.space 0x21 - (. - MauvilleCity_Text_WallyPleaseBattleMe)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:511 MauvilleCity_Text_WallyHereICome
	.globl MauvilleCity_Text_WallyHereICome
MauvilleCity_Text_WallyHereICome: @ 0x081DE040
	.string "ミツル『ありがとう {PLAYER}さん\pそれでは…… いきますね!{EOS}"
	.if (. - MauvilleCity_Text_WallyHereICome) > 0x1d
	.error "MauvilleCity_Text_WallyHereICome may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WallyHereICome) < 0x1d
	.space 0x1d - (. - MauvilleCity_Text_WallyHereICome)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:515 MauvilleCity_Text_WallyDefeat (+1 aliases)
	.globl MauvilleCity_Text_WallyDefeat
MauvilleCity_Text_WallyDefeat: @ 0x081DE05D
	.string "ミツル『…… …… …… ……\p…… …… …… ……\pぼくの まけ です……{EOS}"
	.if (. - MauvilleCity_Text_WallyDefeat) > 0x28
	.error "MauvilleCity_Text_WallyDefeat may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WallyDefeat) < 0x28
	.space 0x28 - (. - MauvilleCity_Text_WallyDefeat)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:520 MauvilleCity_Text_WallyIllGoBackToVerdanturf
	.globl MauvilleCity_Text_WallyIllGoBackToVerdanturf
MauvilleCity_Text_WallyIllGoBackToVerdanturf: @ 0x081DE085
	.string "ミツル『おじさん……\nぼく シダケに もどります{EOS}"
	.if (. - MauvilleCity_Text_WallyIllGoBackToVerdanturf) > 0x19
	.error "MauvilleCity_Text_WallyIllGoBackToVerdanturf may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WallyIllGoBackToVerdanturf) < 0x19
	.space 0x19 - (. - MauvilleCity_Text_WallyIllGoBackToVerdanturf)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:524 MauvilleCity_Text_ThankYouNotEnoughToBattle
	.globl MauvilleCity_Text_ThankYouNotEnoughToBattle
MauvilleCity_Text_ThankYouNotEnoughToBattle: @ 0x081DE09E
	.string "{PLAYER}さん ありがとう\nやっぱり トレーナーって すごいんですね\pただ ポケモンを もっていて\nたたかわせる だけじゃ ほんとうの いみで\lトレーナーには なれないんだ……{EOS}"
	.if (. - MauvilleCity_Text_ThankYouNotEnoughToBattle) > 0x56
	.error "MauvilleCity_Text_ThankYouNotEnoughToBattle may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_ThankYouNotEnoughToBattle) < 0x56
	.space 0x56 - (. - MauvilleCity_Text_ThankYouNotEnoughToBattle)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:531 MauvilleCity_Text_UncleNoNeedToBeDown
	.globl MauvilleCity_Text_UncleNoNeedToBeDown
MauvilleCity_Text_UncleNoNeedToBeDown: @ 0x081DE0F4
	.string "おじさん『ミツルくん\nそんなに しょげることは ないよ\pこれから もっともっと\nつよくなれば いいじゃないか!\pさあ うちに かえろう\nみんな まってるよ{EOS}"
	.if (. - MauvilleCity_Text_UncleNoNeedToBeDown) > 0x4e
	.error "MauvilleCity_Text_UncleNoNeedToBeDown may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_UncleNoNeedToBeDown) < 0x4e
	.space 0x4e - (. - MauvilleCity_Text_UncleNoNeedToBeDown)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:539 MauvilleCity_Text_UncleVisitUsSometime
	.globl MauvilleCity_Text_UncleVisitUsSometime
MauvilleCity_Text_UncleVisitUsSometime: @ 0x081DE142
	.string "おじさん『なるほど ミツルくんが\nポケモンを つかまえるのを\lみまもって くれたのは {PLAYER}{KUN}!\lきみ だったんだね\pよかったら シダケにも\nあそびに きてくれないか?\lミツルくん きっと よろこぶから{EOS}"
	.if (. - MauvilleCity_Text_UncleVisitUsSometime) > 0x66
	.error "MauvilleCity_Text_UncleVisitUsSometime may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_UncleVisitUsSometime) < 0x66
	.space 0x66 - (. - MauvilleCity_Text_UncleVisitUsSometime)
	.endif

	@ data/maps/MauvilleCity/scripts.inc:549 MauvilleCity_Text_WallyPokenavCall
	.globl MauvilleCity_Text_WallyPokenavCall
MauvilleCity_Text_WallyPokenavCall: @ 0x081DE1A8
	.string "…… …… ……\n…… …… …… ピッ!\pミツル『あっ {PLAYER}さん!\nあのね おじさんが ぼくのために\lポケナビを てにいれて くれたんです!\pこれで いつでも {PLAYER}さんと\nれんらくが とれますね!\p…… …… ……\n…… …… …… ツー{EOS}"
	.if (. - MauvilleCity_Text_WallyPokenavCall) > 0x79
	.error "MauvilleCity_Text_WallyPokenavCall may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WallyPokenavCall) < 0x79
	.space 0x79 - (. - MauvilleCity_Text_WallyPokenavCall)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:560 MauvilleCity_Text_RegisteredWally
	.globl MauvilleCity_Text_RegisteredWally
MauvilleCity_Text_RegisteredWally: @ 0x081DE221
	.string "ミツルを\nポケナビに とうろく した!{EOS}"
	.if (. - MauvilleCity_Text_RegisteredWally) > 0x14
	.error "MauvilleCity_Text_RegisteredWally may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_RegisteredWally) < 0x14
	.space 0x14 - (. - MauvilleCity_Text_RegisteredWally)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:564 MauvilleCity_Text_ScottYouDidntHoldBack
	.globl MauvilleCity_Text_ScottYouDidntHoldBack
MauvilleCity_Text_ScottYouDidntHoldBack: @ 0x081DE235
	.string "エニシダ『へへ……\nいまの しょうぶ みていたよ!\pきみは あの ミツルくん とかいう\nしょうねんと ともだち なんだろう?\pそれなのに てかげん せずに たたかい\nみごとに うちまかした……\pうん! それでこそ ほんとうの\nポケモン しょうぶ と いうものだ!\pわたしは そういう トレーナーが\nだいすきだなー!\p…… …… ……\nこれからも おうえん しているよ!{EOS}"
	.if (. - MauvilleCity_Text_ScottYouDidntHoldBack) > 0xb9
	.error "MauvilleCity_Text_ScottYouDidntHoldBack may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_ScottYouDidntHoldBack) < 0xb9
	.space 0xb9 - (. - MauvilleCity_Text_ScottYouDidntHoldBack)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:578 MauvilleCity_Text_WattsonNeedFavorTakeKey
	.globl MauvilleCity_Text_WattsonNeedFavorTakeKey
MauvilleCity_Text_WattsonNeedFavorTakeKey: @ 0x081DE2EE
	.string "テッセン『おお {PLAYER}{KUN}\nげんきそうに しておるのう\lわっはははは! いいこと じゃよ!\pよしっ! きめた!\n{PLAYER}{KUN}に おねがいを するぞい!\pじつは この キンセツには\nニューキンセツ という ちかとしが ある\pで {PLAYER}{KUN} には\nそこの はつでんそうちの スイッチを\lきってきて ほしいんじゃよ!\pさいきん はつでんそうちが\nぼうそうぎみで なにかと あぶないからのう\pほら これが ニューキンセツの\nとびらを あける カギじゃ!{EOS}"
	.if (. - MauvilleCity_Text_WattsonNeedFavorTakeKey) > 0xdb
	.error "MauvilleCity_Text_WattsonNeedFavorTakeKey may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WattsonNeedFavorTakeKey) < 0xdb
	.space 0xdb - (. - MauvilleCity_Text_WattsonNeedFavorTakeKey)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:594 MauvilleCity_Text_WattsonWontBeChallenge
	.globl MauvilleCity_Text_WattsonWontBeChallenge
MauvilleCity_Text_WattsonWontBeChallenge: @ 0x081DE3C9
	.string "テッセン『なーに\nおまえさんなら だいじょうぶ じゃ\pちなみに ニューキンセツの いりぐちは\n110ばんどうろで なみのりを して\lすぐの ところに あるからのう\pでは よろしく たのんだぞ!\nわっはははは!{EOS}"
	.if (. - MauvilleCity_Text_WattsonWontBeChallenge) > 0x69
	.error "MauvilleCity_Text_WattsonWontBeChallenge may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WattsonWontBeChallenge) < 0x69
	.space 0x69 - (. - MauvilleCity_Text_WattsonWontBeChallenge)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:603 MauvilleCity_Text_WattsonThanksTakeTM
	.globl MauvilleCity_Text_WattsonThanksTakeTM
MauvilleCity_Text_WattsonThanksTakeTM: @ 0x081DE432
	.string "テッセン『わっはははは!\pさすがは {PLAYER}{KUN}! おまえさんに\nたのんで せいかい じゃったよ!\pこれは おれいじゃ\n10まんボルトの わざマシン\lえんりょせずに もっていくが いいぞ!{EOS}"
	.if (. - MauvilleCity_Text_WattsonThanksTakeTM) > 0x5d
	.error "MauvilleCity_Text_WattsonThanksTakeTM may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WattsonThanksTakeTM) < 0x5d
	.space 0x5d - (. - MauvilleCity_Text_WattsonThanksTakeTM)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:611 MauvilleCity_Text_WattsonYoungTakeCharge
	.globl MauvilleCity_Text_WattsonYoungTakeCharge
MauvilleCity_Text_WattsonYoungTakeCharge: @ 0x081DE48F
	.string "テッセン『わっはははは!\pわかものの たのもしい すがたを みるのは\nよろこばしい こと じゃな!{EOS}"
	.if (. - MauvilleCity_Text_WattsonYoungTakeCharge) > 0x32
	.error "MauvilleCity_Text_WattsonYoungTakeCharge may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_WattsonYoungTakeCharge) < 0x32
	.space 0x32 - (. - MauvilleCity_Text_WattsonYoungTakeCharge)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:616 MauvilleCity_Text_NurseHurtMonBackToHealth
	.globl MauvilleCity_Text_NurseHurtMonBackToHealth
MauvilleCity_Text_NurseHurtMonBackToHealth: @ 0x081DE4C1
	.string "ポケモンしょうぶを するのも いいけど\pもしも じぶんの ポケモンが\nたたかいで きずついたり したなら\lやさしく いたわって あげなきゃね!{EOS}"
	.if (. - MauvilleCity_Text_NurseHurtMonBackToHealth) > 0x48
	.error "MauvilleCity_Text_NurseHurtMonBackToHealth may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_NurseHurtMonBackToHealth) < 0x48
	.space 0x48 - (. - MauvilleCity_Text_NurseHurtMonBackToHealth)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:622 MauvilleCity_Text_AllSortsOfPeopleComeThrough
	.globl MauvilleCity_Text_AllSortsOfPeopleComeThrough
MauvilleCity_Text_AllSortsOfPeopleComeThrough: @ 0x081DE509
	.string "この まちは とうざい なんぼく に\nみちが つうじて いるから\lいろんな ひとが やってきます!{EOS}"
	.if (. - MauvilleCity_Text_AllSortsOfPeopleComeThrough) > 0x32
	.error "MauvilleCity_Text_AllSortsOfPeopleComeThrough may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_AllSortsOfPeopleComeThrough) < 0x32
	.space 0x32 - (. - MauvilleCity_Text_AllSortsOfPeopleComeThrough)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:627 MauvilleCity_Text_RydelVeryGenerous
	.globl MauvilleCity_Text_RydelVeryGenerous
MauvilleCity_Text_RydelVeryGenerous: @ 0x081DE53B
	.string "あなた サイクルショップ には\nもう いってみた?\pあそこの ごしゅじんの カゼノさんは\nすごく きまえが いいのよね!{EOS}"
	.if (. - MauvilleCity_Text_RydelVeryGenerous) > 0x3d
	.error "MauvilleCity_Text_RydelVeryGenerous may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_RydelVeryGenerous) < 0x3d
	.space 0x3d - (. - MauvilleCity_Text_RydelVeryGenerous)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:633 MauvilleCity_Text_PokemonCanJumpYouOnBike
	.globl MauvilleCity_Text_PokemonCanJumpYouOnBike
MauvilleCity_Text_PokemonCanJumpYouOnBike: @ 0x081DE578
	.string "じてんしゃに のっていても\nやせいの ポケモンは とびだしてくるよ!{EOS}"
	.if (. - MauvilleCity_Text_PokemonCanJumpYouOnBike) > 0x23
	.error "MauvilleCity_Text_PokemonCanJumpYouOnBike may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_PokemonCanJumpYouOnBike) < 0x23
	.space 0x23 - (. - MauvilleCity_Text_PokemonCanJumpYouOnBike)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:637 MauvilleCity_Text_CitySign
	.globl MauvilleCity_Text_CitySign
MauvilleCity_Text_CitySign: @ 0x081DE59B
	.string "ここは キンセツ シティ\nあかるく かがやく たのしい まち{EOS}"
	.if (. - MauvilleCity_Text_CitySign) > 0x1f
	.error "MauvilleCity_Text_CitySign may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_CitySign) < 0x1f
	.space 0x1f - (. - MauvilleCity_Text_CitySign)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:641 MauvilleCity_Text_GymSign
	.globl MauvilleCity_Text_GymSign
MauvilleCity_Text_GymSign: @ 0x081DE5BA
	.string "キンセツ シティ ポケモンジム\nリーダー テッセン\lあっかるい でんげき オヤジ!{EOS}"
	.if (. - MauvilleCity_Text_GymSign) > 0x2a
	.error "MauvilleCity_Text_GymSign may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_GymSign) < 0x2a
	.space 0x2a - (. - MauvilleCity_Text_GymSign)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:646 MauvilleCity_Text_BikeShopSign
	.globl MauvilleCity_Text_BikeShopSign
MauvilleCity_Text_BikeShopSign: @ 0x081DE5E4
	.string "じゃりみち はしれば こころも はずむ!\n「サイクルショップ カゼノ」{EOS}"
	.if (. - MauvilleCity_Text_BikeShopSign) > 0x24
	.error "MauvilleCity_Text_BikeShopSign may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_BikeShopSign) < 0x24
	.space 0x24 - (. - MauvilleCity_Text_BikeShopSign)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:650 MauvilleCity_Text_GameCornerSign
	.globl MauvilleCity_Text_GameCornerSign
MauvilleCity_Text_GameCornerSign: @ 0x081DE608
	.string "だれもが あそべる すてきな スポット!\n「キンセツ ゲームコーナー」{EOS}"
	.if (. - MauvilleCity_Text_GameCornerSign) > 0x24
	.error "MauvilleCity_Text_GameCornerSign may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_GameCornerSign) < 0x24
	.space 0x24 - (. - MauvilleCity_Text_GameCornerSign)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:654 MauvilleCity_Text_ExplainTV
	.globl MauvilleCity_Text_ExplainTV
MauvilleCity_Text_ExplainTV: @ 0x081DE62C
	.string "ねえ きみ\nテレビって チェック してるかい?\pさいきんに なって おもしろい\nばんぐみが きゅうに ふえたんだぜ!\pいいよね テレビって\nいきなり ともだちの ことが\lしょうかい されたり\pしらない うちに じぶんが\nテレビに でていたり するんだよ\pこんど ぼくも テレビに\nうつんない かなー\pきみも こんどから\nちゃんと チェックを してみなよ!{EOS}"
	.if (. - MauvilleCity_Text_ExplainTV) > 0xb2
	.error "MauvilleCity_Text_ExplainTV may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_ExplainTV) < 0xb2
	.space 0xb2 - (. - MauvilleCity_Text_ExplainTV)
	.endif
	@ data/maps/MauvilleCity/scripts.inc:669 MauvilleCity_Text_BeenCheckingOutTV
	.globl MauvilleCity_Text_BeenCheckingOutTV
MauvilleCity_Text_BeenCheckingOutTV: @ 0x081DE6DE
	.string "やあ!\nテレビは ちゃんと チェック してる?{EOS}"
	.if (. - MauvilleCity_Text_BeenCheckingOutTV) > 0x18
	.error "MauvilleCity_Text_BeenCheckingOutTV may not grow beyond its original slot"
	.endif
	.if (. - MauvilleCity_Text_BeenCheckingOutTV) < 0x18
	.space 0x18 - (. - MauvilleCity_Text_BeenCheckingOutTV)
	.endif
	@ analyzed canonical ROM range 0x081DE6F6-0x081DF277
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_RustboroCity_OnTransition_OnFrame: @ 0x081DE6F6
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081DE701
	.byte 0x02
	.4byte gMapScriptConditionTable_RustboroCity_OnFrame
	.byte 0
EventScript_JP_081DE701: @ 0x081DE701
	setflag 0x0879
	call 0x08242F63
	compare_var_to_value 0x405A, 0x0006
	call_if 0x01, EventScript_JP_081DE740
	getplayerxy 0x4000, 0x4001
	compare_var_to_value 0x405A, 0x0006
	goto_if 0x01, EventScript_JP_081DE725
	end
EventScript_JP_081DE725: @ 0x081DE725
	compare_var_to_value 0x4000, 0x000B
	goto_if 0x01, EventScript_JP_081DE738
	setobjectxyperm 0x000F, 0x000C, 0x000F
	end
EventScript_JP_081DE738: @ 0x081DE738
	setobjectxyperm 0x000F, 0x000B, 0x000F
	end
EventScript_JP_081DE740: @ 0x081DE740
	setflag 0x4000
	return
gMapScriptConditionTable_RustboroCity_OnFrame: @ 0x081DE744
	@ conditional map script table
	.2byte 0x405A, 0x0006
	.4byte EventScript_JP_081DE74E
	.2byte 0
EventScript_JP_081DE74E: @ 0x081DE74E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x4063, 0x0001
	@ event command: applymovement
	applymovement 0x00FF, MauvilleCity_Movement_WalkDown_1
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0009
	delay 0x000A
	@ event command: addobject
	addobject 0x000F
	@ event command: applymovement
	applymovement 0x000F, MauvilleCity_Movement_WalkDown_Delay16
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000F, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000F, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000F, MauvilleCity_Movement_WalkInPlaceDown
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, RustboroCity_Text_DevelopedNewPokenavFeature
	callstd 0x04
	closemessage
	setflag 0x012F
	@ event command: applymovement
	applymovement 0x000F, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0024
	delay 0x000A
	playse 0x0024
	delay 0x000A
	playse 0x0024
	delay 0x000A
	playse 0x0024
	delay 0x0014
	@ event command: applymovement
	applymovement 0x000F, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, RustboroCity_Text_AddedMatchCallPleaseCallMrStone
	callstd 0x04
	closemessage
	delay 0x0014
	goto EventScript_JP_081DE7F6
EventScript_JP_081DE7E5: @ 0x081DE7E5
	loadword 0x00, RustboroCity_Text_PleaseSelectPokenav
	callstd 0x04
	closemessage
	delay 0x000A
	goto EventScript_JP_081DE7F6
EventScript_JP_081DE7F6: @ 0x081DE7F6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x0130
	@ event command: special
	special convert_pixel_width_to_tile_width
	waitstate
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScript_JP_081DE7E5
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081DE7E5
	@ event command: special
	special OpenPokenavForTutorial
	waitstate
	delay 0x0014
	loadword 0x00, RustboroCity_Text_IdBetterGetBackToWork
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000F, MauvilleCity_Movement_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0009
	@ event command: removeobject
	removeobject 0x000F
	setflag 0x034C
	setvar 0x405A, 0x0007
	clearflag 0x4000
	releaseall
	end
MauvilleCity_Movement_WalkInPlaceDown: @ 0x081DE887
	@ object movement sequence
	walk_in_place_down
	step_end
MauvilleCity_Movement_WalkDown_1: @ 0x081DE889
	@ object movement sequence
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_Delay16: @ 0x081DE88B
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_down
	delay_16
	step_end
	.globl MauvilleCity_Movement_Delay16_WalkLeft_WalkDownX2_WalkRight_WalkInPlaceFastestUp_Delay16
MauvilleCity_Movement_Delay16_WalkLeft_WalkDownX2_WalkRight_WalkInPlaceFastestUp_Delay16: @ 0x081DE88E
	.byte 0x14, 0x0A, 0x08, 0x08, 0x0B, 0x26, 0x14, 0xFE
MauvilleCity_Movement_WalkUp: @ 0x081DE896
	@ object movement sequence
	walk_up
	step_end
.globl EventScript_JP_081DE898
EventScript_JP_081DE898: @ 0x081DE898
	lock
	faceplayer
	checkflag 0x008E
	goto_if 0x01, EventScript_JP_081DE8AD
	loadword 0x00, RustboroCity_Text_WeShortenItToDevon
	callstd 0x04
	release
	end
EventScript_JP_081DE8AD: @ 0x081DE8AD
	loadword 0x00, RustboroCity_Text_SneakyLookingManWentAroundCorner
	callstd 0x04
	release
	end
.globl EventScript_JP_081DE8B7
EventScript_JP_081DE8B7: @ 0x081DE8B7
	lock
	faceplayer
	loadword 0x00, RustboroCity_Text_YoureNewAroundHere
	callstd 0x04
	release
	end
.globl EventScript_JP_081DE8C3
EventScript_JP_081DE8C3: @ 0x081DE8C3
	loadword 0x00, RustboroCity_Text_GymLeaderIsntEasyWithFire
	callstd 0x02
	end
.globl EventScript_JP_081DE8CC
EventScript_JP_081DE8CC: @ 0x081DE8CC
	lock
	faceplayer
	checkflag 0x0867
	goto_if 0x01, EventScript_JP_081DE8E1
	loadword 0x00, RustboroCity_Text_HaveYouChallengedGym
	callstd 0x04
	release
	end
EventScript_JP_081DE8E1: @ 0x081DE8E1
	loadword 0x00, RustboroCity_Text_HeyThatsRustborosGymBadge
	callstd 0x04
	release
	end
.globl EventScript_JP_081DE8EB
EventScript_JP_081DE8EB: @ 0x081DE8EB
	lock
	faceplayer
	checkflag 0x00BC
	goto_if 0x01, EventScript_JP_081DE900
	loadword 0x00, RustboroCity_Text_MrBrineyWalksInTheTunnel
	callstd 0x04
	release
	end
EventScript_JP_081DE900: @ 0x081DE900
	loadword 0x00, RustboroCity_Text_MrBrineyLovesPeeko
	callstd 0x04
	release
	end
.globl EventScript_JP_081DE90A
EventScript_JP_081DE90A: @ 0x081DE90A
	loadword 0x00, RustboroCity_Text_WowYouHavePokemon
	callstd 0x02
	end
.globl EventScript_JP_081DE913
EventScript_JP_081DE913: @ 0x081DE913
	loadword 0x00, RustboroCity_Text_CatchRarePokemonIfIGoToSchool
	callstd 0x03
	end
.globl EventScript_JP_081DE91C
EventScript_JP_081DE91C: @ 0x081DE91C
	loadword 0x00, RustboroCity_Text_TunnelNearingCompletion
	callstd 0x03
	end
.globl EventScript_JP_081DE925
EventScript_JP_081DE925: @ 0x081DE925
	loadword 0x00, RustboroCity_Text_DevonCorpSign
	callstd 0x03
	end
.globl EventScript_JP_081DE92E
EventScript_JP_081DE92E: @ 0x081DE92E
	loadword 0x00, RustboroCity_Text_GymSign
	callstd 0x03
	end
	.byte 0x0F, 0x00
	.4byte RustboroCity_Text_DevonCorpBranchOfficeSign
	.byte 0x09, 0x03, 0x02
.globl EventScript_JP_081DE940
EventScript_JP_081DE940: @ 0x081DE940
	loadword 0x00, RustboroCity_Text_CitySign
	callstd 0x03
	end
.globl EventScript_JP_081DE949
EventScript_JP_081DE949: @ 0x081DE949
	loadword 0x00, RustboroCity_Text_TrainersSchoolSign
	callstd 0x03
	end
.globl EventScript_JP_081DE952
EventScript_JP_081DE952: @ 0x081DE952
	loadword 0x00, RustboroCity_Text_CuttersHouse
	callstd 0x03
	end
.globl EventScript_JP_081DE95B
EventScript_JP_081DE95B: @ 0x081DE95B
	lock
	faceplayer
	loadword 0x00, RustboroCity_Text_PokemonCanChangeLookFromExp
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DE971
EventScript_JP_081DE971: @ 0x081DE971
	lock
	faceplayer
	loadword 0x00, RustboroCity_Text_PokemonChangeShape
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0008, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081DE987
EventScript_JP_081DE987: @ 0x081DE987
	lock
	faceplayer
	loadword 0x00, RustboroCity_Text_TradePokemonGrowFast
	callstd 0x04
	release
	end
.globl EventScript_JP_081DE993
EventScript_JP_081DE993: @ 0x081DE993
	lockall
	setobjectxyperm 0x0009, 0x000E, 0x0015
	setobjectmovementtype 0x0009, 0x0A
	setvar 0x8004, 0x0000
	goto EventScript_JP_081DEA06
	.byte 0x02
.globl EventScript_JP_081DE9AA
EventScript_JP_081DE9AA: @ 0x081DE9AA
	lockall
	setobjectxyperm 0x0009, 0x000E, 0x0015
	setobjectmovementtype 0x0009, 0x0A
	setvar 0x8004, 0x0001
	goto EventScript_JP_081DEA06
	.byte 0x02
.globl EventScript_JP_081DE9C1
EventScript_JP_081DE9C1: @ 0x081DE9C1
	lockall
	setobjectxyperm 0x0009, 0x000E, 0x0015
	setobjectmovementtype 0x0009, 0x0A
	setvar 0x8004, 0x0002
	goto EventScript_JP_081DEA06
	.byte 0x02
.globl EventScript_JP_081DE9D8
EventScript_JP_081DE9D8: @ 0x081DE9D8
	lockall
	setobjectxyperm 0x0009, 0x000E, 0x0015
	setobjectmovementtype 0x0009, 0x0A
	setvar 0x8004, 0x0003
	goto EventScript_JP_081DEA06
	.byte 0x02
.globl EventScript_JP_081DE9EF
EventScript_JP_081DE9EF: @ 0x081DE9EF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setobjectxyperm 0x0009, 0x000E, 0x0015
	setobjectmovementtype 0x0009, 0x0A
	setvar 0x8004, 0x0004
	goto EventScript_JP_081DEA06
	.byte 0x02
EventScript_JP_081DEA06: @ 0x081DEA06
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, RustboroCity_Text_OutOfTheWay
	callstd 0x04
	closemessage
	playbgm 0x01A3, 0x00
	@ event command: addobject
	addobject 0x000A
	@ event command: addobject
	addobject 0x0009
	@ event command: applymovement
	applymovement 0x000A, MauvilleCity_Movement_WalkFastestRightX2_WalkFastRightX5_WalkFastUpX9
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x000A
	@ event command: applymovement
	applymovement 0x0009, MauvilleCity_Movement_WalkRightX6_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, RustboroCity_Text_WaitDontTakeMyGoods
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0009, MauvilleCity_Movement_WalkUpX7
	@ event command: waitmovement
	waitmovement 0x0000
	fadedefaultbgm
	@ event command: removeobject
	removeobject 0x0009
	setobjectxyperm 0x0009, 0x001E, 0x000A
	clearflag 0x02DC
	setflag 0x008E
	setvar 0x405A, 0x0002
	setvar 0x409A, 0x0002
	setvar 0x406F, 0x0001
	clearflag 0x037B
	clearflag 0x0370
	clearflag 0x036E
	setflag 0x02E3
	setflag 0x0371
	releaseall
	end
	.byte 0x0F, 0x00, 0x44, 0xF6, 0x1D, 0x08, 0x09, 0x04, 0x03, 0x0F, 0x00, 0x71, 0xF6, 0x1D, 0x08, 0x09
	.byte 0x04, 0x03, 0x4F, 0x09, 0x00, 0xFA, 0xEA, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x09, 0x00
	.byte 0xFE, 0xEA, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x09, 0x00, 0x03, 0xEB, 0x1D, 0x08, 0x51
	.byte 0x00, 0x00, 0x03, 0x4F, 0x09, 0x00, 0x08, 0xEB, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x09
	.byte 0x00, 0x0E, 0xEB, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x4F, 0xFF, 0x00, 0x29, 0x36, 0x24, 0x08, 0x51
	.byte 0x00, 0x00, 0x03, 0x30, 0x30, 0x18, 0x18, 0x18, 0x18, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16
	.byte 0x16, 0x16, 0x16, 0x16, 0xFE
MauvilleCity_Movement_WalkFastestRightX2_WalkFastRightX5_WalkFastUpX9: @ 0x081DEAD9
	@ object movement sequence
	walk_fastest_right
	walk_fastest_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end
MauvilleCity_Movement_WalkRightX6_WalkInPlaceFastestUp: @ 0x081DEAEA
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
MauvilleCity_Movement_WalkUpX7: @ 0x081DEAF2
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
	.globl MauvilleCity_Movement_WalkDown_WalkRightX2
MauvilleCity_Movement_WalkDown_WalkRightX2: @ 0x081DEAFA
	.byte 0x08, 0x0B, 0x0B, 0xFE
	.globl MauvilleCity_Movement_WalkDownX2_WalkRightX2
MauvilleCity_Movement_WalkDownX2_WalkRightX2: @ 0x081DEAFE
	.byte 0x08, 0x08, 0x0B, 0x0B, 0xFE
	.globl MauvilleCity_Movement_WalkDownX2_WalkRightX2_1
MauvilleCity_Movement_WalkDownX2_WalkRightX2_1: @ 0x081DEB03
	.byte 0x08, 0x08, 0x0B, 0x0B, 0xFE
	.globl MauvilleCity_Movement_WalkDownX3_WalkRightX2
MauvilleCity_Movement_WalkDownX3_WalkRightX2: @ 0x081DEB08
	.byte 0x08, 0x08
	.byte 0x08, 0x0B, 0x0B, 0xFE
	.globl MauvilleCity_Movement_WalkDownX3_WalkRightX3_WalkInPlaceFastestDown
MauvilleCity_Movement_WalkDownX3_WalkRightX3_WalkInPlaceFastestDown: @ 0x081DEB0E
	.byte 0x08, 0x08, 0x08, 0x0B, 0x0B, 0x0B, 0x25, 0xFE
.globl EventScript_JP_081DEB16
EventScript_JP_081DEB16: @ 0x081DEB16
	lock
	faceplayer
	checkflag 0x008F
	goto_if 0x01, EventScript_JP_081DEB2B
	loadword 0x00, RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel
	callstd 0x04
	release
	end
EventScript_JP_081DEB2B: @ 0x081DEB2B
	waitse
	setvar 0x4001, 0x0004
	goto EventScript_JP_081DEC94
	.byte 0x02
.globl EventScript_JP_081DEB37
EventScript_JP_081DEB37: @ 0x081DEB37
	lockall
	setvar 0x4001, 0x0000
	goto EventScript_JP_081DEB67
	.byte 0x02
.globl EventScript_JP_081DEB43
EventScript_JP_081DEB43: @ 0x081DEB43
	lockall
	setvar 0x4001, 0x0001
	goto EventScript_JP_081DEB67
	.byte 0x02
.globl EventScript_JP_081DEB4F
EventScript_JP_081DEB4F: @ 0x081DEB4F
	lockall
	setvar 0x4001, 0x0002
	goto EventScript_JP_081DEB67
	.byte 0x02
.globl EventScript_JP_081DEB5B
EventScript_JP_081DEB5B: @ 0x081DEB5B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x4001, 0x0003
	goto EventScript_JP_081DEB67
	.byte 0x02
EventScript_JP_081DEB67: @ 0x081DEB67
	compare_var_to_value 0x4001, 0x0000
	call_if 0x01, EventScript_JP_081DEBA8
	compare_var_to_value 0x4001, 0x0001
	call_if 0x01, EventScript_JP_081DEBD4
	compare_var_to_value 0x4001, 0x0002
	call_if 0x01, EventScript_JP_081DEC00
	compare_var_to_value 0x4001, 0x0003
	call_if 0x01, EventScript_JP_081DEC2C
	setflag 0x009F
	setvar 0x405A, 0x0003
	moveobjectoffscreen 0x0009
	loadword 0x00, RustboroCity_Text_HelpMeIWasRobbed
	callstd 0x04
	releaseall
	end
EventScript_JP_081DEBA8: @ 0x081DEBA8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DEBD4: @ 0x081DEBD4
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, Movement_0824362F
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DEC00: @ 0x081DEC00
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DEC2C: @ 0x081DEC2C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, MauvilleCity_Movement_WalkDown_2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
MauvilleCity_Movement_WalkDown_2: @ 0x081DEC62
	@ object movement sequence
	walk_down
	step_end
.globl EventScript_JP_081DEC64
EventScript_JP_081DEC64: @ 0x081DEC64
	lockall
	setvar 0x4001, 0x0000
	goto EventScript_JP_081DEC94
	.byte 0x02
.globl EventScript_JP_081DEC70
EventScript_JP_081DEC70: @ 0x081DEC70
	lockall
	setvar 0x4001, 0x0001
	goto EventScript_JP_081DEC94
	.byte 0x02
.globl EventScript_JP_081DEC7C
EventScript_JP_081DEC7C: @ 0x081DEC7C
	lockall
	setvar 0x4001, 0x0002
	goto EventScript_JP_081DEC94
	.byte 0x02
.globl EventScript_JP_081DEC88
EventScript_JP_081DEC88: @ 0x081DEC88
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x4001, 0x0003
	goto EventScript_JP_081DEC94
	.byte 0x02
EventScript_JP_081DEC94: @ 0x081DEC94
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x4001, 0x0000
	call_if 0x01, EventScript_JP_081DED15
	compare_var_to_value 0x4001, 0x0001
	call_if 0x01, EventScript_JP_081DED41
	compare_var_to_value 0x4001, 0x0002
	call_if 0x01, EventScript_JP_081DED6D
	compare_var_to_value 0x4001, 0x0003
	call_if 0x01, EventScript_JP_081DED99
	compare_var_to_value 0x4001, 0x0004
	call_if 0x01, EventScript_JP_081DEDCF
	loadword 0x00, RustboroCity_Text_YouGotItThankYou
	callstd 0x04
	setorcopyvar 0x8000, 0x0003
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081DED0C
	loadword 0x00, RustboroCity_Text_PleaseComeWithMe
	callstd 0x04
	closemessage
	setflag 0x0090
	setflag 0x02DC
	setvar 0x405A, 0x0005
	delay 0x001E
	@ event command: warp
	warp MAP_ID_RUSTBORO_CITY_DEVON_CORP_3F, 0xFF, 0x0002, 0x0002
	.byte 0x27, 0x6B, 0x02
EventScript_JP_081DED0C: @ 0x081DED0C
	loadword 0x00, gText_Rom_1DF6D8
	callstd 0x04
	return
EventScript_JP_081DED15: @ 0x081DED15
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DED41: @ 0x081DED41
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, Movement_08243631
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DED6D: @ 0x081DED6D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DED99: @ 0x081DED99
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, MauvilleCity_Movement_WalkDown_2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081DEDCF: @ 0x081DEDCF
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	return
.globl EventScript_JP_081DEDF1
EventScript_JP_081DEDF1: @ 0x081DEDF1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x0120
	call_if 0x00, EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
EventScript_JP_081DEE0A: @ 0x081DEE0A
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081DEE22
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DEE27
	return
EventScript_JP_081DEE22: @ 0x081DEE22
	playbgm 0x019F, 0x01
	return
EventScript_JP_081DEE27: @ 0x081DEE27
	playbgm 0x01A5, 0x01
	return
.globl EventScript_JP_081DEE2C
EventScript_JP_081DEE2C: @ 0x081DEE2C
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkLeftX4_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEE6C
EventScript_JP_081DEE6C: @ 0x081DEE6C
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkLeftX3_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEEAC
EventScript_JP_081DEEAC: @ 0x081DEEAC
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkLeftX2_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEEEC
EventScript_JP_081DEEEC: @ 0x081DEEEC
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkLeft_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEF2C
EventScript_JP_081DEF2C: @ 0x081DEF2C
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDownX2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEF6C
EventScript_JP_081DEF6C: @ 0x081DEF6C
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkRight_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEFAC
EventScript_JP_081DEFAC: @ 0x081DEFAC
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkRightX2_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
.globl EventScript_JP_081DEFEC
EventScript_JP_081DEFEC: @ 0x081DEFEC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	call EventScript_JP_081DEE0A
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, MauvilleCity_Movement_WalkDown_WalkRightX3_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081DF02C
EventScript_JP_081DF02C: @ 0x081DF02C
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081DF044
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DF14D
	end
EventScript_JP_081DF044: @ 0x081DF044
	checkflag 0x00D3
	goto_if 0x01, EventScript_JP_081DF0FA
	checkflag 0x0120
	goto_if 0x01, EventScript_JP_081DF0A9
	setflag 0x0120
	loadword 0x00, RustboroCity_Text_MayHiLetsRegister
	callstd 0x04
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, RustboroCity_Text_RegisteredMay
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x00FD
	setvar 0x405A, 0x0008
	setvar 0x4063, 0x0002
	setvar 0x8008, 0x0000
	loadword 0x00, RustboroCity_Text_MayPassedBrineyWantToBattle
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DF0CB
	loadword 0x00, gText_Rom_1DF80B
	callstd 0x04
	call EventScript_JP_081DF10F
	releaseall
	end
EventScript_JP_081DF0A9: @ 0x081DF0A9
	setvar 0x8008, 0x0001
	loadword 0x00, gText_Rom_1DF84F
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DF0CB
	loadword 0x00, gText_Rom_1DF80B
	callstd 0x04
	releaseall
	end
EventScript_JP_081DF0CB: @ 0x081DF0CB
	loadword 0x00, gText_Rom_1DF870
	callstd 0x04
	copyvar 0x8000, 0x4023
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081DF114
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081DF127
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081DF13A
	end
EventScript_JP_081DF0FA: @ 0x081DF0FA
	loadword 0x00, RustboroCity_Text_MayMrBrineyHint
	callstd 0x04
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081DF10F
	releaseall
	end
EventScript_JP_081DF10F: @ 0x081DF10F
	savebgm 0x0000
	fadedefaultbgm
	return
EventScript_JP_081DF114: @ 0x081DF114
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0300, 0x0000, gText_Rom_1DF892
	setflag 0x00D3
	goto EventScript_JP_081DF0FA
	.byte 0x02
EventScript_JP_081DF127: @ 0x081DF127
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0301, 0x0000, gText_Rom_1DF892
	setflag 0x00D3
	goto EventScript_JP_081DF0FA
	.byte 0x02
EventScript_JP_081DF13A: @ 0x081DF13A
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0258, 0x0000, gText_Rom_1DF892
	setflag 0x00D3
	goto EventScript_JP_081DF0FA
	.byte 0x02
EventScript_JP_081DF14D: @ 0x081DF14D
	checkflag 0x00D3
	goto_if 0x01, EventScript_JP_081DF1F9
	checkflag 0x0120
	goto_if 0x01, EventScript_JP_081DF1AD
	setflag 0x0120
	loadword 0x00, RustboroCity_Text_BrendanHiLetsRegister
	callstd 0x04
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, RustboroCity_Text_RegisteredBrendan
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x00FD
	setvar 0x405A, 0x0008
	setvar 0x4063, 0x0002
	loadword 0x00, RustboroCity_Text_BrendanPassedBrineyWantToBattle
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DF1CA
	loadword 0x00, gText_Rom_1DFA17
	callstd 0x04
	call EventScript_JP_081DF10F
	releaseall
	end
EventScript_JP_081DF1AD: @ 0x081DF1AD
	loadword 0x00, gText_Rom_1DFA36
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DF1CA
	loadword 0x00, gText_Rom_1DFA17
	callstd 0x04
	releaseall
	end
EventScript_JP_081DF1CA: @ 0x081DF1CA
	loadword 0x00, gText_Rom_1DFA53
	callstd 0x04
	copyvar 0x8000, 0x4023
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081DF20E
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081DF221
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081DF234
	end
EventScript_JP_081DF1F9: @ 0x081DF1F9
	loadword 0x00, RustboroCity_Text_BrendanMrBrineyHint
	callstd 0x04
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081DF10F
	releaseall
	end
EventScript_JP_081DF20E: @ 0x081DF20E
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0250, 0x0000, gText_Rom_1DFA75
	setflag 0x00D3
	goto EventScript_JP_081DF1F9
	.byte 0x02
EventScript_JP_081DF221: @ 0x081DF221
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0257, 0x0000, gText_Rom_1DFA75
	setflag 0x00D3
	goto EventScript_JP_081DF1F9
	.byte 0x02
EventScript_JP_081DF234: @ 0x081DF234
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0251, 0x0000, gText_Rom_1DFA75
	setflag 0x00D3
	goto EventScript_JP_081DF1F9
	.byte 0x02
MauvilleCity_Movement_WalkDown_WalkLeftX4_WalkDown: @ 0x081DF247
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkLeftX3_WalkDown: @ 0x081DF24E
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkLeftX2_WalkDown: @ 0x081DF254
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkLeft_WalkDown: @ 0x081DF259
	@ object movement sequence
	walk_down
	walk_left
	walk_down
	step_end
MauvilleCity_Movement_WalkDownX2: @ 0x081DF25D
	@ object movement sequence
	walk_down
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkRight_WalkDown: @ 0x081DF260
	@ object movement sequence
	walk_down
	walk_right
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkRightX2_WalkDown: @ 0x081DF264
	@ object movement sequence
	walk_down
	walk_right
	walk_right
	walk_down
	step_end
MauvilleCity_Movement_WalkDown_WalkRightX3_WalkDown: @ 0x081DF269
	@ object movement sequence
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	step_end
.globl EventScript_JP_081DF26F
EventScript_JP_081DF26F: @ 0x081DF26F
	loadword 0x00, RustboroCity_Text_YouCanHave2On2Battle
	callstd 0x02
	end
