
	@ data/text/match_call.inc:223 MatchCall_PersonalizedText4
	.globl gText_Rom_26693D
gText_Rom_26693D: @ 0x0826693D
	.string "はいはい! いせきを さがして 30ねん\nわたし {STR_VAR_1}で ございます\pきみは せっきょくてきに あちこちを\nまわって いるよう だけど\lなにか いせきを みつけたかい?\lみつけたら おしえて くれよ!\pでは わたしは\nいせきを さがすので これで$"
	.if (. - gText_Rom_26693D) > 0x7c
	.error "gText_Rom_26693D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26693D) < 0x7c
	.space 0x7c - (. - gText_Rom_26693D)
	.endif

	@ data/text/match_call.inc:226 MatchCall_PersonalizedText5
	.globl gText_Rom_2669B9
gText_Rom_2669B9: @ 0x082669B9
	.string "{STR_VAR_1} でーす\nきょうはね すなはま から\lうみを ながめて いるんだ!\pはー…… キラキラ なみが ひかって\nここから みる うみが いちばん きれい!\lあー おなかすいた じゃあまたね!$"
	.if (. - gText_Rom_2669B9) > 0x5f
	.error "gText_Rom_2669B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2669B9) < 0x5f
	.space 0x5f - (. - gText_Rom_2669B9)
	.endif

	@ data/text/match_call.inc:229 MatchCall_PersonalizedText6
	.globl gText_Rom_266A18
gText_Rom_266A18: @ 0x08266A18
	.string "もぐもぐ……\nあ {STR_VAR_1}です\lすなはまで たべる おにぎりは うまいなー\pうーん ぼくも ポケモンも\nげんきに なったぞ!\lじゃ およいで くるね!$"
	.if (. - gText_Rom_266A18) > 0x4a
	.error "gText_Rom_266A18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266A18) < 0x4a
	.space 0x4a - (. - gText_Rom_266A18)
	.endif

	@ data/text/match_call.inc:232 MatchCall_PersonalizedText7
	.globl gText_Rom_266A62
gText_Rom_266A62: @ 0x08266A62
	.string "やあ {STR_VAR_1} だけど……\pエリートトレーナー の せいかつに\nちょっと つかれちゃってね……\pみんな ぼくのことを\nかんぺきな トレーナーだと おもうから\lぼくも それらしく しないと いけない\pでも それも エリートトレーナーの\nしゅくめいだと おもって\lがんばる ことに するよ!\pこんな ことが いえるのは キミだけだ\nでも こんど あった ときは\lよわねは はかないから あんしんして!\lじゃ!$"
	.if (. - gText_Rom_266A62) > 0xc9
	.error "gText_Rom_266A62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266A62) < 0xc9
	.space 0xc9 - (. - gText_Rom_266A62)
	.endif

	@ data/text/match_call.inc:235 MatchCall_PersonalizedText8
	.globl gText_Rom_266B2B
gText_Rom_266B2B: @ 0x08266B2B
	.string "ヤッホー {STR_VAR_1}よ\nこんにちは!\pいま あなたを めざして\nポケモンを そだてて いるの!\lこんど たたかう ときは\lぜったい まけない つもり! ふふっ\pトレーナー なかまが いるって いいよね\nまた あいましょう!$"
	.if (. - gText_Rom_266B2B) > 0x6d
	.error "gText_Rom_266B2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266B2B) < 0x6d
	.space 0x6d - (. - gText_Rom_266B2B)
	.endif

	@ data/text/match_call.inc:238 MatchCall_PersonalizedText9
	.globl gText_Rom_266B98
gText_Rom_266B98: @ 0x08266B98
	.string "{STR_VAR_1} ですけど……\nいま あなたの うしろ……\lなにかが いない……?\pここ おくりびやまで ねむっている\nポケモンたちの ちからが\lわたしに おしえて くれるの……\lふりかえらないで そのまま\lまっすぐ あるいたほうが いいわよ……\pフフ……\nそれじゃあ さよなら……$"
	.if (. - gText_Rom_266B98) > 0x88
	.error "gText_Rom_266B98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266B98) < 0x88
	.space 0x88 - (. - gText_Rom_266B98)
	.endif

	@ data/text/match_call.inc:241 MatchCall_PersonalizedText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_266C20
gText_Rom_266C20: @ 0x08266C20
	.string "わたくし {STR_VAR_1}ですわ\nごきげんよう\pはなれていても こうして\nおはなし できるなんて べんりね\pいままでは あいたい ひとが いたら\nパパに おくってもらって いたもの……\pそれではまた……\nおはなし できて うれしかった ですわ$"
	.if (. - gText_Rom_266C20) != 0x74
	.error "gText_Rom_266C20 must retain its original byte length"
	.endif
	.globl gText_Rom_266C90
	.set gText_Rom_266C90, gText_Rom_266C20 + 0x70

	@ data/text/match_call.inc:244 MatchCall_PersonalizedText11
	.globl gText_Rom_266C94
gText_Rom_266C94: @ 0x08266C94
	.string "{STR_VAR_1}よ\nちょっと はなし ききなさいよ!\pわたし サファリゾーンが すきなんだけど\nあそこに いくと かならず まようのよ!\lくさ ばっかり はえてて\lちょっと ひろすぎるのよねー! ぷんぷん!\pあー おこったら きが すんだわ\nちょっと サファリゾーンでも いこっと!\lまたね!$"
	.if (. - gText_Rom_266C94) > 0x8d
	.error "gText_Rom_266C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266C94) < 0x8d
	.space 0x8d - (. - gText_Rom_266C94)
	.endif

	@ data/text/match_call.inc:247 MatchCall_PersonalizedText12
	.globl gText_Rom_266D21
gText_Rom_266D21: @ 0x08266D21
	.string "やあ\nおかねもちの {STR_VAR_1} だけど\pボク あれから ますます\nおかねもちに なっちゃったし\lポケモンも ますます つよく なったよ\pこの せかいって\nボクの ために あるんじゃない かな?\pああ へんじは しなくて いいよ\nわかっている ことだからね!\lおっと そろそろ ディナーのじかんだ\lしつれい するよ!$"
	.if (. - gText_Rom_266D21) > 0x9b
	.error "gText_Rom_266D21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266D21) < 0x9b
	.space 0x9b - (. - gText_Rom_266D21)
	.endif

	@ data/text/match_call.inc:250 MatchCall_PersonalizedText13
	.globl gText_Rom_266DBC
gText_Rom_266DBC: @ 0x08266DBC
	.string "うふふふふふふ……\nボ ボク {STR_VAR_1}です\pいま めのまえで\n{STR_VAR_2} どうしが たたかってるんだ\lかった ほうを つかまえよう かな?\lうふふふふ……\pじ じゃ いそがしいから\nボクは これで$"
	.if (. - gText_Rom_266DBC) > 0x5e
	.error "gText_Rom_266DBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266DBC) < 0x5e
	.space 0x5e - (. - gText_Rom_266DBC)
	.endif

	@ data/text/match_call.inc:253 MatchCall_PersonalizedText14
	.globl gText_Rom_266E1A
gText_Rom_266E1A: @ 0x08266E1A
	.string "あ {STR_VAR_1}です!\nそろそろ すてられぶね にも\lあきて きちゃった のよね\pでも せっかく だから\nいちどは キミに かって みたいし\lとうぶんは ここで さんぽ してるわ\lきが むいたら あいに きてよね!\pよし きょうは ついに\nとなりの へやの おじさんに\lしょうぶを いどんで みようかな?\pではね!$"
	.if (. - gText_Rom_266E1A) > 0x9a
	.error "gText_Rom_266E1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266E1A) < 0x9a
	.space 0x9a - (. - gText_Rom_266E1A)
	.endif

	@ data/text/match_call.inc:256 MatchCall_PersonalizedText15
	.globl gText_Rom_266EB4
gText_Rom_266EB4: @ 0x08266EB4
	.string "うみの おとこ\n{STR_VAR_1}だぜ!\pやっぱさ!\nでっかい うみに いる トレーナーは\lつよいやつ ばっかりだぜ!\pおまえも オレらを みならって\nうみで しゅぎょうすりゃ いいのによ……\l……と おおなみが きそうだ!\pしゅぎょうの チャンスだぜ!\nわるいけど またなっ!$"
	.if (. - gText_Rom_266EB4) > 0x85
	.error "gText_Rom_266EB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266EB4) < 0x85
	.space 0x85 - (. - gText_Rom_266EB4)
	.endif

	@ data/text/match_call.inc:259 MatchCall_PersonalizedText16
	.globl gText_Rom_266F39
gText_Rom_266F39: @ 0x08266F39
	.string "{STR_VAR_1}だ!\nポケモンに カラテを おしえてたら\lほんとに おれより つよくなっちまって\lおれ まけまくりだ!\pだが おれは ポケモンに まけても\nトレーナー には まけん!\lいつか また おれと しょうぶだ!\lうがー!$"
	.if (. - gText_Rom_266F39) > 0x6d
	.error "gText_Rom_266F39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266F39) < 0x6d
	.space 0x6d - (. - gText_Rom_266F39)
	.endif

	@ data/text/match_call.inc:262 MatchCall_PersonalizedText17
	.globl gText_Rom_266FA6
gText_Rom_266FA6: @ 0x08266FA6
	.string "{STR_VAR_1}だけど\nそっちの たびは どんなカンジ?\p……へえー なるほど なるほど\nたのしそうじゃん!\lきみの エピソードで\l1きょく つくれそうだな!\p……おッ うかんできた\nいい フレーズ うかんできたよ!\pじゃ オレ いまから\nきょくづくりに はいるから またな!$"
	.if (. - gText_Rom_266FA6) > 0x85
	.error "gText_Rom_266FA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266FA6) < 0x85
	.space 0x85 - (. - gText_Rom_266FA6)
	.endif

	@ data/text/match_call.inc:265 MatchCall_PersonalizedText18
	.globl gText_Rom_26702B
gText_Rom_26702B: @ 0x0826702B
	.string "{STR_VAR_1}だけど……\nボクの しんきょく きいてくれ\pルル {STR_VAR_2} {STR_VAR_2}\nどうして おまえは {STR_VAR_2}なんだ\lどうして ボクは {STR_VAR_2}では ないんだ\lあー ルルル {STR_VAR_2}と{STR_VAR_1}\l{STR_VAR_1}と{STR_VAR_2} ルル……\pフェードアウト……$"
	.if (. - gText_Rom_26702B) > 0x66
	.error "gText_Rom_26702B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26702B) < 0x66
	.space 0x66 - (. - gText_Rom_26702B)
	.endif

