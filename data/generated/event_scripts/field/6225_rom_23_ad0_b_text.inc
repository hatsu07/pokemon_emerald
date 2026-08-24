	@ field-script:0x23A264 FieldScriptText_23A5D2
	.globl gText_Rom_23A5D2
gText_Rom_23A5D2: @ 0x0823A5D2
	.string "はじめての　おきゃくさまですね！\nこちらへ　どうぞ！"
	.byte EOS
	.if (. - gText_Rom_23A5D2) > 0x1b
	.error "gText_Rom_23A5D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A5D2) < 0x1b
	.space 0x1b - (. - gText_Rom_23A5D2)
	.endif
	@ data/maps/BattleFrontier_ReceptionGate/scripts.inc:306 BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier
	.globl BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier
BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier: @ 0x0823A5ED
	.string "ポケモンバトルの さいぜんせん！\nバトルフロンティアへ ようこそ！"
	.byte EOS
	.if (. - BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier) > 0x22
	.error "BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier) < 0x22
	.space 0x22 - (. - BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier)
	.endif
	@ field-script:0x23A285 FieldScriptText_23A60F
	.globl gText_Rom_23A60F
gText_Rom_23A60F: @ 0x0823A60F
	.string "はじめての　おきゃくさまには\nバトルフロンティアの　なかで\lごりよう　いただける　フロンティアパスを\lはっこうして　おります！\pどうぞ　おうけとり　ください！"
	.byte EOS
	.if (. - gText_Rom_23A60F) > 0x50
	.error "gText_Rom_23A60F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A60F) < 0x50
	.space 0x50 - (. - gText_Rom_23A60F)
	.endif
	@ field-script:0x23A28F FieldScriptText_23A65F
	.globl gText_Rom_23A65F
gText_Rom_23A65F: @ 0x0823A65F
	.string "{0xFD}{0x01}は\nフロンティアパスを　もらった！"
	.byte EOS
	.if (. - gText_Rom_23A65F) > 0x14
	.error "gText_Rom_23A65F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A65F) < 0x14
	.space 0x14 - (. - gText_Rom_23A65F)
	.endif
	@ field-script:0x23A297 FieldScriptText_23A673
	.globl gText_Rom_23A673
gText_Rom_23A673: @ 0x0823A673
	.string "{0xFD}{0x01}は　トレーナーカードを\nフロンティアパスに　いれかえた！"
	.byte EOS
	.if (. - gText_Rom_23A673) > 0x1f
	.error "gText_Rom_23A673 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A673) < 0x1f
	.space 0x1f - (. - gText_Rom_23A673)
	.endif
	@ field-script:0x23A2A2 FieldScriptText_23A692
	.globl gText_Rom_23A692
gText_Rom_23A692: @ 0x0823A692
	.string "それでは　バトルフロンティアを\nぞんぶんに　おたのしみ　ください！"
	.byte EOS
	.if (. - gText_Rom_23A692) > 0x22
	.error "gText_Rom_23A692 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A692) < 0x22
	.space 0x22 - (. - gText_Rom_23A692)
	.endif
	@ field-script:0x23A2AA FieldScriptText_23A6B4
	.globl gText_Rom_23A6B4
gText_Rom_23A6B4: @ 0x0823A6B4
	.string "？？？『やあ　きて　くれたんだね\n{0xFD}{0x01}{0xFD}{0x05}！"
	.byte EOS
	.if (. - gText_Rom_23A6B4) > 0x17
	.error "gText_Rom_23A6B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A6B4) < 0x17
	.space 0x17 - (. - gText_Rom_23A6B4)
	.endif
	@ field-script:0x23A2E6 FieldScriptText_23A6CB
	.globl gText_Rom_23A6CB
gText_Rom_23A6CB: @ 0x0823A6CB
	.string "うけつけ『あっ　エニシダさま！\nおつかれさまです！"
	.byte EOS
	.if (. - gText_Rom_23A6CB) > 0x1a
	.error "gText_Rom_23A6CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A6CB) < 0x1a
	.space 0x1a - (. - gText_Rom_23A6CB)
	.endif
	@ field-script:0x23A30E FieldScriptText_23A6E5
	.globl gText_Rom_23A6E5
gText_Rom_23A6E5: @ 0x0823A6E5
	.string "エニシダ『きみが　きてくれて\nとっても　うれしいよ！\pぜひ　ゆっくりと　そして　じっくりと\nポケモンしょうぶの　しんずいを\lあじわって　いって　くれ！\pわたしの　へやも　あるから\nひまが　あるときに　たずねて　きてくれよ！"
	.byte EOS
	.if (. - gText_Rom_23A6E5) > 0x70
	.error "gText_Rom_23A6E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A6E5) < 0x70
	.space 0x70 - (. - gText_Rom_23A6E5)
	.endif
	@ field-script:0x23A366 FieldScriptText_23A755
	.globl gText_Rom_23A755
gText_Rom_23A755: @ 0x0823A755
	.string "こちらでは　バトルフロンティアに　ある\nさまざまな　しせつの\lごあんないを　いたします！"
	.byte EOS
	.if (. - gText_Rom_23A755) > 0x2d
	.error "gText_Rom_23A755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A755) < 0x2d
	.space 0x2d - (. - gText_Rom_23A755)
	.endif
	@ field-script:0x23A373 FieldScriptText_23A782
	.globl gText_Rom_23A782
gText_Rom_23A782: @ 0x0823A782
	.string "どの　せつめいが　ききたいですか？"
	.byte EOS
	.if (. - gText_Rom_23A782) > 0x12
	.error "gText_Rom_23A782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A782) < 0x12
	.space 0x12 - (. - gText_Rom_23A782)
	.endif
	@ field-script:0x23A402 FieldScriptText_23A794
	.globl gText_Rom_23A794
gText_Rom_23A794: @ 0x0823A794
	.string "バトルフロンティアの　シンボル　とも\nいえる　きょだいな　とう　です\pこちらの　たてもの　では　シングル\nダブル　マルチ　つうしんマルチの\l4つの　バトルルームで　たたかいを\lたのしむことが　できます！"
	.byte EOS
	.if (. - gText_Rom_23A794) > 0x66
	.error "gText_Rom_23A794 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A794) < 0x66
	.space 0x66 - (. - gText_Rom_23A794)
	.endif
	@ field-script:0x23A410 FieldScriptText_23A7FA
	.globl gText_Rom_23A7FA
gText_Rom_23A7FA: @ 0x0823A7FA
	.string "バトルドームは　たまごの　ような\nかたちをした　おおきな　たてものです\pこちらでは　バトルトーナメント　という\nイベントが　かいさいされて　います\pなお　バトルトーナメントには\nシングルバトルよう　ダブルバトルようの\l2つの　コースが　あります！"
	.byte EOS
	.if (. - gText_Rom_23A7FA) > 0x7c
	.error "gText_Rom_23A7FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A7FA) < 0x7c
	.space 0x7c - (. - gText_Rom_23A7FA)
	.endif
	@ field-script:0x23A41E FieldScriptText_23A876
	.globl gText_Rom_23A876
gText_Rom_23A876: @ 0x0823A876
	.string "バトルパレスは　バトルフロンティアの\nみぎはじに　ある　あかい　たてものです\pこちらの　たてもの　では\nシングル　ダブルの　2つの\lバトルホールへの　ちょうせんが　できます"
	.byte EOS
	.if (. - gText_Rom_23A876) > 0x57
	.error "gText_Rom_23A876 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A876) < 0x57
	.space 0x57 - (. - gText_Rom_23A876)
	.endif
	@ field-script:0x23A42C FieldScriptText_23A8CD
	.globl gText_Rom_23A8CD
gText_Rom_23A8CD: @ 0x0823A8CD
	.string "バトルアリーナは　バトルフロンティアの\nちゅうおう　みぎに　いちする\lどうじょうの　ような　たてものです\pこちらでは　かちぬきチームバトル　という\nイベントを　かいさい　しております！"
	.byte EOS
	.if (. - gText_Rom_23A8CD) > 0x5d
	.error "gText_Rom_23A8CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A8CD) < 0x5d
	.space 0x5d - (. - gText_Rom_23A8CD)
	.endif
	@ field-script:0x23A43A FieldScriptText_23A92A
	.globl gText_Rom_23A92A
gText_Rom_23A92A: @ 0x0823A92A
	.string "バトルファクトリーは　ここをでて　いちばん\nちかくにある　おおきな　ビルに　なります\pこちらでは　バトルトレード　という\nイベントを　かいさいして　おります\pなお　バトルトレードには\nシングルバトルよう　ダブルバトルようの\l2つの　コースが　ようい　されています！"
	.byte EOS
	.if (. - gText_Rom_23A92A) > 0x85
	.error "gText_Rom_23A92A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A92A) < 0x85
	.space 0x85 - (. - gText_Rom_23A92A)
	.endif
	@ field-script:0x23A448 FieldScriptText_23A9AF
	.globl gText_Rom_23A9AF
gText_Rom_23A9AF: @ 0x0823A9AF
	.string "バトルチューブは　バトルフロンティアの\nちゅうおう　ひだりに　いちする\lポケモンの　かたちを　した　たてものです\pこちらでは　バトルゲーム　という\nイベントを　かいさい　しております！"
	.byte EOS
	.if (. - gText_Rom_23A9AF) > 0x5d
	.error "gText_Rom_23A9AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A9AF) < 0x5d
	.space 0x5d - (. - gText_Rom_23A9AF)
	.endif
	@ field-script:0x23A456 FieldScriptText_23AA0C
	.globl gText_Rom_23AA0C
gText_Rom_23AA0C: @ 0x0823AA0C
	.string "バトルピラミッドは　きょだいな\nピラミッドの　かたちをした　たてものです\pこちらでは　バトルアドベンチャー　という\nイベントを　かいさい　しております！"
	.byte EOS
	.if (. - gText_Rom_23AA0C) > 0x4d
	.error "gText_Rom_23AA0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AA0C) < 0x4d
	.space 0x4d - (. - gText_Rom_23AA0C)
	.endif
	@ field-script:0x23A464 FieldScriptText_23AA59
	.globl gText_Rom_23AA59
gText_Rom_23AA59: @ 0x0823AA59
	.string "ランキングホールは\nバトルタワーの　ちかくに　あります\pこちらは　バトルフロンティアで\nたたかった　トレーナーたちの\lもっとも　すばらしい　きろくを\lみることが　できます"
	.byte EOS
	.if (. - gText_Rom_23AA59) > 0x56
	.error "gText_Rom_23AA59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AA59) < 0x56
	.space 0x56 - (. - gText_Rom_23AA59)
	.endif
	@ field-script:0x23A472 FieldScriptText_23AAAF
	.globl gText_Rom_23AAAF
gText_Rom_23AAAF: @ 0x0823AAAF
	.string "ひきかえサービス　コーナーは\nバトルタワーの　ちかくに　あります\pこちらでは　バトルフロンティアの\nなかで　ためた　バトルポイントを\lすてきな　けいひんと\lこうかんする　ことが　できます！"
	.byte EOS
	.if (. - gText_Rom_23AAAF) > 0x5f
	.error "gText_Rom_23AAAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AAAF) < 0x5f
	.space 0x5f - (. - gText_Rom_23AAAF)
	.endif
	@ field-script:0x23A48C FieldScriptText_23AB0E
	.globl gText_Rom_23AB0E
gText_Rom_23AB0E: @ 0x0823AB0E
	.string "こちらでは　バトルフロンティアに　ある\nすべての　しせつに　きょうつう　した\lちょうせんの　ための　きほんてきな\lルールを　せつめい　いたします！"
	.byte EOS
	.if (. - gText_Rom_23AB0E) > 0x4a
	.error "gText_Rom_23AB0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AB0E) < 0x4a
	.space 0x4a - (. - gText_Rom_23AB0E)
	.endif
	@ field-script:0x23A499 FieldScriptText_23AB58
	.globl gText_Rom_23AB58
gText_Rom_23AB58: @ 0x0823AB58
	.string "どの　せつめいが　ききたいですか？"
	.byte EOS
	.if (. - gText_Rom_23AB58) > 0x12
	.error "gText_Rom_23AB58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AB58) < 0x12
	.space 0x12 - (. - gText_Rom_23AB58)
	.endif
	@ field-script:0x23A4F8 FieldScriptText_23AB6A
	.globl gText_Rom_23AB6A
gText_Rom_23AB6A: @ 0x0823AB6A
	.string "バトルフロンティアに　ある\nすべての　しせつの　ちょうせんは\lおおきく　レベル50の　コースと\lオープンレベルの　コースに　わかれています"
	.byte EOS
	.if (. - gText_Rom_23AB6A) > 0x46
	.error "gText_Rom_23AB6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AB6A) < 0x46
	.space 0x46 - (. - gText_Rom_23AB6A)
	.endif
	@ field-script:0x23A506 FieldScriptText_23ABB0
	.globl gText_Rom_23ABB0
gText_Rom_23ABB0: @ 0x0823ABB0
	.string "レベル50の　コースでは　なまえの　とおり\nレベル50までの　ポケモンを\lちょうせん　させることが　できます\pただし　レベル50より　ひくい　レベルの\nポケモンを　つれた　トレーナーが\lとうじょう　することは　ありません\lくれぐれも　ごちゅうい　ください\pなお　このコースが　バトルフロンティアの\nたたかいの　きほんと　なって　いますので\lぜひ　チャレンジして　みてください"
	.byte EOS
	.if (. - gText_Rom_23ABB0) > 0xbc
	.error "gText_Rom_23ABB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23ABB0) < 0xbc
	.space 0xbc - (. - gText_Rom_23ABB0)
	.endif
	@ field-script:0x23A514 FieldScriptText_23AC6C
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23AC6C
gText_Rom_23AC6C: @ 0x0823AC6C
	.string "オープンレベルの　コースでは\nちょうせんに　さんかする　ポケモンの\lレベルに　せいげんが　ありません\pあなたの　ポケモンの　レベルに　あわせて\nたいせんする　トレーナーの　ポケモンの\lレベルが　かわります\pただし　レベル60より　ひくい　レベルの\nポケモンを　つれた　トレーナーが\lとうじょう　することは　ありません"
	.byte EOS
	.if (. - gText_Rom_23AC6C) != 0x9f
	.error "gText_Rom_23AC6C must retain its original byte length"
	.endif
	@ field-script:0x23A522 FieldScriptText_23AD0B
	.globl gText_Rom_23AD0B
gText_Rom_23AD0B: @ 0x0823AD0B
	.string "タマゴや　いちぶの　れいがいを\nのぞいて　ほとんどの　ポケモンが\lすべての　しせつに　ちょうせん　できます\pちょうせんの　ために\nひつような　ポケモンの　かずは\lしせつに　よって　ちがいます\pただし　どの　しせつでも\nおなじ　しゅるいの　ポケモンを\l2ひき　いじょう　さんか　させることは\lできませんので　ごちゅうい　ください"
	.byte EOS
	.if (. - gText_Rom_23AD0B) > 0xa4
	.error "gText_Rom_23AD0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AD0B) < 0xa4
	.space 0xa4 - (. - gText_Rom_23AD0B)
	.endif
