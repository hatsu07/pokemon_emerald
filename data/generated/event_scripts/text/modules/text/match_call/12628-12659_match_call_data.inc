	@ data/text/match_call.inc:817 MatchCall_Text_Brendan15
	.globl gText_Rom_26B721
gText_Rom_26B721: @ 0x0826B721
	.string "ユウキ『もう ホウエンちほうで\n{PLAYER}のこと しらない\lトレーナー なんて いないんだ!\pオレが {PLAYER}と\nともだちだ っていうと\lみんな うらやましそうに するよ!"
	.byte EOS
	.if (. - gText_Rom_26B721) > 0x52
	.error "gText_Rom_26B721 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B721) < 0x52
	.space 0x52 - (. - gText_Rom_26B721)
	.endif

	@ data/text/match_call.inc:820 MatchCall_Text_Wally1
	.globl gText_Rom_26B773
gText_Rom_26B773: @ 0x0826B773
	.string "ミツル『あっ {PLAYER}さん!\pさいきんは からだの ぐあいも\nずいぶん よくなって きたし\pぼくも はやく {PLAYER}さん みたいな\nトレーナーに なりたいな!"
	.byte EOS
	.if (. - gText_Rom_26B773) > 0x4c
	.error "gText_Rom_26B773 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B773) < 0x4c
	.space 0x4c - (. - gText_Rom_26B773)
	.endif

	@ data/text/match_call.inc:823 MatchCall_Text_Wally2
	.globl gText_Rom_26B7BF
gText_Rom_26B7BF: @ 0x0826B7BF
	.string "ミツル『{PLAYER}さん こんにちは!\pカナシダトンネルが かいつう したせいで\nミチルおねえちゃんも\lすっごく うれしそう ですよ!"
	.byte EOS
	.if (. - gText_Rom_26B7BF) > 0x40
	.error "gText_Rom_26B7BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B7BF) < 0x40
	.space 0x40 - (. - gText_Rom_26B7BF)
	.endif

	@ data/text/match_call.inc:826 MatchCall_Text_Wally3
	.globl gText_Rom_26B7FF
gText_Rom_26B7FF: @ 0x0826B7FF
	.string "ミツル『あっ {PLAYER}さん!\pぼく…… シダケの おじさんに\nなにも いわずに でてきちゃった けど\lおじさん おこってないかな……\p{PLAYER}さん なら\nぼくの きもち わかって くれますよね?"
	.byte EOS
	.if (. - gText_Rom_26B7FF) > 0x5e
	.error "gText_Rom_26B7FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B7FF) < 0x5e
	.space 0x5e - (. - gText_Rom_26B7FF)
	.endif

	@ data/text/match_call.inc:829 MatchCall_Text_Wally4
	.globl gText_Rom_26B85D
gText_Rom_26B85D: @ 0x0826B85D
	.string "ミツル『{PLAYER}さん?\nぼくです ミツルです!\pトレーナーの せかいって すごいですね!\nポケモンを つれて あるいていると\lみんなが こえを かけて くれるんです!\pまるで ポケモンを つうじて\nみんなが つながっている みたいに!"
	.byte EOS
	.if (. - gText_Rom_26B85D) > 0x74
	.error "gText_Rom_26B85D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B85D) < 0x74
	.space 0x74 - (. - gText_Rom_26B85D)
	.endif

	@ data/text/match_call.inc:832 MatchCall_Text_Wally5
	.globl gText_Rom_26B8D1
gText_Rom_26B8D1: @ 0x0826B8D1
	.string "ミツル『{PLAYER}さん? すごいですよ!\n{PLAYER}さんと いっしょに つかまえた\lラルトスが しんか したんです!\pぼくって さいのう あるのかなあ……\pなーんて ちょうしに のったら\nいけませんよね\pえらいのは ポケモン ですもん!"
	.byte EOS
	.if (. - gText_Rom_26B8D1) > 0x71
	.error "gText_Rom_26B8D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B8D1) < 0x71
	.space 0x71 - (. - gText_Rom_26B8D1)
	.endif

	@ data/text/match_call.inc:835 MatchCall_Text_Wally6
	.globl gText_Rom_26B942
gText_Rom_26B942: @ 0x0826B942
	.string "…… …… ……\n…… …… ……\pミツルは ポケナビの よびだしが\nとどかない ところに いるようだ……"
	.byte EOS
	.if (. - gText_Rom_26B942) > 0x36
	.error "gText_Rom_26B942 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B942) < 0x36
	.space 0x36 - (. - gText_Rom_26B942)
	.endif

	@ data/text/match_call.inc:838 MatchCall_Text_Wally7
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26B978
gText_Rom_26B978: @ 0x0826B978
	.string "ミツル『あっ {PLAYER}さん!\pいままで ほとんど いえから\nでたことの ない ぼくが\pこうして ポケモンと いっしょに\nぼうけんを している なんて……\p{PLAYER}さん…… ありがとう"
	.byte EOS
	.if (. - gText_Rom_26B978) != 0x58
	.error "gText_Rom_26B978 must retain its original byte length"
	.endif
	.globl gText_Rom_26B9CA
	.set gText_Rom_26B9CA, gText_Rom_26B978 + 0x52

	@ data/text/match_call.inc:841 MatchCall_Text_Scott1
	.globl gText_Rom_26B9D0
gText_Rom_26B9D0: @ 0x0826B9D0
	.string "エニシダ『どーも どーも {PLAYER}{KUN}\pやまでも うみでも くさむらでも\nどこにだって ポケモンが いるように\lトレーナーさん というのも\lいろんな ところに いるもんだねえ\pおかげで わたしも\nアッチいったり コッチいったり\lいそがしくて しょうがないよ!"
	.byte EOS
	.if (. - gText_Rom_26B9D0) > 0x80
	.error "gText_Rom_26B9D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B9D0) < 0x80
	.space 0x80 - (. - gText_Rom_26B9D0)
	.endif

	@ data/text/match_call.inc:844 MatchCall_Text_Scott2
	.globl gText_Rom_26BA50
gText_Rom_26BA50: @ 0x0826BA50
	.string "エニシダ『わたしは いま\n119ばん どうろに きてるんだけど\lたくさんの トレーナーが いるねえ!\pでも このあたりは せのたかい くさが\nいっぱい はえてるから\pはんズボンで あるきまわると\nあしが くすぐったくて こまるよ!"
	.byte EOS
	.if (. - gText_Rom_26BA50) > 0x74
	.error "gText_Rom_26BA50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BA50) < 0x74
	.space 0x74 - (. - gText_Rom_26BA50)
	.endif

	@ data/text/match_call.inc:847 MatchCall_Text_Scott3
	.globl gText_Rom_26BAC4
gText_Rom_26BAC4: @ 0x0826BAC4
	.string "エニシダ『やあやあ {PLAYER}{KUN}!\pきみは おくりびやま って\nのぼったこと ある?\pあそこは ポケモンの たましいが\nまつられている ばしょ だからねえ\pトレーナー ならば いちど ぐらいは\nてっぺんまで のぼって みないとね!"
	.byte EOS
	.if (. - gText_Rom_26BAC4) > 0x72
	.error "gText_Rom_26BAC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BAC4) < 0x72
	.space 0x72 - (. - gText_Rom_26BAC4)
	.endif

	@ data/text/match_call.inc:850 MatchCall_Text_Scott4
	.globl gText_Rom_26BB36
gText_Rom_26BB36: @ 0x0826BB36
	.string "エニシダ『んー {PLAYER}{KUN}!\pどうも ちかごろは\nマグマだん とか アクアだん とか\lおかしな れんちゅうが あばれてるね\pかれらの なかには\nすぐれた トレーナーも いるんだろうけど\lでも わるもの じゃあなあ……"
	.byte EOS
	.if (. - gText_Rom_26BB36) > 0x6c
	.error "gText_Rom_26BB36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BB36) < 0x6c
	.space 0x6c - (. - gText_Rom_26BB36)
	.endif

	@ data/text/match_call.inc:853 MatchCall_Text_Scott5
	.globl gText_Rom_26BBA2
gText_Rom_26BBA2: @ 0x0826BBA2
	.string "エニシダ『おおー {PLAYER}{KUN}\pあのね うみのそこにも すごうでの\nトレーナーが いたり するのかな?\pでも たしかめに いこうにも\nわたしは およげないし\lポケモンも もってないし……"
	.byte EOS
	.if (. - gText_Rom_26BBA2) > 0x5c
	.error "gText_Rom_26BBA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BBA2) < 0x5c
	.space 0x5c - (. - gText_Rom_26BBA2)
	.endif

	@ data/text/match_call.inc:856 MatchCall_Text_Scott6
	.globl gText_Rom_26BBFE
gText_Rom_26BBFE: @ 0x0826BBFE
	.string "エニシダ『やあやあ {PLAYER}{KUN}!\pぜんぶの ジムバッジを あつめたら\nポケモンリーグに ちょうせん できる\lというのは しってるよね?\pきみほどの じつりょくが あるなら\nチャンピオンも ゆめじゃない けど……\lじつは もっと いいところが あるんだよ\pまあ いまは それいじょう\nいわないで おくよ\pポケモンリーグを かちぬいて\nでんどういり してからの おたのしみだね!"
	.byte EOS
	.if (. - gText_Rom_26BBFE) > 0xbb
	.error "gText_Rom_26BBFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BBFE) < 0xbb
	.space 0xbb - (. - gText_Rom_26BBFE)
	.endif

	@ data/text/match_call.inc:859 MatchCall_Text_Scott7
	.globl gText_Rom_26BCB9
gText_Rom_26BCB9: @ 0x0826BCB9
	.string "…… …… ……\n…… …… ……\pエニシダは ポケナビの よびだしが\nとどかない ところに いるようだ……"
	.byte EOS
	.if (. - gText_Rom_26BCB9) > 0x37
	.error "gText_Rom_26BCB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BCB9) < 0x37
	.space 0x37 - (. - gText_Rom_26BCB9)
	.endif

	@ data/text/match_call.inc:862 MatchCall_Text_Norman1
	.globl gText_Rom_26BCF0
gText_Rom_26BCF0: @ 0x0826BCF0
	.string "パパ『カナズミの まちには\nいあいぎりおやじ という\lかわった なまえの ひとが すんでいる!\pちかくまで いったら\nおまえも たずねて みると いいぞ!"
	.byte EOS
	.if (. - gText_Rom_26BCF0) > 0x4e
	.error "gText_Rom_26BCF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BCF0) < 0x4e
	.space 0x4e - (. - gText_Rom_26BCF0)
	.endif
