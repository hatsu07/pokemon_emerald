	@ field-script:0x23A264 FieldScriptText_23A5D2
	.globl FieldScriptText_23A5D2
FieldScriptText_23A5D2: @ 0x0823A5D2
	.string "はじめての　おきゃくさまですね！\nこちらへ　どうぞ！"
	.byte EOS
	.if (. - FieldScriptText_23A5D2) > 0x1b
	.error "FieldScriptText_23A5D2 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A5D2) < 0x1b
	.space 0x1b - (. - FieldScriptText_23A5D2)
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
	.globl FieldScriptText_23A60F
FieldScriptText_23A60F: @ 0x0823A60F
	.string "はじめての　おきゃくさまには\nバトルフロンティアの　なかで\lごりよう　いただける　フロンティアパスを\lはっこうして　おります！\pどうぞ　おうけとり　ください！"
	.byte EOS
	.if (. - FieldScriptText_23A60F) > 0x50
	.error "FieldScriptText_23A60F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A60F) < 0x50
	.space 0x50 - (. - FieldScriptText_23A60F)
	.endif
	@ field-script:0x23A28F FieldScriptText_23A65F
	.globl FieldScriptText_23A65F
FieldScriptText_23A65F: @ 0x0823A65F
	.string "{0xFD}{0x01}は\nフロンティアパスを　もらった！"
	.byte EOS
	.if (. - FieldScriptText_23A65F) > 0x14
	.error "FieldScriptText_23A65F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A65F) < 0x14
	.space 0x14 - (. - FieldScriptText_23A65F)
	.endif
	@ field-script:0x23A297 FieldScriptText_23A673
	.globl FieldScriptText_23A673
FieldScriptText_23A673: @ 0x0823A673
	.string "{0xFD}{0x01}は　トレーナーカードを\nフロンティアパスに　いれかえた！"
	.byte EOS
	.if (. - FieldScriptText_23A673) > 0x1f
	.error "FieldScriptText_23A673 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A673) < 0x1f
	.space 0x1f - (. - FieldScriptText_23A673)
	.endif
	@ field-script:0x23A2A2 FieldScriptText_23A692
	.globl FieldScriptText_23A692
FieldScriptText_23A692: @ 0x0823A692
	.string "それでは　バトルフロンティアを\nぞんぶんに　おたのしみ　ください！"
	.byte EOS
	.if (. - FieldScriptText_23A692) > 0x22
	.error "FieldScriptText_23A692 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A692) < 0x22
	.space 0x22 - (. - FieldScriptText_23A692)
	.endif
	@ field-script:0x23A2AA FieldScriptText_23A6B4
	.globl FieldScriptText_23A6B4
FieldScriptText_23A6B4: @ 0x0823A6B4
	.string "？？？『やあ　きて　くれたんだね\n{0xFD}{0x01}{0xFD}{0x05}！"
	.byte EOS
	.if (. - FieldScriptText_23A6B4) > 0x17
	.error "FieldScriptText_23A6B4 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A6B4) < 0x17
	.space 0x17 - (. - FieldScriptText_23A6B4)
	.endif
	@ field-script:0x23A2E6 FieldScriptText_23A6CB
	.globl FieldScriptText_23A6CB
FieldScriptText_23A6CB: @ 0x0823A6CB
	.string "うけつけ『あっ　エニシダさま！\nおつかれさまです！"
	.byte EOS
	.if (. - FieldScriptText_23A6CB) > 0x1a
	.error "FieldScriptText_23A6CB may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A6CB) < 0x1a
	.space 0x1a - (. - FieldScriptText_23A6CB)
	.endif
	@ field-script:0x23A30E FieldScriptText_23A6E5
	.globl FieldScriptText_23A6E5
FieldScriptText_23A6E5: @ 0x0823A6E5
	.string "エニシダ『きみが　きてくれて\nとっても　うれしいよ！\pぜひ　ゆっくりと　そして　じっくりと\nポケモンしょうぶの　しんずいを\lあじわって　いって　くれ！\pわたしの　へやも　あるから\nひまが　あるときに　たずねて　きてくれよ！"
	.byte EOS
	.if (. - FieldScriptText_23A6E5) > 0x70
	.error "FieldScriptText_23A6E5 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A6E5) < 0x70
	.space 0x70 - (. - FieldScriptText_23A6E5)
	.endif
	@ field-script:0x23A366 FieldScriptText_23A755
	.globl FieldScriptText_23A755
FieldScriptText_23A755: @ 0x0823A755
	.string "こちらでは　バトルフロンティアに　ある\nさまざまな　しせつの\lごあんないを　いたします！"
	.byte EOS
	.if (. - FieldScriptText_23A755) > 0x2d
	.error "FieldScriptText_23A755 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A755) < 0x2d
	.space 0x2d - (. - FieldScriptText_23A755)
	.endif
	@ field-script:0x23A373 FieldScriptText_23A782
	.globl FieldScriptText_23A782
FieldScriptText_23A782: @ 0x0823A782
	.string "どの　せつめいが　ききたいですか？"
	.byte EOS
	.if (. - FieldScriptText_23A782) > 0x12
	.error "FieldScriptText_23A782 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A782) < 0x12
	.space 0x12 - (. - FieldScriptText_23A782)
	.endif
	@ field-script:0x23A402 FieldScriptText_23A794
	.globl FieldScriptText_23A794
FieldScriptText_23A794: @ 0x0823A794
	.string "バトルフロンティアの　シンボル　とも\nいえる　きょだいな　とう　です\pこちらの　たてもの　では　シングル\nダブル　マルチ　つうしんマルチの\l4つの　バトルルームで　たたかいを\lたのしむことが　できます！"
	.byte EOS
	.if (. - FieldScriptText_23A794) > 0x66
	.error "FieldScriptText_23A794 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A794) < 0x66
	.space 0x66 - (. - FieldScriptText_23A794)
	.endif
	@ field-script:0x23A410 FieldScriptText_23A7FA
	.globl FieldScriptText_23A7FA
FieldScriptText_23A7FA: @ 0x0823A7FA
	.string "バトルドームは　たまごの　ような\nかたちをした　おおきな　たてものです\pこちらでは　バトルトーナメント　という\nイベントが　かいさいされて　います\pなお　バトルトーナメントには\nシングルバトルよう　ダブルバトルようの\l2つの　コースが　あります！"
	.byte EOS
	.if (. - FieldScriptText_23A7FA) > 0x7c
	.error "FieldScriptText_23A7FA may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A7FA) < 0x7c
	.space 0x7c - (. - FieldScriptText_23A7FA)
	.endif
	@ field-script:0x23A41E FieldScriptText_23A876
	.globl FieldScriptText_23A876
FieldScriptText_23A876: @ 0x0823A876
	.string "バトルパレスは　バトルフロンティアの\nみぎはじに　ある　あかい　たてものです\pこちらの　たてもの　では\nシングル　ダブルの　2つの\lバトルホールへの　ちょうせんが　できます"
	.byte EOS
	.if (. - FieldScriptText_23A876) > 0x57
	.error "FieldScriptText_23A876 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A876) < 0x57
	.space 0x57 - (. - FieldScriptText_23A876)
	.endif
	@ field-script:0x23A42C FieldScriptText_23A8CD
	.globl FieldScriptText_23A8CD
FieldScriptText_23A8CD: @ 0x0823A8CD
	.string "バトルアリーナは　バトルフロンティアの\nちゅうおう　みぎに　いちする\lどうじょうの　ような　たてものです\pこちらでは　かちぬきチームバトル　という\nイベントを　かいさい　しております！"
	.byte EOS
	.if (. - FieldScriptText_23A8CD) > 0x5d
	.error "FieldScriptText_23A8CD may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A8CD) < 0x5d
	.space 0x5d - (. - FieldScriptText_23A8CD)
	.endif
	@ field-script:0x23A43A FieldScriptText_23A92A
	.globl FieldScriptText_23A92A
FieldScriptText_23A92A: @ 0x0823A92A
	.string "バトルファクトリーは　ここをでて　いちばん\nちかくにある　おおきな　ビルに　なります\pこちらでは　バトルトレード　という\nイベントを　かいさいして　おります\pなお　バトルトレードには\nシングルバトルよう　ダブルバトルようの\l2つの　コースが　ようい　されています！"
	.byte EOS
	.if (. - FieldScriptText_23A92A) > 0x85
	.error "FieldScriptText_23A92A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A92A) < 0x85
	.space 0x85 - (. - FieldScriptText_23A92A)
	.endif
	@ field-script:0x23A448 FieldScriptText_23A9AF
	.globl FieldScriptText_23A9AF
FieldScriptText_23A9AF: @ 0x0823A9AF
	.string "バトルチューブは　バトルフロンティアの\nちゅうおう　ひだりに　いちする\lポケモンの　かたちを　した　たてものです\pこちらでは　バトルゲーム　という\nイベントを　かいさい　しております！"
	.byte EOS
	.if (. - FieldScriptText_23A9AF) > 0x5d
	.error "FieldScriptText_23A9AF may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23A9AF) < 0x5d
	.space 0x5d - (. - FieldScriptText_23A9AF)
	.endif
	@ field-script:0x23A456 FieldScriptText_23AA0C
	.globl FieldScriptText_23AA0C
FieldScriptText_23AA0C: @ 0x0823AA0C
	.string "バトルピラミッドは　きょだいな\nピラミッドの　かたちをした　たてものです\pこちらでは　バトルアドベンチャー　という\nイベントを　かいさい　しております！"
	.byte EOS
	.if (. - FieldScriptText_23AA0C) > 0x4d
	.error "FieldScriptText_23AA0C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AA0C) < 0x4d
	.space 0x4d - (. - FieldScriptText_23AA0C)
	.endif
	@ field-script:0x23A464 FieldScriptText_23AA59
	.globl FieldScriptText_23AA59
FieldScriptText_23AA59: @ 0x0823AA59
	.string "ランキングホールは\nバトルタワーの　ちかくに　あります\pこちらは　バトルフロンティアで\nたたかった　トレーナーたちの\lもっとも　すばらしい　きろくを\lみることが　できます"
	.byte EOS
	.if (. - FieldScriptText_23AA59) > 0x56
	.error "FieldScriptText_23AA59 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AA59) < 0x56
	.space 0x56 - (. - FieldScriptText_23AA59)
	.endif
	@ field-script:0x23A472 FieldScriptText_23AAAF
	.globl FieldScriptText_23AAAF
FieldScriptText_23AAAF: @ 0x0823AAAF
	.string "ひきかえサービス　コーナーは\nバトルタワーの　ちかくに　あります\pこちらでは　バトルフロンティアの\nなかで　ためた　バトルポイントを\lすてきな　けいひんと\lこうかんする　ことが　できます！"
	.byte EOS
	.if (. - FieldScriptText_23AAAF) > 0x5f
	.error "FieldScriptText_23AAAF may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AAAF) < 0x5f
	.space 0x5f - (. - FieldScriptText_23AAAF)
	.endif
	@ field-script:0x23A48C FieldScriptText_23AB0E
	.globl FieldScriptText_23AB0E
FieldScriptText_23AB0E: @ 0x0823AB0E
	.string "こちらでは　バトルフロンティアに　ある\nすべての　しせつに　きょうつう　した\lちょうせんの　ための　きほんてきな\lルールを　せつめい　いたします！"
	.byte EOS
	.if (. - FieldScriptText_23AB0E) > 0x4a
	.error "FieldScriptText_23AB0E may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AB0E) < 0x4a
	.space 0x4a - (. - FieldScriptText_23AB0E)
	.endif
	@ field-script:0x23A499 FieldScriptText_23AB58
	.globl FieldScriptText_23AB58
FieldScriptText_23AB58: @ 0x0823AB58
	.string "どの　せつめいが　ききたいですか？"
	.byte EOS
	.if (. - FieldScriptText_23AB58) > 0x12
	.error "FieldScriptText_23AB58 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AB58) < 0x12
	.space 0x12 - (. - FieldScriptText_23AB58)
	.endif
	@ field-script:0x23A4F8 FieldScriptText_23AB6A
	.globl FieldScriptText_23AB6A
FieldScriptText_23AB6A: @ 0x0823AB6A
	.string "バトルフロンティアに　ある\nすべての　しせつの　ちょうせんは\lおおきく　レベル50の　コースと\lオープンレベルの　コースに　わかれています"
	.byte EOS
	.if (. - FieldScriptText_23AB6A) > 0x46
	.error "FieldScriptText_23AB6A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AB6A) < 0x46
	.space 0x46 - (. - FieldScriptText_23AB6A)
	.endif
	@ field-script:0x23A506 FieldScriptText_23ABB0
	.globl FieldScriptText_23ABB0
FieldScriptText_23ABB0: @ 0x0823ABB0
	.string "レベル50の　コースでは　なまえの　とおり\nレベル50までの　ポケモンを\lちょうせん　させることが　できます\pただし　レベル50より　ひくい　レベルの\nポケモンを　つれた　トレーナーが\lとうじょう　することは　ありません\lくれぐれも　ごちゅうい　ください\pなお　このコースが　バトルフロンティアの\nたたかいの　きほんと　なって　いますので\lぜひ　チャレンジして　みてください"
	.byte EOS
	.if (. - FieldScriptText_23ABB0) > 0xbc
	.error "FieldScriptText_23ABB0 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23ABB0) < 0xbc
	.space 0xbc - (. - FieldScriptText_23ABB0)
	.endif
	@ field-script:0x23A514 FieldScriptText_23AC6C
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_23AC6C
FieldScriptText_23AC6C: @ 0x0823AC6C
	.string "オープンレベルの　コースでは\nちょうせんに　さんかする　ポケモンの\lレベルに　せいげんが　ありません\pあなたの　ポケモンの　レベルに　あわせて\nたいせんする　トレーナーの　ポケモンの\lレベルが　かわります\pただし　レベル60より　ひくい　レベルの\nポケモンを　つれた　トレーナーが\lとうじょう　することは　ありません"
	.byte EOS
	.if (. - FieldScriptText_23AC6C) != 0x9f
	.error "FieldScriptText_23AC6C must retain its original byte length"
	.endif
	@ field-script:0x23A522 FieldScriptText_23AD0B
	.globl FieldScriptText_23AD0B
FieldScriptText_23AD0B: @ 0x0823AD0B
	.string "タマゴや　いちぶの　れいがいを\nのぞいて　ほとんどの　ポケモンが\lすべての　しせつに　ちょうせん　できます\pちょうせんの　ために\nひつような　ポケモンの　かずは\lしせつに　よって　ちがいます\pただし　どの　しせつでも\nおなじ　しゅるいの　ポケモンを\l2ひき　いじょう　さんか　させることは\lできませんので　ごちゅうい　ください"
	.byte EOS
	.if (. - FieldScriptText_23AD0B) > 0xa4
	.error "FieldScriptText_23AD0B may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AD0B) < 0xa4
	.space 0xa4 - (. - FieldScriptText_23AD0B)
	.endif
	@ field-script:0x23A530 FieldScriptText_23ADAF
	.globl FieldScriptText_23ADAF
FieldScriptText_23ADAF: @ 0x0823ADAF
	.string "バトルフロンティアの　しせつに\nポケモンを　ちょうせん　させるとき\pそれぞれの　ポケモンが\nおなじ　どうぐを　もつことは　できません\pちょうせん　させる　ポケモンには\nすべて　ちがう　どうぐを\lもたせて　おくように　してください"
	.byte EOS
	.if (. - FieldScriptText_23ADAF) > 0x73
	.error "FieldScriptText_23ADAF may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23ADAF) < 0x73
	.space 0x73 - (. - FieldScriptText_23ADAF)
	.endif
	@ field-script:0x23A54A FieldScriptText_23AE22
	.globl FieldScriptText_23AE22
FieldScriptText_23AE22: @ 0x0823AE22
	.string "こちらでは　フロンティアパスの\nせつめいを　いたします！"
	.byte EOS
	.if (. - FieldScriptText_23AE22) > 0x1d
	.error "FieldScriptText_23AE22 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AE22) < 0x1d
	.space 0x1d - (. - FieldScriptText_23AE22)
	.endif
	@ field-script:0x23A557 FieldScriptText_23AE3F
	.globl FieldScriptText_23AE3F
FieldScriptText_23AE3F: @ 0x0823AE3F
	.string "どの　せつめいが　ききたいですか？"
	.byte EOS
	.if (. - FieldScriptText_23AE3F) > 0x12
	.error "FieldScriptText_23AE3F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AE3F) < 0x12
	.space 0x12 - (. - FieldScriptText_23AE3F)
	.endif
	@ field-script:0x23A5A0 FieldScriptText_23AE51
	.globl FieldScriptText_23AE51
FieldScriptText_23AE51: @ 0x0823AE51
	.string "バトルフロンティアの　7つの　しせつで\nつよさを　みとめられた　トレーナーが\lそれぞれの　しせつの　シンボルを\lもらえることが　あります\pシンボルを　もらう　ためには\nなんにんも　トレーナーを　かちぬいたり\lなんども　せいは　したり……\pなかなか　たいへんな　みちのりですが\nぜひ　がんばって　くださいね！"
	.byte EOS
	.if (. - FieldScriptText_23AE51) > 0x9a
	.error "FieldScriptText_23AE51 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AE51) < 0x9a
	.space 0x9a - (. - FieldScriptText_23AE51)
	.endif
	@ field-script:0x23A5AE FieldScriptText_23AEEB
	.globl FieldScriptText_23AEEB
FieldScriptText_23AEEB: @ 0x0823AEEB
	.string "あなたの　たいせんを　ひとつだけ\nパスに　きろくする　ことが　できます\pおともだち　との　たいせんか\nバトルチューブ　バトルピラミッド　いがいの\lバトルフロンティアでの\lたいせんが　きろくできます\pたいせんが　おわった　ときに\nきろく　するか　どうかを　きめられます"
	.byte EOS
	.if (. - FieldScriptText_23AEEB) > 0x86
	.error "FieldScriptText_23AEEB may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AEEB) < 0x86
	.space 0x86 - (. - FieldScriptText_23AEEB)
	.endif
	@ field-script:0x23A5BC FieldScriptText_23AF71
	.globl FieldScriptText_23AF71
FieldScriptText_23AF71: @ 0x0823AF71
	.string "バトルポイントは\nバトルフロンティアで　すばらしい\lたたかいを　した　トレーナーに\lあたえられる　ごほうびです\pためた　ポイントは　ひきかえサービスで\nしょうひんと　ひきかえることが　できます"
	.byte EOS
	.if (. - FieldScriptText_23AF71) > 0x61
	.error "FieldScriptText_23AF71 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23AF71) < 0x61
	.space 0x61 - (. - FieldScriptText_23AF71)
	.endif
	@ Embedded ROM bytes: file offset 0x23AFD2, size 0x1C
	.byte 0x00, 0x0F, 0x00
	.4byte BattleFrontier_Lounge8_Text_WhatATrainerNeeds
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0xB8, 0xB0, 0x23, 0x08, 0x09, 0x02, 0x02
