	@ field-script:0x223548 FieldScriptText_223739
	.globl gText_Rom_223739
gText_Rom_223739: @ 0x08223739
	.string "こちらに　いる　トレーナーの　なかから\nパートナーを　おさがしください！{EOS}"
	.if (. - gText_Rom_223739) > 0x25
	.error "gText_Rom_223739 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223739) < 0x25
	.space 0x25 - (. - gText_Rom_223739)
	.endif
	@ field-script:0x223560 FieldScriptText_22375E
	.globl gText_Rom_22375E
gText_Rom_22375E: @ 0x0822375E
	.string "{0xFD}{0x01}さんは\nまだ　パートナーを　みつけていません！\pパートナーを　さがすのを　やめて\nうけつけへ　もどりますか？{EOS}"
	.if (. - gText_Rom_22375E) > 0x39
	.error "gText_Rom_22375E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22375E) < 0x39
	.space 0x39 - (. - gText_Rom_22375E)
	.endif
	@ field-script:0x223578 FieldScriptText_223797
	.globl gText_Rom_223797
gText_Rom_223797: @ 0x08223797
	.string "それでは\nこちらに　いる　トレーナーの　なかから\lパートナーを　おさがしください！{EOS}"
	.if (. - gText_Rom_223797) > 0x2a
	.error "gText_Rom_223797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223797) < 0x2a
	.space 0x2a - (. - gText_Rom_223797)
	.endif
	@ field-script:0x22359A FieldScriptText_2237C1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2237C1
gText_Rom_2237C1: @ 0x082237C1
	.string "パートナーさがし\nおつかれさまでした！\pそれでは　マルチ　バトルルームへ\nおつれいたします{EOS}"
	.if (. - gText_Rom_2237C1) != 0x2e
	.error "gText_Rom_2237C1 must retain its original byte length"
	.endif
	@ ANALYSIS: SOURCE_RANGE offset=0x2237EF, size=0xF1B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082237EF: @ 0x082237EF
	.string "ぼくは\n{STR_VAR_1}さんの　{STR_VAR_2}ばん　でし\lそのなも　{STR_VAR_3}!{EOS}"
EventText_JP_0822380A: @ 0x0822380A
	.string "{STR_VAR_1}から　アドバイスを　うけて\n{STR_VAR_2}を　もつ　{STR_VAR_3}と……{EOS}"
EventText_JP_08223827: @ 0x08223827
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれているんです\pおねがいです!\nぼくと　タッグを　くんでください!{EOS}"
EventText_JP_08223855: @ 0x08223855
	.string "ありがとうございます!\nさっそく　うけつけを　すませてきますね!{EOS}"
EventText_JP_08223876: @ 0x08223876
	.string "{PLAYER}さんと\nぜひ　タッグを　くみたかったです……{EOS}"
EventText_JP_0822388F: @ 0x0822388F
	.string "わたしは\n{STR_VAR_1}さんの　{STR_VAR_2}ばん　でし\l{STR_VAR_3}と　いいます{EOS}"
EventText_JP_082238AB: @ 0x082238AB
	.string "{STR_VAR_1}から　アドバイスを　うけて\n{STR_VAR_2}を　もつ　{STR_VAR_3}と……{EOS}"
EventText_JP_082238C8: @ 0x082238C8
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれているんです\pおねがいします!\nわたしと　タッグを　くんでください!{EOS}"
EventText_JP_082238F8: @ 0x082238F8
	.string "ありがとうございます!\nさっそく　うけつけを　すませてきます!{EOS}"
EventText_JP_08223918: @ 0x08223918
	.string "{PLAYER}さんと\nぜひ　タッグを　くみたかったです……{EOS}"
.Lbatch81_text_start_EventText_JP_08223931: @ 0x08223931
	.string "ぼくは　{STR_VAR_3}　って　いって\n{STR_VAR_1}さんの　{STR_VAR_2}ばん　でしです\lグスっ……\pごめんなさい!\nきんちょう　して　なみだが……{EOS}"
.Lbatch81_text_start_EventText_JP_0822396D: @ 0x0822396D
	.string "ぼく　{STR_VAR_3}さんの　アドバイスで\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_0822398A: @ 0x0822398A
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれているんです\pグスン……　ぼ　ぼくと\nタッグを　くんで　ください!{EOS}"
.Lbatch81_text_start_EventText_JP_082239B9: @ 0x082239B9
	.string "えー　ほんとですか!\nやった!　うれしいよう!　うぉぉーん!\pあ……　ごめん　なさい\nうれしくて　なみだが……\pさっ　さっそく　うけつけに\nいってきますから　まってて　ください!{EOS}"
.Lbatch81_text_start_EventText_JP_08223A13: @ 0x08223A13
	.string "そ　そんな……\nう　うう　うわーん!{EOS}"
.Lbatch81_text_start_EventText_JP_08223A26: @ 0x08223A26
	.string "こんにちはっ　ボクは　{STR_VAR_3}!\n{STR_VAR_1}さんの　{STR_VAR_2}ばん　でしなんだ!{EOS}"
.Lbatch81_text_start_EventText_JP_08223A47: @ 0x08223A47
	.string "{STR_VAR_3}さんに　すすめて　もらった\n{STR_VAR_1}を　もつ　{STR_VAR_2}とね{EOS}"
.Lbatch81_text_start_EventText_JP_08223A63: @ 0x08223A63
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}が\nいるんだよ　いいでしょ?\lねーっ　ボクと　いっしょに\lタッグを　くもうよ!{EOS}"
.Lbatch81_text_start_EventText_JP_08223A94: @ 0x08223A94
	.string "わーいっ　やった!\nじゃあねー　ボクが\lうけつけに　いってくるからね!{EOS}"
.Lbatch81_text_start_EventText_JP_08223AB8: @ 0x08223AB8
	.string "えーっ　どうして?\n{PLAYER}さんと　くみたかったなー{EOS}"
.Lbatch81_text_start_EventText_JP_08223AD1: @ 0x08223AD1
	.string "ぼくは　あの　ゆうめいな\n{STR_VAR_1}さんの　{STR_VAR_2}ばんの　でし\l{STR_VAR_3}です!{EOS}"
.Lbatch81_text_start_EventText_JP_08223AF3: @ 0x08223AF3
	.string "{STR_VAR_3}さん　から\nアドバイスを　いただいて\l{STR_VAR_1}を　つかう　{STR_VAR_2}と{EOS}"
.Lbatch81_text_start_EventText_JP_08223B14: @ 0x08223B14
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nつれているんです\pおねがいです!\nぼくと　タッグを　くんでください!{EOS}"
.Lbatch81_text_start_EventText_JP_08223B43: @ 0x08223B43
	.string "ありがとうございます!\nさっそく　うけつけを　すませてきますね!{EOS}"
.Lbatch81_text_start_EventText_JP_08223B64: @ 0x08223B64
	.string "{PLAYER}さんと\nぜひ　タッグを　くみたかったです……{EOS}"
.Lbatch81_text_start_EventText_JP_08223B7D: @ 0x08223B7D
	.string "あの……　あたし　なんかに\nこえを　かけてくれて　うれしいです\lあたしは　{STR_VAR_3}です\l{STR_VAR_1}さんの　{STR_VAR_2}ばんでしで……{EOS}"
.Lbatch81_text_start_EventText_JP_08223BB7: @ 0x08223BB7
	.string "{STR_VAR_3}さんが　あたし　なんかにも\nアドバイスを　くださったので\l{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08223BE3: @ 0x08223BE3
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれています……　おそれ　おおいけど……\pムリ　だと　おもいます　けど……\nあたしと　タッグを　くんでいただけますか?{EOS}"
.Lbatch81_text_start_EventText_JP_08223C2A: @ 0x08223C2A
	.string "ほんとう　ですか?　しんじられない!\nあたし　なんかと　くんでもらえる　なんて!\lが……がんばります!\pあのっ　あたしで　よかったら\nいまから　うけつけに　いって　きます!{EOS}"
.Lbatch81_text_start_EventText_JP_08223C81: @ 0x08223C81
	.string "や　やっぱり……\nあたし　なんか　ダメですよね{EOS}"
.Lbatch81_text_start_EventText_JP_08223C99: @ 0x08223C99
	.string "わたしは　{STR_VAR_3}\n{STR_VAR_1}さんの　{STR_VAR_2}ばん　でしなの!{EOS}"
.Lbatch81_text_start_EventText_JP_08223CB2: @ 0x08223CB2
	.string "{STR_VAR_3}さんが　いいって　いったから\n{STR_VAR_1}　つかいの　{STR_VAR_2}と{EOS}"
.Lbatch81_text_start_EventText_JP_08223CCF: @ 0x08223CCF
	.string "{STR_VAR_1}　つかいの　{STR_VAR_2}を\nもって　いるわけ!\lわるくない　でしょ?\lあなたと　タッグを　くんで　あげようか?{EOS}"
.Lbatch81_text_start_EventText_JP_08223D05: @ 0x08223D05
	.string "うん　じゃあ　よろしくね\nわたしの　あしを　ひっぱらないでよね!\lさっそく　うけつけに　いってくるわ!{EOS}"
.Lbatch81_text_start_EventText_JP_08223D39: @ 0x08223D39
	.string "え?　なんで　ことわるの?\nみるめ　ないんじゃない?{EOS}"
.Lbatch81_text_start_EventText_JP_08223D54: @ 0x08223D54
	.string "オレは　トライアスリートの　{STR_VAR_3}!\nジョギング　トレーニング　ラッピングと\lまいにち　いそがしい　なか\l{STR_VAR_1}の　{STR_VAR_2}ばんでし　やってる!{EOS}"
.Lbatch81_text_start_EventText_JP_08223D99: @ 0x08223D99
	.string "{STR_VAR_3}の　オススメ!\n{STR_VAR_1}を　もつ　{STR_VAR_2}と{EOS}"
.Lbatch81_text_start_EventText_JP_08223DAE: @ 0x08223DAE
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nいそがしい　なか　がんばって　そだてたぜ!\pオレと　タッグを　くんで　がんばろうぜ!{EOS}"
.Lbatch81_text_start_EventText_JP_08223DE4: @ 0x08223DE4
	.string "サンキュー　そう　こなくっちゃ!\nんじゃ　オレ　うけつけを　すませてくるわ!{EOS}"
.Lbatch81_text_start_EventText_JP_08223E0B: @ 0x08223E0B
	.string "おいおい　いそがしい　なか　きたのに\nそりゃ　ないぜ!{EOS}"
.Lbatch81_text_start_EventText_JP_08223E27: @ 0x08223E27
	.string "ハーイ!　ちょうしは　どう?\n{STR_VAR_1}さんの　{STR_VAR_2}ばんの\lでしトレーナー　{STR_VAR_3}よ　よろしくぅ!{EOS}"
.Lbatch81_text_start_EventText_JP_08223E55: @ 0x08223E55
	.string "きいてきいて!　{STR_VAR_3}さんが\nおすすめ　してくれた　ポケモンはね\l{STR_VAR_1}を　もつ　{STR_VAR_2}と{EOS}"
.Lbatch81_text_start_EventText_JP_08223E80: @ 0x08223E80
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}なの\nもちろん　バッチリ　そだてたわ!\pというわけで　わたしと　くまない?\nきっと　いいカンジよ!{EOS}"
.Lbatch81_text_start_EventText_JP_08223EBB: @ 0x08223EBB
	.string "わーい　たのしく　なりそうー!\nじゃ　わたしが　うけつけに　いってくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_08223EE1: @ 0x08223EE1
	.string "もー　いじわる!\nわたし　オススメなのに!{EOS}"
.Lbatch81_text_start_EventText_JP_08223EF7: @ 0x08223EF7
	.string "{STR_VAR_3}と　もうします\nわたくし　{STR_VAR_1}さまの　{STR_VAR_2}ばんの\lでしで　ございますの……{EOS}"
.Lbatch81_text_start_EventText_JP_08223F1F: @ 0x08223F1F
	.string "{STR_VAR_3}さまに　おしえを　こい\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08223F3A: @ 0x08223F3A
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nそだて　あげましたの!\pおねがい　わたくしと　タッグを\nくんで　くださると　おっしゃって!{EOS}"
.Lbatch81_text_start_EventText_JP_08223F73: @ 0x08223F73
	.string "うっ　うれしい　ですわ……\nわたくし　ぜんりょくで　つとめますわ!\pもちろん　うけつけは　わたくしが!\nすこし　おまちくださいませ{EOS}"
.Lbatch81_text_start_EventText_JP_08223FB5: @ 0x08223FB5
	.string "{PLAYER}さんと\nぜひ　タッグを　くみたかったです……{EOS}"
.Lbatch81_text_start_EventText_JP_08223FCE: @ 0x08223FCE
	.string "キャー!　はなしかけられたっ!\nかっ　かんげきっ……!\pわたし!　{STR_VAR_3}と　いいますっ!\n{STR_VAR_1}　せんせいの\l{STR_VAR_2}ばん　でし　ですっ!{EOS}"
.Lbatch81_text_start_EventText_JP_08224010: @ 0x08224010
	.string "{STR_VAR_3}　せんせいの　アドバイスで\n{STR_VAR_1}をもつ　{STR_VAR_2}ちゃんと{EOS}"
.Lbatch81_text_start_EventText_JP_0822402D: @ 0x0822402D
	.string "{STR_VAR_1}をもつ　{STR_VAR_2}ちゃんを\nそだてましたーっ!\pあの　おねがいが!\nわたしと　タッグをくんで　ほしいのですっ!{EOS}"
.Lbatch81_text_start_EventText_JP_08224064: @ 0x08224064
	.string "キャー!　かっ　かんげきっ……!\nおありがとう　ございますう!\lではっ　うけつけを　して　まいりますっ!{EOS}"
.Lbatch81_text_start_EventText_JP_08224099: @ 0x08224099
	.string "うっわあああ!\nちも　なみだも　ないですねっ!　でもステキ!{EOS}"
.Lbatch81_text_start_EventText_JP_082240B8: @ 0x082240B8
	.string "いえーい!　{STR_VAR_1}さんの\n{STR_VAR_2}ばん　でしの　おじさんは\l{STR_VAR_3}です　ハロウ　ハロウ!{EOS}"
.Lbatch81_text_start_EventText_JP_082240E1: @ 0x082240E1
	.string "{STR_VAR_3}　ティーチャー　おすすめの\n{STR_VAR_1}　マスター　{STR_VAR_2}と{EOS}"
.Lbatch81_text_start_EventText_JP_082240FD: @ 0x082240FD
	.string "{STR_VAR_1}　マスター　{STR_VAR_2}を\nトレイン　したんだよー!\lグッドタイミングだね!\lもちろん　おじさんと　タッグを　くむだろ?{EOS}"
.Lbatch81_text_start_EventText_JP_08224138: @ 0x08224138
	.string "オーケイ　エクセレント!\nじゃ　バーっと　うけつけを　すませてくるね{EOS}"
.Lbatch81_text_start_EventText_JP_0822415B: @ 0x0822415B
	.string "ぐわーっ!\n{PLAYER}さん　ってのは　クールだね!{EOS}"
.Lbatch81_text_start_EventText_JP_08224172: @ 0x08224172
	.string "お　おいっ　たいへんだ!\nバトルタワー　きょうで　おしまいらしいぞ!\p……　……　……\nなんてね　うっそ　うそ!\pおいらは　{STR_VAR_3}　って　いうんだ\n{STR_VAR_1}の　1000ばんめの　でしだ!\lうそ　ほんとは　{STR_VAR_2}ばん!{EOS}"
.Lbatch81_text_start_EventText_JP_082241DB: @ 0x082241DB
	.string "{STR_VAR_3}が　アドバイスを　くれてね\n{STR_VAR_1}を　もつ　{STR_VAR_2}とね{EOS}"
.Lbatch81_text_start_EventText_JP_082241F7: @ 0x082241F7
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}をね\n10ぴきずつ　もって　いまーす!\lうそ　ほんとは　1ぴきずつだよ!\pひとつ　どうだろ?　こんな　おいらと\nタッグバトルを　して　みないかな?{EOS}"
.Lbatch81_text_start_EventText_JP_0822424A: @ 0x0822424A
	.string "やったー!\nおれいに　ポケモン　あげちゃおう!\pなんて　じょうだん　だけど……\nとりあえず　うけつけを　すませてくるよ!{EOS}"
.Lbatch81_text_start_EventText_JP_08224287: @ 0x08224287
	.string "そんな　つめたい　こと　いうと\nバトルタワーを　こわして　しまうぞ!\pなんてね　うそ!{EOS}"
.Lbatch81_text_start_EventText_JP_082242B3: @ 0x082242B3
	.string "ご·き·げ·ん·よ·う!\nはーい　ごきげんよう!\pわしは　ノリノリ　ふなのり　{STR_VAR_3}!\n{STR_VAR_1}さんの　{STR_VAR_2}ばんの　でしだよ!{EOS}"
.Lbatch81_text_start_EventText_JP_082242F0: @ 0x082242F0
	.string "{STR_VAR_3}さん　アドバイスの　たまもの\n{STR_VAR_1}を　もつ　{STR_VAR_2}と{EOS}"
.Lbatch81_text_start_EventText_JP_0822430C: @ 0x0822430C
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}が\nわしの　じまんの　ポケモン!\pさあ　この　であいを　きねんして\nわしと　タッグバトルを　やってください!{EOS}"
.Lbatch81_text_start_EventText_JP_0822434C: @ 0x0822434C
	.string "ようよう!　ノリが　いいね\nよろしく　たのみますよ!\lじゃ　うけつけは　わしが　いってくるよ!{EOS}"
.Lbatch81_text_start_EventText_JP_0822437C: @ 0x0822437C
	.string "そんな　{PLAYER}さん!\nノリが　わるいじゃ　ないか!{EOS}"
.Lbatch81_text_start_EventText_JP_08224395: @ 0x08224395
	.string "イャァアッホオオォォウウ!\nあ　にげないでェ　かえらないでェ!\pオスっ　オレっ　{STR_VAR_3}!\n{STR_VAR_1}さんの　{STR_VAR_2}ばん　でしなのさ!{EOS}"
.Lbatch81_text_start_EventText_JP_082243D3: @ 0x082243D3
	.string "{STR_VAR_3}さんったら　オレに!\n{STR_VAR_1}を　もつ　{STR_VAR_2}と!{EOS}"
.Lbatch81_text_start_EventText_JP_082243EC: @ 0x082243EC
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を!\nつかえって　いうから　そうしたぜエェ!\pって　ことで　どうする　オレ?\nさっそく　たのんでみる?\pおねがいです!\nオレと　タッグを　くんでエェ!{EOS}"
.Lbatch81_text_start_EventText_JP_08224441: @ 0x08224441
	.string "やったラッキー　うれしーよ　オレ!!\nさっそく　うけつけに　いってくる!?\lじゃ　ちょっと　まっててェ!{EOS}"
.Lbatch81_text_start_EventText_JP_08224476: @ 0x08224476
	.string "って　ことわられてる　オレっ!?\n{PLAYER}さん　つれないよォ!{EOS}"
.Lbatch81_text_start_EventText_JP_08224494: @ 0x08224494
	.string "ゴホっ!\pあっ　ゴメン　カゼ　ひいてて……\nポケモンは　げんきだから　ダイジョブだよ\pおれは　{STR_VAR_3}\n{STR_VAR_1}さんの　{STR_VAR_2}ばんでしだよ\l……ゴホっ　ゴホっ　よろしく!{EOS}"
.Lbatch81_text_start_EventText_JP_082244E5: @ 0x082244E5
	.string "{STR_VAR_3}さんの　アドバイスで\n{STR_VAR_1}を　もつ　{STR_VAR_2}とさ……{EOS}"
.Lbatch81_text_start_EventText_JP_08224500: @ 0x08224500
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nあめのひも　かぜのひも　そだてあげたよ\l……それで　カゼを　ひいたんだ　きっと\pまあ　そういう　わけだからさ\nこんな　おれと　いっしょに　くまないかい?{EOS}"
.Lbatch81_text_start_EventText_JP_08224558: @ 0x08224558
	.string "ありがとう　わるいね\n……ゴホ　ゴホ!\lうけつけを　すませてくるから……\lゴホ　まっててね{EOS}"
.Lbatch81_text_start_EventText_JP_08224586: @ 0x08224586
	.string "えー　なんで!\n{PLAYER}さんと　オレって　いいけどなあ{EOS}"
.Lbatch81_text_start_EventText_JP_082245A0: @ 0x082245A0
	.string "あっ　ど　どうも!\nてれるなあ\pあの　{STR_VAR_3}です!　{STR_VAR_1}さんの\n{STR_VAR_2}ばんの　でし　やってます……!{EOS}"
.Lbatch81_text_start_EventText_JP_082245D1: @ 0x082245D1
	.string "{STR_VAR_3}さんが　よいと　いったので\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082245EE: @ 0x082245EE
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nそだててるんだ……　はずかしながら\pその　はずかしい　けど　ワシと……\nタッグを　くんで　もらえる　かな……?{EOS}"
.Lbatch81_text_start_EventText_JP_08224631: @ 0x08224631
	.string "あ　ありがとう!\nはずかしい　けど　がんばって　みるよ\pじゃ……　う　うけつけ　してくるね{EOS}"
.Lbatch81_text_start_EventText_JP_0822465F: @ 0x0822465F
	.string "こ　ことわらないでくれ!\nワシに　はじを　かかせないで　くれ!{EOS}"
.Lbatch81_text_start_EventText_JP_0822467F: @ 0x0822467F
	.string "わたしは　{STR_VAR_3}だ\nうそじゃない!\l{STR_VAR_1}さんの　{STR_VAR_2}ばんの　でしだ{EOS}"
.Lbatch81_text_start_EventText_JP_082246A0: @ 0x082246A0
	.string "{STR_VAR_3}さんから　すすめられて\nどうやら　ほんき　みたい　だったから\l{STR_VAR_1}を　もつ　{STR_VAR_2}と{EOS}"
	.byte 0xFD, 0x02, 0x2D, 0x00, 0x23, 0x12, 0x00, 0xFD, 0x03, 0x2D, 0xFE, 0x12, 0x2A, 0x13, 0x02, 0x29
	.byte 0x2E, 0x41, 0x00, 0x1E, 0x2E, 0x14, 0x03, 0x41, 0x26, 0xAB, 0xFB, 0x14, 0x0A, 0x2B, 0x44, 0x00
	.byte 0x23, 0x0C, 0x00, 0x26, 0x06, 0x50, 0x10, 0x27, 0x00, 0x2C, 0x10, 0x0C, 0x2D, 0xFE, 0x57, 0x70
	.byte 0x19, 0x00, 0x9B, 0xAE, 0x64, 0x65, 0xAE, 0x16, 0x00, 0x20, 0x14, 0x22, 0x13, 0x00
