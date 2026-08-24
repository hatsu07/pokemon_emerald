	@ data/maps/MtChimney/scripts.inc:544 MtChimney_Text_MeteoriteWillActivateVolcano
	.globl gText_Rom_21503D
gText_Rom_21503D: @ 0x0821503D
	.string "いんせきに ひめられた ちから\pこの そうちで ぞうふく すれば\nたちまちの うちに えんとつやまの\lかざん かつどうは かっぱつになる……\pその エネルギーが\nかこうの おくふかくに はたらきかけ\lそして ふふふ……{EOS}"
	.if (. - gText_Rom_21503D) > 0x6e
	.error "gText_Rom_21503D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21503D) < 0x6e
	.space 0x6e - (. - gText_Rom_21503D)
	.endif
	@ data/maps/MtChimney/scripts.inc:553 MtChimney_Text_MaxieIntro
	.globl gText_Rom_2150AB
gText_Rom_2150AB: @ 0x082150AB
	.string "マツブサ『ん? だれだ おまえは\p…… …… ……\n…… …… ……\pさいきん アクアだんの かつどうを\nじゃまする こどもがいる と\lアオギリの やつが ぼやいて いたが\lそれは おまえの ことか\p……ふん!\nわれわれ マグマだんの じゃまも\lしてくれようって わけだな!\pいいか? いきものは りくちに あがり\nしんかを くりかえしてきた\pそう だいちこそが すべてなのだ!\pだから われわれ マグマだんは\nだいちを ふやすことで\lひとと ポケモンの はってんを めざす!\pそのために ひつよう なのが\nこのやまに ねむる アイツ……\pおっと! そんなことまで\nおまえが しる ひつようは なかったな\pそんなことより\nわれわれの じゃまを したら どうなるか\lおまえに わからせて やろう!{EOS}"
	.if (. - gText_Rom_2150AB) > 0x15c
	.error "gText_Rom_2150AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2150AB) < 0x15c
	.space 0x15c - (. - gText_Rom_2150AB)
	.endif
	@ data/maps/MtChimney/scripts.inc:581 MtChimney_Text_MaxieDefeat (+1 aliases)
	.globl gText_Rom_215207
gText_Rom_215207: @ 0x08215207
	.string "なに!?\pこの マツブサとも あろう ものが\nゆだん したか!?{EOS}"
	.if (. - gText_Rom_215207) > 0x21
	.error "gText_Rom_215207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215207) < 0x21
	.space 0x21 - (. - gText_Rom_215207)
	.endif
	@ data/maps/MtChimney/scripts.inc:585 MtChimney_Text_MaxieYouHaventSeenLastOfMagma
	.globl gText_Rom_215228
gText_Rom_215228: @ 0x08215228
	.string "マツブサ『まあ いい\nこのばは ひとまず あきらめよう……\pだが マグマだんの かつどうは\nこれで おわったわけでは ないのだ!\pふふふ……\pいんせきなど つかわなくとも\nあの たまが てにはいれば ふふふ……{EOS}"
	.if (. - gText_Rom_215228) > 0x6a
	.error "gText_Rom_215228 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215228) < 0x6a
	.space 0x6a - (. - gText_Rom_215228)
	.endif
	@ data/maps/MtChimney/scripts.inc:594 MtChimney_Text_TabithaIntro (+1 aliases)
	.globl gText_Rom_215292
gText_Rom_215292: @ 0x08215292
	.string "ウヒョヒョ!\pおまえ ここまで きたのか!\pだけど おそかったぜ\nりゅうせいのたきで みつけた\lいんせきは リーダーに わたしたからな!{EOS}"
	.if (. - gText_Rom_215292) > 0x45
	.error "gText_Rom_215292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215292) < 0x45
	.space 0x45 - (. - gText_Rom_215292)
	.endif
	@ data/maps/MtChimney/scripts.inc:601 MtChimney_Text_TabithaDefeat (+1 aliases)
	.globl gText_Rom_2152D7
gText_Rom_2152D7: @ 0x082152D7
	.string "ウヒョヒョ……\pオレが まけても リーダーが ちゃんと\nアイツを めざめさせて……{EOS}"
	.if (. - gText_Rom_2152D7) > 0x2a
	.error "gText_Rom_2152D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2152D7) < 0x2a
	.space 0x2a - (. - gText_Rom_2152D7)
	.endif
	@ data/maps/MtChimney/scripts.inc:606 MtChimney_Text_TabithaPostBattle
	.globl gText_Rom_215301
gText_Rom_215301: @ 0x08215301
	.string "リーダー! はやく!\nいんせきの パワーを アイツに!\pウヒョヒョ……!{EOS}"
	.if (. - gText_Rom_215301) > 0x25
	.error "gText_Rom_215301 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215301) < 0x25
	.space 0x25 - (. - gText_Rom_215301)
	.endif
	@ data/maps/MtChimney/scripts.inc:611 MtChimney_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_215326
gText_Rom_215326: @ 0x08215326
	.string "オレら マグマだんは\nみんなの ために がんばってるんだ!\pだって アイツの ちからで\nだいちが ふえれば みんなも\lすむところが ふえて うれしいだろ?{EOS}"
	.if (. - gText_Rom_215326) > 0x4e
	.error "gText_Rom_215326 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215326) < 0x4e
	.space 0x4e - (. - gText_Rom_215326)
	.endif
	@ data/maps/MtChimney/scripts.inc:618 MtChimney_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_215374
gText_Rom_215374: @ 0x08215374
	.string "あれー?\nオレ まけたのー!?{EOS}"
	.if (. - gText_Rom_215374) > 0x10
	.error "gText_Rom_215374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215374) < 0x10
	.space 0x10 - (. - gText_Rom_215374)
	.endif
	@ data/maps/MtChimney/scripts.inc:622 MtChimney_Text_Grunt2PostBattle
	.globl gText_Rom_215384
gText_Rom_215384: @ 0x08215384
	.string "オレらの リーダーは\n「みんなが よろこぶ ことだ」って\lいってるんだ!\pなのに なんで みんな ジャマするんだ?{EOS}"
	.if (. - gText_Rom_215384) > 0x3a
	.error "gText_Rom_215384 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215384) < 0x3a
	.space 0x3a - (. - gText_Rom_215384)
	.endif
	@ data/maps/MtChimney/scripts.inc:628 MtChimney_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_2153BE
gText_Rom_2153BE: @ 0x082153BE
	.string "りくちが ふえて くれたら\nおおきな マイホーム だって もてるわ!\pようがんの うえに ひっこし するのよ!{EOS}"
	.if (. - gText_Rom_2153BE) > 0x38
	.error "gText_Rom_2153BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2153BE) < 0x38
	.space 0x38 - (. - gText_Rom_2153BE)
	.endif
	@ data/maps/MtChimney/scripts.inc:633 MtChimney_Text_Grunt1Defeat (+1 aliases)
	.globl gText_Rom_2153F6
gText_Rom_2153F6: @ 0x082153F6
	.string "わたしの マイホームの ゆめが……{EOS}"
	.if (. - gText_Rom_2153F6) > 0x12
	.error "gText_Rom_2153F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2153F6) < 0x12
	.space 0x12 - (. - gText_Rom_2153F6)
	.endif
	@ data/maps/MtChimney/scripts.inc:636 MtChimney_Text_Grunt1PostBattle
	.globl gText_Rom_215408
gText_Rom_215408: @ 0x08215408
	.string "あんた なんか うみに プカプカ\nうかんで いれば いいのよ!{EOS}"
	.if (. - gText_Rom_215408) > 0x20
	.error "gText_Rom_215408 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215408) < 0x20
	.space 0x20 - (. - gText_Rom_215408)
	.endif
	@ data/maps/MtChimney/scripts.inc:640 MtChimney_Text_TeamAquaAlwaysMessingWithPlans
	.globl gText_Rom_215428
gText_Rom_215428: @ 0x08215428
	.string "アクアだんの やつらめ……\nいちいち オレたちの じゃまを しやがって!{EOS}"
	.if (. - gText_Rom_215428) > 0x25
	.error "gText_Rom_215428 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215428) < 0x25
	.space 0x25 - (. - gText_Rom_215428)
	.endif
	@ data/maps/MtChimney/scripts.inc:644 MtChimney_Text_MeteoritesPackAmazingPower
	.globl gText_Rom_21544D
gText_Rom_21544D: @ 0x0821544D
	.string "いんせきには すごい パワーが あるのだ!{EOS}"
	.if (. - gText_Rom_21544D) > 0x16
	.error "gText_Rom_21544D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21544D) < 0x16
	.space 0x16 - (. - gText_Rom_21544D)
	.endif
	@ data/maps/MtChimney/scripts.inc:647 MtChimney_Text_YouBetterNotMessWithUs
	.globl gText_Rom_215463
gText_Rom_215463: @ 0x08215463
	.string "オレたちの じゃまを するな!\pアイツを ふっかつ させるのは\nみんなの ために やってること なんだ!{EOS}"
	.if (. - gText_Rom_215463) > 0x35
	.error "gText_Rom_215463 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215463) < 0x35
	.space 0x35 - (. - gText_Rom_215463)
	.endif
	@ data/maps/MtChimney/scripts.inc:652 MtChimney_Text_AquasNameSimilar
	.globl gText_Rom_215498
gText_Rom_215498: @ 0x08215498
	.string "オレたちは マグマだん!\pやつらは アクアだん!\pにたような なまえを つけやがって\nいまいましい やつらだ!{EOS}"
	.if (. - gText_Rom_215498) > 0x38
	.error "gText_Rom_215498 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215498) < 0x38
	.space 0x38 - (. - gText_Rom_215498)
	.endif
	@ data/maps/MtChimney/scripts.inc:658 MtChimney_Text_DouseThemInFire
	.globl gText_Rom_2154D0
gText_Rom_2154D0: @ 0x082154D0
	.string "よーし!\nほのおを ぶっかけてやれー!!{EOS}"
	.if (. - gText_Rom_2154D0) > 0x15
	.error "gText_Rom_2154D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2154D0) < 0x15
	.space 0x15 - (. - gText_Rom_2154D0)
	.endif
	@ data/maps/MtChimney/scripts.inc:662 MtChimney_Text_KeepMakingMoreLand
	.globl gText_Rom_2154E5
gText_Rom_2154E5: @ 0x082154E5
	.string "もっと もっと だいちを ふやすぜ!!{EOS}"
	.if (. - gText_Rom_2154E5) > 0x14
	.error "gText_Rom_2154E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2154E5) < 0x14
	.space 0x14 - (. - gText_Rom_2154E5)
	.endif
	@ data/maps/MtChimney/scripts.inc:665 MtChimney_Text_Bufoh
	.globl gText_Rom_2154F9
gText_Rom_2154F9: @ 0x082154F9
	.string "ぶふぉー!!{EOS}"
	.if (. - gText_Rom_2154F9) > 0x7
	.error "gText_Rom_2154F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2154F9) < 0x7
	.space 0x7 - (. - gText_Rom_2154F9)
	.endif
	@ data/maps/MtChimney/scripts.inc:668 MtChimney_Text_ArchieGoStopTeamMagma
	.globl gText_Rom_215500
gText_Rom_215500: @ 0x08215500
	.string "アオギリ『むむむ {PLAYER}!\nやっぱり ここにも あらわれたか!\pほら! マグマだんの れんちゅうが\nなにを たくらんで いるのか みてみろ!\pやつらは うばった いんせきの パワーを\nかざんに ながしこもうと しているんだ!\pそんなことを したら\nかざんが だいふんか するじゃないか!{EOS}"
	.if (. - gText_Rom_215500) > 0x8f
	.error "gText_Rom_215500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215500) < 0x8f
	.space 0x8f - (. - gText_Rom_215500)
	.endif
	@ data/maps/MtChimney/scripts.inc:678 MtChimney_Text_ArchieIHaveMyHandsFull
	.globl gText_Rom_21558F
gText_Rom_21558F: @ 0x0821558F
	.string "アオギリ『うーむ むむむ!\pマツブサの やつを とめに いきたいが\nさすがの おれも\l3にん どうじに あいてを していては\lてが はなせない!{EOS}"
	.if (. - gText_Rom_21558F) > 0x49
	.error "gText_Rom_21558F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21558F) < 0x49
	.space 0x49 - (. - gText_Rom_21558F)
	.endif
	@ data/maps/MtChimney/scripts.inc:685 MtChimney_Text_ArchieThankYou
	.globl gText_Rom_2155D8
gText_Rom_2155D8: @ 0x082155D8
	.string "アオギリ『{PLAYER}…… たすかったよ\nおまえの おかげで マグマだんの\lはかいかつどうを ふせぐことが できた\pだが おまえは……\nどちらの みかた なんだ……\pまあ いい\pわれわれは ひきつづき\nマグマだんを おいかけると しよう!\p{PLAYER} おまえとは また\nどこかで あうことに なりそうだな……{EOS}"
	.if (. - gText_Rom_2155D8) > 0x94
	.error "gText_Rom_2155D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2155D8) < 0x94
	.space 0x94 - (. - gText_Rom_2155D8)
	.endif
	@ data/maps/MtChimney/scripts.inc:697 MtChimney_Text_MagmaOutnumbersUs
	.globl gText_Rom_21566C
gText_Rom_21566C: @ 0x0821566C
	.string "くそう マグマだんが おおすぎる……\nこのままでは まずいぞ!{EOS}"
	.if (. - gText_Rom_21566C) > 0x20
	.error "gText_Rom_21566C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21566C) < 0x20
	.space 0x20 - (. - gText_Rom_21566C)
	.endif
	@ data/maps/MtChimney/scripts.inc:701 MtChimney_Text_LessHabitatForWaterPokemon
	.globl gText_Rom_21568C
gText_Rom_21568C: @ 0x0821568C
	.string "だいちを ふやしたら\nみずポケモンが すむ ばしょが\lへってしまう じゃねーか!{EOS}"
	.if (. - gText_Rom_21568C) > 0x29
	.error "gText_Rom_21568C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21568C) < 0x29
	.space 0x29 - (. - gText_Rom_21568C)
	.endif
	@ data/maps/MtChimney/scripts.inc:705 MtChimney_Text_MagmasNameSimilar
	.globl gText_Rom_2156B5
gText_Rom_2156B5: @ 0x082156B5
	.string "オレたちは アクアだん!\pやつらは マグマだん!\pまぎらわしい なまえを つけやがって\nしゃくにさわる やつらだ!{EOS}"
	.if (. - gText_Rom_2156B5) > 0x3a
	.error "gText_Rom_2156B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2156B5) < 0x3a
	.space 0x3a - (. - gText_Rom_2156B5)
	.endif
	@ data/maps/MtChimney/scripts.inc:711 MtChimney_Text_Bushaa
	.globl gText_Rom_2156EF
gText_Rom_2156EF: @ 0x082156EF
	.string "ぷしゃー!!{EOS}"
	.if (. - gText_Rom_2156EF) > 0x7
	.error "gText_Rom_2156EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2156EF) < 0x7
	.space 0x7 - (. - gText_Rom_2156EF)
	.endif
	@ data/maps/MtChimney/scripts.inc:714 MtChimney_Text_LavaCookiesJust200
	.globl gText_Rom_2156F6
gText_Rom_2156F6: @ 0x082156F6
	.string "えんとつやま めいぶつ\nフエンせんべい ひとつ 200えん!\lかって おいきよ{EOS}"
	.if (. - gText_Rom_2156F6) > 0x28
	.error "gText_Rom_2156F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2156F6) < 0x28
	.space 0x28 - (. - gText_Rom_2156F6)
	.endif
	@ data/maps/MtChimney/scripts.inc:719 MtChimney_Text_ThankYouDear
	.globl gText_Rom_21571E
gText_Rom_21571E: @ 0x0821571E
	.string "どうも ありがとね{EOS}"
	.if (. - gText_Rom_21571E) > 0xa
	.error "gText_Rom_21571E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21571E) < 0xa
	.space 0xa - (. - gText_Rom_21571E)
	.endif
	@ data/maps/MtChimney/scripts.inc:722 MtChimney_Text_YouveNotGotTheMoney
	.globl gText_Rom_215728
gText_Rom_215728: @ 0x08215728
	.string "おやまあ おかねが なくちゃ\nものは かえないよ{EOS}"
	.if (. - gText_Rom_215728) > 0x19
	.error "gText_Rom_215728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215728) < 0x19
	.space 0x19 - (. - gText_Rom_215728)
	.endif
	@ data/maps/MtChimney/scripts.inc:726 MtChimney_Text_OhFineThen
	.globl gText_Rom_215741
gText_Rom_215741: @ 0x08215741
	.string "あら そうかい{EOS}"
	.if (. - gText_Rom_215741) > 0x8
	.error "gText_Rom_215741 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215741) < 0x8
	.space 0x8 - (. - gText_Rom_215741)
	.endif
	@ data/maps/MtChimney/scripts.inc:729 MtChimney_Text_MeteoriteFittedOnMachine
	.globl gText_Rom_215749
gText_Rom_215749: @ 0x08215749
	.string "なぞの そうちに\nいんせきが はめられている……\pなにかの エネルギーを\nためている さいちゅうの ようだ{EOS}"
	.if (. - gText_Rom_215749) > 0x36
	.error "gText_Rom_215749 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215749) < 0x36
	.space 0x36 - (. - gText_Rom_215749)
	.endif
	@ data/maps/MtChimney/scripts.inc:735 MtChimney_Text_RemoveTheMeteorite
	.globl gText_Rom_21577F
gText_Rom_21577F: @ 0x0821577F
	.string "なぞの そうちに\nいんせきが はめられている……\pいんせきを とりますか?{EOS}"
	.if (. - gText_Rom_21577F) > 0x26
	.error "gText_Rom_21577F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21577F) < 0x26
	.space 0x26 - (. - gText_Rom_21577F)
	.endif
	@ data/maps/MtChimney/scripts.inc:740 MtChimney_Text_PlayerRemovedMeteorite
	.globl gText_Rom_2157A5
gText_Rom_2157A5: @ 0x082157A5
	.string "{PLAYER}は いんせきを\nそうちから とりはずした!{EOS}"
	.if (. - gText_Rom_2157A5) > 0x18
	.error "gText_Rom_2157A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2157A5) < 0x18
	.space 0x18 - (. - gText_Rom_2157A5)
	.endif
	@ data/maps/MtChimney/scripts.inc:744 MtChimney_Text_PlayerLeftMeteorite
	.globl gText_Rom_2157BD
gText_Rom_2157BD: @ 0x082157BD
	.string "{PLAYER}は いんせきを\nそのままに しておいた{EOS}"
	.if (. - gText_Rom_2157BD) > 0x16
	.error "gText_Rom_2157BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2157BD) < 0x16
	.space 0x16 - (. - gText_Rom_2157BD)
	.endif
	@ data/maps/MtChimney/scripts.inc:748 MtChimney_Text_MachineMakesNoResponse
	.globl gText_Rom_2157D3
gText_Rom_2157D3: @ 0x082157D3
	.string "なぞの そうち……\nまったく はんのう しない……{EOS}"
	.if (. - gText_Rom_2157D3) > 0x1a
	.error "gText_Rom_2157D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2157D3) < 0x1a
	.space 0x1a - (. - gText_Rom_2157D3)
	.endif
	@ field-script:0x214F16 FieldScriptText_2157ED
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2157ED
gText_Rom_2157ED: @ 0x082157ED
	.string "{ESCAPE}{0x01}　デコボコさんどう\nとおりぬけると　フエンタウン{EOS}"
	.if (. - gText_Rom_2157ED) != 0x1c
	.error "gText_Rom_2157ED must retain its original byte length"
	.endif
	.globl gText_Rom_215802
	.set gText_Rom_215802, gText_Rom_2157ED + 0x15
	@ data/maps/MtChimney/scripts.inc:756 MtChimney_Text_ShelbyIntro (+1 aliases)
	.globl gText_Rom_215809
gText_Rom_215809: @ 0x08215809
	.string "おんせんに つかって\nリフレッシュ してきたからねえ\lいまの あたしゃあ つよいよ!{EOS}"
	.if (. - gText_Rom_215809) > 0x2b
	.error "gText_Rom_215809 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215809) < 0x2b
	.space 0x2b - (. - gText_Rom_215809)
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
	.globl gText_Rom_215845
gText_Rom_215845: @ 0x08215845
	.string "まけて しもうたら\nたつじん とは いえないねえ{EOS}"
	.if (. - gText_Rom_215845) > 0x19
	.error "gText_Rom_215845 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215845) < 0x19
	.space 0x19 - (. - gText_Rom_215845)
	.endif
	@ data/maps/MtChimney/scripts.inc:769 MtChimney_Text_ShelbyRegister
	.globl gText_Rom_21585E
gText_Rom_21585E: @ 0x0821585E
	.string "マゴと たたかってる ようで たのしかった\nよかったら また あいてを しておくれ!{EOS}"
	.if (. - gText_Rom_21585E) > 0x2b
	.error "gText_Rom_21585E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21585E) < 0x2b
	.space 0x2b - (. - gText_Rom_21585E)
	.endif
	@ data/maps/MtChimney/scripts.inc:775 MtChimney_Text_ShelbyRematchIntro (+1 aliases)
	.globl gText_Rom_215889
gText_Rom_215889: @ 0x08215889
	.string "ポケモンと こころを ひとつに できれば\nすばらしいことが できそうじゃの{EOS}"
	.if (. - gText_Rom_215889) > 0x26
	.error "gText_Rom_215889 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215889) < 0x26
	.space 0x26 - (. - gText_Rom_215889)
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
	.globl gText_Rom_2158C0
gText_Rom_2158C0: @ 0x082158C0
	.string "おまえさんの こころと\nポケモンの こころは ひとつ なのかもな{EOS}"
	.if (. - gText_Rom_2158C0) > 0x21
	.error "gText_Rom_2158C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2158C0) < 0x21
	.space 0x21 - (. - gText_Rom_2158C0)
	.endif
	@ data/maps/MtChimney/scripts.inc:788 MtChimney_Text_MelissaIntro (+1 aliases)
	.globl gText_Rom_2158E1
gText_Rom_2158E1: @ 0x082158E1
	.string "なんだか もえあがってきて\nたたかいたくて たまらないのっ!{EOS}"
	.if (. - gText_Rom_2158E1) > 0x1f
	.error "gText_Rom_2158E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2158E1) < 0x1f
	.space 0x1f - (. - gText_Rom_2158E1)
	.endif
	@ data/maps/MtChimney/scripts.inc:792 MtChimney_Text_MelissaDefeat (+1 aliases)
	.globl gText_Rom_215900
gText_Rom_215900: @ 0x08215900
	.string "あつい たたかい だったわ{EOS}"
	.if (. - gText_Rom_215900) > 0xe
	.error "gText_Rom_215900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215900) < 0xe
	.space 0xe - (. - gText_Rom_215900)
	.endif
	@ data/maps/MtChimney/scripts.inc:795 MtChimney_Text_MelissaPostBattle
	.globl gText_Rom_21590E
gText_Rom_21590E: @ 0x0821590E
	.string "えんとつやまの あつさが\nおんなを もえあがらせるの{EOS}"
	.if (. - gText_Rom_21590E) > 0x1b
	.error "gText_Rom_21590E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21590E) < 0x1b
	.space 0x1b - (. - gText_Rom_21590E)
	.endif
	@ data/maps/MtChimney/scripts.inc:799 MtChimney_Text_SheilaIntro (+1 aliases)
	.globl gText_Rom_215929
gText_Rom_215929: @ 0x08215929
	.string "せっかく えんとつやまに きたんだから\nここでも ポケモンを たたかわせたいの!{EOS}"
	.if (. - gText_Rom_215929) > 0x29
	.error "gText_Rom_215929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215929) < 0x29
	.space 0x29 - (. - gText_Rom_215929)
	.endif
	@ data/maps/MtChimney/scripts.inc:803 MtChimney_Text_SheilaDefeat (+1 aliases)
	.globl gText_Rom_215952
gText_Rom_215952: @ 0x08215952
	.string "その たたかいかた\nまさに えんとつやま だいふんか!{EOS}"
	.if (. - gText_Rom_215952) > 0x1c
	.error "gText_Rom_215952 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215952) < 0x1c
	.space 0x1c - (. - gText_Rom_215952)
	.endif
	@ data/maps/MtChimney/scripts.inc:807 MtChimney_Text_SheilaPostBattle
	.globl gText_Rom_21596E
gText_Rom_21596E: @ 0x0821596E
	.string "せっかく えんとつやまに きたんだから\nかんこう だけじゃ もったいないわ\pしょうぶも たのしみたいし\nおみやげに せんべい かわなきゃ!{EOS}"
	.if (. - gText_Rom_21596E) > 0x46
	.error "gText_Rom_21596E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21596E) < 0x46
	.space 0x46 - (. - gText_Rom_21596E)
	.endif
	@ data/maps/MtChimney/scripts.inc:814 MtChimney_Text_ShirleyIntro (+1 aliases)
	.globl gText_Rom_2159B4
gText_Rom_2159B4: @ 0x082159B4
	.string "おんせんに はいったら\nちょうし バッチリ なのよね!\lぜったい かてるわ!{EOS}"
	.if (. - gText_Rom_2159B4) > 0x27
	.error "gText_Rom_2159B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2159B4) < 0x27
	.space 0x27 - (. - gText_Rom_2159B4)
	.endif
	@ data/maps/MtChimney/scripts.inc:819 MtChimney_Text_ShirleyDefeat (+1 aliases)
	.globl gText_Rom_2159DB
gText_Rom_2159DB: @ 0x082159DB
	.string "うーん ゆざめ しちゃう{EOS}"
	.if (. - gText_Rom_2159DB) > 0xd
	.error "gText_Rom_2159DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2159DB) < 0xd
	.space 0xd - (. - gText_Rom_2159DB)
	.endif
	@ data/maps/MtChimney/scripts.inc:823 MtChimney_Text_ShirleyPostBattle
	.globl gText_Rom_2159E8
gText_Rom_2159E8: @ 0x082159E8
	.string "もういちど おんせんに はいらなきゃ!\nあなたも いっしょに はいる?\pなんてねっ!{EOS}"
	.if (. - gText_Rom_2159E8) > 0x2b
	.error "gText_Rom_2159E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2159E8) < 0x2b
	.space 0x2b - (. - gText_Rom_2159E8)
	.endif
	@ data/maps/MtChimney/scripts.inc:828 MtChimney_Text_SawyerIntro (+1 aliases)
	.globl gText_Rom_215A13
gText_Rom_215A13: @ 0x08215A13
	.string "ここは いい やまだ!\nあっつい おねいさんたちが いっぱいだあ!{EOS}"
	.if (. - gText_Rom_215A13) > 0x22
	.error "gText_Rom_215A13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215A13) < 0x22
	.space 0x22 - (. - gText_Rom_215A13)
	.endif
	@ data/maps/MtChimney/scripts.inc:832 MtChimney_Text_SawyerDefeat (+1 aliases)
	.globl gText_Rom_215A35
gText_Rom_215A35: @ 0x08215A35
	.string "おおっ あんたも あついねぇ!{EOS}"
	.if (. - gText_Rom_215A35) > 0x10
	.error "gText_Rom_215A35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215A35) < 0x10
	.space 0x10 - (. - gText_Rom_215A35)
	.endif
	@ data/maps/MtChimney/scripts.inc:835 MtChimney_Text_SawyerPostBattle
	.globl gText_Rom_215A45
gText_Rom_215A45: @ 0x08215A45
	.string "いまから あつい おねいさんたちを つれて\nフエンおんせん でも いこうかな{EOS}"
	.if (. - gText_Rom_215A45) > 0x27
	.error "gText_Rom_215A45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215A45) < 0x27
	.space 0x27 - (. - gText_Rom_215A45)
	.endif
	@ data/maps/MtChimney/scripts.inc:839 MtChimney_Text_SawyerRegister
	.globl gText_Rom_215A6C
gText_Rom_215A6C: @ 0x08215A6C
	.string "あつい トレーナーは すきだなあ!\nポケナビに とうろくしても いいかい{EOS}"
	.if (. - gText_Rom_215A6C) > 0x25
	.error "gText_Rom_215A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215A6C) < 0x25
	.space 0x25 - (. - gText_Rom_215A6C)
	.endif
	@ data/maps/MtChimney/scripts.inc:843 MtChimney_Text_SawyerRematchIntro (+1 aliases)
	.globl gText_Rom_215A91
gText_Rom_215A91: @ 0x08215A91
	.string "あっつい おねいさん たちに\nかこまれて しあわせな おれは まけんぜ!{EOS}"
	.if (. - gText_Rom_215A91) > 0x25
	.error "gText_Rom_215A91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215A91) < 0x25
	.space 0x25 - (. - gText_Rom_215A91)
	.endif
	@ data/maps/MtChimney/scripts.inc:847 MtChimney_Text_SawyerRematchDefeat (+1 aliases)
	.globl gText_Rom_215AB6
gText_Rom_215AB6: @ 0x08215AB6
	.string "おおっ やっぱり\nあんたの ほうが あついねぇ!{EOS}"
	.if (. - gText_Rom_215AB6) > 0x19
	.error "gText_Rom_215AB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215AB6) < 0x19
	.space 0x19 - (. - gText_Rom_215AB6)
	.endif
	@ data/maps/MtChimney/scripts.inc:851 MtChimney_Text_SawyerPostRematch
	.globl gText_Rom_215ACF
gText_Rom_215ACF: @ 0x08215ACF
	.string "しかし ほんとに あついや……\nふく いっぱい きすぎちゃった かな{EOS}"
	.if (. - gText_Rom_215ACF) > 0x23
	.error "gText_Rom_215ACF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215ACF) < 0x23
	.space 0x23 - (. - gText_Rom_215ACF)
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
	.4byte gText_Rom_216039 @ ROM pointer 0x08216039
	.byte 0x09, 0x04, 0x68, 0x16, 0x04, 0x80, 0x01, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x16, 0x06, 0x80
	.byte 0x10, 0x00, 0x16, 0x07, 0x80, 0x03, 0x00, 0x25, 0x35, 0x01, 0x27, 0x2F, 0x0D, 0x00, 0xA2, 0x10
	.byte 0x00, 0x11, 0x00, 0x56, 0x02, 0x01, 0x00, 0xA2, 0x10, 0x00, 0x12, 0x00, 0x5E, 0x02, 0x00, 0x00
	.byte 0x25, 0x8E, 0x00, 0x28, 0x1E, 0x00, 0x16, 0xC8, 0x40, 0x02, 0x00, 0x30, 0x6B, 0x02, 0x69, 0x2B
	.byte 0x39, 0x01, 0x06, 0x01, 0x02, 0x5C, 0x21, 0x08, 0x30, 0x2F, 0x15, 0x00, 0x4F, 0x05, 0x00, 0x1B
	.byte 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x4F, 0x05, 0x00, 0x1D, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00
	.byte 0x4F, 0x05, 0x00, 0x21, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte gText_Rom_215F8B @ ROM pointer 0x08215F8B
	.byte 0x09, 0x04, 0x68, 0x5C, 0x03, 0x3A, 0x02, 0x00, 0x00, 0xD8, 0x5F, 0x21, 0x08, 0x29, 0x39, 0x01
	.byte 0x4F, 0x05, 0x00, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x02, 0x4F, 0x05, 0x00, 0x21
	.byte 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte gText_Rom_216000 @ ROM pointer 0x08216000
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x04, 0x68, 0x4F, 0x05, 0x00, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x02, 0x5C
	.byte 0x00, 0x78, 0x02, 0x00, 0x00
	.4byte gText_Rom_215D24 @ ROM pointer 0x08215D24
	.4byte gText_Rom_215D5E @ ROM pointer 0x08215D5E
	.byte 0x0F, 0x00, 0x69, 0x5D, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x02, 0xDA, 0x01, 0x00, 0x00
	.4byte gText_Rom_215DA0 @ ROM pointer 0x08215DA0
	.4byte gText_Rom_215DC8 @ ROM pointer 0x08215DC8
	.byte 0x64, 0x5C, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0x80, 0x5C, 0x21, 0x08, 0x0F, 0x00, 0xDE, 0x5D, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04
	.byte 0x02, 0x0F, 0x00, 0x0A, 0x5E, 0x21, 0x08, 0x09, 0x04, 0x16, 0x04, 0x80, 0xDA, 0x01, 0x25, 0xE6
	.byte 0x01, 0x1A, 0x00, 0x80, 0xDA, 0x01, 0x09, 0x08, 0x6C, 0x02, 0x5C, 0x05, 0xDA, 0x01, 0x00, 0x00
	.4byte gText_Rom_215E31 @ ROM pointer 0x08215E31
	.4byte gText_Rom_215E56 @ ROM pointer 0x08215E56
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte gText_Rom_215E6A @ ROM pointer 0x08215E6A
	.byte 0x09, 0x06, 0x02, 0x5C, 0x02, 0xD8, 0x00, 0x00, 0x00, 0x8F, 0x5E, 0x21, 0x08, 0xB8, 0x5E, 0x21
	.byte 0x08, 0xC3, 0x5C, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06
	.byte 0x01, 0xDF, 0x5C, 0x21, 0x08, 0x0F, 0x00, 0xD6, 0x5E, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x25
	.byte 0x04, 0x02, 0x0F, 0x00
	.4byte gText_Rom_215EFC @ ROM pointer 0x08215EFC
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0xD8, 0x00, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0xD8, 0x00, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x05, 0xD8, 0x00, 0x00, 0x00, 0x2E, 0x5F, 0x21, 0x08, 0x52, 0x5F, 0x21
	.byte 0x08, 0x0F, 0x00, 0x69, 0x5F, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x36, 0x02, 0x00, 0x00
	.4byte gText_Rom_21606A @ ROM pointer 0x0821606A
	.4byte gText_Rom_216085 @ ROM pointer 0x08216085
	.byte 0x0F, 0x00
	.4byte gText_Rom_21608B @ ROM pointer 0x0821608B
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xD9, 0x00, 0x00, 0x00
	.4byte gText_Rom_2160AC @ ROM pointer 0x082160AC
	.4byte gText_Rom_2160CF @ ROM pointer 0x082160CF
	.byte 0x0F, 0x00, 0xDB, 0x60, 0x21, 0x08, 0x09, 0x06, 0x02
