
	@ data/text/match_call.inc:223 MatchCall_PersonalizedText4
	.globl MatchCall_PersonalizedText4
MatchCall_PersonalizedText4: @ 0x0826693D
	.string "はいはい! いせきを さがして 30ねん\nわたし {STR_VAR_1}で ございます\pきみは せっきょくてきに あちこちを\nまわって いるよう だけど\lなにか いせきを みつけたかい?\lみつけたら おしえて くれよ!\pでは わたしは\nいせきを さがすので これで{EOS}"
	.if (. - MatchCall_PersonalizedText4) > 0x7c
	.error "MatchCall_PersonalizedText4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText4) < 0x7c
	.space 0x7c - (. - MatchCall_PersonalizedText4)
	.endif

	@ data/text/match_call.inc:226 MatchCall_PersonalizedText5
	.globl MatchCall_PersonalizedText5
MatchCall_PersonalizedText5: @ 0x082669B9
	.string "{STR_VAR_1} でーす\nきょうはね すなはま から\lうみを ながめて いるんだ!\pはー…… キラキラ なみが ひかって\nここから みる うみが いちばん きれい!\lあー おなかすいた じゃあまたね!{EOS}"
	.if (. - MatchCall_PersonalizedText5) > 0x5f
	.error "MatchCall_PersonalizedText5 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText5) < 0x5f
	.space 0x5f - (. - MatchCall_PersonalizedText5)
	.endif

	@ data/text/match_call.inc:229 MatchCall_PersonalizedText6
	.globl MatchCall_PersonalizedText6
MatchCall_PersonalizedText6: @ 0x08266A18
	.string "もぐもぐ……\nあ {STR_VAR_1}です\lすなはまで たべる おにぎりは うまいなー\pうーん ぼくも ポケモンも\nげんきに なったぞ!\lじゃ およいで くるね!{EOS}"
	.if (. - MatchCall_PersonalizedText6) > 0x4a
	.error "MatchCall_PersonalizedText6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText6) < 0x4a
	.space 0x4a - (. - MatchCall_PersonalizedText6)
	.endif

	@ data/text/match_call.inc:232 MatchCall_PersonalizedText7
	.globl MatchCall_PersonalizedText7
MatchCall_PersonalizedText7: @ 0x08266A62
	.string "やあ {STR_VAR_1} だけど……\pエリートトレーナー の せいかつに\nちょっと つかれちゃってね……\pみんな ぼくのことを\nかんぺきな トレーナーだと おもうから\lぼくも それらしく しないと いけない\pでも それも エリートトレーナーの\nしゅくめいだと おもって\lがんばる ことに するよ!\pこんな ことが いえるのは キミだけだ\nでも こんど あった ときは\lよわねは はかないから あんしんして!\lじゃ!{EOS}"
	.if (. - MatchCall_PersonalizedText7) > 0xc9
	.error "MatchCall_PersonalizedText7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText7) < 0xc9
	.space 0xc9 - (. - MatchCall_PersonalizedText7)
	.endif

	@ data/text/match_call.inc:235 MatchCall_PersonalizedText8
	.globl MatchCall_PersonalizedText8
MatchCall_PersonalizedText8: @ 0x08266B2B
	.string "ヤッホー {STR_VAR_1}よ\nこんにちは!\pいま あなたを めざして\nポケモンを そだてて いるの!\lこんど たたかう ときは\lぜったい まけない つもり! ふふっ\pトレーナー なかまが いるって いいよね\nまた あいましょう!{EOS}"
	.if (. - MatchCall_PersonalizedText8) > 0x6d
	.error "MatchCall_PersonalizedText8 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText8) < 0x6d
	.space 0x6d - (. - MatchCall_PersonalizedText8)
	.endif

	@ data/text/match_call.inc:238 MatchCall_PersonalizedText9
	.globl MatchCall_PersonalizedText9
MatchCall_PersonalizedText9: @ 0x08266B98
	.string "{STR_VAR_1} ですけど……\nいま あなたの うしろ……\lなにかが いない……?\pここ おくりびやまで ねむっている\nポケモンたちの ちからが\lわたしに おしえて くれるの……\lふりかえらないで そのまま\lまっすぐ あるいたほうが いいわよ……\pフフ……\nそれじゃあ さよなら……{EOS}"
	.if (. - MatchCall_PersonalizedText9) > 0x88
	.error "MatchCall_PersonalizedText9 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText9) < 0x88
	.space 0x88 - (. - MatchCall_PersonalizedText9)
	.endif

	@ data/text/match_call.inc:241 MatchCall_PersonalizedText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_PersonalizedText10
MatchCall_PersonalizedText10: @ 0x08266C20
	.string "わたくし {STR_VAR_1}ですわ\nごきげんよう\pはなれていても こうして\nおはなし できるなんて べんりね\pいままでは あいたい ひとが いたら\nパパに おくってもらって いたもの……\pそれではまた……\nおはなし できて うれしかった ですわ{EOS}"
	.if (. - MatchCall_PersonalizedText10) != 0x74
	.error "MatchCall_PersonalizedText10 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:244 MatchCall_PersonalizedText11
	.globl MatchCall_PersonalizedText11
MatchCall_PersonalizedText11: @ 0x08266C94
	.string "{STR_VAR_1}よ\nちょっと はなし ききなさいよ!\pわたし サファリゾーンが すきなんだけど\nあそこに いくと かならず まようのよ!\lくさ ばっかり はえてて\lちょっと ひろすぎるのよねー! ぷんぷん!\pあー おこったら きが すんだわ\nちょっと サファリゾーンでも いこっと!\lまたね!{EOS}"
	.if (. - MatchCall_PersonalizedText11) > 0x8d
	.error "MatchCall_PersonalizedText11 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText11) < 0x8d
	.space 0x8d - (. - MatchCall_PersonalizedText11)
	.endif

	@ data/text/match_call.inc:247 MatchCall_PersonalizedText12
	.globl MatchCall_PersonalizedText12
MatchCall_PersonalizedText12: @ 0x08266D21
	.string "やあ\nおかねもちの {STR_VAR_1} だけど\pボク あれから ますます\nおかねもちに なっちゃったし\lポケモンも ますます つよく なったよ\pこの せかいって\nボクの ために あるんじゃない かな?\pああ へんじは しなくて いいよ\nわかっている ことだからね!\lおっと そろそろ ディナーのじかんだ\lしつれい するよ!{EOS}"
	.if (. - MatchCall_PersonalizedText12) > 0x9b
	.error "MatchCall_PersonalizedText12 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText12) < 0x9b
	.space 0x9b - (. - MatchCall_PersonalizedText12)
	.endif

	@ data/text/match_call.inc:250 MatchCall_PersonalizedText13
	.globl MatchCall_PersonalizedText13
MatchCall_PersonalizedText13: @ 0x08266DBC
	.string "うふふふふふふ……\nボ ボク {STR_VAR_1}です\pいま めのまえで\n{STR_VAR_2} どうしが たたかってるんだ\lかった ほうを つかまえよう かな?\lうふふふふ……\pじ じゃ いそがしいから\nボクは これで{EOS}"
	.if (. - MatchCall_PersonalizedText13) > 0x5e
	.error "MatchCall_PersonalizedText13 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText13) < 0x5e
	.space 0x5e - (. - MatchCall_PersonalizedText13)
	.endif

	@ data/text/match_call.inc:253 MatchCall_PersonalizedText14
	.globl MatchCall_PersonalizedText14
MatchCall_PersonalizedText14: @ 0x08266E1A
	.string "あ {STR_VAR_1}です!\nそろそろ すてられぶね にも\lあきて きちゃった のよね\pでも せっかく だから\nいちどは キミに かって みたいし\lとうぶんは ここで さんぽ してるわ\lきが むいたら あいに きてよね!\pよし きょうは ついに\nとなりの へやの おじさんに\lしょうぶを いどんで みようかな?\pではね!{EOS}"
	.if (. - MatchCall_PersonalizedText14) > 0x9a
	.error "MatchCall_PersonalizedText14 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText14) < 0x9a
	.space 0x9a - (. - MatchCall_PersonalizedText14)
	.endif

	@ data/text/match_call.inc:256 MatchCall_PersonalizedText15
	.globl MatchCall_PersonalizedText15
MatchCall_PersonalizedText15: @ 0x08266EB4
	.string "うみの おとこ\n{STR_VAR_1}だぜ!\pやっぱさ!\nでっかい うみに いる トレーナーは\lつよいやつ ばっかりだぜ!\pおまえも オレらを みならって\nうみで しゅぎょうすりゃ いいのによ……\l……と おおなみが きそうだ!\pしゅぎょうの チャンスだぜ!\nわるいけど またなっ!{EOS}"
	.if (. - MatchCall_PersonalizedText15) > 0x85
	.error "MatchCall_PersonalizedText15 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText15) < 0x85
	.space 0x85 - (. - MatchCall_PersonalizedText15)
	.endif

	@ data/text/match_call.inc:259 MatchCall_PersonalizedText16
	.globl MatchCall_PersonalizedText16
MatchCall_PersonalizedText16: @ 0x08266F39
	.string "{STR_VAR_1}だ!\nポケモンに カラテを おしえてたら\lほんとに おれより つよくなっちまって\lおれ まけまくりだ!\pだが おれは ポケモンに まけても\nトレーナー には まけん!\lいつか また おれと しょうぶだ!\lうがー!{EOS}"
	.if (. - MatchCall_PersonalizedText16) > 0x6d
	.error "MatchCall_PersonalizedText16 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText16) < 0x6d
	.space 0x6d - (. - MatchCall_PersonalizedText16)
	.endif

	@ data/text/match_call.inc:262 MatchCall_PersonalizedText17
	.globl MatchCall_PersonalizedText17
MatchCall_PersonalizedText17: @ 0x08266FA6
	.string "{STR_VAR_1}だけど\nそっちの たびは どんなカンジ?\p……へえー なるほど なるほど\nたのしそうじゃん!\lきみの エピソードで\l1きょく つくれそうだな!\p……おッ うかんできた\nいい フレーズ うかんできたよ!\pじゃ オレ いまから\nきょくづくりに はいるから またな!{EOS}"
	.if (. - MatchCall_PersonalizedText17) > 0x85
	.error "MatchCall_PersonalizedText17 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText17) < 0x85
	.space 0x85 - (. - MatchCall_PersonalizedText17)
	.endif

	@ data/text/match_call.inc:265 MatchCall_PersonalizedText18
	.globl MatchCall_PersonalizedText18
MatchCall_PersonalizedText18: @ 0x0826702B
	.string "{STR_VAR_1}だけど……\nボクの しんきょく きいてくれ\pルル {STR_VAR_2} {STR_VAR_2}\nどうして おまえは {STR_VAR_2}なんだ\lどうして ボクは {STR_VAR_2}では ないんだ\lあー ルルル {STR_VAR_2}と{STR_VAR_1}\l{STR_VAR_1}と{STR_VAR_2} ルル……\pフェードアウト……{EOS}"
	.if (. - MatchCall_PersonalizedText18) > 0x66
	.error "MatchCall_PersonalizedText18 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText18) < 0x66
	.space 0x66 - (. - MatchCall_PersonalizedText18)
	.endif

