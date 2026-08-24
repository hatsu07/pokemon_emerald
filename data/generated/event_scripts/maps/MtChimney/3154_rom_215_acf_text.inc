	@ data/maps/MtChimney/scripts.inc:544 MtChimney_Text_MeteoriteWillActivateVolcano
	.globl MtChimney_Text_MeteoriteWillActivateVolcano
MtChimney_Text_MeteoriteWillActivateVolcano: @ 0x0821503D
	.string "いんせきに ひめられた ちから\pこの そうちで ぞうふく すれば\nたちまちの うちに えんとつやまの\lかざん かつどうは かっぱつになる……\pその エネルギーが\nかこうの おくふかくに はたらきかけ\lそして ふふふ……{EOS}"
	.if (. - MtChimney_Text_MeteoriteWillActivateVolcano) > 0x6e
	.error "MtChimney_Text_MeteoriteWillActivateVolcano may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MeteoriteWillActivateVolcano) < 0x6e
	.space 0x6e - (. - MtChimney_Text_MeteoriteWillActivateVolcano)
	.endif
	@ data/maps/MtChimney/scripts.inc:553 MtChimney_Text_MaxieIntro
	.globl MtChimney_Text_MaxieIntro
MtChimney_Text_MaxieIntro: @ 0x082150AB
	.string "マツブサ『ん? だれだ おまえは\p…… …… ……\n…… …… ……\pさいきん アクアだんの かつどうを\nじゃまする こどもがいる と\lアオギリの やつが ぼやいて いたが\lそれは おまえの ことか\p……ふん!\nわれわれ マグマだんの じゃまも\lしてくれようって わけだな!\pいいか? いきものは りくちに あがり\nしんかを くりかえしてきた\pそう だいちこそが すべてなのだ!\pだから われわれ マグマだんは\nだいちを ふやすことで\lひとと ポケモンの はってんを めざす!\pそのために ひつよう なのが\nこのやまに ねむる アイツ……\pおっと! そんなことまで\nおまえが しる ひつようは なかったな\pそんなことより\nわれわれの じゃまを したら どうなるか\lおまえに わからせて やろう!{EOS}"
	.if (. - MtChimney_Text_MaxieIntro) > 0x15c
	.error "MtChimney_Text_MaxieIntro may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MaxieIntro) < 0x15c
	.space 0x15c - (. - MtChimney_Text_MaxieIntro)
	.endif
	@ data/maps/MtChimney/scripts.inc:581 MtChimney_Text_MaxieDefeat (+1 aliases)
	.globl MtChimney_Text_MaxieDefeat
MtChimney_Text_MaxieDefeat: @ 0x08215207
	.string "なに!?\pこの マツブサとも あろう ものが\nゆだん したか!?{EOS}"
	.if (. - MtChimney_Text_MaxieDefeat) > 0x21
	.error "MtChimney_Text_MaxieDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MaxieDefeat) < 0x21
	.space 0x21 - (. - MtChimney_Text_MaxieDefeat)
	.endif
	@ data/maps/MtChimney/scripts.inc:585 MtChimney_Text_MaxieYouHaventSeenLastOfMagma
	.globl MtChimney_Text_MaxieYouHaventSeenLastOfMagma
MtChimney_Text_MaxieYouHaventSeenLastOfMagma: @ 0x08215228
	.string "マツブサ『まあ いい\nこのばは ひとまず あきらめよう……\pだが マグマだんの かつどうは\nこれで おわったわけでは ないのだ!\pふふふ……\pいんせきなど つかわなくとも\nあの たまが てにはいれば ふふふ……{EOS}"
	.if (. - MtChimney_Text_MaxieYouHaventSeenLastOfMagma) > 0x6a
	.error "MtChimney_Text_MaxieYouHaventSeenLastOfMagma may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MaxieYouHaventSeenLastOfMagma) < 0x6a
	.space 0x6a - (. - MtChimney_Text_MaxieYouHaventSeenLastOfMagma)
	.endif
	@ data/maps/MtChimney/scripts.inc:594 MtChimney_Text_TabithaIntro (+1 aliases)
	.globl MtChimney_Text_TabithaIntro
MtChimney_Text_TabithaIntro: @ 0x08215292
	.string "ウヒョヒョ!\pおまえ ここまで きたのか!\pだけど おそかったぜ\nりゅうせいのたきで みつけた\lいんせきは リーダーに わたしたからな!{EOS}"
	.if (. - MtChimney_Text_TabithaIntro) > 0x45
	.error "MtChimney_Text_TabithaIntro may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_TabithaIntro) < 0x45
	.space 0x45 - (. - MtChimney_Text_TabithaIntro)
	.endif
	@ data/maps/MtChimney/scripts.inc:601 MtChimney_Text_TabithaDefeat (+1 aliases)
	.globl MtChimney_Text_TabithaDefeat
MtChimney_Text_TabithaDefeat: @ 0x082152D7
	.string "ウヒョヒョ……\pオレが まけても リーダーが ちゃんと\nアイツを めざめさせて……{EOS}"
	.if (. - MtChimney_Text_TabithaDefeat) > 0x2a
	.error "MtChimney_Text_TabithaDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_TabithaDefeat) < 0x2a
	.space 0x2a - (. - MtChimney_Text_TabithaDefeat)
	.endif
	@ data/maps/MtChimney/scripts.inc:606 MtChimney_Text_TabithaPostBattle
	.globl MtChimney_Text_TabithaPostBattle
MtChimney_Text_TabithaPostBattle: @ 0x08215301
	.string "リーダー! はやく!\nいんせきの パワーを アイツに!\pウヒョヒョ……!{EOS}"
	.if (. - MtChimney_Text_TabithaPostBattle) > 0x25
	.error "MtChimney_Text_TabithaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_TabithaPostBattle) < 0x25
	.space 0x25 - (. - MtChimney_Text_TabithaPostBattle)
	.endif
	@ data/maps/MtChimney/scripts.inc:611 MtChimney_Text_Grunt2Intro (+1 aliases)
	.globl MtChimney_Text_Grunt2Intro
MtChimney_Text_Grunt2Intro: @ 0x08215326
	.string "オレら マグマだんは\nみんなの ために がんばってるんだ!\pだって アイツの ちからで\nだいちが ふえれば みんなも\lすむところが ふえて うれしいだろ?{EOS}"
	.if (. - MtChimney_Text_Grunt2Intro) > 0x4e
	.error "MtChimney_Text_Grunt2Intro may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_Grunt2Intro) < 0x4e
	.space 0x4e - (. - MtChimney_Text_Grunt2Intro)
	.endif
	@ data/maps/MtChimney/scripts.inc:618 MtChimney_Text_Grunt2Defeat (+1 aliases)
	.globl MtChimney_Text_Grunt2Defeat
MtChimney_Text_Grunt2Defeat: @ 0x08215374
	.string "あれー?\nオレ まけたのー!?{EOS}"
	.if (. - MtChimney_Text_Grunt2Defeat) > 0x10
	.error "MtChimney_Text_Grunt2Defeat may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_Grunt2Defeat) < 0x10
	.space 0x10 - (. - MtChimney_Text_Grunt2Defeat)
	.endif
	@ data/maps/MtChimney/scripts.inc:622 MtChimney_Text_Grunt2PostBattle
	.globl MtChimney_Text_Grunt2PostBattle
MtChimney_Text_Grunt2PostBattle: @ 0x08215384
	.string "オレらの リーダーは\n「みんなが よろこぶ ことだ」って\lいってるんだ!\pなのに なんで みんな ジャマするんだ?{EOS}"
	.if (. - MtChimney_Text_Grunt2PostBattle) > 0x3a
	.error "MtChimney_Text_Grunt2PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_Grunt2PostBattle) < 0x3a
	.space 0x3a - (. - MtChimney_Text_Grunt2PostBattle)
	.endif
	@ data/maps/MtChimney/scripts.inc:628 MtChimney_Text_Grunt1Intro (+1 aliases)
	.globl MtChimney_Text_Grunt1Intro
MtChimney_Text_Grunt1Intro: @ 0x082153BE
	.string "りくちが ふえて くれたら\nおおきな マイホーム だって もてるわ!\pようがんの うえに ひっこし するのよ!{EOS}"
	.if (. - MtChimney_Text_Grunt1Intro) > 0x38
	.error "MtChimney_Text_Grunt1Intro may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_Grunt1Intro) < 0x38
	.space 0x38 - (. - MtChimney_Text_Grunt1Intro)
	.endif
	@ data/maps/MtChimney/scripts.inc:633 MtChimney_Text_Grunt1Defeat (+1 aliases)
	.globl MtChimney_Text_Grunt1Defeat
MtChimney_Text_Grunt1Defeat: @ 0x082153F6
	.string "わたしの マイホームの ゆめが……{EOS}"
	.if (. - MtChimney_Text_Grunt1Defeat) > 0x12
	.error "MtChimney_Text_Grunt1Defeat may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_Grunt1Defeat) < 0x12
	.space 0x12 - (. - MtChimney_Text_Grunt1Defeat)
	.endif
	@ data/maps/MtChimney/scripts.inc:636 MtChimney_Text_Grunt1PostBattle
	.globl MtChimney_Text_Grunt1PostBattle
MtChimney_Text_Grunt1PostBattle: @ 0x08215408
	.string "あんた なんか うみに プカプカ\nうかんで いれば いいのよ!{EOS}"
	.if (. - MtChimney_Text_Grunt1PostBattle) > 0x20
	.error "MtChimney_Text_Grunt1PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_Grunt1PostBattle) < 0x20
	.space 0x20 - (. - MtChimney_Text_Grunt1PostBattle)
	.endif
	@ data/maps/MtChimney/scripts.inc:640 MtChimney_Text_TeamAquaAlwaysMessingWithPlans
	.globl MtChimney_Text_TeamAquaAlwaysMessingWithPlans
MtChimney_Text_TeamAquaAlwaysMessingWithPlans: @ 0x08215428
	.string "アクアだんの やつらめ……\nいちいち オレたちの じゃまを しやがって!{EOS}"
	.if (. - MtChimney_Text_TeamAquaAlwaysMessingWithPlans) > 0x25
	.error "MtChimney_Text_TeamAquaAlwaysMessingWithPlans may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_TeamAquaAlwaysMessingWithPlans) < 0x25
	.space 0x25 - (. - MtChimney_Text_TeamAquaAlwaysMessingWithPlans)
	.endif
	@ data/maps/MtChimney/scripts.inc:644 MtChimney_Text_MeteoritesPackAmazingPower
	.globl MtChimney_Text_MeteoritesPackAmazingPower
MtChimney_Text_MeteoritesPackAmazingPower: @ 0x0821544D
	.string "いんせきには すごい パワーが あるのだ!{EOS}"
	.if (. - MtChimney_Text_MeteoritesPackAmazingPower) > 0x16
	.error "MtChimney_Text_MeteoritesPackAmazingPower may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MeteoritesPackAmazingPower) < 0x16
	.space 0x16 - (. - MtChimney_Text_MeteoritesPackAmazingPower)
	.endif
	@ data/maps/MtChimney/scripts.inc:647 MtChimney_Text_YouBetterNotMessWithUs
	.globl MtChimney_Text_YouBetterNotMessWithUs
MtChimney_Text_YouBetterNotMessWithUs: @ 0x08215463
	.string "オレたちの じゃまを するな!\pアイツを ふっかつ させるのは\nみんなの ために やってること なんだ!{EOS}"
	.if (. - MtChimney_Text_YouBetterNotMessWithUs) > 0x35
	.error "MtChimney_Text_YouBetterNotMessWithUs may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_YouBetterNotMessWithUs) < 0x35
	.space 0x35 - (. - MtChimney_Text_YouBetterNotMessWithUs)
	.endif
	@ data/maps/MtChimney/scripts.inc:652 MtChimney_Text_AquasNameSimilar
	.globl MtChimney_Text_AquasNameSimilar
MtChimney_Text_AquasNameSimilar: @ 0x08215498
	.string "オレたちは マグマだん!\pやつらは アクアだん!\pにたような なまえを つけやがって\nいまいましい やつらだ!{EOS}"
	.if (. - MtChimney_Text_AquasNameSimilar) > 0x38
	.error "MtChimney_Text_AquasNameSimilar may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_AquasNameSimilar) < 0x38
	.space 0x38 - (. - MtChimney_Text_AquasNameSimilar)
	.endif
	@ data/maps/MtChimney/scripts.inc:658 MtChimney_Text_DouseThemInFire
	.globl MtChimney_Text_DouseThemInFire
MtChimney_Text_DouseThemInFire: @ 0x082154D0
	.string "よーし!\nほのおを ぶっかけてやれー!!{EOS}"
	.if (. - MtChimney_Text_DouseThemInFire) > 0x15
	.error "MtChimney_Text_DouseThemInFire may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_DouseThemInFire) < 0x15
	.space 0x15 - (. - MtChimney_Text_DouseThemInFire)
	.endif
	@ data/maps/MtChimney/scripts.inc:662 MtChimney_Text_KeepMakingMoreLand
	.globl MtChimney_Text_KeepMakingMoreLand
MtChimney_Text_KeepMakingMoreLand: @ 0x082154E5
	.string "もっと もっと だいちを ふやすぜ!!{EOS}"
	.if (. - MtChimney_Text_KeepMakingMoreLand) > 0x14
	.error "MtChimney_Text_KeepMakingMoreLand may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_KeepMakingMoreLand) < 0x14
	.space 0x14 - (. - MtChimney_Text_KeepMakingMoreLand)
	.endif
	@ data/maps/MtChimney/scripts.inc:665 MtChimney_Text_Bufoh
	.globl MtChimney_Text_Bufoh
MtChimney_Text_Bufoh: @ 0x082154F9
	.string "ぶふぉー!!{EOS}"
	.if (. - MtChimney_Text_Bufoh) > 0x7
	.error "MtChimney_Text_Bufoh may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_Bufoh) < 0x7
	.space 0x7 - (. - MtChimney_Text_Bufoh)
	.endif
	@ data/maps/MtChimney/scripts.inc:668 MtChimney_Text_ArchieGoStopTeamMagma
	.globl MtChimney_Text_ArchieGoStopTeamMagma
MtChimney_Text_ArchieGoStopTeamMagma: @ 0x08215500
	.string "アオギリ『むむむ {PLAYER}!\nやっぱり ここにも あらわれたか!\pほら! マグマだんの れんちゅうが\nなにを たくらんで いるのか みてみろ!\pやつらは うばった いんせきの パワーを\nかざんに ながしこもうと しているんだ!\pそんなことを したら\nかざんが だいふんか するじゃないか!{EOS}"
	.if (. - MtChimney_Text_ArchieGoStopTeamMagma) > 0x8f
	.error "MtChimney_Text_ArchieGoStopTeamMagma may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ArchieGoStopTeamMagma) < 0x8f
	.space 0x8f - (. - MtChimney_Text_ArchieGoStopTeamMagma)
	.endif
	@ data/maps/MtChimney/scripts.inc:678 MtChimney_Text_ArchieIHaveMyHandsFull
	.globl MtChimney_Text_ArchieIHaveMyHandsFull
MtChimney_Text_ArchieIHaveMyHandsFull: @ 0x0821558F
	.string "アオギリ『うーむ むむむ!\pマツブサの やつを とめに いきたいが\nさすがの おれも\l3にん どうじに あいてを していては\lてが はなせない!{EOS}"
	.if (. - MtChimney_Text_ArchieIHaveMyHandsFull) > 0x49
	.error "MtChimney_Text_ArchieIHaveMyHandsFull may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ArchieIHaveMyHandsFull) < 0x49
	.space 0x49 - (. - MtChimney_Text_ArchieIHaveMyHandsFull)
	.endif
	@ data/maps/MtChimney/scripts.inc:685 MtChimney_Text_ArchieThankYou
	.globl MtChimney_Text_ArchieThankYou
MtChimney_Text_ArchieThankYou: @ 0x082155D8
	.string "アオギリ『{PLAYER}…… たすかったよ\nおまえの おかげで マグマだんの\lはかいかつどうを ふせぐことが できた\pだが おまえは……\nどちらの みかた なんだ……\pまあ いい\pわれわれは ひきつづき\nマグマだんを おいかけると しよう!\p{PLAYER} おまえとは また\nどこかで あうことに なりそうだな……{EOS}"
	.if (. - MtChimney_Text_ArchieThankYou) > 0x94
	.error "MtChimney_Text_ArchieThankYou may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ArchieThankYou) < 0x94
	.space 0x94 - (. - MtChimney_Text_ArchieThankYou)
	.endif
	@ data/maps/MtChimney/scripts.inc:697 MtChimney_Text_MagmaOutnumbersUs
	.globl MtChimney_Text_MagmaOutnumbersUs
MtChimney_Text_MagmaOutnumbersUs: @ 0x0821566C
	.string "くそう マグマだんが おおすぎる……\nこのままでは まずいぞ!{EOS}"
	.if (. - MtChimney_Text_MagmaOutnumbersUs) > 0x20
	.error "MtChimney_Text_MagmaOutnumbersUs may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MagmaOutnumbersUs) < 0x20
	.space 0x20 - (. - MtChimney_Text_MagmaOutnumbersUs)
	.endif
	@ data/maps/MtChimney/scripts.inc:701 MtChimney_Text_LessHabitatForWaterPokemon
	.globl MtChimney_Text_LessHabitatForWaterPokemon
MtChimney_Text_LessHabitatForWaterPokemon: @ 0x0821568C
	.string "だいちを ふやしたら\nみずポケモンが すむ ばしょが\lへってしまう じゃねーか!{EOS}"
	.if (. - MtChimney_Text_LessHabitatForWaterPokemon) > 0x29
	.error "MtChimney_Text_LessHabitatForWaterPokemon may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_LessHabitatForWaterPokemon) < 0x29
	.space 0x29 - (. - MtChimney_Text_LessHabitatForWaterPokemon)
	.endif
	@ data/maps/MtChimney/scripts.inc:705 MtChimney_Text_MagmasNameSimilar
	.globl MtChimney_Text_MagmasNameSimilar
MtChimney_Text_MagmasNameSimilar: @ 0x082156B5
	.string "オレたちは アクアだん!\pやつらは マグマだん!\pまぎらわしい なまえを つけやがって\nしゃくにさわる やつらだ!{EOS}"
	.if (. - MtChimney_Text_MagmasNameSimilar) > 0x3a
	.error "MtChimney_Text_MagmasNameSimilar may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MagmasNameSimilar) < 0x3a
	.space 0x3a - (. - MtChimney_Text_MagmasNameSimilar)
	.endif
	@ data/maps/MtChimney/scripts.inc:711 MtChimney_Text_Bushaa
	.globl MtChimney_Text_Bushaa
MtChimney_Text_Bushaa: @ 0x082156EF
	.string "ぷしゃー!!{EOS}"
	.if (. - MtChimney_Text_Bushaa) > 0x7
	.error "MtChimney_Text_Bushaa may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_Bushaa) < 0x7
	.space 0x7 - (. - MtChimney_Text_Bushaa)
	.endif
	@ data/maps/MtChimney/scripts.inc:714 MtChimney_Text_LavaCookiesJust200
	.globl MtChimney_Text_LavaCookiesJust200
MtChimney_Text_LavaCookiesJust200: @ 0x082156F6
	.string "えんとつやま めいぶつ\nフエンせんべい ひとつ 200えん!\lかって おいきよ{EOS}"
	.if (. - MtChimney_Text_LavaCookiesJust200) > 0x28
	.error "MtChimney_Text_LavaCookiesJust200 may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_LavaCookiesJust200) < 0x28
	.space 0x28 - (. - MtChimney_Text_LavaCookiesJust200)
	.endif
	@ data/maps/MtChimney/scripts.inc:719 MtChimney_Text_ThankYouDear
	.globl MtChimney_Text_ThankYouDear
MtChimney_Text_ThankYouDear: @ 0x0821571E
	.string "どうも ありがとね{EOS}"
	.if (. - MtChimney_Text_ThankYouDear) > 0xa
	.error "MtChimney_Text_ThankYouDear may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ThankYouDear) < 0xa
	.space 0xa - (. - MtChimney_Text_ThankYouDear)
	.endif
	@ data/maps/MtChimney/scripts.inc:722 MtChimney_Text_YouveNotGotTheMoney
	.globl MtChimney_Text_YouveNotGotTheMoney
MtChimney_Text_YouveNotGotTheMoney: @ 0x08215728
	.string "おやまあ おかねが なくちゃ\nものは かえないよ{EOS}"
	.if (. - MtChimney_Text_YouveNotGotTheMoney) > 0x19
	.error "MtChimney_Text_YouveNotGotTheMoney may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_YouveNotGotTheMoney) < 0x19
	.space 0x19 - (. - MtChimney_Text_YouveNotGotTheMoney)
	.endif
	@ data/maps/MtChimney/scripts.inc:726 MtChimney_Text_OhFineThen
	.globl MtChimney_Text_OhFineThen
MtChimney_Text_OhFineThen: @ 0x08215741
	.string "あら そうかい{EOS}"
	.if (. - MtChimney_Text_OhFineThen) > 0x8
	.error "MtChimney_Text_OhFineThen may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_OhFineThen) < 0x8
	.space 0x8 - (. - MtChimney_Text_OhFineThen)
	.endif
	@ data/maps/MtChimney/scripts.inc:729 MtChimney_Text_MeteoriteFittedOnMachine
	.globl MtChimney_Text_MeteoriteFittedOnMachine
MtChimney_Text_MeteoriteFittedOnMachine: @ 0x08215749
	.string "なぞの そうちに\nいんせきが はめられている……\pなにかの エネルギーを\nためている さいちゅうの ようだ{EOS}"
	.if (. - MtChimney_Text_MeteoriteFittedOnMachine) > 0x36
	.error "MtChimney_Text_MeteoriteFittedOnMachine may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MeteoriteFittedOnMachine) < 0x36
	.space 0x36 - (. - MtChimney_Text_MeteoriteFittedOnMachine)
	.endif
	@ data/maps/MtChimney/scripts.inc:735 MtChimney_Text_RemoveTheMeteorite
	.globl MtChimney_Text_RemoveTheMeteorite
MtChimney_Text_RemoveTheMeteorite: @ 0x0821577F
	.string "なぞの そうちに\nいんせきが はめられている……\pいんせきを とりますか?{EOS}"
	.if (. - MtChimney_Text_RemoveTheMeteorite) > 0x26
	.error "MtChimney_Text_RemoveTheMeteorite may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_RemoveTheMeteorite) < 0x26
	.space 0x26 - (. - MtChimney_Text_RemoveTheMeteorite)
	.endif
	@ data/maps/MtChimney/scripts.inc:740 MtChimney_Text_PlayerRemovedMeteorite
	.globl MtChimney_Text_PlayerRemovedMeteorite
MtChimney_Text_PlayerRemovedMeteorite: @ 0x082157A5
	.string "{PLAYER}は いんせきを\nそうちから とりはずした!{EOS}"
	.if (. - MtChimney_Text_PlayerRemovedMeteorite) > 0x18
	.error "MtChimney_Text_PlayerRemovedMeteorite may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_PlayerRemovedMeteorite) < 0x18
	.space 0x18 - (. - MtChimney_Text_PlayerRemovedMeteorite)
	.endif
	@ data/maps/MtChimney/scripts.inc:744 MtChimney_Text_PlayerLeftMeteorite
	.globl MtChimney_Text_PlayerLeftMeteorite
MtChimney_Text_PlayerLeftMeteorite: @ 0x082157BD
	.string "{PLAYER}は いんせきを\nそのままに しておいた{EOS}"
	.if (. - MtChimney_Text_PlayerLeftMeteorite) > 0x16
	.error "MtChimney_Text_PlayerLeftMeteorite may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_PlayerLeftMeteorite) < 0x16
	.space 0x16 - (. - MtChimney_Text_PlayerLeftMeteorite)
	.endif
	@ data/maps/MtChimney/scripts.inc:748 MtChimney_Text_MachineMakesNoResponse
	.globl MtChimney_Text_MachineMakesNoResponse
MtChimney_Text_MachineMakesNoResponse: @ 0x082157D3
	.string "なぞの そうち……\nまったく はんのう しない……{EOS}"
	.if (. - MtChimney_Text_MachineMakesNoResponse) > 0x1a
	.error "MtChimney_Text_MachineMakesNoResponse may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MachineMakesNoResponse) < 0x1a
	.space 0x1a - (. - MtChimney_Text_MachineMakesNoResponse)
	.endif
	@ field-script:0x214F16 FieldScriptText_2157ED
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2157ED
gText_Rom_2157ED: @ 0x082157ED
	.string "{ESCAPE}{0x01}　デコボコさんどう\nとおりぬけると　フエンタウン{EOS}"
	.if (. - gText_Rom_2157ED) != 0x1c
	.error "gText_Rom_2157ED must retain its original byte length"
	.endif
	@ data/maps/MtChimney/scripts.inc:756 MtChimney_Text_ShelbyIntro (+1 aliases)
	.globl MtChimney_Text_ShelbyIntro
MtChimney_Text_ShelbyIntro: @ 0x08215809
	.string "おんせんに つかって\nリフレッシュ してきたからねえ\lいまの あたしゃあ つよいよ!{EOS}"
	.if (. - MtChimney_Text_ShelbyIntro) > 0x2b
	.error "MtChimney_Text_ShelbyIntro may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ShelbyIntro) < 0x2b
	.space 0x2b - (. - MtChimney_Text_ShelbyIntro)
	.endif
	@ data/maps/MtChimney/scripts.inc:761 MtChimney_Text_ShelbyDefeat (+2 aliases)
	.globl gText_Rom_215834
gText_Rom_215834: @ 0x08215834
	.string "おんや まぁ\nたいした もんだよ{EOS}"
	.if (. - gText_Rom_215834) > 0x11
	.error "gText_Rom_215834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215834) < 0x11
	.space 0x11 - (. - gText_Rom_215834)
	.endif
	@ data/maps/MtChimney/scripts.inc:765 MtChimney_Text_ShelbyPostBattle
	.globl MtChimney_Text_ShelbyPostBattle
MtChimney_Text_ShelbyPostBattle: @ 0x08215845
	.string "まけて しもうたら\nたつじん とは いえないねえ{EOS}"
	.if (. - MtChimney_Text_ShelbyPostBattle) > 0x19
	.error "MtChimney_Text_ShelbyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ShelbyPostBattle) < 0x19
	.space 0x19 - (. - MtChimney_Text_ShelbyPostBattle)
	.endif
	@ data/maps/MtChimney/scripts.inc:769 MtChimney_Text_ShelbyRegister
	.globl MtChimney_Text_ShelbyRegister
MtChimney_Text_ShelbyRegister: @ 0x0821585E
	.string "マゴと たたかってる ようで たのしかった\nよかったら また あいてを しておくれ!{EOS}"
	.if (. - MtChimney_Text_ShelbyRegister) > 0x2b
	.error "MtChimney_Text_ShelbyRegister may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ShelbyRegister) < 0x2b
	.space 0x2b - (. - MtChimney_Text_ShelbyRegister)
	.endif
	@ data/maps/MtChimney/scripts.inc:775 MtChimney_Text_ShelbyRematchIntro (+1 aliases)
	.globl MtChimney_Text_ShelbyRematchIntro
MtChimney_Text_ShelbyRematchIntro: @ 0x08215889
	.string "ポケモンと こころを ひとつに できれば\nすばらしいことが できそうじゃの{EOS}"
	.if (. - MtChimney_Text_ShelbyRematchIntro) > 0x26
	.error "MtChimney_Text_ShelbyRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ShelbyRematchIntro) < 0x26
	.space 0x26 - (. - MtChimney_Text_ShelbyRematchIntro)
	.endif
	@ data/maps/MtChimney/scripts.inc:761 MtChimney_Text_ShelbyDefeat (+2 aliases)
	.globl gText_Rom_2158AF
gText_Rom_2158AF: @ 0x082158AF
	.string "おんや まぁ\nたいした もんだよ{EOS}"
	.if (. - gText_Rom_2158AF) > 0x11
	.error "gText_Rom_2158AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2158AF) < 0x11
	.space 0x11 - (. - gText_Rom_2158AF)
	.endif
	@ data/maps/MtChimney/scripts.inc:784 MtChimney_Text_ShelbyPostRematch
	.globl MtChimney_Text_ShelbyPostRematch
MtChimney_Text_ShelbyPostRematch: @ 0x082158C0
	.string "おまえさんの こころと\nポケモンの こころは ひとつ なのかもな{EOS}"
	.if (. - MtChimney_Text_ShelbyPostRematch) > 0x21
	.error "MtChimney_Text_ShelbyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ShelbyPostRematch) < 0x21
	.space 0x21 - (. - MtChimney_Text_ShelbyPostRematch)
	.endif
	@ data/maps/MtChimney/scripts.inc:788 MtChimney_Text_MelissaIntro (+1 aliases)
	.globl MtChimney_Text_MelissaIntro
MtChimney_Text_MelissaIntro: @ 0x082158E1
	.string "なんだか もえあがってきて\nたたかいたくて たまらないのっ!{EOS}"
	.if (. - MtChimney_Text_MelissaIntro) > 0x1f
	.error "MtChimney_Text_MelissaIntro may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MelissaIntro) < 0x1f
	.space 0x1f - (. - MtChimney_Text_MelissaIntro)
	.endif
	@ data/maps/MtChimney/scripts.inc:792 MtChimney_Text_MelissaDefeat (+1 aliases)
	.globl MtChimney_Text_MelissaDefeat
MtChimney_Text_MelissaDefeat: @ 0x08215900
	.string "あつい たたかい だったわ{EOS}"
	.if (. - MtChimney_Text_MelissaDefeat) > 0xe
	.error "MtChimney_Text_MelissaDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MelissaDefeat) < 0xe
	.space 0xe - (. - MtChimney_Text_MelissaDefeat)
	.endif
	@ data/maps/MtChimney/scripts.inc:795 MtChimney_Text_MelissaPostBattle
	.globl MtChimney_Text_MelissaPostBattle
MtChimney_Text_MelissaPostBattle: @ 0x0821590E
	.string "えんとつやまの あつさが\nおんなを もえあがらせるの{EOS}"
	.if (. - MtChimney_Text_MelissaPostBattle) > 0x1b
	.error "MtChimney_Text_MelissaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_MelissaPostBattle) < 0x1b
	.space 0x1b - (. - MtChimney_Text_MelissaPostBattle)
	.endif
	@ data/maps/MtChimney/scripts.inc:799 MtChimney_Text_SheilaIntro (+1 aliases)
	.globl MtChimney_Text_SheilaIntro
MtChimney_Text_SheilaIntro: @ 0x08215929
	.string "せっかく えんとつやまに きたんだから\nここでも ポケモンを たたかわせたいの!{EOS}"
	.if (. - MtChimney_Text_SheilaIntro) > 0x29
	.error "MtChimney_Text_SheilaIntro may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_SheilaIntro) < 0x29
	.space 0x29 - (. - MtChimney_Text_SheilaIntro)
	.endif
	@ data/maps/MtChimney/scripts.inc:803 MtChimney_Text_SheilaDefeat (+1 aliases)
	.globl MtChimney_Text_SheilaDefeat
MtChimney_Text_SheilaDefeat: @ 0x08215952
	.string "その たたかいかた\nまさに えんとつやま だいふんか!{EOS}"
	.if (. - MtChimney_Text_SheilaDefeat) > 0x1c
	.error "MtChimney_Text_SheilaDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_SheilaDefeat) < 0x1c
	.space 0x1c - (. - MtChimney_Text_SheilaDefeat)
	.endif
	@ data/maps/MtChimney/scripts.inc:807 MtChimney_Text_SheilaPostBattle
	.globl MtChimney_Text_SheilaPostBattle
MtChimney_Text_SheilaPostBattle: @ 0x0821596E
	.string "せっかく えんとつやまに きたんだから\nかんこう だけじゃ もったいないわ\pしょうぶも たのしみたいし\nおみやげに せんべい かわなきゃ!{EOS}"
	.if (. - MtChimney_Text_SheilaPostBattle) > 0x46
	.error "MtChimney_Text_SheilaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_SheilaPostBattle) < 0x46
	.space 0x46 - (. - MtChimney_Text_SheilaPostBattle)
	.endif
	@ data/maps/MtChimney/scripts.inc:814 MtChimney_Text_ShirleyIntro (+1 aliases)
	.globl MtChimney_Text_ShirleyIntro
MtChimney_Text_ShirleyIntro: @ 0x082159B4
	.string "おんせんに はいったら\nちょうし バッチリ なのよね!\lぜったい かてるわ!{EOS}"
	.if (. - MtChimney_Text_ShirleyIntro) > 0x27
	.error "MtChimney_Text_ShirleyIntro may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ShirleyIntro) < 0x27
	.space 0x27 - (. - MtChimney_Text_ShirleyIntro)
	.endif
	@ data/maps/MtChimney/scripts.inc:819 MtChimney_Text_ShirleyDefeat (+1 aliases)
	.globl MtChimney_Text_ShirleyDefeat
MtChimney_Text_ShirleyDefeat: @ 0x082159DB
	.string "うーん ゆざめ しちゃう{EOS}"
	.if (. - MtChimney_Text_ShirleyDefeat) > 0xd
	.error "MtChimney_Text_ShirleyDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ShirleyDefeat) < 0xd
	.space 0xd - (. - MtChimney_Text_ShirleyDefeat)
	.endif
	@ data/maps/MtChimney/scripts.inc:823 MtChimney_Text_ShirleyPostBattle
	.globl MtChimney_Text_ShirleyPostBattle
MtChimney_Text_ShirleyPostBattle: @ 0x082159E8
	.string "もういちど おんせんに はいらなきゃ!\nあなたも いっしょに はいる?\pなんてねっ!{EOS}"
	.if (. - MtChimney_Text_ShirleyPostBattle) > 0x2b
	.error "MtChimney_Text_ShirleyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_ShirleyPostBattle) < 0x2b
	.space 0x2b - (. - MtChimney_Text_ShirleyPostBattle)
	.endif
	@ data/maps/MtChimney/scripts.inc:828 MtChimney_Text_SawyerIntro (+1 aliases)
	.globl MtChimney_Text_SawyerIntro
MtChimney_Text_SawyerIntro: @ 0x08215A13
	.string "ここは いい やまだ!\nあっつい おねいさんたちが いっぱいだあ!{EOS}"
	.if (. - MtChimney_Text_SawyerIntro) > 0x22
	.error "MtChimney_Text_SawyerIntro may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_SawyerIntro) < 0x22
	.space 0x22 - (. - MtChimney_Text_SawyerIntro)
	.endif
	@ data/maps/MtChimney/scripts.inc:832 MtChimney_Text_SawyerDefeat (+1 aliases)
	.globl MtChimney_Text_SawyerDefeat
MtChimney_Text_SawyerDefeat: @ 0x08215A35
	.string "おおっ あんたも あついねぇ!{EOS}"
	.if (. - MtChimney_Text_SawyerDefeat) > 0x10
	.error "MtChimney_Text_SawyerDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_SawyerDefeat) < 0x10
	.space 0x10 - (. - MtChimney_Text_SawyerDefeat)
	.endif
	@ data/maps/MtChimney/scripts.inc:835 MtChimney_Text_SawyerPostBattle
	.globl MtChimney_Text_SawyerPostBattle
MtChimney_Text_SawyerPostBattle: @ 0x08215A45
	.string "いまから あつい おねいさんたちを つれて\nフエンおんせん でも いこうかな{EOS}"
	.if (. - MtChimney_Text_SawyerPostBattle) > 0x27
	.error "MtChimney_Text_SawyerPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_SawyerPostBattle) < 0x27
	.space 0x27 - (. - MtChimney_Text_SawyerPostBattle)
	.endif
	@ data/maps/MtChimney/scripts.inc:839 MtChimney_Text_SawyerRegister
	.globl MtChimney_Text_SawyerRegister
MtChimney_Text_SawyerRegister: @ 0x08215A6C
	.string "あつい トレーナーは すきだなあ!\nポケナビに とうろくしても いいかい{EOS}"
	.if (. - MtChimney_Text_SawyerRegister) > 0x25
	.error "MtChimney_Text_SawyerRegister may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_SawyerRegister) < 0x25
	.space 0x25 - (. - MtChimney_Text_SawyerRegister)
	.endif
	@ data/maps/MtChimney/scripts.inc:843 MtChimney_Text_SawyerRematchIntro (+1 aliases)
	.globl MtChimney_Text_SawyerRematchIntro
MtChimney_Text_SawyerRematchIntro: @ 0x08215A91
	.string "あっつい おねいさん たちに\nかこまれて しあわせな おれは まけんぜ!{EOS}"
	.if (. - MtChimney_Text_SawyerRematchIntro) > 0x25
	.error "MtChimney_Text_SawyerRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_SawyerRematchIntro) < 0x25
	.space 0x25 - (. - MtChimney_Text_SawyerRematchIntro)
	.endif
	@ data/maps/MtChimney/scripts.inc:847 MtChimney_Text_SawyerRematchDefeat (+1 aliases)
	.globl MtChimney_Text_SawyerRematchDefeat
MtChimney_Text_SawyerRematchDefeat: @ 0x08215AB6
	.string "おおっ やっぱり\nあんたの ほうが あついねぇ!{EOS}"
	.if (. - MtChimney_Text_SawyerRematchDefeat) > 0x19
	.error "MtChimney_Text_SawyerRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_SawyerRematchDefeat) < 0x19
	.space 0x19 - (. - MtChimney_Text_SawyerRematchDefeat)
	.endif
	@ data/maps/MtChimney/scripts.inc:851 MtChimney_Text_SawyerPostRematch
	.globl MtChimney_Text_SawyerPostRematch
MtChimney_Text_SawyerPostRematch: @ 0x08215ACF
	.string "しかし ほんとに あついや……\nふく いっぱい きすぎちゃった かな{EOS}"
	.if (. - MtChimney_Text_SawyerPostRematch) > 0x23
	.error "MtChimney_Text_SawyerPostRematch may not grow beyond its original slot"
	.endif
	.if (. - MtChimney_Text_SawyerPostRematch) < 0x23
	.space 0x23 - (. - MtChimney_Text_SawyerPostRematch)
	.endif
	@ Embedded ROM bytes: file offset 0x215AF2, size 0x232
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x05, 0x02, 0x5B, 0x21, 0x08, 0x03, 0x27, 0x5B, 0x21, 0x08, 0x01, 0x38, 0x5B, 0x21, 0x08, 0x00
	.byte 0xA6, 0x01, 0x21, 0xC8, 0x40, 0x00, 0x00, 0x07, 0x01, 0x10, 0x5B, 0x21, 0x08, 0x02, 0x47, 0x77
	.byte 0x01, 0x01, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x21, 0x5B, 0x21, 0x08, 0x03, 0x16
	.byte 0xC8, 0x40, 0x01, 0x00, 0x03, 0x21, 0xBD, 0x40, 0x01, 0x00, 0x07, 0x01, 0x33, 0x5B, 0x21, 0x08
	.byte 0x02, 0xA4, 0x07, 0x00, 0xA5, 0x03, 0x21, 0xC8, 0x40, 0x01, 0x00, 0x06, 0x03, 0x44, 0x5B, 0x21
	.byte 0x08, 0x02, 0xA2, 0x10, 0x00, 0x11, 0x00, 0x74, 0x02, 0x01, 0x00, 0xA2, 0x10, 0x00, 0x12, 0x00
	.byte 0x74, 0x02, 0x01, 0x00, 0x02, 0x69, 0x16, 0x04, 0x80, 0x01, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00
	.byte 0x16, 0x06, 0x80, 0x08, 0x00, 0x16, 0x07, 0x80, 0x05, 0x00, 0x25, 0x35, 0x01, 0x27, 0x0F, 0x00
	.4byte JaggedPass_Text_BoulderShakingInResponseToEmblem @ ROM pointer 0x08216039
	.byte 0x09, 0x04, 0x68, 0x16, 0x04, 0x80, 0x01, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x16, 0x06, 0x80
	.byte 0x10, 0x00, 0x16, 0x07, 0x80, 0x03, 0x00, 0x25, 0x35, 0x01, 0x27, 0x2F, 0x0D, 0x00, 0xA2, 0x10
	.byte 0x00, 0x11, 0x00, 0x56, 0x02, 0x01, 0x00, 0xA2, 0x10, 0x00, 0x12, 0x00, 0x5E, 0x02, 0x00, 0x00
	.byte 0x25, 0x8E, 0x00, 0x28, 0x1E, 0x00, 0x16, 0xC8, 0x40, 0x02, 0x00, 0x30, 0x6B, 0x02, 0x69, 0x2B
	.byte 0x39, 0x01, 0x06, 0x01, 0x02, 0x5C, 0x21, 0x08, 0x30, 0x2F, 0x15, 0x00, 0x4F, 0x05, 0x00, 0x1B
	.byte 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x4F, 0x05, 0x00, 0x1D, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00
	.byte 0x4F, 0x05, 0x00, 0x21, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte JaggedPass_Text_GruntIntro @ ROM pointer 0x08215F8B
	.byte 0x09, 0x04, 0x68, 0x5C, 0x03, 0x3A, 0x02, 0x00, 0x00
	.4byte JaggedPass_Text_GruntDefeat
	.byte 0x29, 0x39, 0x01
	.byte 0x4F, 0x05, 0x00, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x02, 0x4F, 0x05, 0x00, 0x21
	.byte 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte JaggedPass_Text_GoWhereverYouWant @ ROM pointer 0x08216000
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x04, 0x68, 0x4F, 0x05, 0x00, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x02, 0x5C
	.byte 0x00, 0x78, 0x02, 0x00, 0x00
	.4byte JaggedPass_Text_EricIntro @ ROM pointer 0x08215D24
	.4byte JaggedPass_Text_EricDefeat @ ROM pointer 0x08215D5E
	.byte 0x0F, 0x00
	.4byte JaggedPass_Text_EricPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x02, 0xDA, 0x01, 0x00, 0x00
	.4byte JaggedPass_Text_DianaIntro @ ROM pointer 0x08215DA0
	.4byte JaggedPass_Text_DianaDefeat @ ROM pointer 0x08215DC8
	.byte 0x64, 0x5C, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0x80, 0x5C, 0x21, 0x08, 0x0F, 0x00, 0xDE, 0x5D, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04
	.byte 0x02, 0x0F, 0x00
	.4byte JaggedPass_Text_DianaRegister
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0xDA, 0x01, 0x25, 0xE6
	.byte 0x01, 0x1A, 0x00, 0x80, 0xDA, 0x01, 0x09, 0x08, 0x6C, 0x02, 0x5C, 0x05, 0xDA, 0x01, 0x00, 0x00
	.4byte JaggedPass_Text_DianaRematchIntro @ ROM pointer 0x08215E31
	.4byte JaggedPass_Text_DianaRematchDefeat @ ROM pointer 0x08215E56
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte JaggedPass_Text_DianaPostRematch @ ROM pointer 0x08215E6A
	.byte 0x09, 0x06, 0x02, 0x5C, 0x02, 0xD8, 0x00, 0x00, 0x00
	.4byte JaggedPass_Text_EthanIntro
	.4byte JaggedPass_Text_EthanDefeat
	.byte 0xC3, 0x5C, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06
	.byte 0x01, 0xDF, 0x5C, 0x21, 0x08, 0x0F, 0x00
	.4byte JaggedPass_Text_EthanPostBattle
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25
	.byte 0x04, 0x02, 0x0F, 0x00
	.4byte JaggedPass_Text_EthanRegister @ ROM pointer 0x08215EFC
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0xD8, 0x00, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0xD8, 0x00, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x05, 0xD8, 0x00, 0x00, 0x00
	.4byte JaggedPass_Text_EthanRematchIntro
	.4byte JaggedPass_Text_EthanRematchDefeat
	.byte 0x0F, 0x00
	.4byte JaggedPass_Text_EthanPostRematch
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x36, 0x02, 0x00, 0x00
	.4byte JaggedPass_Text_JulioIntro @ ROM pointer 0x0821606A
	.4byte JaggedPass_Text_JulioDefeat @ ROM pointer 0x08216085
	.byte 0x0F, 0x00
	.4byte JaggedPass_Text_JulioPostBattle @ ROM pointer 0x0821608B
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xD9, 0x00, 0x00, 0x00
	.4byte JaggedPass_Text_AutumnIntro @ ROM pointer 0x082160AC
	.4byte JaggedPass_Text_AutumnDefeat @ ROM pointer 0x082160CF
	.byte 0x0F, 0x00, 0xDB, 0x60, 0x21, 0x08, 0x09, 0x06, 0x02
