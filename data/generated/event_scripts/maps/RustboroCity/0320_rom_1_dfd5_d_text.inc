	@ data/maps/RustboroCity/scripts.inc:1015 RustboroCity_Text_WeShortenItToDevon
	.globl gText_Rom_1DF278
gText_Rom_1DF278: @ 0x081DF278
	.string "デボン コーポレーション……\nながいから みんな デボンって よぶけど\pあの かいしゃ では いろいろと\nべんりな ものを つくってるんだ!{EOS}"
	.if (. - gText_Rom_1DF278) > 0x47
	.error "gText_Rom_1DF278 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF278) < 0x47
	.space 0x47 - (. - gText_Rom_1DF278)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1021 RustboroCity_Text_SneakyLookingManWentAroundCorner
	.globl gText_Rom_1DF2BF
gText_Rom_1DF2BF: @ 0x081DF2BF
	.string "ん? あやしい おとこ?\pそういえば にんそうの わるい おとこが\nそこの かどを まがっていったよ{EOS}"
	.if (. - gText_Rom_1DF2BF) > 0x33
	.error "gText_Rom_1DF2BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF2BF) < 0x33
	.space 0x33 - (. - gText_Rom_1DF2BF)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1026 RustboroCity_Text_HaveYouChallengedGym
	.globl gText_Rom_1DF2F2
gText_Rom_1DF2F2: @ 0x081DF2F2
	.string "ポケモンジムに ちょうせん したかい?\pあの キラリと かがやく\nジムバッジを もつと トレーナーとしての\lじかくが めばえて くるんだな!{EOS}"
	.if (. - gText_Rom_1DF2F2) > 0x47
	.error "gText_Rom_1DF2F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF2F2) < 0x47
	.space 0x47 - (. - gText_Rom_1DF2F2)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1032 RustboroCity_Text_HeyThatsRustborosGymBadge
	.globl gText_Rom_1DF339
gText_Rom_1DF339: @ 0x081DF339
	.string "おっ! カナズミの ジムバッジ!\pいくつか ある バッジの なかで\nカナズミの やつが いちばん かっこいいな!{EOS}"
	.if (. - gText_Rom_1DF339) > 0x39
	.error "gText_Rom_1DF339 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF339) < 0x39
	.space 0x39 - (. - gText_Rom_1DF339)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1037 RustboroCity_Text_YoureNewAroundHere
	.globl gText_Rom_1DF372
gText_Rom_1DF372: @ 0x081DF372
	.string "おや? きみは だれだい?\nこの あたりでは みかけない かお だね\pトレーナーズ スクールの てんこうせい?{EOS}"
	.if (. - gText_Rom_1DF372) > 0x38
	.error "gText_Rom_1DF372 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF372) < 0x38
	.space 0x38 - (. - gText_Rom_1DF372)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1042 RustboroCity_Text_GymLeaderIsntEasyWithFire
	.globl gText_Rom_1DF3AA
gText_Rom_1DF3AA: @ 0x081DF3AA
	.string "ジムリーダーに ちょうせん したけど……\pあたしの ほのおタイプの ポケモンじゃ\nちょっと かつのは たいへんそう……\pだって ほのおタイプ って\nいわタイプに あいしょうが わるいもの……{EOS}"
	.if (. - gText_Rom_1DF3AA) > 0x60
	.error "gText_Rom_1DF3AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF3AA) < 0x60
	.space 0x60 - (. - gText_Rom_1DF3AA)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1049 RustboroCity_Text_MrBrineyWalksInTheTunnel
	.globl gText_Rom_1DF40A
gText_Rom_1DF40A: @ 0x081DF40A
	.string "はまべの こやに すんでいる\nふなのりの ハギろうじん\lときどき トンネルに さんぽに いくんだよ{EOS}"
	.if (. - gText_Rom_1DF40A) > 0x32
	.error "gText_Rom_1DF40A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF40A) < 0x32
	.space 0x32 - (. - gText_Rom_1DF40A)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1054 RustboroCity_Text_MrBrineyLovesPeeko
	.globl gText_Rom_1DF43C
gText_Rom_1DF43C: @ 0x081DF43C
	.string "はまべの こやに すんでいる\nふなのりの ハギろうじん\lピーコちゃんの ために カイナに いって\lかいもの するんだってさ\pほんとうに ピーコちゃんが すきなんだな!\nあの じいさん{EOS}"
	.if (. - gText_Rom_1DF43C) > 0x5c
	.error "gText_Rom_1DF43C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF43C) < 0x5c
	.space 0x5c - (. - gText_Rom_1DF43C)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1062 RustboroCity_Text_WowYouHavePokemon
	.globl gText_Rom_1DF498
gText_Rom_1DF498: @ 0x081DF498
	.string "あなたも ポケモンを つれてるのね\pあたしも おおきくなったら\nポケモンと どこかに いくんだ!{EOS}"
	.if (. - gText_Rom_1DF498) > 0x31
	.error "gText_Rom_1DF498 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF498) < 0x31
	.space 0x31 - (. - gText_Rom_1DF498)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1067 RustboroCity_Text_CatchRarePokemonIfIGoToSchool
	.globl gText_Rom_1DF4C9
gText_Rom_1DF4C9: @ 0x081DF4C9
	.string "ぽけもん とれーなーず すくーる かぁ!\pここに にゅうがく すれば\nめずらしい ポケモンでも かんたんに\lつかまえられるように なるのかな?{EOS}"
	.if (. - gText_Rom_1DF4C9) > 0x48
	.error "gText_Rom_1DF4C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF4C9) < 0x48
	.space 0x48 - (. - gText_Rom_1DF4C9)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1073 RustboroCity_Text_PokemonCanChangeLookFromExp
	.globl gText_Rom_1DF511
gText_Rom_1DF511: @ 0x081DF511
	.string "ポケモンって たたかいの けいけんを\nつんでいくと すがたかたち が\lかわっちゃうことが あるんだよ!{EOS}"
	.if (. - gText_Rom_1DF511) > 0x34
	.error "gText_Rom_1DF511 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF511) < 0x34
	.space 0x34 - (. - gText_Rom_1DF511)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1078 RustboroCity_Text_PokemonChangeShape
	.globl gText_Rom_1DF545
gText_Rom_1DF545: @ 0x081DF545
	.string "ポケモンの すがたが かわっちゃうの?\nいきなり かわると ビックリしちゃう!{EOS}"
	.if (. - gText_Rom_1DF545) > 0x28
	.error "gText_Rom_1DF545 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF545) < 0x28
	.space 0x28 - (. - gText_Rom_1DF545)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1082 RustboroCity_Text_TradePokemonGrowFast
	.globl gText_Rom_1DF56D
gText_Rom_1DF56D: @ 0x081DF56D
	.string "ひとと こうかんした ポケモンは\nそだつのが はやい!\p……でも ジムバッジを もっていないと\nいうことを きいて くれないんだ{EOS}"
	.if (. - gText_Rom_1DF56D) > 0x41
	.error "gText_Rom_1DF56D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF56D) < 0x41
	.space 0x41 - (. - gText_Rom_1DF56D)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1088 RustboroCity_Text_OutOfTheWay
	.globl gText_Rom_1DF5AE
gText_Rom_1DF5AE: @ 0x081DF5AE
	.string "どけー! どけどけー!!{EOS}"
	.if (. - gText_Rom_1DF5AE) > 0xd
	.error "gText_Rom_1DF5AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF5AE) < 0xd
	.space 0xd - (. - gText_Rom_1DF5AE)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1091 RustboroCity_Text_WaitDontTakeMyGoods
	.globl gText_Rom_1DF5BB
gText_Rom_1DF5BB: @ 0x081DF5BB
	.string "まってぇー!\pその にもつを かえしてぇぇぇー!!{EOS}"
	.if (. - gText_Rom_1DF5BB) > 0x1a
	.error "gText_Rom_1DF5BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF5BB) < 0x1a
	.space 0x1a - (. - gText_Rom_1DF5BB)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1095 RustboroCity_Text_HelpMeIWasRobbed
	.globl gText_Rom_1DF5D5
gText_Rom_1DF5D5: @ 0x081DF5D5
	.string "ああ きみは!\pトウカのもりで たすけてくれた\nすてきな トレーナーじゃ ないですか!\pおねがいです!\pアクアだんに うばわれた\nデボンのにもつ とりかえして ください!\pあれが ないと……\nわたし とても こまるんです{EOS}"
	.if (. - gText_Rom_1DF5D5) > 0x6f
	.error "gText_Rom_1DF5D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF5D5) < 0x6f
	.space 0x6f - (. - gText_Rom_1DF5D5)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1105 RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1DF644
gText_Rom_1DF644: @ 0x081DF644
	.string "さっきの あやしい やつは\nむこうの トンネルの ほうに\lにげていったと おもうのですよ{EOS}"
	.if (. - gText_Rom_1DF644) != 0x2d
	.error "gText_Rom_1DF644 must retain its original byte length"
	.endif
	.globl gText_Rom_1DF66D
	.set gText_Rom_1DF66D, gText_Rom_1DF644 + 0x29
	@ data/maps/RustboroCity/scripts.inc:1110 RustboroCity_Text_YouGotItThankYou
	.globl gText_Rom_1DF671
gText_Rom_1DF671: @ 0x081DF671
	.string "ああ! どうでした\nデボンのにもつ は……?\pそうですか!\nとりかえして くれたのですか!\pきみは ほんとうに\nすごい トレーナー ですね!\p……そうだ! おれいに また\nスーパーボールを あげちゃおう!{EOS}"
	.if (. - gText_Rom_1DF671) > 0x67
	.error "gText_Rom_1DF671 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF671) < 0x67
	.space 0x67 - (. - gText_Rom_1DF671)
	.endif
	@ data/maps/PetalburgWoods/scripts.inc:377 PetalburgWoods_Text_YoureLoadedWithItems (+1 aliases)
	.globl gText_Rom_1DF6D8
gText_Rom_1DF6D8: @ 0x081DF6D8
	.string "どうぐ いっぱいで\nスーパーボール あげられないね{EOS}"
	.if (. - gText_Rom_1DF6D8) > 0x1a
	.error "gText_Rom_1DF6D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF6D8) < 0x1a
	.space 0x1a - (. - gText_Rom_1DF6D8)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1124 RustboroCity_Text_PleaseComeWithMe
	.globl gText_Rom_1DF6F2
gText_Rom_1DF6F2: @ 0x081DF6F2
	.string "きみ! きみ!\nわたしに ついてきて ください!{EOS}"
	.if (. - gText_Rom_1DF6F2) > 0x19
	.error "gText_Rom_1DF6F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF6F2) < 0x19
	.space 0x19 - (. - gText_Rom_1DF6F2)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1128 RustboroCity_Text_MayHiLetsRegister
	.globl gText_Rom_1DF70B
gText_Rom_1DF70B: @ 0x081DF70B
	.string "ハルカ『あっ {PLAYER}{KUN}!\pポケナビに エントリーコールを\nつけて もらったのね!\pじゃあ あたしたち\nおたがいに よびだせる ように\lなまえを とうろく しておこうよ!\p…… …… ……{EOS}"
	.if (. - gText_Rom_1DF70B) > 0x5e
	.error "gText_Rom_1DF70B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF70B) < 0x5e
	.space 0x5e - (. - gText_Rom_1DF70B)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1137 RustboroCity_Text_RegisteredMay
	.globl gText_Rom_1DF769
gText_Rom_1DF769: @ 0x081DF769
	.string "ハルカを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_1DF769) > 0x14
	.error "gText_Rom_1DF769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF769) < 0x14
	.space 0x14 - (. - gText_Rom_1DF769)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1141 RustboroCity_Text_MayPassedBrineyWantToBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1DF77D
gText_Rom_1DF77D: @ 0x081DF77D
	.string "ハルカ『そういえば トウカのもりで\nハギろうじんと すれちがったわ\pたぶん…… はまべの こやに\nもどるところ だったんじゃ ないかな!\pえーと…… それより {PLAYER}{KUN}の\nポケモンずかんの ちょうしは どう?\pあたしは かなり いい かんじ!\nどう? ちょっと しょうぶ してみる?{EOS}"
	.if (. - gText_Rom_1DF77D) != 0x8e
	.error "gText_Rom_1DF77D must retain its original byte length"
	.endif
	.globl gText_Rom_1DF7E6
	.set gText_Rom_1DF7E6, gText_Rom_1DF77D + 0x69
	@ data/maps/Route104/scripts.inc:1097 Route104_Text_MayHaventRaisedPokemon (+1 aliases)
	.globl gText_Rom_1DF80B
gText_Rom_1DF80B: @ 0x081DF80B
	.string "ハルカ『えー なんでよー\nあんまり ポケモン つかまえたり\lそだてたり してないのかな?\pそれじゃあ トレーナーとして\nまだまだ ね!{EOS}"
	.if (. - gText_Rom_1DF80B) > 0x44
	.error "gText_Rom_1DF80B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF80B) < 0x44
	.space 0x44 - (. - gText_Rom_1DF80B)
	.endif
	@ data/maps/Route104/scripts.inc:1104 Route104_Text_MayLetsBattle (+1 aliases)
	.globl gText_Rom_1DF84F
gText_Rom_1DF84F: @ 0x081DF84F
	.string "ハルカ『どう? あたしと ここで\nちょっと しょうぶ してみる?{EOS}"
	.if (. - gText_Rom_1DF84F) > 0x21
	.error "gText_Rom_1DF84F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF84F) < 0x21
	.space 0x21 - (. - gText_Rom_1DF84F)
	.endif
	@ data/maps/Route104/scripts.inc:1108 Route104_Text_MayIntro (+1 aliases)
	.globl gText_Rom_1DF870
gText_Rom_1DF870: @ 0x081DF870
	.string "ハルカ『トレーナーに なった ばかりの\n{PLAYER}{KUN}には まけないよ!{EOS}"
	.if (. - gText_Rom_1DF870) > 0x22
	.error "gText_Rom_1DF870 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF870) < 0x22
	.space 0x22 - (. - gText_Rom_1DF870)
	.endif
	@ data/maps/Route104/scripts.inc:1112 Route104_Text_MayDefeat (+2 aliases)
	.globl gText_Rom_1DF892
gText_Rom_1DF892: @ 0x081DF892
	.string "うわあ……\nもう こんなに つよいなんて……{EOS}"
	.if (. - gText_Rom_1DF892) > 0x17
	.error "gText_Rom_1DF892 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF892) < 0x17
	.space 0x17 - (. - gText_Rom_1DF892)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1170 RustboroCity_Text_MayMrBrineyHint
	.globl gText_Rom_1DF8A9
gText_Rom_1DF8A9: @ 0x081DF8A9
	.string "ハルカ『そういえば さっき すれちがった\nハギろうじん なんだけどね\p{PLAYER}{KUN}は ひっこして きたばかりで\nしらないかも しれないけど\lむかしは すっごい ふなのり だったのよ!{EOS}"
	.if (. - gText_Rom_1DF8A9) > 0x5a
	.error "gText_Rom_1DF8A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF8A9) < 0x5a
	.space 0x5a - (. - gText_Rom_1DF8A9)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1177 RustboroCity_Text_BrendanHiLetsRegister
	.globl gText_Rom_1DF903
gText_Rom_1DF903: @ 0x081DF903
	.string "ユウキ『おっ {PLAYER}!\pポケナビに エントリーコールを\nつけて もらったんだな!\pじゃあ オレたち\nおたがいに よびだせる ように\lなまえを とうろく しておこうよ!\p…… …… ……{EOS}"
	.if (. - gText_Rom_1DF903) > 0x5c
	.error "gText_Rom_1DF903 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF903) < 0x5c
	.space 0x5c - (. - gText_Rom_1DF903)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1186 RustboroCity_Text_RegisteredBrendan
	.globl gText_Rom_1DF95F
gText_Rom_1DF95F: @ 0x081DF95F
	.string "ユウキを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_1DF95F) > 0x14
	.error "gText_Rom_1DF95F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF95F) < 0x14
	.space 0x14 - (. - gText_Rom_1DF95F)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1190 RustboroCity_Text_BrendanPassedBrineyWantToBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1DF973
gText_Rom_1DF973: @ 0x081DF973
	.string "ユウキ『そういえば {PLAYER}\pさっき トウカのもりで\nハギろうじんと すれちがったよ\pたぶん…… はまべの こやに\nもどるところ だったんじゃ ないかな!\pえーと…… それより {PLAYER}の\nポケモンずかんは どう?\lちょっとは ページ うまったか?\pオレは すごいよ!\nどうだ ポケモン しょうぶで\lそのせいかを ためして やろうか?{EOS}"
	.if (. - gText_Rom_1DF973) != 0xa4
	.error "gText_Rom_1DF973 must retain its original byte length"
	.endif
	.globl gText_Rom_1DF9EC
	.set gText_Rom_1DF9EC, gText_Rom_1DF973 + 0x79
	@ data/maps/Route104/scripts.inc:1146 Route104_Text_BrendanNoConfidence (+1 aliases)
	.globl gText_Rom_1DFA17
gText_Rom_1DFA17: @ 0x081DFA17
	.string "ユウキ『なんだよ\nもってる ポケモンに じしんが ないのか?{EOS}"
	.if (. - gText_Rom_1DFA17) > 0x1f
	.error "gText_Rom_1DFA17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFA17) < 0x1f
	.space 0x1f - (. - gText_Rom_1DFA17)
	.endif
	@ data/maps/Route104/scripts.inc:1150 Route104_Text_BrendanLetsBattle (+1 aliases)
	.globl gText_Rom_1DFA36
gText_Rom_1DFA36: @ 0x081DFA36
	.string "ユウキ『どうだい オレと ここで\nしょうぶ してみるか?{EOS}"
	.if (. - gText_Rom_1DFA36) > 0x1d
	.error "gText_Rom_1DFA36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFA36) < 0x1d
	.space 0x1d - (. - gText_Rom_1DFA36)
	.endif
	@ data/maps/Route104/scripts.inc:1154 Route104_Text_BrendanIntro (+1 aliases)
	.globl gText_Rom_1DFA53
gText_Rom_1DFA53: @ 0x081DFA53
	.string "ユウキ『トレーナーに なりたて だって\nてかげんは しないからな!{EOS}"
	.if (. - gText_Rom_1DFA53) > 0x22
	.error "gText_Rom_1DFA53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFA53) < 0x22
	.space 0x22 - (. - gText_Rom_1DFA53)
	.endif
	@ data/maps/Route104/scripts.inc:1158 Route104_Text_BrendanDefeat (+2 aliases)
	.globl gText_Rom_1DFA75
gText_Rom_1DFA75: @ 0x081DFA75
	.string "へえ……\nなかなか やるじゃないか{EOS}"
	.if (. - gText_Rom_1DFA75) > 0x12
	.error "gText_Rom_1DFA75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFA75) < 0x12
	.space 0x12 - (. - gText_Rom_1DFA75)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1219 RustboroCity_Text_BrendanMrBrineyHint
	.globl gText_Rom_1DFA87
gText_Rom_1DFA87: @ 0x081DFA87
	.string "ユウキ『そういえば さっき すれちがった\nハギろうじん だけどな\p{PLAYER}は ひっこして きたばかりで\nしらないかも しれないけど\lむかしは すごい ふなのり だったんだ!{EOS}"
	.if (. - gText_Rom_1DFA87) > 0x55
	.error "gText_Rom_1DFA87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFA87) < 0x55
	.space 0x55 - (. - gText_Rom_1DFA87)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1226 RustboroCity_Text_TunnelNearingCompletion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1DFADC
gText_Rom_1DFADC: @ 0x081DFADC
	.string "「べんりな トンネル かんせい まぢか!」\p……と かんばんに かかれているが\nその うえに あかい ペンキで\lおおきな バッテンが つけられている{EOS}"
	.if (. - gText_Rom_1DFADC) != 0x4b
	.error "gText_Rom_1DFADC must retain its original byte length"
	.endif
	.globl gText_Rom_1DFB23
	.set gText_Rom_1DFB23, gText_Rom_1DFADC + 0x47
	@ data/maps/RustboroCity/scripts.inc:1232 RustboroCity_Text_DevonCorpSign
	.globl gText_Rom_1DFB27
gText_Rom_1DFB27: @ 0x081DFB27
	.string "「デボン コーポレーション」\pみなさんの せいかつの ために\nなんでも つくっています!{EOS}"
	.if (. - gText_Rom_1DFB27) > 0x2d
	.error "gText_Rom_1DFB27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFB27) < 0x2d
	.space 0x2d - (. - gText_Rom_1DFB27)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1237 RustboroCity_Text_GymSign
	.globl gText_Rom_1DFB54
gText_Rom_1DFB54: @ 0x081DFB54
	.string "カナズミ シティ ポケモンジム\nリーダー ツツジ\lいわに ときめく ゆうとうせい!{EOS}"
	.if (. - gText_Rom_1DFB54) > 0x2a
	.error "gText_Rom_1DFB54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFB54) < 0x2a
	.space 0x2a - (. - gText_Rom_1DFB54)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1242 RustboroCity_Text_DevonCorpBranchOfficeSign
	.globl gText_Rom_1DFB7E
gText_Rom_1DFB7E: @ 0x081DFB7E
	.string "「デボン コーポレーション ぶんしつ」\pかんけいしゃ いがいの たちいりは\nどうぞ ごえんりょ ください!{EOS}"
	.if (. - gText_Rom_1DFB7E) > 0x36
	.error "gText_Rom_1DFB7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFB7E) < 0x36
	.space 0x36 - (. - gText_Rom_1DFB7E)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1247 RustboroCity_Text_CitySign
	.globl gText_Rom_1DFBB4
gText_Rom_1DFBB4: @ 0x081DFBB4
	.string "ここは カナズミ シティ\pしぜんと かがくの ゆうごうを\nついきゅうする まち{EOS}"
	.if (. - gText_Rom_1DFBB4) > 0x28
	.error "gText_Rom_1DFBB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFBB4) < 0x28
	.space 0x28 - (. - gText_Rom_1DFBB4)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1252 RustboroCity_Text_TrainersSchoolSign
	.globl gText_Rom_1DFBDC
gText_Rom_1DFBDC: @ 0x081DFBDC
	.string "「ポケモン トレーナーズ スクール」\nポケモンのことなら なんでも おしえます!{EOS}"
	.if (. - gText_Rom_1DFBDC) > 0x29
	.error "gText_Rom_1DFBDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFBDC) < 0x29
	.space 0x29 - (. - gText_Rom_1DFBDC)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1256 RustboroCity_Text_CuttersHouse
	.globl gText_Rom_1DFC05
gText_Rom_1DFC05: @ 0x081DFC05
	.string "「いあいぎりオヤジの いえ」{EOS}"
	.if (. - gText_Rom_1DFC05) > 0xf
	.error "gText_Rom_1DFC05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFC05) < 0xf
	.space 0xf - (. - gText_Rom_1DFC05)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1259 RustboroCity_Text_DevelopedNewPokenavFeature
	.globl gText_Rom_1DFC14
gText_Rom_1DFC14: @ 0x081DFC14
	.string "いま ポケナビの ついかきのうを\nかいはつ していたのですが……\pうまく いきましたよ!\p{PLAYER}さん!\pしゃちょうに いただいた そのポケナビ\nちょっと かしてくださいね!{EOS}"
	.if (. - gText_Rom_1DFC14) > 0x56
	.error "gText_Rom_1DFC14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFC14) < 0x56
	.space 0x56 - (. - gText_Rom_1DFC14)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1267 RustboroCity_Text_AddedMatchCallPleaseCallMrStone
	.globl gText_Rom_1DFC6A
gText_Rom_1DFC6A: @ 0x081DFC6A
	.string "はい! {PLAYER}さんの ポケナビに\nエントリーコール という きのうを\lついか しました!\pポケナビに とうろく されていれば\nとおく はなれた ところの ひとと\lエントリーコールを つうじて\lかいわが できて しまうんです!\p{PLAYER}さんの ポケナビには\nうちの ツワブキ しゃちょうの なまえが\lとうろく してある はずです\pためしに ちょっと しゃちょうを\nよびだして みてください!{EOS}"
	.if (. - gText_Rom_1DFC6A) > 0xc0
	.error "gText_Rom_1DFC6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFC6A) < 0xc0
	.space 0xc0 - (. - gText_Rom_1DFC6A)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1281 RustboroCity_Text_PleaseSelectPokenav
	.globl gText_Rom_1DFD2A
gText_Rom_1DFD2A: @ 0x081DFD2A
	.string "ポケナビを えらんで ください!{EOS}"
	.if (. - gText_Rom_1DFD2A) > 0x11
	.error "gText_Rom_1DFD2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFD2A) < 0x11
	.space 0x11 - (. - gText_Rom_1DFD2A)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1284 RustboroCity_Text_IdBetterGetBackToWork
	.globl gText_Rom_1DFD3B
gText_Rom_1DFD3B: @ 0x081DFD3B
	.string "……では わたしは しごとに もどります\p{PLAYER}さん おきをつけて!{EOS}"
	.if (. - gText_Rom_1DFD3B) > 0x22
	.error "gText_Rom_1DFD3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFD3B) < 0x22
	.space 0x22 - (. - gText_Rom_1DFD3B)
	.endif
	@ data/maps/RustboroCity/scripts.inc:1288 RustboroCity_Text_YouCanHave2On2Battle
	.globl gText_Rom_1DFD5D
gText_Rom_1DFD5D: @ 0x081DFD5D
	.string "きみ しってる?\nふたりづれの トレーナーとじゃ なくても\l2たい2の しょうぶが できるんだ!\p2ひき いじょう ポケモンを もってるとき\nふたりの トレーナーと めが あえば\lしょうぶを どうじに いどんで くるよ!\pたった ひとりで ふたりを あいてに\nかてたら カッコいいよねー!{EOS}"
	.if (. - gText_Rom_1DFD5D) > 0x91
	.error "gText_Rom_1DFD5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFD5D) < 0x91
	.space 0x91 - (. - gText_Rom_1DFD5D)
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
	loadword 0x00, gText_Rom_1DFEC0
	callstd 0x02
	end
.globl EventScript_JP_081DFE09
EventScript_JP_081DFE09: @ 0x081DFE09
	lock
	faceplayer
	checkflag 0x0127
	goto_if 0x01, EventScript_JP_081DFE1E
	loadword 0x00, gText_Rom_1DFF3B
	callstd 0x04
	release
	end
EventScript_JP_081DFE1E: @ 0x081DFE1E
	loadword 0x00, gText_Rom_1DFF7D
	callstd 0x04
	release
	end
.globl EventScript_JP_081DFE28
EventScript_JP_081DFE28: @ 0x081DFE28
	loadword 0x00, gText_Rom_1DFFA2
	callstd 0x02
	end
.globl EventScript_JP_081DFE31
EventScript_JP_081DFE31: @ 0x081DFE31
	loadword 0x00, gText_Rom_1DFFEA
	callstd 0x02
	end
.globl EventScript_JP_081DFE3A
EventScript_JP_081DFE3A: @ 0x081DFE3A
	loadword 0x00, gText_Rom_1E0049
	callstd 0x02
	end
.globl EventScript_JP_081DFE43
EventScript_JP_081DFE43: @ 0x081DFE43
	loadword 0x00, gText_Rom_1E008B
	callstd 0x02
	end
.globl EventScript_JP_081DFE4C
EventScript_JP_081DFE4C: @ 0x081DFE4C
	loadword 0x00, gText_Rom_1E0126
	callstd 0x03
	end
.globl EventScript_JP_081DFE55
EventScript_JP_081DFE55: @ 0x081DFE55
	loadword 0x00, gText_Rom_1E0148
	callstd 0x03
	end
.globl EventScript_JP_081DFE5E
EventScript_JP_081DFE5E: @ 0x081DFE5E
	lock
	faceplayer
	checkitem 0x0120, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DFE7A
	loadword 0x00, gText_Rom_1E00B0
	callstd 0x04
	release
	end
EventScript_JP_081DFE7A: @ 0x081DFE7A
	loadword 0x00, gText_Rom_1E00C0
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DFE8F
	release
	end
EventScript_JP_081DFE8F: @ 0x081DFE8F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_1E00E1
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
