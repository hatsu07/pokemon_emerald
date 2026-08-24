	@ data/text/match_call.inc:817 MatchCall_Text_Brendan15
	.globl MatchCall_Text_Brendan15
MatchCall_Text_Brendan15: @ 0x0826B721
	.string "ユウキ『もう ホウエンちほうで\n{PLAYER}のこと しらない\lトレーナー なんて いないんだ!\pオレが {PLAYER}と\nともだちだ っていうと\lみんな うらやましそうに するよ!"
	.byte EOS
	.if (. - MatchCall_Text_Brendan15) > 0x52
	.error "MatchCall_Text_Brendan15 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Brendan15) < 0x52
	.space 0x52 - (. - MatchCall_Text_Brendan15)
	.endif

	@ data/text/match_call.inc:820 MatchCall_Text_Wally1
	.globl MatchCall_Text_Wally1
MatchCall_Text_Wally1: @ 0x0826B773
	.string "ミツル『あっ {PLAYER}さん!\pさいきんは からだの ぐあいも\nずいぶん よくなって きたし\pぼくも はやく {PLAYER}さん みたいな\nトレーナーに なりたいな!"
	.byte EOS
	.if (. - MatchCall_Text_Wally1) > 0x4c
	.error "MatchCall_Text_Wally1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Wally1) < 0x4c
	.space 0x4c - (. - MatchCall_Text_Wally1)
	.endif

	@ data/text/match_call.inc:823 MatchCall_Text_Wally2
	.globl MatchCall_Text_Wally2
MatchCall_Text_Wally2: @ 0x0826B7BF
	.string "ミツル『{PLAYER}さん こんにちは!\pカナシダトンネルが かいつう したせいで\nミチルおねえちゃんも\lすっごく うれしそう ですよ!"
	.byte EOS
	.if (. - MatchCall_Text_Wally2) > 0x40
	.error "MatchCall_Text_Wally2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Wally2) < 0x40
	.space 0x40 - (. - MatchCall_Text_Wally2)
	.endif

	@ data/text/match_call.inc:826 MatchCall_Text_Wally3
	.globl MatchCall_Text_Wally3
MatchCall_Text_Wally3: @ 0x0826B7FF
	.string "ミツル『あっ {PLAYER}さん!\pぼく…… シダケの おじさんに\nなにも いわずに でてきちゃった けど\lおじさん おこってないかな……\p{PLAYER}さん なら\nぼくの きもち わかって くれますよね?"
	.byte EOS
	.if (. - MatchCall_Text_Wally3) > 0x5e
	.error "MatchCall_Text_Wally3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Wally3) < 0x5e
	.space 0x5e - (. - MatchCall_Text_Wally3)
	.endif

	@ data/text/match_call.inc:829 MatchCall_Text_Wally4
	.globl MatchCall_Text_Wally4
MatchCall_Text_Wally4: @ 0x0826B85D
	.string "ミツル『{PLAYER}さん?\nぼくです ミツルです!\pトレーナーの せかいって すごいですね!\nポケモンを つれて あるいていると\lみんなが こえを かけて くれるんです!\pまるで ポケモンを つうじて\nみんなが つながっている みたいに!"
	.byte EOS
	.if (. - MatchCall_Text_Wally4) > 0x74
	.error "MatchCall_Text_Wally4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Wally4) < 0x74
	.space 0x74 - (. - MatchCall_Text_Wally4)
	.endif

	@ data/text/match_call.inc:832 MatchCall_Text_Wally5
	.globl MatchCall_Text_Wally5
MatchCall_Text_Wally5: @ 0x0826B8D1
	.string "ミツル『{PLAYER}さん? すごいですよ!\n{PLAYER}さんと いっしょに つかまえた\lラルトスが しんか したんです!\pぼくって さいのう あるのかなあ……\pなーんて ちょうしに のったら\nいけませんよね\pえらいのは ポケモン ですもん!"
	.byte EOS
	.if (. - MatchCall_Text_Wally5) > 0x71
	.error "MatchCall_Text_Wally5 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Wally5) < 0x71
	.space 0x71 - (. - MatchCall_Text_Wally5)
	.endif

	@ data/text/match_call.inc:835 MatchCall_Text_Wally6
	.globl MatchCall_Text_Wally6
MatchCall_Text_Wally6: @ 0x0826B942
	.string "…… …… ……\n…… …… ……\pミツルは ポケナビの よびだしが\nとどかない ところに いるようだ……"
	.byte EOS
	.if (. - MatchCall_Text_Wally6) > 0x36
	.error "MatchCall_Text_Wally6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Wally6) < 0x36
	.space 0x36 - (. - MatchCall_Text_Wally6)
	.endif

	@ data/text/match_call.inc:838 MatchCall_Text_Wally7
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_Text_Wally7
MatchCall_Text_Wally7: @ 0x0826B978
	.string "ミツル『あっ {PLAYER}さん!\pいままで ほとんど いえから\nでたことの ない ぼくが\pこうして ポケモンと いっしょに\nぼうけんを している なんて……\p{PLAYER}さん…… ありがとう"
	.byte EOS
	.if (. - MatchCall_Text_Wally7) != 0x58
	.error "MatchCall_Text_Wally7 must retain its original byte length"
	.endif
	.globl gText_Rom_26B9CA
	.set gText_Rom_26B9CA, MatchCall_Text_Wally7 + 0x52

	@ data/text/match_call.inc:841 MatchCall_Text_Scott1
	.globl MatchCall_Text_Scott1
MatchCall_Text_Scott1: @ 0x0826B9D0
	.string "エニシダ『どーも どーも {PLAYER}{KUN}\pやまでも うみでも くさむらでも\nどこにだって ポケモンが いるように\lトレーナーさん というのも\lいろんな ところに いるもんだねえ\pおかげで わたしも\nアッチいったり コッチいったり\lいそがしくて しょうがないよ!"
	.byte EOS
	.if (. - MatchCall_Text_Scott1) > 0x80
	.error "MatchCall_Text_Scott1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Scott1) < 0x80
	.space 0x80 - (. - MatchCall_Text_Scott1)
	.endif

	@ data/text/match_call.inc:844 MatchCall_Text_Scott2
	.globl MatchCall_Text_Scott2
MatchCall_Text_Scott2: @ 0x0826BA50
	.string "エニシダ『わたしは いま\n119ばん どうろに きてるんだけど\lたくさんの トレーナーが いるねえ!\pでも このあたりは せのたかい くさが\nいっぱい はえてるから\pはんズボンで あるきまわると\nあしが くすぐったくて こまるよ!"
	.byte EOS
	.if (. - MatchCall_Text_Scott2) > 0x74
	.error "MatchCall_Text_Scott2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Scott2) < 0x74
	.space 0x74 - (. - MatchCall_Text_Scott2)
	.endif

	@ data/text/match_call.inc:847 MatchCall_Text_Scott3
	.globl MatchCall_Text_Scott3
MatchCall_Text_Scott3: @ 0x0826BAC4
	.string "エニシダ『やあやあ {PLAYER}{KUN}!\pきみは おくりびやま って\nのぼったこと ある?\pあそこは ポケモンの たましいが\nまつられている ばしょ だからねえ\pトレーナー ならば いちど ぐらいは\nてっぺんまで のぼって みないとね!"
	.byte EOS
	.if (. - MatchCall_Text_Scott3) > 0x72
	.error "MatchCall_Text_Scott3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Scott3) < 0x72
	.space 0x72 - (. - MatchCall_Text_Scott3)
	.endif

	@ data/text/match_call.inc:850 MatchCall_Text_Scott4
	.globl MatchCall_Text_Scott4
MatchCall_Text_Scott4: @ 0x0826BB36
	.string "エニシダ『んー {PLAYER}{KUN}!\pどうも ちかごろは\nマグマだん とか アクアだん とか\lおかしな れんちゅうが あばれてるね\pかれらの なかには\nすぐれた トレーナーも いるんだろうけど\lでも わるもの じゃあなあ……"
	.byte EOS
	.if (. - MatchCall_Text_Scott4) > 0x6c
	.error "MatchCall_Text_Scott4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Scott4) < 0x6c
	.space 0x6c - (. - MatchCall_Text_Scott4)
	.endif

	@ data/text/match_call.inc:853 MatchCall_Text_Scott5
	.globl MatchCall_Text_Scott5
MatchCall_Text_Scott5: @ 0x0826BBA2
	.string "エニシダ『おおー {PLAYER}{KUN}\pあのね うみのそこにも すごうでの\nトレーナーが いたり するのかな?\pでも たしかめに いこうにも\nわたしは およげないし\lポケモンも もってないし……"
	.byte EOS
	.if (. - MatchCall_Text_Scott5) > 0x5c
	.error "MatchCall_Text_Scott5 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Scott5) < 0x5c
	.space 0x5c - (. - MatchCall_Text_Scott5)
	.endif

	@ data/text/match_call.inc:856 MatchCall_Text_Scott6
	.globl MatchCall_Text_Scott6
MatchCall_Text_Scott6: @ 0x0826BBFE
	.string "エニシダ『やあやあ {PLAYER}{KUN}!\pぜんぶの ジムバッジを あつめたら\nポケモンリーグに ちょうせん できる\lというのは しってるよね?\pきみほどの じつりょくが あるなら\nチャンピオンも ゆめじゃない けど……\lじつは もっと いいところが あるんだよ\pまあ いまは それいじょう\nいわないで おくよ\pポケモンリーグを かちぬいて\nでんどういり してからの おたのしみだね!"
	.byte EOS
	.if (. - MatchCall_Text_Scott6) > 0xbb
	.error "MatchCall_Text_Scott6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Scott6) < 0xbb
	.space 0xbb - (. - MatchCall_Text_Scott6)
	.endif

	@ data/text/match_call.inc:859 MatchCall_Text_Scott7
	.globl MatchCall_Text_Scott7
MatchCall_Text_Scott7: @ 0x0826BCB9
	.string "…… …… ……\n…… …… ……\pエニシダは ポケナビの よびだしが\nとどかない ところに いるようだ……"
	.byte EOS
	.if (. - MatchCall_Text_Scott7) > 0x37
	.error "MatchCall_Text_Scott7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Scott7) < 0x37
	.space 0x37 - (. - MatchCall_Text_Scott7)
	.endif

	@ data/text/match_call.inc:862 MatchCall_Text_Norman1
	.globl MatchCall_Text_Norman1
MatchCall_Text_Norman1: @ 0x0826BCF0
	.string "パパ『カナズミの まちには\nいあいぎりおやじ という\lかわった なまえの ひとが すんでいる!\pちかくまで いったら\nおまえも たずねて みると いいぞ!"
	.byte EOS
	.if (. - MatchCall_Text_Norman1) > 0x4e
	.error "MatchCall_Text_Norman1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Norman1) < 0x4e
	.space 0x4e - (. - MatchCall_Text_Norman1)
	.endif
