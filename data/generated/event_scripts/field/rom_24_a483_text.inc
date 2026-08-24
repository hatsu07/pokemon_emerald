	@ field-script:0x248B8A FieldScriptText_249CC4
	.globl FieldScriptText_249CC4
FieldScriptText_249CC4: @ 0x08249CC4
	.string "あなたの　ポケモンも　コンテストに\nさんか　させて　みませんか？{EOS}"
	.if (. - FieldScriptText_249CC4) > 0x21
	.error "FieldScriptText_249CC4 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249CC4) < 0x21
	.space 0x21 - (. - FieldScriptText_249CC4)
	.endif
	@ field-script:0x248BC7 FieldScriptText_249CE5
	.globl FieldScriptText_249CE5
FieldScriptText_249CE5: @ 0x08249CE5
	.string "どの　せつめいを　ききますか？{EOS}"
	.if (. - FieldScriptText_249CE5) > 0x10
	.error "FieldScriptText_249CE5 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249CE5) < 0x10
	.space 0x10 - (. - FieldScriptText_249CE5)
	.endif
	@ field-script:0x248C10 FieldScriptText_249CF5
	.globl FieldScriptText_249CF5
FieldScriptText_249CF5: @ 0x08249CF5
	.string "ポケモンコンテストは　4にんの　トレーナーが\n1ぴきずつ　ポケモンを　もちよって\l4ひきで　おこなわれます！\pコンテスト　には　1じ　しんさと\n2じ　しんさが　あります！\p1じ　しんさでは　かいじょうの\nおきゃくさまが　きにいった　ポケモンを\lとうひょう　します！\p2じ　しんさでは　ポケモンが　じゅんばんに\nとくいな　わざで　アピールを　します！\lしんさいんに　ちゅうもくされたり\lおきゃくさまに　わざを　きにいられたり……\lとにかく　たくさん　めだって　ください！\p1じしんさと　2じしんさの　けっかから\nそうごうポイントを　だして\lいちばん　たかかった　ポケモンが\lゆうしょう　できます！{EOS}"
	.if (. - FieldScriptText_249CF5) > 0x12a
	.error "FieldScriptText_249CF5 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249CF5) < 0x12a
	.space 0x12a - (. - FieldScriptText_249CF5)
	.endif
	@ field-script:0x248C1E FieldScriptText_249E1F
	.globl FieldScriptText_249E1F
FieldScriptText_249E1F: @ 0x08249E1F
	.string "コンテストには　5しゅるい　あります！\pかっこよさ　うつくしさ　かわいさ\nかしこさ　そして　たくましさ\lいじょうの　5しゅるい　です！\pエントリー　する　ポケモンに\nピッタリの　コンテストを\lえらんで　あげて　くださいね！{EOS}"
	.if (. - FieldScriptText_249E1F) > 0x70
	.error "FieldScriptText_249E1F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249E1F) < 0x70
	.space 0x70 - (. - FieldScriptText_249E1F)
	.endif
	@ field-script:0x248C2C FieldScriptText_249E8F
	.globl FieldScriptText_249E8F
FieldScriptText_249E8F: @ 0x08249E8F
	.string "ポケモンコンテスト　には\nノーマルランク　スーパーランク\lハイパーランク　そしてマスターランク\lという　4つの　ランクが　あります\pノーマルランク　には　すべての\nポケモンが　でることが　できます\pノーマルランクで　ゆうしょう　できた\nポケモンは　おなじ　しゅるいの\lスーパーランクの　コンテストに　でられます\pおなじように　スーパーで　ゆうしょう　すれば\nハイパーに　ハイパーで　ゆうしょう　すれば\lマスターランクに　でられるのです\pマスターランクで　ゆうしょう　した\nポケモンは　なんどでも　マスターランクの\lコンテストに　でる　ことが　できます{EOS}"
	.if (. - FieldScriptText_249E8F) > 0x114
	.error "FieldScriptText_249E8F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249E8F) < 0x114
	.space 0x114 - (. - FieldScriptText_249E8F)
	.endif
	@ field-script:0x248C92 FieldScriptText_249FA3
	.globl FieldScriptText_249FA3
FieldScriptText_249FA3: @ 0x08249FA3
	.string "どの　ランクに　さんか　しますか？{EOS}"
	.if (. - FieldScriptText_249FA3) > 0x12
	.error "FieldScriptText_249FA3 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249FA3) < 0x12
	.space 0x12 - (. - FieldScriptText_249FA3)
	.endif
	@ field-script:0x248D11 FieldScriptText_249FB5
	.globl FieldScriptText_249FB5
FieldScriptText_249FB5: @ 0x08249FB5
	.string "どの　コンテストに　さんか　しますか？{EOS}"
	.if (. - FieldScriptText_249FB5) > 0x14
	.error "FieldScriptText_249FB5 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249FB5) < 0x14
	.space 0x14 - (. - FieldScriptText_249FB5)
	.endif
	@ field-script:0x248C44 FieldScriptText_249FC9
	.globl FieldScriptText_249FC9
FieldScriptText_249FC9: @ 0x08249FC9
	.string "どの　ポケモンを　さんか　させますか？{EOS}"
	.if (. - FieldScriptText_249FC9) > 0x14
	.error "FieldScriptText_249FC9 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249FC9) < 0x14
	.space 0x14 - (. - FieldScriptText_249FC9)
	.endif
	@ field-script:0x2070A2 FieldScriptText_249FDD
	.globl FieldScriptText_249FDD
FieldScriptText_249FDD: @ 0x08249FDD
	.string "もうしわけ　ないのですが\nおきゃくさまの　ポケモンですと\lこのランクには　まだ　しゅつじょう\lできないようです…{EOS}"
	.if (. - FieldScriptText_249FDD) > 0x39
	.error "FieldScriptText_249FDD may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_249FDD) < 0x39
	.space 0x39 - (. - FieldScriptText_249FDD)
	.endif
	@ field-script:0x248D9A FieldScriptText_24A016
	.globl FieldScriptText_24A016
FieldScriptText_24A016: @ 0x0824A016
	.string "ごめんなさい！\nタマゴは　しゅつじょう　できないんです……{EOS}"
	.if (. - FieldScriptText_24A016) > 0x1e
	.error "FieldScriptText_24A016 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A016) < 0x1e
	.space 0x1e - (. - FieldScriptText_24A016)
	.endif
	@ field-script:0x248DA9 FieldScriptText_24A034
	.globl FieldScriptText_24A034
FieldScriptText_24A034: @ 0x0824A034
	.string "そちらの　ポケモンは　げんきがない\nようなので　しゅつじょう　できないです……{EOS}"
	.if (. - FieldScriptText_24A034) > 0x28
	.error "FieldScriptText_24A034 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A034) < 0x28
	.space 0x28 - (. - FieldScriptText_24A034)
	.endif
	@ field-script:0x248D76 FieldScriptText_24A05C
	.globl FieldScriptText_24A05C
FieldScriptText_24A05C: @ 0x0824A05C
	.string "あら　そちらの　リボンは……\pおきゃくさまの　ポケモンは　もう\nこの　コンテストで　ゆうしょう　したことが\lあるのですね…　それでも　いいですか？{EOS}"
	.if (. - FieldScriptText_24A05C) > 0x4a
	.error "FieldScriptText_24A05C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A05C) < 0x4a
	.space 0x4a - (. - FieldScriptText_24A05C)
	.endif
	@ field-script:0x248D52 FieldScriptText_24A0A6
	.globl FieldScriptText_24A0A6
FieldScriptText_24A0A6: @ 0x0824A0A6
	.string "そちらの　ポケモンで　よろしいですか？{EOS}"
	.if (. - FieldScriptText_24A0A6) > 0x14
	.error "FieldScriptText_24A0A6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A0A6) < 0x14
	.space 0x14 - (. - FieldScriptText_24A0A6)
	.endif
	@ field-script:0x248DB8 FieldScriptText_24A0BA
	.globl FieldScriptText_24A0BA
FieldScriptText_24A0BA: @ 0x0824A0BA
	.string "それでは　おきゃくさまの　ポケモンを\nエントリー　します！\lおきゃくさまの　エントリーナンバーは\l4ばん　に　なります！\lコンテストは　すぐに　はじまります！{EOS}"
	.if (. - FieldScriptText_24A0BA) > 0x50
	.error "FieldScriptText_24A0BA may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A0BA) < 0x50
	.space 0x50 - (. - FieldScriptText_24A0BA)
	.endif
	@ field-script:0x206D8E FieldScriptText_24A10A
	.globl FieldScriptText_24A10A
FieldScriptText_24A10A: @ 0x0824A10A
	.string "それでは　こちらへ　どうぞ！\nがんばって　くださいね！{EOS}"
	.if (. - FieldScriptText_24A10A) > 0x1c
	.error "FieldScriptText_24A10A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A10A) < 0x1c
	.space 0x1c - (. - FieldScriptText_24A10A)
	.endif
	@ field-script:0x248B44 FieldScriptText_24A126
	.globl FieldScriptText_24A126
FieldScriptText_24A126: @ 0x0824A126
	.string "コンテストでの　ゆうしょう\nおめでとう　ございます！\pしょうひんは　こちらで　おあずかり\nして　ありますよ！　さあ　どうぞ！{EOS}"
	.if (. - FieldScriptText_24A126) > 0x3f
	.error "FieldScriptText_24A126 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A126) < 0x3f
	.space 0x3f - (. - FieldScriptText_24A126)
	.endif
	@ field-script:0x248B81 FieldScriptText_24A165
	.globl FieldScriptText_24A165
FieldScriptText_24A165: @ 0x0824A165
	.string "それでは　また　あとで\nとりに　きて　くださいね！{EOS}"
	.if (. - FieldScriptText_24A165) > 0x1a
	.error "FieldScriptText_24A165 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A165) < 0x1a
	.space 0x1a - (. - FieldScriptText_24A165)
	.endif
	@ field-script:0x248EEE FieldScriptText_24A17F
	.globl FieldScriptText_24A17F
FieldScriptText_24A17F: @ 0x0824A17F
	.string "しかい『はい！　これより\n{0xFD}{0x04}　ランクの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！\pしゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！{EOS}"
	.if (. - FieldScriptText_24A17F) > 0x4e
	.error "FieldScriptText_24A17F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A17F) < 0x4e
	.space 0x4e - (. - FieldScriptText_24A17F)
	.endif
	@ field-script:0x248F07 FieldScriptText_24A1CD
	.globl FieldScriptText_24A1CD
FieldScriptText_24A1CD: @ 0x0824A1CD
	.string "しかい『はい！　これより\nおともだち　4にん　つうしんの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！\pしゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！{EOS}"
	.if (. - FieldScriptText_24A1CD) > 0x56
	.error "FieldScriptText_24A1CD may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A1CD) < 0x56
	.space 0x56 - (. - FieldScriptText_24A1CD)
	.endif
	@ field-script:0x249052 FieldScriptText_24A223
	.globl FieldScriptText_24A223
FieldScriptText_24A223: @ 0x0824A223
	.string "しかい『エントリーナンバー　{0xFD}{0x03}ばん！\n{0xFD}{0x02}さんの　{0xFD}{0x04}　です！{EOS}"
	.if (. - FieldScriptText_24A223) > 0x21
	.error "FieldScriptText_24A223 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A223) < 0x21
	.space 0x21 - (. - FieldScriptText_24A223)
	.endif
	@ field-script:0x2490A8 FieldScriptText_24A244
	.globl FieldScriptText_24A244
FieldScriptText_24A244: @ 0x0824A244
	.string "しかい『さあ\nポケモンの　しょうかいが　おわりました\l1じ　しんさに　はいりましょう！\pかいじょうの　おきゃくさまに　よる\nポケモンの　にんき　とうひょうです！\pでは　さっそく　はじめましょう！\nとうひょう　おねがいします！{EOS}"
	.if (. - FieldScriptText_24A244) > 0x71
	.error "FieldScriptText_24A244 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A244) < 0x71
	.space 0x71 - (. - FieldScriptText_24A244)
	.endif
	@ field-script:0x2490F4 FieldScriptText_24A2B5
	.globl FieldScriptText_24A2B5
FieldScriptText_24A2B5: @ 0x0824A2B5
	.string "　　　　とうひょう　ちゅう…{EOS}"
	.if (. - FieldScriptText_24A2B5) > 0xf
	.error "FieldScriptText_24A2B5 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A2B5) < 0xf
	.space 0xf - (. - FieldScriptText_24A2B5)
	.endif
	@ field-script:0x24968F FieldScriptText_24A2C4
	.globl FieldScriptText_24A2C4
FieldScriptText_24A2C4: @ 0x0824A2C4
	.string "さあ！\nいま　とうひょうが　おわりました！\lしゅうけいを　している　あいだに\l2じ　しんさに　うつりましょう！\p2じ　しんさは　いよいよ\nおまちかねの　アピールタイム！\lわざで　アピール　しまくりましょうー！\pでは　はりきって　どうぞ！\nレッツ！　アピール！{EOS}"
	.if (. - FieldScriptText_24A2C4) > 0x82
	.error "FieldScriptText_24A2C4 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A2C4) < 0x82
	.space 0x82 - (. - FieldScriptText_24A2C4)
	.endif
	@ field-script:0x249737 FieldScriptText_24A346
	.globl FieldScriptText_24A346
FieldScriptText_24A346: @ 0x0824A346
	.string "しかい『はあい　そこまでえーー！{EOS}"
	.if (. - FieldScriptText_24A346) > 0x11
	.error "FieldScriptText_24A346 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A346) < 0x11
	.space 0x11 - (. - FieldScriptText_24A346)
	.endif
	@ field-script:0x24975A FieldScriptText_24A357
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_24A357
FieldScriptText_24A357: @ 0x0824A357
	.string "みなさん　すばらしい　アピールでした！\nこれで　すべて　しゅうりょう　です！\lおつかれさまでした！{EOS}"
	.if (. - FieldScriptText_24A357) != 0x32
	.error "FieldScriptText_24A357 must retain its original byte length"
	.endif
	@ field-script:0x24977D FieldScriptText_24A389
	.globl FieldScriptText_24A389
FieldScriptText_24A389: @ 0x0824A389
	.string "さて　のこるは\nドキドキの　けっかはっぴょう　ですね！\lはっぴょうは　しんさいんの　ほうから\lおこなわれます！{EOS}"
	.if (. - FieldScriptText_24A389) > 0x38
	.error "FieldScriptText_24A389 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A389) < 0x38
	.space 0x38 - (. - FieldScriptText_24A389)
	.endif
	@ field-script:0x2497A0 FieldScriptText_24A3C1
	.globl FieldScriptText_24A3C1
FieldScriptText_24A3C1: @ 0x0824A3C1
	.string "しんさいん『では…　はっぴょう　します！{EOS}"
	.if (. - FieldScriptText_24A3C1) > 0x15
	.error "FieldScriptText_24A3C1 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A3C1) < 0x15
	.space 0x15 - (. - FieldScriptText_24A3C1)
	.endif
	@ field-script:0x24983C FieldScriptText_24A3D6
	.globl FieldScriptText_24A3D6
FieldScriptText_24A3D6: @ 0x0824A3D6
	.string "しかい『エントリーナンバー　{0xFD}{0x03}ばん\n{0xFD}{0x04}さん！　そして　{0xFD}{0x02}！\lおめでとう　ございます！{EOS}"
	.if (. - FieldScriptText_24A3D6) > 0x2e
	.error "FieldScriptText_24A3D6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A3D6) < 0x2e
	.space 0x2e - (. - FieldScriptText_24A3D6)
	.endif
	@ field-script:0x2499B4 FieldScriptText_24A404
	.globl FieldScriptText_24A404
FieldScriptText_24A404: @ 0x0824A404
	.string "しかい『おめでとう　ございます！\nまた　さんか　してくださいね！{EOS}"
	.if (. - FieldScriptText_24A404) > 0x21
	.error "FieldScriptText_24A404 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A404) < 0x21
	.space 0x21 - (. - FieldScriptText_24A404)
	.endif
	@ field-script:0x249981 FieldScriptText_24A425
	.globl FieldScriptText_24A425
FieldScriptText_24A425: @ 0x0824A425
	.string "しかい『さあ！\nしょうひんを　おうけとり　ください！{EOS}"
	.if (. - FieldScriptText_24A425) > 0x1b
	.error "FieldScriptText_24A425 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A425) < 0x1b
	.space 0x1b - (. - FieldScriptText_24A425)
	.endif
	@ field-script:0x249B19 FieldScriptText_24A440
	.globl FieldScriptText_24A440
FieldScriptText_24A440: @ 0x0824A440
	.string "しょうひんと　して\nこの　リボンを　おうけとり　ください！{EOS}"
	.if (. - FieldScriptText_24A440) > 0x1e
	.error "FieldScriptText_24A440 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A440) < 0x1e
	.space 0x1e - (. - FieldScriptText_24A440)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:992 LilycoveCity_ContestLobby_Text_ReceivedARibbon
	.globl LilycoveCity_ContestLobby_Text_ReceivedARibbon_Copy_Data
LilycoveCity_ContestLobby_Text_ReceivedARibbon_Copy_Data: @ 0x0824A45E
	.string "{PLAYER}は リボンを もらった!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_ReceivedARibbon_Copy_Data) > 0xf
	.error "LilycoveCity_ContestLobby_Text_ReceivedARibbon_Copy_Data may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_ReceivedARibbon_Copy_Data) < 0xf
	.space 0xf - (. - LilycoveCity_ContestLobby_Text_ReceivedARibbon_Copy_Data)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:995 LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon
	.globl LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon_Copy_Data
LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon_Copy_Data: @ 0x0824A46D
	.string "{PLAYER}は リボンを\n{STR_VAR_1}に つけて あげた!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon_Copy_Data) > 0x16
	.error "LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon_Copy_Data may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon_Copy_Data) < 0x16
	.space 0x16 - (. - LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon_Copy_Data)
	.endif
	@ field-script:0x249ADF FieldScriptText_24A483
	.globl FieldScriptText_24A483
FieldScriptText_24A483: @ 0x0824A483
	.string "それでは　しょうひんは　あとで\nうけつけで　おうけとり　ください！\lまたの　さんかを　おまち　してます！{EOS}"
	.if (. - FieldScriptText_24A483) > 0x35
	.error "FieldScriptText_24A483 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A483) < 0x35
	.space 0x35 - (. - FieldScriptText_24A483)
	.endif
	@ analyzed canonical ROM range 0x0824A4B8-0x0824A50E
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0824A4B8: @ 0x0824A4B8
EventText_JP_0824A4B8: @ 0x0824A4B8
	.string "こちらは　ポケモンコンテストの\n4めいさま　せんようの　うけつけです!\pおともだちが　あと3めい　そろえば\n4にんで　おなじ　コンテストに　でられます!\lさんか　しますか?{EOS}"
