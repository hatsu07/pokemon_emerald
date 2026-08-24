	@ data/text/match_call.inc:721 MatchCall_Text_Wallace
	.globl MatchCall_Text_Wallace
MatchCall_Text_Wallace: @ 0x0826AA64
	.string "ミクリ『やあ {PLAYER}{KUN}\nきみは ダイゴには あったかな?\pかれって……\nほんとうは ものすごく つよいのに\pあまり ポケモン しょうぶを しないで\nめずらしい いしを さがして ばかりいる\lかわりもの なんだよ\pどこかの どうくつか いわやまに\nもぐってるんじゃ ないかな\pめずらしい いし なんて\nわたしには いんせき ぐらいしか\lおもい うかばないんだけど……"
	.byte EOS
	.if (. - MatchCall_Text_Wallace) > 0xb7
	.error "MatchCall_Text_Wallace may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Wallace) < 0xb7
	.space 0xb7 - (. - MatchCall_Text_Wallace)
	.endif

	@ data/text/match_call.inc:724 MatchCall_Text_MayRayquazaCall
	.globl MatchCall_Text_MayRayquazaCall
MatchCall_Text_MayRayquazaCall: @ 0x0826AB1B
	.string "…… …… ……\n…… …… …… ピッ!\pハルカ『あっ {PLAYER}{KUN}!?\pあたしね さっきまで キナギ タウンに\nいってたんだけど\lおおきな みどりいろの ポケモンが\lそらを とんで いくのを みたの!\pあたし……\nあんな ポケモン みたこと ない!\pなんだろう もしかしたら これって\nだいはっけん!?\p…… …… ……\n…… …… …… ツー"
	.byte EOS
	.if (. - MatchCall_Text_MayRayquazaCall) > 0xad
	.error "MatchCall_Text_MayRayquazaCall may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_MayRayquazaCall) < 0xad
	.space 0xad - (. - MatchCall_Text_MayRayquazaCall)
	.endif

	@ data/text/match_call.inc:727 MatchCall_Text_BrendanRayquazaCall
	.globl MatchCall_Text_BrendanRayquazaCall
MatchCall_Text_BrendanRayquazaCall: @ 0x0826ABC8
	.string "…… …… ……\n…… …… …… ピッ!\pユウキ『おっ {PLAYER}!?\pオレ さっきまで キナギ タウンに\nいってたんだけどさ\lでっかい みどりいろの ポケモンが\lそらを とんで いくのを みたんだ!\pあんな すごいの みたこと ないよ\n{PLAYER}にも みせたかったなあ!\p…… …… ……\n…… …… …… ツー"
	.byte EOS
	.if (. - MatchCall_Text_BrendanRayquazaCall) > 0x99
	.error "MatchCall_Text_BrendanRayquazaCall may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_BrendanRayquazaCall) < 0x99
	.space 0x99 - (. - MatchCall_Text_BrendanRayquazaCall)
	.endif

	@ data/text/match_call.inc:730 MatchCall_Text_May1
	.globl MatchCall_Text_May1
MatchCall_Text_May1: @ 0x0826AC61
	.string "ハルカ『あっ {PLAYER}{KUN}!\pハギろうじんは\nふなのりを いんたい したけど\pときどき ピーコちゃんと いっしょに\nうみに でてるのを みかけるよ\pきっと いまも うみが すきなんだね!"
	.byte EOS
	.if (. - MatchCall_Text_May1) > 0x5c
	.error "MatchCall_Text_May1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May1) < 0x5c
	.space 0x5c - (. - MatchCall_Text_May1)
	.endif

	@ data/text/match_call.inc:733 MatchCall_Text_May2
	.globl MatchCall_Text_May2
MatchCall_Text_May2: @ 0x0826ACBD
	.string "ハルカ『ねえねえ {PLAYER}{KUN}!\pトウカや ムロみたいな\nちいさい まちに ジムが あるのに\pおおきな みなとまちの カイナには\nなぜか ジムが ないのよね\pいつか ジムが できたら あたし\nジムリーダーに りっこうほ しよっかなー"
	.byte EOS
	.if (. - MatchCall_Text_May2) > 0x73
	.error "MatchCall_Text_May2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May2) < 0x73
	.space 0x73 - (. - MatchCall_Text_May2)
	.endif

	@ data/text/match_call.inc:736 MatchCall_Text_May3
	.globl MatchCall_Text_May3
MatchCall_Text_May3: @ 0x0826AD30
	.string "ハルカ『あっ {PLAYER}{KUN}!\pそういえば カナズミシティに\nいあいぎりオヤジ っていう ひとの\lいえが あったでしょ?\pキンセツシティには\nその おとうとが すんでるんだって!\pどんな なまえだと おもう?\p…… …… ……\n…… …… ……\pいわくだきオヤジ っていうの!"
	.byte EOS
	.if (. - MatchCall_Text_May3) > 0x88
	.error "MatchCall_Text_May3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May3) < 0x88
	.space 0x88 - (. - MatchCall_Text_May3)
	.endif

	@ data/text/match_call.inc:739 MatchCall_Text_May4
	.globl MatchCall_Text_May4
MatchCall_Text_May4: @ 0x0826ADB8
	.string "ハルカ『{PLAYER}{KUN}?\pカナシダトンネル って\nカナズミと シダケを むすぶから\lカナシダトンネル って いうのよね!"
	.byte EOS
	.if (. - MatchCall_Text_May4) > 0x3a
	.error "MatchCall_Text_May4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May4) < 0x3a
	.space 0x3a - (. - MatchCall_Text_May4)
	.endif

	@ data/text/match_call.inc:742 MatchCall_Text_May5
	.globl MatchCall_Text_May5
MatchCall_Text_May5: @ 0x0826ADF2
	.string "ハルカ『{PLAYER}{KUN} げんきー?\pあたしは いま\n111ばんどうろに きているの!\pさばくの うえのほうに すんでる\nおばあさんの ところで\lひとやすみ していく つもりよ!"
	.byte EOS
	.if (. - MatchCall_Text_May5) > 0x56
	.error "MatchCall_Text_May5 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May5) < 0x56
	.space 0x56 - (. - MatchCall_Text_May5)
	.endif

	@ data/text/match_call.inc:745 MatchCall_Text_May6
	.globl MatchCall_Text_May6
MatchCall_Text_May6: @ 0x0826AE48
	.string "ハルカ『あっ {PLAYER}{KUN}!\pさばくに げんえいのとう っていうのが\nたってるの しってる?\pしんきろう みたいに\nみえたり みえなかったり するんだって!\pあたしも みてみたいなー"
	.byte EOS
	.if (. - MatchCall_Text_May6) > 0x5a
	.error "MatchCall_Text_May6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May6) < 0x5a
	.space 0x5a - (. - MatchCall_Text_May6)
	.endif

	@ data/text/match_call.inc:748 MatchCall_Text_May7
	.globl MatchCall_Text_May7
MatchCall_Text_May7: @ 0x0826AEA2
	.string "ハルカ『{PLAYER}{KUN} やっほー!\pあたしは いま\n119ばんどうろに きているの!\pこのあたりは おおきな かわが あるし\nあめも しょっちゅう ふってるから\lずぶぬれに なっちゃったよ!"
	.byte EOS
	.if (. - MatchCall_Text_May7) > 0x5d
	.error "MatchCall_Text_May7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May7) < 0x5d
	.space 0x5d - (. - MatchCall_Text_May7)
	.endif

	@ data/text/match_call.inc:751 MatchCall_Text_May8
	.globl MatchCall_Text_May8
MatchCall_Text_May8: @ 0x0826AEFF
	.string "ハルカ『{PLAYER}{KUN}!\pおくりびやまには じゅみょうを おえた\nポケモンが まつられてるの!\pそのせいか しゅつげんする ポケモンも\nゴーストタイプが おおいのよ!"
	.byte EOS
	.if (. - MatchCall_Text_May8) > 0x51
	.error "MatchCall_Text_May8 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May8) < 0x51
	.space 0x51 - (. - MatchCall_Text_May8)
	.endif

	@ data/text/match_call.inc:754 MatchCall_Text_May9
	.globl MatchCall_Text_May9
MatchCall_Text_May9: @ 0x0826AF50
	.string "ハルカ『ねえねえ {PLAYER}{KUN}!\pあたし また フエンタウンの\nおんせんに いこうと おもったんだけど\pデコボコさんどうに\nにんそうの わるいのが うろついていて\lなんか いやーな かんじ だったわ!"
	.byte EOS
	.if (. - MatchCall_Text_May9) > 0x63
	.error "MatchCall_Text_May9 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May9) < 0x63
	.space 0x63 - (. - MatchCall_Text_May9)
	.endif

	@ data/text/match_call.inc:757 MatchCall_Text_May10
	.globl MatchCall_Text_May10
MatchCall_Text_May10: @ 0x0826AFB3
	.string "ハルカ『あっ {PLAYER}{KUN}!\pクスノキかんちょうが せんすいていで\nかいていどうくつを はっけんした って\lニュースで やってたけど みた?"
	.byte EOS
	.if (. - MatchCall_Text_May10) > 0x45
	.error "MatchCall_Text_May10 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May10) < 0x45
	.space 0x45 - (. - MatchCall_Text_May10)
	.endif

	@ data/text/match_call.inc:760 MatchCall_Text_May11
	.globl MatchCall_Text_May11
MatchCall_Text_May11: @ 0x0826AFF8
	.string "ハルカ『ねえねえ {PLAYER}{KUN}!\pふねが なくても ポケモンの わざで\nうみのうえを わたって いけるって\lすごいよね!\pでも それだけじゃなくて\nポケモンと いっしょに うみのそこに\lもぐれちゃう わざも あるんだって!"
	.byte EOS
	.if (. - MatchCall_Text_May11) > 0x6e
	.error "MatchCall_Text_May11 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May11) < 0x6e
	.space 0x6e - (. - MatchCall_Text_May11)
	.endif

	@ data/text/match_call.inc:763 MatchCall_Text_May12
	.globl MatchCall_Text_May12
MatchCall_Text_May12: @ 0x0826B066
	.string "ハルカ『{PLAYER}{KUN} おつかれ!\pうみのうえで みえてるのに むこうがわへ\nいけない ところ なんかは\pどこかから いったん もぐって\nかいていの みちを とおりぬけて\lむこうの すいめんに でれば いいの!"
	.byte EOS
	.if (. - MatchCall_Text_May12) > 0x67
	.error "MatchCall_Text_May12 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May12) < 0x67
	.space 0x67 - (. - MatchCall_Text_May12)
	.endif

	@ data/text/match_call.inc:766 MatchCall_Text_May13
	.globl MatchCall_Text_May13
MatchCall_Text_May13: @ 0x0826B0CD
	.string "ハルカ『はーい {PLAYER}{KUN}\pどう? ずかんは じゅんちょうに\nうまっていってる?\pあのね うわさで きいたんだけど\nどこかに ちょうこだいポケモン というのが\l3しゅるいも いるらしいの!\pうーん 1しゅるい だけでも いいから\nみてみたいなあ……"
	.byte EOS
	.if (. - MatchCall_Text_May13) > 0x7c
	.error "MatchCall_Text_May13 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May13) < 0x7c
	.space 0x7c - (. - MatchCall_Text_May13)
	.endif

