	@ data/text/match_call.inc:769 MatchCall_Text_May14
	.globl MatchCall_Text_May14
MatchCall_Text_May14: @ 0x0826B149
	.string "ハルカ『{PLAYER}{KUN}!\nうわさは きいたよ!\pルネの ジムリーダーにも かったって?\nということは もうひといき だね!"
	.byte EOS
	.if (. - MatchCall_Text_May14) > 0x3b
	.error "MatchCall_Text_May14 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May14) < 0x3b
	.space 0x3b - (. - MatchCall_Text_May14)
	.endif

	@ data/text/match_call.inc:772 MatchCall_Text_May15
	.globl MatchCall_Text_May15
MatchCall_Text_May15: @ 0x0826B184
	.string "ハルカ『もう ホウエンちほうで\n{PLAYER}{KUN}を しらない\lトレーナー なんて いないんだよ!\pあたしが {PLAYER}{KUN}と\nともだちだ っていうと\lみんな ビックリ するんだから!"
	.byte EOS
	.if (. - MatchCall_Text_May15) > 0x55
	.error "MatchCall_Text_May15 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_May15) < 0x55
	.space 0x55 - (. - MatchCall_Text_May15)
	.endif

	@ data/text/match_call.inc:775 MatchCall_Text_Brendan1
	.globl MatchCall_Text_Brendan1
MatchCall_Text_Brendan1: @ 0x0826B1D9
	.string "ユウキ『おっ {PLAYER}!\pハギろうじんは\nふなのりを いんたい したけど\pときどき ピーコちゃんと いっしょに\nうみに でてるのを みかけるんだ\pきっと いまも うみが すきなんだろうな!"
	.byte EOS
	.if (. - MatchCall_Text_Brendan1) > 0x5d
	.error "MatchCall_Text_Brendan1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan1) < 0x5d
	.space 0x5d - (. - MatchCall_Text_Brendan1)
	.endif

	@ data/text/match_call.inc:778 MatchCall_Text_Brendan2
	.globl MatchCall_Text_Brendan2
MatchCall_Text_Brendan2: @ 0x0826B236
	.string "ユウキ『やあ {PLAYER}!\pトウカや ムロみたいな\nちいさい まちに ジムが あるのに\pおおきな みなとまちの カイナには\nなぜか ジムが ないんだよな\pいつか ジムが できたら オレ\nジムリーダーに りっこうほ しようかな"
	.byte EOS
	.if (. - MatchCall_Text_Brendan2) > 0x6e
	.error "MatchCall_Text_Brendan2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan2) < 0x6e
	.space 0x6e - (. - MatchCall_Text_Brendan2)
	.endif

	@ data/text/match_call.inc:781 MatchCall_Text_Brendan3
	.globl MatchCall_Text_Brendan3
MatchCall_Text_Brendan3: @ 0x0826B2A4
	.string "ユウキ『おっ {PLAYER}!\pそういえば カナズミシティに\nいあいぎりオヤジ っていう ひとの\lいえが あっただろう?\pキンセツシティには\nその おとうとが すんでるんだって!\pどんな なまえだと おもう?\p…… …… ……\n…… …… ……\pいわくだきオヤジ だってさ!"
	.byte EOS
	.if (. - MatchCall_Text_Brendan3) > 0x85
	.error "MatchCall_Text_Brendan3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan3) < 0x85
	.space 0x85 - (. - MatchCall_Text_Brendan3)
	.endif

	@ data/text/match_call.inc:784 MatchCall_Text_Brendan4
	.globl MatchCall_Text_Brendan4
MatchCall_Text_Brendan4: @ 0x0826B329
	.string "ユウキ『そのこえは {PLAYER}?\pカナシダトンネル って\nカナズミと シダケを むすぶから\lカナシダトンネル なんだよ\pおまえ…… しってたか?"
	.byte EOS
	.if (. - MatchCall_Text_Brendan4) > 0x46
	.error "MatchCall_Text_Brendan4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan4) < 0x46
	.space 0x46 - (. - MatchCall_Text_Brendan4)
	.endif

	@ data/text/match_call.inc:787 MatchCall_Text_Brendan5
	.globl MatchCall_Text_Brendan5
MatchCall_Text_Brendan5: @ 0x0826B36F
	.string "ユウキ『{PLAYER} げんきか?\pオレは いま\n111ばんどうろに きてるんだ!\pさばくの うえのほうに すんでる\nばあさんの ところで\lひとやすみ していく つもりさ!\pちかくまで きたら\nおまえも よっていくと いいよ!"
	.byte EOS
	.if (. - MatchCall_Text_Brendan5) > 0x6d
	.error "MatchCall_Text_Brendan5 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan5) < 0x6d
	.space 0x6d - (. - MatchCall_Text_Brendan5)
	.endif

	@ data/text/match_call.inc:790 MatchCall_Text_Brendan6
	.globl MatchCall_Text_Brendan6
MatchCall_Text_Brendan6: @ 0x0826B3DC
	.string "ユウキ『あっ {PLAYER}!\pさばくに げんえいのとう っていうのが\nたってるの しってるか?\pしんきろう みたいに\nみえたり みえなかったり するんだよ!\pオレも みてみたいなー"
	.byte EOS
	.if (. - MatchCall_Text_Brendan6) > 0x57
	.error "MatchCall_Text_Brendan6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan6) < 0x57
	.space 0x57 - (. - MatchCall_Text_Brendan6)
	.endif

	@ data/text/match_call.inc:793 MatchCall_Text_Brendan7
	.globl MatchCall_Text_Brendan7
MatchCall_Text_Brendan7: @ 0x0826B433
	.string "ユウキ『だれ? {PLAYER}か?\pオレは いま\n119ばんどうろに きてるんだ!\pこのへんは でっかい かわが あるし\nいっつも あめが ふってるから\lずぶぬれに なっちまったよ!"
	.byte EOS
	.if (. - MatchCall_Text_Brendan7) > 0x57
	.error "MatchCall_Text_Brendan7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan7) < 0x57
	.space 0x57 - (. - MatchCall_Text_Brendan7)
	.endif

	@ data/text/match_call.inc:796 MatchCall_Text_Brendan8
	.globl MatchCall_Text_Brendan8
MatchCall_Text_Brendan8: @ 0x0826B48A
	.string "ユウキ『{PLAYER}!\pおくりびやまには じゅみょうを おえた\nポケモンが まつられてるんだ!\pそのせいか しゅつげんする ポケモンも\nゴーストタイプが おおいんだよな!"
	.byte EOS
	.if (. - MatchCall_Text_Brendan8) > 0x52
	.error "MatchCall_Text_Brendan8 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan8) < 0x52
	.space 0x52 - (. - MatchCall_Text_Brendan8)
	.endif

	@ data/text/match_call.inc:799 MatchCall_Text_Brendan9
	.globl MatchCall_Text_Brendan9
MatchCall_Text_Brendan9: @ 0x0826B4DC
	.string "ユウキ『なあなあ {PLAYER}!\pオレ また フエンタウンの\nおんせんに いこうと おもったんだけど\pデコボコさんどうの とちゅうに\nにんそうの わるいのが いたんだよ!\pあれって マグマだん…… だよな!?"
	.byte EOS
	.if (. - MatchCall_Text_Brendan9) > 0x65
	.error "MatchCall_Text_Brendan9 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan9) < 0x65
	.space 0x65 - (. - MatchCall_Text_Brendan9)
	.endif

	@ data/text/match_call.inc:802 MatchCall_Text_Brendan10
	.globl MatchCall_Text_Brendan10
MatchCall_Text_Brendan10: @ 0x0826B541
	.string "ユウキ『おっ {PLAYER}!\pクスノキかんちょうが せんすいていで\nかいていどうくつを はっけんした って\lニュースで やってたけど みたか?"
	.byte EOS
	.if (. - MatchCall_Text_Brendan10) > 0x44
	.error "MatchCall_Text_Brendan10 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan10) < 0x44
	.space 0x44 - (. - MatchCall_Text_Brendan10)
	.endif

	@ data/text/match_call.inc:805 MatchCall_Text_Brendan11
	.globl MatchCall_Text_Brendan11
MatchCall_Text_Brendan11: @ 0x0826B585
	.string "ユウキ『なあなあ {PLAYER}!\pふねが なくても ポケモンの わざで\nうみのうえを わたって いけるって\lなんだか すごくないか!?\pしかも ポケモンと いっしょに\nうみのそこに もぐれる わざも あるって!\pポケモンって なんでも できるんだなー!"
	.byte EOS
	.if (. - MatchCall_Text_Brendan11) > 0x7b
	.error "MatchCall_Text_Brendan11 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan11) < 0x7b
	.space 0x7b - (. - MatchCall_Text_Brendan11)
	.endif

	@ data/text/match_call.inc:808 MatchCall_Text_Brendan12
	.globl MatchCall_Text_Brendan12
MatchCall_Text_Brendan12: @ 0x0826B600
	.string "ユウキ『{PLAYER} おつかれ!\pうみのうえで みえてるのに むこうがわへ\nいけない ところ なんかは\pどこかから いったん もぐって\nかいていの みちを とおりぬけて\lむこうの すいめんに でれば いいんだ!"
	.byte EOS
	.if (. - MatchCall_Text_Brendan12) > 0x66
	.error "MatchCall_Text_Brendan12 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan12) < 0x66
	.space 0x66 - (. - MatchCall_Text_Brendan12)
	.endif

	@ data/text/match_call.inc:811 MatchCall_Text_Brendan13
	.globl MatchCall_Text_Brendan13
MatchCall_Text_Brendan13: @ 0x0826B666
	.string "ユウキ『おーす {PLAYER}!\pどうだ? ずかんは じゅんちょうに\nうまっていってるか?\pあのな うわさで きいたんだけど\nどこかに ちょうこだいポケモン ってのが\l3しゅるいも いるらしいんだよ!\pうーん 1しゅるい だけでも いいから\nつかまえて みたいよなあ……"
	.byte EOS
	.if (. - MatchCall_Text_Brendan13) > 0x83
	.error "MatchCall_Text_Brendan13 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan13) < 0x83
	.space 0x83 - (. - MatchCall_Text_Brendan13)
	.endif

	@ data/text/match_call.inc:814 MatchCall_Text_Brendan14
	.globl MatchCall_Text_Brendan14
MatchCall_Text_Brendan14: @ 0x0826B6E9
	.string "ユウキ『{PLAYER}!\nうわさは きいたよ!\pルネの ジムリーダーにも かったって?\nすげえなあ もうひといき だな!"
	.byte EOS
	.if (. - MatchCall_Text_Brendan14) > 0x38
	.error "MatchCall_Text_Brendan14 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan14) < 0x38
	.space 0x38 - (. - MatchCall_Text_Brendan14)
	.endif

