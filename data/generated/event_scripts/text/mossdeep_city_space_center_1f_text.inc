	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:278 MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent
	.globl MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent: @ 0x0820D0C3
	.string "もうすぐ ロケットが はっしゃ するぞ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent) > 0x15
	.error "MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent) < 0x15
	.space 0x15 - (. - MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:281 MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber
	.globl MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber
MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber: @ 0x0820D0D8
	.string "ロケットが はっしゃ したよ!\nこれで {STR_VAR_1}かい うちあげ せいこうだ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber) > 0x25
	.error "MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber) < 0x25
	.space 0x25 - (. - MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:284 MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent
MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent: @ 0x0820D0FD
	.string "こんな さわぎの とちゅう だけど……\pもうすぐ ロケットが はっしゃ するぞ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent) != 0x29
	.error "MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent must retain its original byte length"
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:287 MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber
MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber: @ 0x0820D126
	.string "こんな さわぎの とちゅう だけど……\pロケットが はっしゃ したよ!\nこれで {STR_VAR_1}かい うちあげ せいこうだ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber) != 0x39
	.error "MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber must retain its original byte length"
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:290 MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection
	.globl MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection: @ 0x0820D15F
	.string "ロケットを はっしゃ するには\n1パーセントの ミスも ゆるされない\p99パーセント だいじょうぶ でも\n1パーセント ダメなら\lすべてが ダメになる きびしい ものだ\pそれでも やりとげようと するのは\nそこに ロマンが つまっている からだな{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection) > 0x7c
	.error "MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection) < 0x7c
	.space 0x7c - (. - MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:293 MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter
	.globl MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter
MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter: @ 0x0820D1DB
	.string "マグマだんの やつらが\nこの うちゅうセンターを ねらっている\pだが そんなこと ぐらいで\nロケットの はっしゃを\lやめるわけには いかないんだ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter) > 0x4a
	.error "MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter) < 0x4a
	.space 0x4a - (. - MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:296 MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt
	.globl MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt
MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt: @ 0x0820D225
	.string "かいがんを さんぽ していて\nこれを みつけたんだけど\lぼくは いらないから きみに あげる!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt) > 0x30
	.error "MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt) < 0x30
	.space 0x30 - (. - MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:299 MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers
	.globl MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers
MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers: @ 0x0820D255
	.string "むかしから ホウエンちほうは\nいんせきの おおい ばしょ として\lゆうめい なんだよね{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers) > 0x2c
	.error "MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers) < 0x2c
	.space 0x2c - (. - MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:302 MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis
	.globl MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis
MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis: @ 0x0820D281
	.string "マグマだんに ロケットねんりょうを\nうばわれる わけには いかない!\pでも かいがんで みつけた このいしは\nきみに あげるよ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis) > 0x41
	.error "MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis) < 0x41
	.space 0x41 - (. - MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:305 MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma
	.globl MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma
MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma: @ 0x0820D2C2
	.string "マグマだんを おっぱらわなきゃ\nかいがんの さんぽ どころじゃないね!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma) > 0x24
	.error "MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma) < 0x24
	.space 0x24 - (. - MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:308 MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace
	.globl MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace
MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace: @ 0x0820D2E6
	.string "ひとに よっては\nポケモンは うちゅうから やってきた!\lって いうよね! ほんとう かなー？{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace) > 0x30
	.error "MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace) < 0x30
	.space 0x30 - (. - MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:311 MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma
	.globl MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma
MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma: @ 0x0820D316
	.string "マグマだん なんて\nアクアだんが やっつければ いいのよ!\pでも そうすると こんどは\nアクアだんが おおきなかおを するのよね{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma) > 0x41
	.error "MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma) < 0x41
	.space 0x41 - (. - MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:314 MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind
	.globl MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind
MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind: @ 0x0820D357
	.string "でっかい てつの かたまりが\nおおぞらを つきぬけ\lうちゅうまで とんで いく……\pたまげた もん だわい{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind) > 0x36
	.error "MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind) < 0x36
	.space 0x36 - (. - MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:317 MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream
	.globl MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream
MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream: @ 0x0820D38D
	.string "でっかい てつの かたまりが\nおおぞらを つきぬけ\lうちゅうまで とんで いく……\pそんな わしのゆめを ジャマする\nマグマだんめ! ぬぬぬ ゆるさん!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream) > 0x4d
	.error "MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream) < 0x4d
	.space 0x4d - (. - MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:320 MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel
	.globl MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel
MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel: @ 0x0820D3DA
	.string "ダイゴ『{PLAYER}{KUN} そこにある\nよこくじょうは もう よんだかい？\pマグマだんは このしまに ある\nロケットねんりょうを ねらっている!\pなにに つかうのか しらないけど\nかれらに わたす わけには いかないよ!\pボクは もうすこし ここで\nみはって いるから きみは まちでも\lけんぶつ してきたら どうかな{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel) > 0x9b
	.error "MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel) < 0x9b
	.space 0x9b - (. - MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:323 MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro
MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro: @ 0x0820D475
	.string "やくそく どおり ロケットねんりょうを\nちょうだいしに きたわよ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro) != 0x22
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro must retain its original byte length"
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:326 MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat (+1 aliases)
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat
MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat: @ 0x0820D497
	.string "ねんりょうぎれ……{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat) > 0xa
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat) < 0xa
	.space 0xa - (. - MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:329 MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle
MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle: @ 0x0820D4A1
	.string "わたしに かった ぐらいで\nちょうしに のってちゃ ダメよ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle) > 0x1f
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle) < 0x1f
	.space 0x1f - (. - MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:332 MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro (+1 aliases)
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro
MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro: @ 0x0820D4C0
	.string "ちゃんと よこく してから きたんだ!\nオレたちゃ ひきょうものじゃ ないぜ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro) > 0x28
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro) < 0x28
	.space 0x28 - (. - MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:335 MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat (+1 aliases)
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat
MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat: @ 0x0820D4E8
	.string "うーむ…… ひきょうな てを\nつかえば よかった……{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat) > 0x1b
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat) < 0x1b
	.space 0x1b - (. - MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:338 MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle
MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle: @ 0x0820D503
	.string "わかったよ こんど くるときは\nいきなり くるように するよ……{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle) > 0x21
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle) < 0x21
	.space 0x21 - (. - MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:341 MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro (+1 aliases)
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro
MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro: @ 0x0820D524
	.string "うちゅうセンターに ちょぞう してある\nロケットの ねんりょうは\lぜんぶ オレたちが いただいて いくぜ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro) > 0x36
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro) < 0x36
	.space 0x36 - (. - MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:344 MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat (+1 aliases)
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat
MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat: @ 0x0820D55A
	.string "コップいっぱいで いいから\nねんりょう くれない？{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat) > 0x1a
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat) < 0x1a
	.space 0x1a - (. - MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:347 MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle
MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle: @ 0x0820D574
	.string "ねんりょうの つかいみち？\nそんなこと オレは しらん!\l2かいに いる リーダーに きいてくれ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle) > 0x32
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle) < 0x32
	.space 0x32 - (. - MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:350 MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro
MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro: @ 0x0820D5A6
	.string "リーダーから だれも ここを とおすな\nって いわれてるんだよ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro) > 0x21
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro) < 0x21
	.space 0x21 - (. - MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:353 MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat (+1 aliases)
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat
MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat: @ 0x0820D5C7
	.string "あっ あっ あっ{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat) > 0x9
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat) < 0x9
	.space 0x9 - (. - MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:356 MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle
	.globl MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle
MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle: @ 0x0820D5D0
	.string "リーダーには オレが さいごまで\nもちばを はなれなかった って\lいっといて くれよ!{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle) > 0x2c
	.error "MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle) < 0x2c
	.space 0x2c - (. - MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle)
	.endif
	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:359 MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice
MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice: @ 0x0820D5FC
	.string "これは……\nはんこう よこくじょう？\p「うちゅうセンターの みなさん\n いかが おすごしで しょうか\p ロケットの ねんりょうは\n まもなく われわれが いただきます\l イヤだと いっても ムダなのでーす\p もっと りくちを!\n              マグマだん{EOS}"
	.if (. - MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice) != 0x86
	.error "MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice must retain its original byte length"
	.endif
	@ ANALYSIS: SOURCE_RANGE offset=0x20D682, size=0x400
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_MossdeepCity_SpaceCenter_2F_OnTransition_OnFrame: @ 0x0820D682
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820D68D
	.byte 0x02
	.4byte gMapScriptConditionTable_MossdeepCity_SpaceCenter_2F_OnFrame
	.byte 0
EventScript_JP_0820D68D: @ 0x0820D68D
	compare_var_to_value 0x405D, 0x0002
	call_if 0x01, EventScript_JP_0820D6A4
	compare_var_to_value 0x409F, 0x0002
	call_if 0x01, EventScript_JP_0820D6C9
	end
EventScript_JP_0820D6A4: @ 0x0820D6A4
	clearflag 0x00CD
	setobjectxyperm 0x0003, 0x0005, 0x0003
	setobjectmovementtype 0x0003, 0x0A
	setobjectxyperm 0x0001, 0x0003, 0x0002
	setobjectmovementtype 0x0001, 0x0A
	setobjectxyperm 0x0002, 0x0001, 0x0003
	setobjectmovementtype 0x0002, 0x0A
	return
EventScript_JP_0820D6C9: @ 0x0820D6C9
	setobjectxyperm 0x0005, 0x000B, 0x0002
	setobjectxyperm 0x0007, 0x000F, 0x0002
	setobjectxyperm 0x0006, 0x000D, 0x0004
	return
gMapScriptConditionTable_MossdeepCity_SpaceCenter_2F_OnFrame: @ 0x0820D6DF
	@ conditional map script table
	.2byte 0x409F, 0x0001
	.4byte EventScript_JP_0820D6E9
	.2byte 0
EventScript_JP_0820D6E9: @ 0x0820D6E9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	playse 0x0015
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820D733
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_GoodAnswer
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, MossdeepCity_SpaceCenter_2F_Movement_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: warp
	warp MAP_ID_MOSSDEEP_CITY_SPACE_CENTER_1F, 0xFF, 0x000D, 0x0001
	.byte 0x27, 0x6B, 0x02
MossdeepCity_SpaceCenter_2F_Movement_WalkUp: @ 0x0820D731
	@ object movement sequence
	walk_up
	step_end
EventScript_JP_0820D733: @ 0x0820D733
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x024C, 0x0000, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat
	@ event command: applymovement
	applymovement 0x0006, MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkDown_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x024D, 0x0000, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat
	@ event command: applymovement
	applymovement 0x0005, MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkLeft_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x024E, 0x0000, MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat
	@ event command: applymovement
	applymovement 0x0007, MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkRight_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x409F, 0x0002
	moveobjectoffscreen 0x0005
	moveobjectoffscreen 0x0007
	moveobjectoffscreen 0x0006
	releaseall
	end
MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkLeft_UnlockFacingDirection: @ 0x0820D7AB
	@ object movement sequence
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end
MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkDown_UnlockFacingDirection: @ 0x0820D7AF
	@ object movement sequence
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end
MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkRight_UnlockFacingDirection: @ 0x0820D7B3
	@ object movement sequence
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end
.globl EventScript_JP_0820D7B7
EventScript_JP_0820D7B7: @ 0x0820D7B7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820D7DE
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820D7E8
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x00, EventScript_JP_0820D7DE
	goto EventScript_JP_0820D7E8
	.byte 0x02
EventScript_JP_0820D7DE: @ 0x0820D7DE
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets
	callstd 0x04
	release
	end
EventScript_JP_0820D7E8: @ 0x0820D7E8
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel
	callstd 0x04
	release
	end
.globl EventScript_JP_0820D7F2
EventScript_JP_0820D7F2: @ 0x0820D7F2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820D819
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820D823
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x00, EventScript_JP_0820D819
	goto EventScript_JP_0820D823
	.byte 0x02
EventScript_JP_0820D819: @ 0x0820D819
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut
	callstd 0x04
	release
	end
EventScript_JP_0820D823: @ 0x0820D823
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis
	callstd 0x04
	release
	end
.globl EventScript_JP_0820D82D
EventScript_JP_0820D82D: @ 0x0820D82D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820D854
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820D85E
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x00, EventScript_JP_0820D854
	goto EventScript_JP_0820D85E
	.byte 0x02
EventScript_JP_0820D854: @ 0x0820D854
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace
	callstd 0x04
	release
	end
EventScript_JP_0820D85E: @ 0x0820D85E
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace
	callstd 0x04
	release
	end
.globl EventScript_JP_0820D868
EventScript_JP_0820D868: @ 0x0820D868
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle
	callstd 0x02
	end
.globl EventScript_JP_0820D871
EventScript_JP_0820D871: @ 0x0820D871
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle
	callstd 0x02
	end
.globl EventScript_JP_0820D87A
EventScript_JP_0820D87A: @ 0x0820D87A
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle
	callstd 0x02
	end
.globl EventScript_JP_0820D883
EventScript_JP_0820D883: @ 0x0820D883
	lock
	faceplayer
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou
	callstd 0x04
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820D899
EventScript_JP_0820D899: @ 0x0820D899
	lockall
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_0820D8A4
EventScript_JP_0820D8A4: @ 0x0820D8A4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x00CD
	goto_if 0x01, EventScript_JP_0820D904
	setflag 0x00CD
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel
	callstd 0x04
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano
	callstd 0x04
	closemessage
	delay 0x001E
	playse 0x000C
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820D8E4
	@ event command: applymovement
	applymovement 0x0004, MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkFastUpX2_UnlockFacingDirection_Delay16X2_WalkSlowDownX2
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_0820D8E4: @ 0x0820D8E4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, MossdeepCity_SpaceCenter_2F_Movement_FaceLeft_LockFacingDirection_WalkFastRightX2_UnlockFacingDirection_Delay16X2_WalkSlowLeftX2_FaceDown
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
MossdeepCity_SpaceCenter_2F_Movement_LockFacingDirection_WalkFastUpX2_UnlockFacingDirection_Delay16X2_WalkSlowDownX2: @ 0x0820D8F0
	@ object movement sequence
	lock_facing_direction
	walk_fast_up
	walk_fast_up
	unlock_facing_direction
	delay_16
	delay_16
	walk_slow_down
	walk_slow_down
	step_end
MossdeepCity_SpaceCenter_2F_Movement_FaceLeft_LockFacingDirection_WalkFastRightX2_UnlockFacingDirection_Delay16X2_WalkSlowLeftX2_FaceDown: @ 0x0820D8F9
	@ object movement sequence
	face_left
	lock_facing_direction
	walk_fast_right
	walk_fast_right
	unlock_facing_direction
	delay_16
	delay_16
	walk_slow_left
	walk_slow_left
	face_down
	step_end
EventScript_JP_0820D904: @ 0x0820D904
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820D936
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_0820D936: @ 0x0820D936
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special SavePlayerParty
	fadescreen 0x01
	@ event command: special
	special ChooseHalfPartyForBattle
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0820D95C
	@ event command: special
	special LoadPlayerParty
	goto EventScript_JP_0820D904
EventScript_JP_0820D95C: @ 0x0820D95C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special ReducePlayerPartyToSelectedMons
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0008
	setvar 0x8005, 0x0000
	@ event command: special
	special DoSpecialTrainerBattle
	waitstate
	setvar 0x8004, 0x0006
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820D99B
	fadescreen 0x01
	@ event command: special
	special sp0C8_whiteout_maybe
	waitstate
EventScript_JP_0820D99B: @ 0x0820D99B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided
	callstd 0x04
	closemessage
	delay 0x0014
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	applymovement 0x0008, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x003C
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	applymovement 0x0008, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x0014
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp
	callstd 0x04
	closemessage
	setvar 0x405D, 0x0003
	fadedefaultbgm
	fadescreen 0x01
	setvar 0x409F, 0x0003
	setflag 0x02F4
	setflag 0x035E
	setflag 0x0337
	@ event command: removeobject
	removeobject 0x0005
	@ event command: removeobject
	removeobject 0x0007
	@ event command: removeobject
	removeobject 0x0006
	@ event command: removeobject
	removeobject 0x0008
	@ event command: removeobject
	removeobject 0x0009
	setobjectxy 0x0003, 0x0005, 0x0006
	turnobject 0x0003, 0x01
	setobjectxy 0x0002, 0x000B, 0x0008
	turnobject 0x0002, 0x02
	setobjectxy 0x0001, 0x0006, 0x0002
	turnobject 0x0001, 0x02
	call EventScript_JP_0820DA5B
	fadescreen 0x00
	loadword 0x00, MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome
	callstd 0x04
	closemessage
	fadescreen 0x01
	setflag 0x0075
	setflag 0x03C7
	@ event command: removeobject
	removeobject 0x0004
	setflag 0x02E1
	clearflag 0x03C7
	setvar 0x40C6, 0x0001
	setflag 0x0314
	@ event command: removeobject
	removeobject 0x0003
	setobjectxyperm 0x0003, 0x0005, 0x0006
	setobjectmovementtype 0x0003, 0x02
	@ event command: addobject
	addobject 0x0003
	fadescreen 0x00
	end
EventScript_JP_0820DA5B: @ 0x0820DA5B
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820DA77
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0820DA7C
	return
EventScript_JP_0820DA77: @ 0x0820DA77
	turnobject 0x0004, 0x02
	return
EventScript_JP_0820DA7C: @ 0x0820DA7C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	turnobject 0x0004, 0x04
	return
	@ standalone byte at 0x0820DA81; not trainerbattle (next script starts at 0x0820DA82)
	.byte 0x5C
