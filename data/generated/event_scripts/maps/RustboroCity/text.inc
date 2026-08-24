	@ data/maps/RustboroCity/scripts.inc:1015 RustboroCity_Text_WeShortenItToDevon
	.globl RustboroCity_Text_WeShortenItToDevon
RustboroCity_Text_WeShortenItToDevon: @ 0x081DF278
	.string "デボン コーポレーション……\nながいから みんな デボンって よぶけど\pあの かいしゃ では いろいろと\nべんりな ものを つくってるんだ!{EOS}"
	.if (. - RustboroCity_Text_WeShortenItToDevon) > 0x47
	.error "RustboroCity_Text_WeShortenItToDevon may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_WeShortenItToDevon) < 0x47
	.space 0x47 - (. - RustboroCity_Text_WeShortenItToDevon)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1021 RustboroCity_Text_SneakyLookingManWentAroundCorner
	.globl RustboroCity_Text_SneakyLookingManWentAroundCorner
RustboroCity_Text_SneakyLookingManWentAroundCorner: @ 0x081DF2BF
	.string "ん? あやしい おとこ?\pそういえば にんそうの わるい おとこが\nそこの かどを まがっていったよ{EOS}"
	.if (. - RustboroCity_Text_SneakyLookingManWentAroundCorner) > 0x33
	.error "RustboroCity_Text_SneakyLookingManWentAroundCorner may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_SneakyLookingManWentAroundCorner) < 0x33
	.space 0x33 - (. - RustboroCity_Text_SneakyLookingManWentAroundCorner)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1026 RustboroCity_Text_HaveYouChallengedGym
	.globl RustboroCity_Text_HaveYouChallengedGym
RustboroCity_Text_HaveYouChallengedGym: @ 0x081DF2F2
	.string "ポケモンジムに ちょうせん したかい?\pあの キラリと かがやく\nジムバッジを もつと トレーナーとしての\lじかくが めばえて くるんだな!{EOS}"
	.if (. - RustboroCity_Text_HaveYouChallengedGym) > 0x47
	.error "RustboroCity_Text_HaveYouChallengedGym may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_HaveYouChallengedGym) < 0x47
	.space 0x47 - (. - RustboroCity_Text_HaveYouChallengedGym)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1032 RustboroCity_Text_HeyThatsRustborosGymBadge
	.globl RustboroCity_Text_HeyThatsRustborosGymBadge
RustboroCity_Text_HeyThatsRustborosGymBadge: @ 0x081DF339
	.string "おっ! カナズミの ジムバッジ!\pいくつか ある バッジの なかで\nカナズミの やつが いちばん かっこいいな!{EOS}"
	.if (. - RustboroCity_Text_HeyThatsRustborosGymBadge) > 0x39
	.error "RustboroCity_Text_HeyThatsRustborosGymBadge may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_HeyThatsRustborosGymBadge) < 0x39
	.space 0x39 - (. - RustboroCity_Text_HeyThatsRustborosGymBadge)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1037 RustboroCity_Text_YoureNewAroundHere
	.globl RustboroCity_Text_YoureNewAroundHere
RustboroCity_Text_YoureNewAroundHere: @ 0x081DF372
	.string "おや? きみは だれだい?\nこの あたりでは みかけない かお だね\pトレーナーズ スクールの てんこうせい?{EOS}"
	.if (. - RustboroCity_Text_YoureNewAroundHere) > 0x38
	.error "RustboroCity_Text_YoureNewAroundHere may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_YoureNewAroundHere) < 0x38
	.space 0x38 - (. - RustboroCity_Text_YoureNewAroundHere)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1042 RustboroCity_Text_GymLeaderIsntEasyWithFire
	.globl RustboroCity_Text_GymLeaderIsntEasyWithFire
RustboroCity_Text_GymLeaderIsntEasyWithFire: @ 0x081DF3AA
	.string "ジムリーダーに ちょうせん したけど……\pあたしの ほのおタイプの ポケモンじゃ\nちょっと かつのは たいへんそう……\pだって ほのおタイプ って\nいわタイプに あいしょうが わるいもの……{EOS}"
	.if (. - RustboroCity_Text_GymLeaderIsntEasyWithFire) > 0x60
	.error "RustboroCity_Text_GymLeaderIsntEasyWithFire may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_GymLeaderIsntEasyWithFire) < 0x60
	.space 0x60 - (. - RustboroCity_Text_GymLeaderIsntEasyWithFire)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1049 RustboroCity_Text_MrBrineyWalksInTheTunnel
	.globl RustboroCity_Text_MrBrineyWalksInTheTunnel
RustboroCity_Text_MrBrineyWalksInTheTunnel: @ 0x081DF40A
	.string "はまべの こやに すんでいる\nふなのりの ハギろうじん\lときどき トンネルに さんぽに いくんだよ{EOS}"
	.if (. - RustboroCity_Text_MrBrineyWalksInTheTunnel) > 0x32
	.error "RustboroCity_Text_MrBrineyWalksInTheTunnel may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_MrBrineyWalksInTheTunnel) < 0x32
	.space 0x32 - (. - RustboroCity_Text_MrBrineyWalksInTheTunnel)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1054 RustboroCity_Text_MrBrineyLovesPeeko
	.globl RustboroCity_Text_MrBrineyLovesPeeko
RustboroCity_Text_MrBrineyLovesPeeko: @ 0x081DF43C
	.string "はまべの こやに すんでいる\nふなのりの ハギろうじん\lピーコちゃんの ために カイナに いって\lかいもの するんだってさ\pほんとうに ピーコちゃんが すきなんだな!\nあの じいさん{EOS}"
	.if (. - RustboroCity_Text_MrBrineyLovesPeeko) > 0x5c
	.error "RustboroCity_Text_MrBrineyLovesPeeko may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_MrBrineyLovesPeeko) < 0x5c
	.space 0x5c - (. - RustboroCity_Text_MrBrineyLovesPeeko)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1062 RustboroCity_Text_WowYouHavePokemon
	.globl RustboroCity_Text_WowYouHavePokemon
RustboroCity_Text_WowYouHavePokemon: @ 0x081DF498
	.string "あなたも ポケモンを つれてるのね\pあたしも おおきくなったら\nポケモンと どこかに いくんだ!{EOS}"
	.if (. - RustboroCity_Text_WowYouHavePokemon) > 0x31
	.error "RustboroCity_Text_WowYouHavePokemon may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_WowYouHavePokemon) < 0x31
	.space 0x31 - (. - RustboroCity_Text_WowYouHavePokemon)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1067 RustboroCity_Text_CatchRarePokemonIfIGoToSchool
	.globl RustboroCity_Text_CatchRarePokemonIfIGoToSchool
RustboroCity_Text_CatchRarePokemonIfIGoToSchool: @ 0x081DF4C9
	.string "ぽけもん とれーなーず すくーる かぁ!\pここに にゅうがく すれば\nめずらしい ポケモンでも かんたんに\lつかまえられるように なるのかな?{EOS}"
	.if (. - RustboroCity_Text_CatchRarePokemonIfIGoToSchool) > 0x48
	.error "RustboroCity_Text_CatchRarePokemonIfIGoToSchool may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_CatchRarePokemonIfIGoToSchool) < 0x48
	.space 0x48 - (. - RustboroCity_Text_CatchRarePokemonIfIGoToSchool)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1073 RustboroCity_Text_PokemonCanChangeLookFromExp
	.globl RustboroCity_Text_PokemonCanChangeLookFromExp
RustboroCity_Text_PokemonCanChangeLookFromExp: @ 0x081DF511
	.string "ポケモンって たたかいの けいけんを\nつんでいくと すがたかたち が\lかわっちゃうことが あるんだよ!{EOS}"
	.if (. - RustboroCity_Text_PokemonCanChangeLookFromExp) > 0x34
	.error "RustboroCity_Text_PokemonCanChangeLookFromExp may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_PokemonCanChangeLookFromExp) < 0x34
	.space 0x34 - (. - RustboroCity_Text_PokemonCanChangeLookFromExp)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1078 RustboroCity_Text_PokemonChangeShape
	.globl RustboroCity_Text_PokemonChangeShape
RustboroCity_Text_PokemonChangeShape: @ 0x081DF545
	.string "ポケモンの すがたが かわっちゃうの?\nいきなり かわると ビックリしちゃう!{EOS}"
	.if (. - RustboroCity_Text_PokemonChangeShape) > 0x28
	.error "RustboroCity_Text_PokemonChangeShape may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_PokemonChangeShape) < 0x28
	.space 0x28 - (. - RustboroCity_Text_PokemonChangeShape)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1082 RustboroCity_Text_TradePokemonGrowFast
	.globl RustboroCity_Text_TradePokemonGrowFast
RustboroCity_Text_TradePokemonGrowFast: @ 0x081DF56D
	.string "ひとと こうかんした ポケモンは\nそだつのが はやい!\p……でも ジムバッジを もっていないと\nいうことを きいて くれないんだ{EOS}"
	.if (. - RustboroCity_Text_TradePokemonGrowFast) > 0x41
	.error "RustboroCity_Text_TradePokemonGrowFast may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_TradePokemonGrowFast) < 0x41
	.space 0x41 - (. - RustboroCity_Text_TradePokemonGrowFast)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1088 RustboroCity_Text_OutOfTheWay
	.globl RustboroCity_Text_OutOfTheWay
RustboroCity_Text_OutOfTheWay: @ 0x081DF5AE
	.string "どけー! どけどけー!!{EOS}"
	.if (. - RustboroCity_Text_OutOfTheWay) > 0xd
	.error "RustboroCity_Text_OutOfTheWay may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_OutOfTheWay) < 0xd
	.space 0xd - (. - RustboroCity_Text_OutOfTheWay)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1091 RustboroCity_Text_WaitDontTakeMyGoods
	.globl RustboroCity_Text_WaitDontTakeMyGoods
RustboroCity_Text_WaitDontTakeMyGoods: @ 0x081DF5BB
	.string "まってぇー!\pその にもつを かえしてぇぇぇー!!{EOS}"
	.if (. - RustboroCity_Text_WaitDontTakeMyGoods) > 0x1a
	.error "RustboroCity_Text_WaitDontTakeMyGoods may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_WaitDontTakeMyGoods) < 0x1a
	.space 0x1a - (. - RustboroCity_Text_WaitDontTakeMyGoods)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1095 RustboroCity_Text_HelpMeIWasRobbed
	.globl RustboroCity_Text_HelpMeIWasRobbed
RustboroCity_Text_HelpMeIWasRobbed: @ 0x081DF5D5
	.string "ああ きみは!\pトウカのもりで たすけてくれた\nすてきな トレーナーじゃ ないですか!\pおねがいです!\pアクアだんに うばわれた\nデボンのにもつ とりかえして ください!\pあれが ないと……\nわたし とても こまるんです{EOS}"
	.if (. - RustboroCity_Text_HelpMeIWasRobbed) > 0x6f
	.error "RustboroCity_Text_HelpMeIWasRobbed may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_HelpMeIWasRobbed) < 0x6f
	.space 0x6f - (. - RustboroCity_Text_HelpMeIWasRobbed)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1105 RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel: @ 0x081DF644
	.string "さっきの あやしい やつは\nむこうの トンネルの ほうに\lにげていったと おもうのですよ{EOS}"
	.if (. - RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel) != 0x2d
	.error "RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel must retain its original byte length"
	.endif
	@ data/maps/RustboroCity/scripts.inc:1110 RustboroCity_Text_YouGotItThankYou
	.globl RustboroCity_Text_YouGotItThankYou
RustboroCity_Text_YouGotItThankYou: @ 0x081DF671
	.string "ああ! どうでした\nデボンのにもつ は……?\pそうですか!\nとりかえして くれたのですか!\pきみは ほんとうに\nすごい トレーナー ですね!\p……そうだ! おれいに また\nスーパーボールを あげちゃおう!{EOS}"
	.if (. - RustboroCity_Text_YouGotItThankYou) > 0x67
	.error "RustboroCity_Text_YouGotItThankYou may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_YouGotItThankYou) < 0x67
	.space 0x67 - (. - RustboroCity_Text_YouGotItThankYou)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:377 PetalburgWoods_Text_YoureLoadedWithItems (+1 aliases)
	.globl PetalburgWoods_Text_YoureLoadedWithItems_Copy_RustboroCity
PetalburgWoods_Text_YoureLoadedWithItems_Copy_RustboroCity: @ 0x081DF6D8
	.string "どうぐ いっぱいで\nスーパーボール あげられないね{EOS}"
	.if (. - PetalburgWoods_Text_YoureLoadedWithItems_Copy_RustboroCity) > 0x1a
	.error "PetalburgWoods_Text_YoureLoadedWithItems_Copy_RustboroCity may not grow beyond its original slot"
	.endif
	.if (. - PetalburgWoods_Text_YoureLoadedWithItems_Copy_RustboroCity) < 0x1a
	.space 0x1a - (. - PetalburgWoods_Text_YoureLoadedWithItems_Copy_RustboroCity)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1124 RustboroCity_Text_PleaseComeWithMe
	.globl RustboroCity_Text_PleaseComeWithMe
RustboroCity_Text_PleaseComeWithMe: @ 0x081DF6F2
	.string "きみ! きみ!\nわたしに ついてきて ください!{EOS}"
	.if (. - RustboroCity_Text_PleaseComeWithMe) > 0x19
	.error "RustboroCity_Text_PleaseComeWithMe may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_PleaseComeWithMe) < 0x19
	.space 0x19 - (. - RustboroCity_Text_PleaseComeWithMe)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1128 RustboroCity_Text_MayHiLetsRegister
	.globl RustboroCity_Text_MayHiLetsRegister
RustboroCity_Text_MayHiLetsRegister: @ 0x081DF70B
	.string "ハルカ『あっ {PLAYER}{KUN}!\pポケナビに エントリーコールを\nつけて もらったのね!\pじゃあ あたしたち\nおたがいに よびだせる ように\lなまえを とうろく しておこうよ!\p…… …… ……{EOS}"
	.if (. - RustboroCity_Text_MayHiLetsRegister) > 0x5e
	.error "RustboroCity_Text_MayHiLetsRegister may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_MayHiLetsRegister) < 0x5e
	.space 0x5e - (. - RustboroCity_Text_MayHiLetsRegister)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1137 RustboroCity_Text_RegisteredMay
	.globl RustboroCity_Text_RegisteredMay
RustboroCity_Text_RegisteredMay: @ 0x081DF769
	.string "ハルカを\nポケナビに とうろく した!{EOS}"
	.if (. - RustboroCity_Text_RegisteredMay) > 0x14
	.error "RustboroCity_Text_RegisteredMay may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_RegisteredMay) < 0x14
	.space 0x14 - (. - RustboroCity_Text_RegisteredMay)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1141 RustboroCity_Text_MayPassedBrineyWantToBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl RustboroCity_Text_MayPassedBrineyWantToBattle
RustboroCity_Text_MayPassedBrineyWantToBattle: @ 0x081DF77D
	.string "ハルカ『そういえば トウカのもりで\nハギろうじんと すれちがったわ\pたぶん…… はまべの こやに\nもどるところ だったんじゃ ないかな!\pえーと…… それより {PLAYER}{KUN}の\nポケモンずかんの ちょうしは どう?\pあたしは かなり いい かんじ!\nどう? ちょっと しょうぶ してみる?{EOS}"
	.if (. - RustboroCity_Text_MayPassedBrineyWantToBattle) != 0x8e
	.error "RustboroCity_Text_MayPassedBrineyWantToBattle must retain its original byte length"
	.endif
	@ data/maps/Route104/scripts.inc:1097 Route104_Text_MayHaventRaisedPokemon (+1 aliases)
	.globl Route104_Text_MayHaventRaisedPokemon_Copy_RustboroCity
Route104_Text_MayHaventRaisedPokemon_Copy_RustboroCity: @ 0x081DF80B
	.string "ハルカ『えー なんでよー\nあんまり ポケモン つかまえたり\lそだてたり してないのかな?\pそれじゃあ トレーナーとして\nまだまだ ね!{EOS}"
	.if (. - Route104_Text_MayHaventRaisedPokemon_Copy_RustboroCity) > 0x44
	.error "Route104_Text_MayHaventRaisedPokemon_Copy_RustboroCity may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MayHaventRaisedPokemon_Copy_RustboroCity) < 0x44
	.space 0x44 - (. - Route104_Text_MayHaventRaisedPokemon_Copy_RustboroCity)
	.endif
	@ data/maps/Route104/scripts.inc:1104 Route104_Text_MayLetsBattle (+1 aliases)
	.globl Route104_Text_MayLetsBattle_Copy_RustboroCity
Route104_Text_MayLetsBattle_Copy_RustboroCity: @ 0x081DF84F
	.string "ハルカ『どう? あたしと ここで\nちょっと しょうぶ してみる?{EOS}"
	.if (. - Route104_Text_MayLetsBattle_Copy_RustboroCity) > 0x21
	.error "Route104_Text_MayLetsBattle_Copy_RustboroCity may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MayLetsBattle_Copy_RustboroCity) < 0x21
	.space 0x21 - (. - Route104_Text_MayLetsBattle_Copy_RustboroCity)
	.endif
	@ data/maps/Route104/scripts.inc:1108 Route104_Text_MayIntro (+1 aliases)
	.globl Route104_Text_MayIntro_Copy_RustboroCity
Route104_Text_MayIntro_Copy_RustboroCity: @ 0x081DF870
	.string "ハルカ『トレーナーに なった ばかりの\n{PLAYER}{KUN}には まけないよ!{EOS}"
	.if (. - Route104_Text_MayIntro_Copy_RustboroCity) > 0x22
	.error "Route104_Text_MayIntro_Copy_RustboroCity may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MayIntro_Copy_RustboroCity) < 0x22
	.space 0x22 - (. - Route104_Text_MayIntro_Copy_RustboroCity)
	.endif
	@ data/maps/Route104/scripts.inc:1112 Route104_Text_MayDefeat (+2 aliases)
	.globl Route104_Text_MayDefeat_Copy_RustboroCity
Route104_Text_MayDefeat_Copy_RustboroCity: @ 0x081DF892
	.string "うわあ……\nもう こんなに つよいなんて……{EOS}"
	.if (. - Route104_Text_MayDefeat_Copy_RustboroCity) > 0x17
	.error "Route104_Text_MayDefeat_Copy_RustboroCity may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MayDefeat_Copy_RustboroCity) < 0x17
	.space 0x17 - (. - Route104_Text_MayDefeat_Copy_RustboroCity)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1170 RustboroCity_Text_MayMrBrineyHint
	.globl RustboroCity_Text_MayMrBrineyHint
RustboroCity_Text_MayMrBrineyHint: @ 0x081DF8A9
	.string "ハルカ『そういえば さっき すれちがった\nハギろうじん なんだけどね\p{PLAYER}{KUN}は ひっこして きたばかりで\nしらないかも しれないけど\lむかしは すっごい ふなのり だったのよ!{EOS}"
	.if (. - RustboroCity_Text_MayMrBrineyHint) > 0x5a
	.error "RustboroCity_Text_MayMrBrineyHint may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_MayMrBrineyHint) < 0x5a
	.space 0x5a - (. - RustboroCity_Text_MayMrBrineyHint)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1177 RustboroCity_Text_BrendanHiLetsRegister
	.globl RustboroCity_Text_BrendanHiLetsRegister
RustboroCity_Text_BrendanHiLetsRegister: @ 0x081DF903
	.string "ユウキ『おっ {PLAYER}!\pポケナビに エントリーコールを\nつけて もらったんだな!\pじゃあ オレたち\nおたがいに よびだせる ように\lなまえを とうろく しておこうよ!\p…… …… ……{EOS}"
	.if (. - RustboroCity_Text_BrendanHiLetsRegister) > 0x5c
	.error "RustboroCity_Text_BrendanHiLetsRegister may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_BrendanHiLetsRegister) < 0x5c
	.space 0x5c - (. - RustboroCity_Text_BrendanHiLetsRegister)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1186 RustboroCity_Text_RegisteredBrendan
	.globl RustboroCity_Text_RegisteredBrendan
RustboroCity_Text_RegisteredBrendan: @ 0x081DF95F
	.string "ユウキを\nポケナビに とうろく した!{EOS}"
	.if (. - RustboroCity_Text_RegisteredBrendan) > 0x14
	.error "RustboroCity_Text_RegisteredBrendan may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_RegisteredBrendan) < 0x14
	.space 0x14 - (. - RustboroCity_Text_RegisteredBrendan)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1190 RustboroCity_Text_BrendanPassedBrineyWantToBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl RustboroCity_Text_BrendanPassedBrineyWantToBattle
RustboroCity_Text_BrendanPassedBrineyWantToBattle: @ 0x081DF973
	.string "ユウキ『そういえば {PLAYER}\pさっき トウカのもりで\nハギろうじんと すれちがったよ\pたぶん…… はまべの こやに\nもどるところ だったんじゃ ないかな!\pえーと…… それより {PLAYER}の\nポケモンずかんは どう?\lちょっとは ページ うまったか?\pオレは すごいよ!\nどうだ ポケモン しょうぶで\lそのせいかを ためして やろうか?{EOS}"
	.if (. - RustboroCity_Text_BrendanPassedBrineyWantToBattle) != 0xa4
	.error "RustboroCity_Text_BrendanPassedBrineyWantToBattle must retain its original byte length"
	.endif
	@ data/maps/Route104/scripts.inc:1146 Route104_Text_BrendanNoConfidence (+1 aliases)
	.globl Route104_Text_BrendanNoConfidence_Copy_RustboroCity
Route104_Text_BrendanNoConfidence_Copy_RustboroCity: @ 0x081DFA17
	.string "ユウキ『なんだよ\nもってる ポケモンに じしんが ないのか?{EOS}"
	.if (. - Route104_Text_BrendanNoConfidence_Copy_RustboroCity) > 0x1f
	.error "Route104_Text_BrendanNoConfidence_Copy_RustboroCity may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BrendanNoConfidence_Copy_RustboroCity) < 0x1f
	.space 0x1f - (. - Route104_Text_BrendanNoConfidence_Copy_RustboroCity)
	.endif
	@ data/maps/Route104/scripts.inc:1150 Route104_Text_BrendanLetsBattle (+1 aliases)
	.globl Route104_Text_BrendanLetsBattle_Copy_RustboroCity
Route104_Text_BrendanLetsBattle_Copy_RustboroCity: @ 0x081DFA36
	.string "ユウキ『どうだい オレと ここで\nしょうぶ してみるか?{EOS}"
	.if (. - Route104_Text_BrendanLetsBattle_Copy_RustboroCity) > 0x1d
	.error "Route104_Text_BrendanLetsBattle_Copy_RustboroCity may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BrendanLetsBattle_Copy_RustboroCity) < 0x1d
	.space 0x1d - (. - Route104_Text_BrendanLetsBattle_Copy_RustboroCity)
	.endif
	@ data/maps/Route104/scripts.inc:1154 Route104_Text_BrendanIntro (+1 aliases)
	.globl Route104_Text_BrendanIntro_Copy_RustboroCity
Route104_Text_BrendanIntro_Copy_RustboroCity: @ 0x081DFA53
	.string "ユウキ『トレーナーに なりたて だって\nてかげんは しないからな!{EOS}"
	.if (. - Route104_Text_BrendanIntro_Copy_RustboroCity) > 0x22
	.error "Route104_Text_BrendanIntro_Copy_RustboroCity may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BrendanIntro_Copy_RustboroCity) < 0x22
	.space 0x22 - (. - Route104_Text_BrendanIntro_Copy_RustboroCity)
	.endif
	@ data/maps/Route104/scripts.inc:1158 Route104_Text_BrendanDefeat (+2 aliases)
	.globl Route104_Text_BrendanDefeat_Copy_RustboroCity
Route104_Text_BrendanDefeat_Copy_RustboroCity: @ 0x081DFA75
	.string "へえ……\nなかなか やるじゃないか{EOS}"
	.if (. - Route104_Text_BrendanDefeat_Copy_RustboroCity) > 0x12
	.error "Route104_Text_BrendanDefeat_Copy_RustboroCity may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BrendanDefeat_Copy_RustboroCity) < 0x12
	.space 0x12 - (. - Route104_Text_BrendanDefeat_Copy_RustboroCity)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1219 RustboroCity_Text_BrendanMrBrineyHint
	.globl RustboroCity_Text_BrendanMrBrineyHint
RustboroCity_Text_BrendanMrBrineyHint: @ 0x081DFA87
	.string "ユウキ『そういえば さっき すれちがった\nハギろうじん だけどな\p{PLAYER}は ひっこして きたばかりで\nしらないかも しれないけど\lむかしは すごい ふなのり だったんだ!{EOS}"
	.if (. - RustboroCity_Text_BrendanMrBrineyHint) > 0x55
	.error "RustboroCity_Text_BrendanMrBrineyHint may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_BrendanMrBrineyHint) < 0x55
	.space 0x55 - (. - RustboroCity_Text_BrendanMrBrineyHint)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1226 RustboroCity_Text_TunnelNearingCompletion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl RustboroCity_Text_TunnelNearingCompletion
RustboroCity_Text_TunnelNearingCompletion: @ 0x081DFADC
	.string "「べんりな トンネル かんせい まぢか!」\p……と かんばんに かかれているが\nその うえに あかい ペンキで\lおおきな バッテンが つけられている{EOS}"
	.if (. - RustboroCity_Text_TunnelNearingCompletion) != 0x4b
	.error "RustboroCity_Text_TunnelNearingCompletion must retain its original byte length"
	.endif
	@ data/maps/RustboroCity/scripts.inc:1232 RustboroCity_Text_DevonCorpSign
	.globl RustboroCity_Text_DevonCorpSign
RustboroCity_Text_DevonCorpSign: @ 0x081DFB27
	.string "「デボン コーポレーション」\pみなさんの せいかつの ために\nなんでも つくっています!{EOS}"
	.if (. - RustboroCity_Text_DevonCorpSign) > 0x2d
	.error "RustboroCity_Text_DevonCorpSign may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_DevonCorpSign) < 0x2d
	.space 0x2d - (. - RustboroCity_Text_DevonCorpSign)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1237 RustboroCity_Text_GymSign
	.globl RustboroCity_Text_GymSign
RustboroCity_Text_GymSign: @ 0x081DFB54
	.string "カナズミ シティ ポケモンジム\nリーダー ツツジ\lいわに ときめく ゆうとうせい!{EOS}"
	.if (. - RustboroCity_Text_GymSign) > 0x2a
	.error "RustboroCity_Text_GymSign may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_GymSign) < 0x2a
	.space 0x2a - (. - RustboroCity_Text_GymSign)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1242 RustboroCity_Text_DevonCorpBranchOfficeSign
	.globl RustboroCity_Text_DevonCorpBranchOfficeSign
RustboroCity_Text_DevonCorpBranchOfficeSign: @ 0x081DFB7E
	.string "「デボン コーポレーション ぶんしつ」\pかんけいしゃ いがいの たちいりは\nどうぞ ごえんりょ ください!{EOS}"
	.if (. - RustboroCity_Text_DevonCorpBranchOfficeSign) > 0x36
	.error "RustboroCity_Text_DevonCorpBranchOfficeSign may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_DevonCorpBranchOfficeSign) < 0x36
	.space 0x36 - (. - RustboroCity_Text_DevonCorpBranchOfficeSign)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1247 RustboroCity_Text_CitySign
	.globl RustboroCity_Text_CitySign
RustboroCity_Text_CitySign: @ 0x081DFBB4
	.string "ここは カナズミ シティ\pしぜんと かがくの ゆうごうを\nついきゅうする まち{EOS}"
	.if (. - RustboroCity_Text_CitySign) > 0x28
	.error "RustboroCity_Text_CitySign may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_CitySign) < 0x28
	.space 0x28 - (. - RustboroCity_Text_CitySign)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1252 RustboroCity_Text_TrainersSchoolSign
	.globl RustboroCity_Text_TrainersSchoolSign
RustboroCity_Text_TrainersSchoolSign: @ 0x081DFBDC
	.string "「ポケモン トレーナーズ スクール」\nポケモンのことなら なんでも おしえます!{EOS}"
	.if (. - RustboroCity_Text_TrainersSchoolSign) > 0x29
	.error "RustboroCity_Text_TrainersSchoolSign may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_TrainersSchoolSign) < 0x29
	.space 0x29 - (. - RustboroCity_Text_TrainersSchoolSign)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1256 RustboroCity_Text_CuttersHouse
	.globl RustboroCity_Text_CuttersHouse
RustboroCity_Text_CuttersHouse: @ 0x081DFC05
	.string "「いあいぎりオヤジの いえ」{EOS}"
	.if (. - RustboroCity_Text_CuttersHouse) > 0xf
	.error "RustboroCity_Text_CuttersHouse may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_CuttersHouse) < 0xf
	.space 0xf - (. - RustboroCity_Text_CuttersHouse)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1259 RustboroCity_Text_DevelopedNewPokenavFeature
	.globl RustboroCity_Text_DevelopedNewPokenavFeature
RustboroCity_Text_DevelopedNewPokenavFeature: @ 0x081DFC14
	.string "いま ポケナビの ついかきのうを\nかいはつ していたのですが……\pうまく いきましたよ!\p{PLAYER}さん!\pしゃちょうに いただいた そのポケナビ\nちょっと かしてくださいね!{EOS}"
	.if (. - RustboroCity_Text_DevelopedNewPokenavFeature) > 0x56
	.error "RustboroCity_Text_DevelopedNewPokenavFeature may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_DevelopedNewPokenavFeature) < 0x56
	.space 0x56 - (. - RustboroCity_Text_DevelopedNewPokenavFeature)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1267 RustboroCity_Text_AddedMatchCallPleaseCallMrStone
	.globl RustboroCity_Text_AddedMatchCallPleaseCallMrStone
RustboroCity_Text_AddedMatchCallPleaseCallMrStone: @ 0x081DFC6A
	.string "はい! {PLAYER}さんの ポケナビに\nエントリーコール という きのうを\lついか しました!\pポケナビに とうろく されていれば\nとおく はなれた ところの ひとと\lエントリーコールを つうじて\lかいわが できて しまうんです!\p{PLAYER}さんの ポケナビには\nうちの ツワブキ しゃちょうの なまえが\lとうろく してある はずです\pためしに ちょっと しゃちょうを\nよびだして みてください!{EOS}"
	.if (. - RustboroCity_Text_AddedMatchCallPleaseCallMrStone) > 0xc0
	.error "RustboroCity_Text_AddedMatchCallPleaseCallMrStone may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_AddedMatchCallPleaseCallMrStone) < 0xc0
	.space 0xc0 - (. - RustboroCity_Text_AddedMatchCallPleaseCallMrStone)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1281 RustboroCity_Text_PleaseSelectPokenav
	.globl RustboroCity_Text_PleaseSelectPokenav
RustboroCity_Text_PleaseSelectPokenav: @ 0x081DFD2A
	.string "ポケナビを えらんで ください!{EOS}"
	.if (. - RustboroCity_Text_PleaseSelectPokenav) > 0x11
	.error "RustboroCity_Text_PleaseSelectPokenav may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_PleaseSelectPokenav) < 0x11
	.space 0x11 - (. - RustboroCity_Text_PleaseSelectPokenav)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1284 RustboroCity_Text_IdBetterGetBackToWork
	.globl RustboroCity_Text_IdBetterGetBackToWork
RustboroCity_Text_IdBetterGetBackToWork: @ 0x081DFD3B
	.string "……では わたしは しごとに もどります\p{PLAYER}さん おきをつけて!{EOS}"
	.if (. - RustboroCity_Text_IdBetterGetBackToWork) > 0x22
	.error "RustboroCity_Text_IdBetterGetBackToWork may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_IdBetterGetBackToWork) < 0x22
	.space 0x22 - (. - RustboroCity_Text_IdBetterGetBackToWork)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1288 RustboroCity_Text_YouCanHave2On2Battle
	.globl RustboroCity_Text_YouCanHave2On2Battle
RustboroCity_Text_YouCanHave2On2Battle: @ 0x081DFD5D
	.string "きみ しってる?\nふたりづれの トレーナーとじゃ なくても\l2たい2の しょうぶが できるんだ!\p2ひき いじょう ポケモンを もってるとき\nふたりの トレーナーと めが あえば\lしょうぶを どうじに いどんで くるよ!\pたった ひとりで ふたりを あいてに\nかてたら カッコいいよねー!{EOS}"
	.if (. - RustboroCity_Text_YouCanHave2On2Battle) > 0x91
	.error "RustboroCity_Text_YouCanHave2On2Battle may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Text_YouCanHave2On2Battle) < 0x91
	.space 0x91 - (. - RustboroCity_Text_YouCanHave2On2Battle)
	.endif
	@ analyzed canonical ROM range 0x081DFDEE-0x081DFEBF
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_FortreeCity_OnTransition_OnResume: @ 0x081DFDEE
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081DFDF9
	.byte 0x05
	.4byte EventScript_JP_081DFDFD
	.byte 0
EventScript_JP_081DFDF9: @ 0x081DFDF9
	setflag 0x087A
	end
EventScript_JP_081DFDFD: @ 0x081DFDFD
	setstepcallback 0x02
	end
.globl EventScript_JP_081DFE00
EventScript_JP_081DFE00: @ 0x081DFE00
	loadword 0x00, FortreeCity_Text_SawGiganticPokemonInSky
	callstd 0x02
	end
.globl EventScript_JP_081DFE09
EventScript_JP_081DFE09: @ 0x081DFE09
	lock
	faceplayer
	checkflag 0x0127
	goto_if 0x01, EventScript_JP_081DFE1E
	loadword 0x00, FortreeCity_Text_SomethingBlockingGym
	callstd 0x04
	release
	end
EventScript_JP_081DFE1E: @ 0x081DFE1E
	loadword 0x00, FortreeCity_Text_ThisTimeIllBeatWinona
	callstd 0x04
	release
	end
.globl EventScript_JP_081DFE28
EventScript_JP_081DFE28: @ 0x081DFE28
	loadword 0x00, FortreeCity_Text_TreesGrowByDrinkingRainwater
	callstd 0x02
	end
.globl EventScript_JP_081DFE31
EventScript_JP_081DFE31: @ 0x081DFE31
	loadword 0x00, FortreeCity_Text_EveryoneHealthyAndLively
	callstd 0x02
	end
.globl EventScript_JP_081DFE3A
EventScript_JP_081DFE3A: @ 0x081DFE3A
	loadword 0x00, FortreeCity_Text_BugPokemonComeThroughWindow
	callstd 0x02
	end
.globl EventScript_JP_081DFE43
EventScript_JP_081DFE43: @ 0x081DFE43
	loadword 0x00, FortreeCity_Text_PokemonThatEvolveWhenTraded
	callstd 0x02
	end
.globl EventScript_JP_081DFE4C
EventScript_JP_081DFE4C: @ 0x081DFE4C
	loadword 0x00, FortreeCity_Text_CitySign
	callstd 0x03
	end
.globl EventScript_JP_081DFE55
EventScript_JP_081DFE55: @ 0x081DFE55
	loadword 0x00, FortreeCity_Text_GymSign
	callstd 0x03
	end
.globl EventScript_JP_081DFE5E
EventScript_JP_081DFE5E: @ 0x081DFE5E
	lock
	faceplayer
	checkitem 0x0120, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DFE7A
	loadword 0x00, FortreeCity_Text_SomethingUnseeable
	callstd 0x04
	release
	end
EventScript_JP_081DFE7A: @ 0x081DFE7A
	loadword 0x00, FortreeCity_Text_UnseeableUseDevonScope
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DFE8F
	release
	end
EventScript_JP_081DFE8F: @ 0x081DFE8F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FortreeCity_Text_UsedDevonScopePokemonFled
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, Movement_0824344A
	@ event command: waitmovement
	waitmovement 0x0000
	waitse
	playmoncry 0x013D, 0x0002
	delay 0x0028
	waitmoncry
	@ event command: applymovement
	applymovement 0x800F, RustboroCity_Movement_WalkRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x800F
	setflag 0x0127
	release
	end
RustboroCity_Movement_WalkRight: @ 0x081DFEBE
	@ object movement sequence
	walk_right
	step_end
