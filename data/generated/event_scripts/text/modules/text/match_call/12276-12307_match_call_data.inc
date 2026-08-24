
	@ data/text/match_call.inc:316 MatchCall_PersonalizedText35
	.globl MatchCall_PersonalizedText35
MatchCall_PersonalizedText35: @ 0x08267A29
	.string "{STR_VAR_1}よ!\nいま じてんしゃに のっているわ!\pわたし すいえいも はしるのも すきだけど\nじてんしゃが いちばん すきなの!\lだって からだに かぜを\lたくさん かんじる ことが できるでしょ?\lそらをとぶ みたいで きもちいいのよ!\pよーし きょうこそ サイクリングロードで\nしんきろくを だすわっ!\lあなたも ちょうせん しに きなさいよ!\lじゃあねーっ{EOS}"
	.if (. - MatchCall_PersonalizedText35) > 0xb4
	.error "MatchCall_PersonalizedText35 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText35) < 0xb4
	.space 0xb4 - (. - MatchCall_PersonalizedText35)
	.endif

	@ data/text/match_call.inc:319 MatchCall_PersonalizedText36
	.globl MatchCall_PersonalizedText36
MatchCall_PersonalizedText36: @ 0x08267ADD
	.string "よお! トライアスロンの まっさいちゅうの\n{STR_VAR_1}だけど\lさくっと せけんばなし でも どうだい!\pポケモンと いっしょに あせを ながすと\nすごく きもちいいぜ!\lことばに ださなくったって\lふたりの こころが つうじあうんだ\lあれは ちょっと かんどう するなあ!\pはあはあ… はしりながら はなしてたら\nたいりょくが なくなった!\lはあはあ わるいけど こんどな!{EOS}"
	.if (. - MatchCall_PersonalizedText36) > 0xb9
	.error "MatchCall_PersonalizedText36 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText36) < 0xb9
	.space 0xb9 - (. - MatchCall_PersonalizedText36)
	.endif

	@ data/text/match_call.inc:322 MatchCall_PersonalizedText37
	.globl MatchCall_PersonalizedText37
MatchCall_PersonalizedText37: @ 0x08267B96
	.string "こんにちは {STR_VAR_1}よ\nじきゅうりょく を つけるには\lやっぱり たかい ところが いいわね!\pやまの てっぺん とかで\nはしり まわると\lすぐに いきが きれるのよ!\pああ わたしも いきが きれそう\nじゃあ またね!{EOS}"
	.if (. - MatchCall_PersonalizedText37) > 0x6d
	.error "MatchCall_PersonalizedText37 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText37) < 0x6d
	.space 0x6d - (. - MatchCall_PersonalizedText37)
	.endif

	@ data/text/match_call.inc:325 MatchCall_PersonalizedText38
	.globl MatchCall_PersonalizedText38
MatchCall_PersonalizedText38: @ 0x08267C03
	.string "ああ {STR_VAR_1} です\nあれから だいぶ およいだけど\lサイユウシティには まだ つかないのかなあ\pもしかして おなじ ところを\nぐるぐる まわってるだけ だったりして\pいや まさか そんなこと ないよな\nわはははは\lじゃあ また!{EOS}"
	.if (. - MatchCall_PersonalizedText38) > 0x72
	.error "MatchCall_PersonalizedText38 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText38) < 0x72
	.space 0x72 - (. - MatchCall_PersonalizedText38)
	.endif

	@ data/text/match_call.inc:328 MatchCall_PersonalizedText39
	.globl MatchCall_PersonalizedText39
MatchCall_PersonalizedText39: @ 0x08267C75
	.string "ああ {STR_VAR_1} ですけ……\pボチャン\pブクブクブク………\pザバー\pブンブン\p……ごッ ごめん!\nいま オイルを ぬった てで\lポケナビを もってたら\lうみに おとして しまったんだ!\pうみに おとしても こわれないなんて\nデボンの ポケナビって すげーな!\lじゃ にっこうよくの つづきを するんで\lまたこんど はなそうぜ!{EOS}"
	.if (. - MatchCall_PersonalizedText39) > 0xa1
	.error "MatchCall_PersonalizedText39 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText39) < 0xa1
	.space 0xa1 - (. - MatchCall_PersonalizedText39)
	.endif

	@ data/text/match_call.inc:331 MatchCall_PersonalizedText40
	.globl MatchCall_PersonalizedText40
MatchCall_PersonalizedText40: @ 0x08267D16
	.string "トライアスロンの なかでも\nすいえいが だいすきな {STR_VAR_1} です\pでも あんまり ながいこと\nうみに いると\lからだが ふやけちゃわないかなあ\pやっぱり トライアスロンは\nかこくな レースよね!\lじゃ またね!{EOS}"
	.if (. - MatchCall_PersonalizedText40) > 0x69
	.error "MatchCall_PersonalizedText40 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText40) < 0x69
	.space 0x69 - (. - MatchCall_PersonalizedText40)
	.endif

	@ data/text/match_call.inc:334 MatchCall_PersonalizedText41
	.globl MatchCall_PersonalizedText41
MatchCall_PersonalizedText41: @ 0x08267D7F
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1}だ\pきみの ポケモンの\nちょうしは どうだい?\pぼくの ドラゴンポケモンたちも\nちょうし よさそうだよ\lじゃあ また{EOS}"
	.if (. - MatchCall_PersonalizedText41) > 0x45
	.error "MatchCall_PersonalizedText41 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText41) < 0x45
	.space 0x45 - (. - MatchCall_PersonalizedText41)
	.endif

	@ data/text/match_call.inc:337 MatchCall_PersonalizedText42
	.globl MatchCall_PersonalizedText42
MatchCall_PersonalizedText42: @ 0x08267DC4
	.string "{STR_VAR_1}だ\nおれの {STR_VAR_2}\lあれから いちだんと つよくなったぜ!\pつぎ キミと しょうぶ するときは\nまけない からな!\pじゃあ またな!{EOS}"
	.if (. - MatchCall_PersonalizedText42) > 0x44
	.error "MatchCall_PersonalizedText42 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText42) < 0x44
	.space 0x44 - (. - MatchCall_PersonalizedText42)
	.endif

	@ data/text/match_call.inc:340 MatchCall_PersonalizedText43
	.globl MatchCall_PersonalizedText43
MatchCall_PersonalizedText43: @ 0x08267E08
	.string "{STR_VAR_1}で ござる\nかくれかたの けんきゅうを\lつづけて いるんだけど\pうまく かくれすぎると\nだれにも みつけて もらえないで ござる\lそれは ちょっと さびしいで ござるなあ\pそれでは これにて どろん!{EOS}"
	.if (. - MatchCall_PersonalizedText43) > 0x67
	.error "MatchCall_PersonalizedText43 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText43) < 0x67
	.space 0x67 - (. - MatchCall_PersonalizedText43)
	.endif

	@ data/text/match_call.inc:343 MatchCall_PersonalizedText44
	.globl MatchCall_PersonalizedText44
MatchCall_PersonalizedText44: @ 0x08267E6F
	.string "{STR_VAR_1}よ\nあれから しゅぎょうを かさねて\pわたしの {STR_VAR_2}も\nけっこう つよく なってきたわよ\pやっぱり すなはまでの しゅぎょうは\nこうかてき だわ!\lじゃあ また!{EOS}"
	.if (. - MatchCall_PersonalizedText44) > 0x54
	.error "MatchCall_PersonalizedText44 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText44) < 0x54
	.space 0x54 - (. - MatchCall_PersonalizedText44)
	.endif

	@ data/text/match_call.inc:346 MatchCall_PersonalizedText45
	.globl MatchCall_PersonalizedText45
MatchCall_PersonalizedText45: @ 0x08267EC3
	.string "こんにちは {STR_VAR_1}です\nかざんばい いつになったら\lおさまるの かしら\pあんまり つもっちゃうと\nパラソルの がらが\lみえなく なっちゃうのに……\pそれでは また\nおあい しましょう{EOS}"
	.if (. - MatchCall_PersonalizedText45) > 0x5b
	.error "MatchCall_PersonalizedText45 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText45) < 0x5b
	.space 0x5b - (. - MatchCall_PersonalizedText45)
	.endif

	@ data/text/match_call.inc:349 MatchCall_PersonalizedText46
	.globl MatchCall_PersonalizedText46
MatchCall_PersonalizedText46: @ 0x08267F1E
	.string "{STR_VAR_1} でーす\pねえねえ!\nうみって プールと くらべて\lうかびやすいって しってた?\pこうやって からだを よこに すれば\lかってに うくのよ\pでも あんまり ながく うかんでると\nおきに ながされるから\lきを つけないと だめよ\p……あれ? ここ どこかしら……\nじゃ じゃあ またね!{EOS}"
	.if (. - MatchCall_PersonalizedText46) > 0x91
	.error "MatchCall_PersonalizedText46 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText46) < 0x91
	.space 0x91 - (. - MatchCall_PersonalizedText46)
	.endif

	@ data/text/match_call.inc:352 MatchCall_PersonalizedText47
	.globl MatchCall_PersonalizedText47
MatchCall_PersonalizedText47: @ 0x08267FAF
	.string "あ {PLAYER}{KUN} こんにちは!\n{STR_VAR_1} です\pここって じめんが でこぼこ してるから\nテント はれないのよね……\lせっかく やまに きたのに……\pあ! いいこと おもいついた!\nポケモンで ここを たいらに\lできないかしら?\pよーし がんばっちゃおう!\nじゃあ またね!{EOS}"
	.if (. - MatchCall_PersonalizedText47) > 0x86
	.error "MatchCall_PersonalizedText47 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText47) < 0x86
	.space 0x86 - (. - MatchCall_PersonalizedText47)
	.endif

	@ data/text/match_call.inc:355 MatchCall_PersonalizedText48
	.globl MatchCall_PersonalizedText48
MatchCall_PersonalizedText48: @ 0x08268035
	.string "あ こんにちは\n{STR_VAR_1} でーす\pルミと いっしょに がんばって\nポケモン そだててるの!\pもっと がんばったら\nいちばんに なれるかなあ?\lじゃあ またねー!{EOS}"
	.if (. - MatchCall_PersonalizedText48) > 0x4f
	.error "MatchCall_PersonalizedText48 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText48) < 0x4f
	.space 0x4f - (. - MatchCall_PersonalizedText48)
	.endif

	@ data/text/match_call.inc:358 MatchCall_PersonalizedText49
	.globl MatchCall_PersonalizedText49
MatchCall_PersonalizedText49: @ 0x08268084
	.string "{STR_VAR_1}だ!\pオレさまは ふなのり だが\nいまは ふねに のっていない\pふねに のっていない ふなのりは\nなんと よべば いいだろうか!\pうみを みながら\nそんな ことを かんがえて いるのだ!\lじゃあ またな!!{EOS}"
	.if (. - MatchCall_PersonalizedText49) > 0x6a
	.error "MatchCall_PersonalizedText49 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText49) < 0x6a
	.space 0x6a - (. - MatchCall_PersonalizedText49)
	.endif

	@ data/text/match_call.inc:361 MatchCall_PersonalizedText50
	.globl MatchCall_PersonalizedText50
MatchCall_PersonalizedText50: @ 0x082680EE
	.string "{STR_VAR_1} だよ\nどう? ポケモン ふえた?\pあたらしい ポケモン つかまえたら\nまた みせに きてくれよ\pちょうだいって いわないからさ\nまってるよ じゃあね{EOS}"
	.if (. - MatchCall_PersonalizedText50) > 0x4e
	.error "MatchCall_PersonalizedText50 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText50) < 0x4e
	.space 0x4e - (. - MatchCall_PersonalizedText50)
	.endif
