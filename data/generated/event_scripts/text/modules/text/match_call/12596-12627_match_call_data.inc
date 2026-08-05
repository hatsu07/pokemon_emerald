	@ data/text/match_call.inc:769 MatchCall_Text_May14
	.globl gText_Rom_26B149
gText_Rom_26B149: @ 0x0826B149
	.string "ハルカ『{PLAYER}{KUN}!\nうわさは きいたよ!\pルネの ジムリーダーにも かったって?\nということは もうひといき だね!"
	.byte EOS
	.if (. - gText_Rom_26B149) > 0x3b
	.error "gText_Rom_26B149 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B149) < 0x3b
	.space 0x3b - (. - gText_Rom_26B149)
	.endif

	@ data/text/match_call.inc:772 MatchCall_Text_May15
	.globl gText_Rom_26B184
gText_Rom_26B184: @ 0x0826B184
	.string "ハルカ『もう ホウエンちほうで\n{PLAYER}{KUN}を しらない\lトレーナー なんて いないんだよ!\pあたしが {PLAYER}{KUN}と\nともだちだ っていうと\lみんな ビックリ するんだから!"
	.byte EOS
	.if (. - gText_Rom_26B184) > 0x55
	.error "gText_Rom_26B184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B184) < 0x55
	.space 0x55 - (. - gText_Rom_26B184)
	.endif

	@ data/text/match_call.inc:775 MatchCall_Text_Brendan1
	.globl gText_Rom_26B1D9
gText_Rom_26B1D9: @ 0x0826B1D9
	.string "ユウキ『おっ {PLAYER}!\pハギろうじんは\nふなのりを いんたい したけど\pときどき ピーコちゃんと いっしょに\nうみに でてるのを みかけるんだ\pきっと いまも うみが すきなんだろうな!"
	.byte EOS
	.if (. - gText_Rom_26B1D9) > 0x5d
	.error "gText_Rom_26B1D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B1D9) < 0x5d
	.space 0x5d - (. - gText_Rom_26B1D9)
	.endif

	@ data/text/match_call.inc:778 MatchCall_Text_Brendan2
	.globl gText_Rom_26B236
gText_Rom_26B236: @ 0x0826B236
	.string "ユウキ『やあ {PLAYER}!\pトウカや ムロみたいな\nちいさい まちに ジムが あるのに\pおおきな みなとまちの カイナには\nなぜか ジムが ないんだよな\pいつか ジムが できたら オレ\nジムリーダーに りっこうほ しようかな"
	.byte EOS
	.if (. - gText_Rom_26B236) > 0x6e
	.error "gText_Rom_26B236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B236) < 0x6e
	.space 0x6e - (. - gText_Rom_26B236)
	.endif

	@ data/text/match_call.inc:781 MatchCall_Text_Brendan3
	.globl gText_Rom_26B2A4
gText_Rom_26B2A4: @ 0x0826B2A4
	.string "ユウキ『おっ {PLAYER}!\pそういえば カナズミシティに\nいあいぎりオヤジ っていう ひとの\lいえが あっただろう?\pキンセツシティには\nその おとうとが すんでるんだって!\pどんな なまえだと おもう?\p…… …… ……\n…… …… ……\pいわくだきオヤジ だってさ!"
	.byte EOS
	.if (. - gText_Rom_26B2A4) > 0x85
	.error "gText_Rom_26B2A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B2A4) < 0x85
	.space 0x85 - (. - gText_Rom_26B2A4)
	.endif

	@ data/text/match_call.inc:784 MatchCall_Text_Brendan4
	.globl gText_Rom_26B329
gText_Rom_26B329: @ 0x0826B329
	.string "ユウキ『そのこえは {PLAYER}?\pカナシダトンネル って\nカナズミと シダケを むすぶから\lカナシダトンネル なんだよ\pおまえ…… しってたか?"
	.byte EOS
	.if (. - gText_Rom_26B329) > 0x46
	.error "gText_Rom_26B329 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B329) < 0x46
	.space 0x46 - (. - gText_Rom_26B329)
	.endif

	@ data/text/match_call.inc:787 MatchCall_Text_Brendan5
	.globl gText_Rom_26B36F
gText_Rom_26B36F: @ 0x0826B36F
	.string "ユウキ『{PLAYER} げんきか?\pオレは いま\n111ばんどうろに きてるんだ!\pさばくの うえのほうに すんでる\nばあさんの ところで\lひとやすみ していく つもりさ!\pちかくまで きたら\nおまえも よっていくと いいよ!"
	.byte EOS
	.if (. - gText_Rom_26B36F) > 0x6d
	.error "gText_Rom_26B36F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B36F) < 0x6d
	.space 0x6d - (. - gText_Rom_26B36F)
	.endif

	@ data/text/match_call.inc:790 MatchCall_Text_Brendan6
	.globl gText_Rom_26B3DC
gText_Rom_26B3DC: @ 0x0826B3DC
	.string "ユウキ『あっ {PLAYER}!\pさばくに げんえいのとう っていうのが\nたってるの しってるか?\pしんきろう みたいに\nみえたり みえなかったり するんだよ!\pオレも みてみたいなー"
	.byte EOS
	.if (. - gText_Rom_26B3DC) > 0x57
	.error "gText_Rom_26B3DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B3DC) < 0x57
	.space 0x57 - (. - gText_Rom_26B3DC)
	.endif

	@ data/text/match_call.inc:793 MatchCall_Text_Brendan7
	.globl gText_Rom_26B433
gText_Rom_26B433: @ 0x0826B433
	.string "ユウキ『だれ? {PLAYER}か?\pオレは いま\n119ばんどうろに きてるんだ!\pこのへんは でっかい かわが あるし\nいっつも あめが ふってるから\lずぶぬれに なっちまったよ!"
	.byte EOS
	.if (. - gText_Rom_26B433) > 0x57
	.error "gText_Rom_26B433 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B433) < 0x57
	.space 0x57 - (. - gText_Rom_26B433)
	.endif

	@ data/text/match_call.inc:796 MatchCall_Text_Brendan8
	.globl gText_Rom_26B48A
gText_Rom_26B48A: @ 0x0826B48A
	.string "ユウキ『{PLAYER}!\pおくりびやまには じゅみょうを おえた\nポケモンが まつられてるんだ!\pそのせいか しゅつげんする ポケモンも\nゴーストタイプが おおいんだよな!"
	.byte EOS
	.if (. - gText_Rom_26B48A) > 0x52
	.error "gText_Rom_26B48A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B48A) < 0x52
	.space 0x52 - (. - gText_Rom_26B48A)
	.endif

	@ data/text/match_call.inc:799 MatchCall_Text_Brendan9
	.globl gText_Rom_26B4DC
gText_Rom_26B4DC: @ 0x0826B4DC
	.string "ユウキ『なあなあ {PLAYER}!\pオレ また フエンタウンの\nおんせんに いこうと おもったんだけど\pデコボコさんどうの とちゅうに\nにんそうの わるいのが いたんだよ!\pあれって マグマだん…… だよな!?"
	.byte EOS
	.if (. - gText_Rom_26B4DC) > 0x65
	.error "gText_Rom_26B4DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B4DC) < 0x65
	.space 0x65 - (. - gText_Rom_26B4DC)
	.endif

	@ data/text/match_call.inc:802 MatchCall_Text_Brendan10
	.globl gText_Rom_26B541
gText_Rom_26B541: @ 0x0826B541
	.string "ユウキ『おっ {PLAYER}!\pクスノキかんちょうが せんすいていで\nかいていどうくつを はっけんした って\lニュースで やってたけど みたか?"
	.byte EOS
	.if (. - gText_Rom_26B541) > 0x44
	.error "gText_Rom_26B541 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B541) < 0x44
	.space 0x44 - (. - gText_Rom_26B541)
	.endif

	@ data/text/match_call.inc:805 MatchCall_Text_Brendan11
	.globl gText_Rom_26B585
gText_Rom_26B585: @ 0x0826B585
	.string "ユウキ『なあなあ {PLAYER}!\pふねが なくても ポケモンの わざで\nうみのうえを わたって いけるって\lなんだか すごくないか!?\pしかも ポケモンと いっしょに\nうみのそこに もぐれる わざも あるって!\pポケモンって なんでも できるんだなー!"
	.byte EOS
	.if (. - gText_Rom_26B585) > 0x7b
	.error "gText_Rom_26B585 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B585) < 0x7b
	.space 0x7b - (. - gText_Rom_26B585)
	.endif

	@ data/text/match_call.inc:808 MatchCall_Text_Brendan12
	.globl gText_Rom_26B600
gText_Rom_26B600: @ 0x0826B600
	.string "ユウキ『{PLAYER} おつかれ!\pうみのうえで みえてるのに むこうがわへ\nいけない ところ なんかは\pどこかから いったん もぐって\nかいていの みちを とおりぬけて\lむこうの すいめんに でれば いいんだ!"
	.byte EOS
	.if (. - gText_Rom_26B600) > 0x66
	.error "gText_Rom_26B600 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B600) < 0x66
	.space 0x66 - (. - gText_Rom_26B600)
	.endif

	@ data/text/match_call.inc:811 MatchCall_Text_Brendan13
	.globl gText_Rom_26B666
gText_Rom_26B666: @ 0x0826B666
	.string "ユウキ『おーす {PLAYER}!\pどうだ? ずかんは じゅんちょうに\nうまっていってるか?\pあのな うわさで きいたんだけど\nどこかに ちょうこだいポケモン ってのが\l3しゅるいも いるらしいんだよ!\pうーん 1しゅるい だけでも いいから\nつかまえて みたいよなあ……"
	.byte EOS
	.if (. - gText_Rom_26B666) > 0x83
	.error "gText_Rom_26B666 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B666) < 0x83
	.space 0x83 - (. - gText_Rom_26B666)
	.endif

	@ data/text/match_call.inc:814 MatchCall_Text_Brendan14
	.globl gText_Rom_26B6E9
gText_Rom_26B6E9: @ 0x0826B6E9
	.string "ユウキ『{PLAYER}!\nうわさは きいたよ!\pルネの ジムリーダーにも かったって?\nすげえなあ もうひといき だな!"
	.byte EOS
	.if (. - gText_Rom_26B6E9) > 0x38
	.error "gText_Rom_26B6E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B6E9) < 0x38
	.space 0x38 - (. - gText_Rom_26B6E9)
	.endif

