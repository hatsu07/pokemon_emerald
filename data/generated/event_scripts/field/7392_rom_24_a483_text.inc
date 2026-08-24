	@ field-script:0x248B8A FieldScriptText_249CC4
	.globl gText_Rom_249CC4
gText_Rom_249CC4: @ 0x08249CC4
	.string "あなたの　ポケモンも　コンテストに\nさんか　させて　みませんか？{EOS}"
	.if (. - gText_Rom_249CC4) > 0x21
	.error "gText_Rom_249CC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249CC4) < 0x21
	.space 0x21 - (. - gText_Rom_249CC4)
	.endif
	@ field-script:0x248BC7 FieldScriptText_249CE5
	.globl gText_Rom_249CE5
gText_Rom_249CE5: @ 0x08249CE5
	.string "どの　せつめいを　ききますか？{EOS}"
	.if (. - gText_Rom_249CE5) > 0x10
	.error "gText_Rom_249CE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249CE5) < 0x10
	.space 0x10 - (. - gText_Rom_249CE5)
	.endif
	@ field-script:0x248C10 FieldScriptText_249CF5
	.globl gText_Rom_249CF5
gText_Rom_249CF5: @ 0x08249CF5
	.string "ポケモンコンテストは　4にんの　トレーナーが\n1ぴきずつ　ポケモンを　もちよって\l4ひきで　おこなわれます！\pコンテスト　には　1じ　しんさと\n2じ　しんさが　あります！\p1じ　しんさでは　かいじょうの\nおきゃくさまが　きにいった　ポケモンを\lとうひょう　します！\p2じ　しんさでは　ポケモンが　じゅんばんに\nとくいな　わざで　アピールを　します！\lしんさいんに　ちゅうもくされたり\lおきゃくさまに　わざを　きにいられたり……\lとにかく　たくさん　めだって　ください！\p1じしんさと　2じしんさの　けっかから\nそうごうポイントを　だして\lいちばん　たかかった　ポケモンが\lゆうしょう　できます！{EOS}"
	.if (. - gText_Rom_249CF5) > 0x12a
	.error "gText_Rom_249CF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249CF5) < 0x12a
	.space 0x12a - (. - gText_Rom_249CF5)
	.endif
	@ field-script:0x248C1E FieldScriptText_249E1F
	.globl gText_Rom_249E1F
gText_Rom_249E1F: @ 0x08249E1F
	.string "コンテストには　5しゅるい　あります！\pかっこよさ　うつくしさ　かわいさ\nかしこさ　そして　たくましさ\lいじょうの　5しゅるい　です！\pエントリー　する　ポケモンに\nピッタリの　コンテストを\lえらんで　あげて　くださいね！{EOS}"
	.if (. - gText_Rom_249E1F) > 0x70
	.error "gText_Rom_249E1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249E1F) < 0x70
	.space 0x70 - (. - gText_Rom_249E1F)
	.endif
	@ field-script:0x248C2C FieldScriptText_249E8F
	.globl gText_Rom_249E8F
gText_Rom_249E8F: @ 0x08249E8F
	.string "ポケモンコンテスト　には\nノーマルランク　スーパーランク\lハイパーランク　そしてマスターランク\lという　4つの　ランクが　あります\pノーマルランク　には　すべての\nポケモンが　でることが　できます\pノーマルランクで　ゆうしょう　できた\nポケモンは　おなじ　しゅるいの\lスーパーランクの　コンテストに　でられます\pおなじように　スーパーで　ゆうしょう　すれば\nハイパーに　ハイパーで　ゆうしょう　すれば\lマスターランクに　でられるのです\pマスターランクで　ゆうしょう　した\nポケモンは　なんどでも　マスターランクの\lコンテストに　でる　ことが　できます{EOS}"
	.if (. - gText_Rom_249E8F) > 0x114
	.error "gText_Rom_249E8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249E8F) < 0x114
	.space 0x114 - (. - gText_Rom_249E8F)
	.endif
	@ field-script:0x248C92 FieldScriptText_249FA3
	.globl gText_Rom_249FA3
gText_Rom_249FA3: @ 0x08249FA3
	.string "どの　ランクに　さんか　しますか？{EOS}"
	.if (. - gText_Rom_249FA3) > 0x12
	.error "gText_Rom_249FA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FA3) < 0x12
	.space 0x12 - (. - gText_Rom_249FA3)
	.endif
	@ field-script:0x248D11 FieldScriptText_249FB5
	.globl gText_Rom_249FB5
gText_Rom_249FB5: @ 0x08249FB5
	.string "どの　コンテストに　さんか　しますか？{EOS}"
	.if (. - gText_Rom_249FB5) > 0x14
	.error "gText_Rom_249FB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FB5) < 0x14
	.space 0x14 - (. - gText_Rom_249FB5)
	.endif
	@ field-script:0x248C44 FieldScriptText_249FC9
	.globl gText_Rom_249FC9
gText_Rom_249FC9: @ 0x08249FC9
	.string "どの　ポケモンを　さんか　させますか？{EOS}"
	.if (. - gText_Rom_249FC9) > 0x14
	.error "gText_Rom_249FC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FC9) < 0x14
	.space 0x14 - (. - gText_Rom_249FC9)
	.endif
	@ field-script:0x2070A2 FieldScriptText_249FDD
	.globl gText_Rom_249FDD
gText_Rom_249FDD: @ 0x08249FDD
	.string "もうしわけ　ないのですが\nおきゃくさまの　ポケモンですと\lこのランクには　まだ　しゅつじょう\lできないようです…{EOS}"
	.if (. - gText_Rom_249FDD) > 0x39
	.error "gText_Rom_249FDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FDD) < 0x39
	.space 0x39 - (. - gText_Rom_249FDD)
	.endif
	@ field-script:0x248D9A FieldScriptText_24A016
	.globl gText_Rom_24A016
gText_Rom_24A016: @ 0x0824A016
	.string "ごめんなさい！\nタマゴは　しゅつじょう　できないんです……{EOS}"
	.if (. - gText_Rom_24A016) > 0x1e
	.error "gText_Rom_24A016 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A016) < 0x1e
	.space 0x1e - (. - gText_Rom_24A016)
	.endif
	@ field-script:0x248DA9 FieldScriptText_24A034
	.globl gText_Rom_24A034
gText_Rom_24A034: @ 0x0824A034
	.string "そちらの　ポケモンは　げんきがない\nようなので　しゅつじょう　できないです……{EOS}"
	.if (. - gText_Rom_24A034) > 0x28
	.error "gText_Rom_24A034 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A034) < 0x28
	.space 0x28 - (. - gText_Rom_24A034)
	.endif
	@ field-script:0x248D76 FieldScriptText_24A05C
	.globl gText_Rom_24A05C
gText_Rom_24A05C: @ 0x0824A05C
	.string "あら　そちらの　リボンは……\pおきゃくさまの　ポケモンは　もう\nこの　コンテストで　ゆうしょう　したことが\lあるのですね…　それでも　いいですか？{EOS}"
	.if (. - gText_Rom_24A05C) > 0x4a
	.error "gText_Rom_24A05C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A05C) < 0x4a
	.space 0x4a - (. - gText_Rom_24A05C)
	.endif
	@ field-script:0x248D52 FieldScriptText_24A0A6
	.globl gText_Rom_24A0A6
gText_Rom_24A0A6: @ 0x0824A0A6
	.string "そちらの　ポケモンで　よろしいですか？{EOS}"
	.if (. - gText_Rom_24A0A6) > 0x14
	.error "gText_Rom_24A0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A0A6) < 0x14
	.space 0x14 - (. - gText_Rom_24A0A6)
	.endif
	@ field-script:0x248DB8 FieldScriptText_24A0BA
	.globl gText_Rom_24A0BA
gText_Rom_24A0BA: @ 0x0824A0BA
	.string "それでは　おきゃくさまの　ポケモンを\nエントリー　します！\lおきゃくさまの　エントリーナンバーは\l4ばん　に　なります！\lコンテストは　すぐに　はじまります！{EOS}"
	.if (. - gText_Rom_24A0BA) > 0x50
	.error "gText_Rom_24A0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A0BA) < 0x50
	.space 0x50 - (. - gText_Rom_24A0BA)
	.endif
	@ field-script:0x206D8E FieldScriptText_24A10A
	.globl gText_Rom_24A10A
gText_Rom_24A10A: @ 0x0824A10A
	.string "それでは　こちらへ　どうぞ！\nがんばって　くださいね！{EOS}"
	.if (. - gText_Rom_24A10A) > 0x1c
	.error "gText_Rom_24A10A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A10A) < 0x1c
	.space 0x1c - (. - gText_Rom_24A10A)
	.endif
	@ field-script:0x248B44 FieldScriptText_24A126
	.globl gText_Rom_24A126
gText_Rom_24A126: @ 0x0824A126
	.string "コンテストでの　ゆうしょう\nおめでとう　ございます！\pしょうひんは　こちらで　おあずかり\nして　ありますよ！　さあ　どうぞ！{EOS}"
	.if (. - gText_Rom_24A126) > 0x3f
	.error "gText_Rom_24A126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A126) < 0x3f
	.space 0x3f - (. - gText_Rom_24A126)
	.endif
	@ field-script:0x248B81 FieldScriptText_24A165
	.globl gText_Rom_24A165
gText_Rom_24A165: @ 0x0824A165
	.string "それでは　また　あとで\nとりに　きて　くださいね！{EOS}"
	.if (. - gText_Rom_24A165) > 0x1a
	.error "gText_Rom_24A165 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A165) < 0x1a
	.space 0x1a - (. - gText_Rom_24A165)
	.endif
	@ field-script:0x248EEE FieldScriptText_24A17F
	.globl gText_Rom_24A17F
gText_Rom_24A17F: @ 0x0824A17F
	.string "しかい『はい！　これより\n{0xFD}{0x04}　ランクの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！\pしゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！{EOS}"
	.if (. - gText_Rom_24A17F) > 0x4e
	.error "gText_Rom_24A17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A17F) < 0x4e
	.space 0x4e - (. - gText_Rom_24A17F)
	.endif
	@ field-script:0x248F07 FieldScriptText_24A1CD
	.globl gText_Rom_24A1CD
gText_Rom_24A1CD: @ 0x0824A1CD
	.string "しかい『はい！　これより\nおともだち　4にん　つうしんの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！\pしゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！{EOS}"
	.if (. - gText_Rom_24A1CD) > 0x56
	.error "gText_Rom_24A1CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A1CD) < 0x56
	.space 0x56 - (. - gText_Rom_24A1CD)
	.endif
	@ field-script:0x249052 FieldScriptText_24A223
	.globl gText_Rom_24A223
gText_Rom_24A223: @ 0x0824A223
	.string "しかい『エントリーナンバー　{0xFD}{0x03}ばん！\n{0xFD}{0x02}さんの　{0xFD}{0x04}　です！{EOS}"
	.if (. - gText_Rom_24A223) > 0x21
	.error "gText_Rom_24A223 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A223) < 0x21
	.space 0x21 - (. - gText_Rom_24A223)
	.endif
	@ field-script:0x2490A8 FieldScriptText_24A244
	.globl gText_Rom_24A244
gText_Rom_24A244: @ 0x0824A244
	.string "しかい『さあ\nポケモンの　しょうかいが　おわりました\l1じ　しんさに　はいりましょう！\pかいじょうの　おきゃくさまに　よる\nポケモンの　にんき　とうひょうです！\pでは　さっそく　はじめましょう！\nとうひょう　おねがいします！{EOS}"
	.if (. - gText_Rom_24A244) > 0x71
	.error "gText_Rom_24A244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A244) < 0x71
	.space 0x71 - (. - gText_Rom_24A244)
	.endif
	@ field-script:0x2490F4 FieldScriptText_24A2B5
	.globl gText_Rom_24A2B5
gText_Rom_24A2B5: @ 0x0824A2B5
	.string "　　　　とうひょう　ちゅう…{EOS}"
	.if (. - gText_Rom_24A2B5) > 0xf
	.error "gText_Rom_24A2B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A2B5) < 0xf
	.space 0xf - (. - gText_Rom_24A2B5)
	.endif
	@ field-script:0x24968F FieldScriptText_24A2C4
	.globl gText_Rom_24A2C4
gText_Rom_24A2C4: @ 0x0824A2C4
	.string "さあ！\nいま　とうひょうが　おわりました！\lしゅうけいを　している　あいだに\l2じ　しんさに　うつりましょう！\p2じ　しんさは　いよいよ\nおまちかねの　アピールタイム！\lわざで　アピール　しまくりましょうー！\pでは　はりきって　どうぞ！\nレッツ！　アピール！{EOS}"
	.if (. - gText_Rom_24A2C4) > 0x82
	.error "gText_Rom_24A2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A2C4) < 0x82
	.space 0x82 - (. - gText_Rom_24A2C4)
	.endif
	@ field-script:0x249737 FieldScriptText_24A346
	.globl gText_Rom_24A346
gText_Rom_24A346: @ 0x0824A346
	.string "しかい『はあい　そこまでえーー！{EOS}"
	.if (. - gText_Rom_24A346) > 0x11
	.error "gText_Rom_24A346 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A346) < 0x11
	.space 0x11 - (. - gText_Rom_24A346)
	.endif
	@ field-script:0x24975A FieldScriptText_24A357
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24A357
gText_Rom_24A357: @ 0x0824A357
	.string "みなさん　すばらしい　アピールでした！\nこれで　すべて　しゅうりょう　です！\lおつかれさまでした！{EOS}"
	.if (. - gText_Rom_24A357) != 0x32
	.error "gText_Rom_24A357 must retain its original byte length"
	.endif
	.globl gText_Rom_24A37E
	.set gText_Rom_24A37E, gText_Rom_24A357 + 0x27
	@ field-script:0x24977D FieldScriptText_24A389
	.globl gText_Rom_24A389
gText_Rom_24A389: @ 0x0824A389
	.string "さて　のこるは\nドキドキの　けっかはっぴょう　ですね！\lはっぴょうは　しんさいんの　ほうから\lおこなわれます！{EOS}"
	.if (. - gText_Rom_24A389) > 0x38
	.error "gText_Rom_24A389 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A389) < 0x38
	.space 0x38 - (. - gText_Rom_24A389)
	.endif
	@ field-script:0x2497A0 FieldScriptText_24A3C1
	.globl gText_Rom_24A3C1
gText_Rom_24A3C1: @ 0x0824A3C1
	.string "しんさいん『では…　はっぴょう　します！{EOS}"
	.if (. - gText_Rom_24A3C1) > 0x15
	.error "gText_Rom_24A3C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A3C1) < 0x15
	.space 0x15 - (. - gText_Rom_24A3C1)
	.endif
	@ field-script:0x24983C FieldScriptText_24A3D6
	.globl gText_Rom_24A3D6
gText_Rom_24A3D6: @ 0x0824A3D6
	.string "しかい『エントリーナンバー　{0xFD}{0x03}ばん\n{0xFD}{0x04}さん！　そして　{0xFD}{0x02}！\lおめでとう　ございます！{EOS}"
	.if (. - gText_Rom_24A3D6) > 0x2e
	.error "gText_Rom_24A3D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A3D6) < 0x2e
	.space 0x2e - (. - gText_Rom_24A3D6)
	.endif
	@ field-script:0x2499B4 FieldScriptText_24A404
	.globl gText_Rom_24A404
gText_Rom_24A404: @ 0x0824A404
	.string "しかい『おめでとう　ございます！\nまた　さんか　してくださいね！{EOS}"
	.if (. - gText_Rom_24A404) > 0x21
	.error "gText_Rom_24A404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A404) < 0x21
	.space 0x21 - (. - gText_Rom_24A404)
	.endif
	@ field-script:0x249981 FieldScriptText_24A425
	.globl gText_Rom_24A425
gText_Rom_24A425: @ 0x0824A425
	.string "しかい『さあ！\nしょうひんを　おうけとり　ください！{EOS}"
	.if (. - gText_Rom_24A425) > 0x1b
	.error "gText_Rom_24A425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A425) < 0x1b
	.space 0x1b - (. - gText_Rom_24A425)
	.endif
	@ field-script:0x249B19 FieldScriptText_24A440
	.globl gText_Rom_24A440
gText_Rom_24A440: @ 0x0824A440
	.string "しょうひんと　して\nこの　リボンを　おうけとり　ください！{EOS}"
	.if (. - gText_Rom_24A440) > 0x1e
	.error "gText_Rom_24A440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A440) < 0x1e
	.space 0x1e - (. - gText_Rom_24A440)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:992 LilycoveCity_ContestLobby_Text_ReceivedARibbon
	.globl gText_Rom_24A45E
gText_Rom_24A45E: @ 0x0824A45E
	.string "{PLAYER}は リボンを もらった!{EOS}"
	.if (. - gText_Rom_24A45E) > 0xf
	.error "gText_Rom_24A45E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A45E) < 0xf
	.space 0xf - (. - gText_Rom_24A45E)
	.endif
	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:995 LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon
	.globl gText_Rom_24A46D
gText_Rom_24A46D: @ 0x0824A46D
	.string "{PLAYER}は リボンを\n{STR_VAR_1}に つけて あげた!{EOS}"
	.if (. - gText_Rom_24A46D) > 0x16
	.error "gText_Rom_24A46D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A46D) < 0x16
	.space 0x16 - (. - gText_Rom_24A46D)
	.endif
	@ field-script:0x249ADF FieldScriptText_24A483
	.globl gText_Rom_24A483
gText_Rom_24A483: @ 0x0824A483
	.string "それでは　しょうひんは　あとで\nうけつけで　おうけとり　ください！\lまたの　さんかを　おまち　してます！{EOS}"
	.if (. - gText_Rom_24A483) > 0x35
	.error "gText_Rom_24A483 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A483) < 0x35
	.space 0x35 - (. - gText_Rom_24A483)
	.endif
	@ analyzed canonical ROM range 0x0824A4B8-0x0824A50E
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0824A4B8: @ 0x0824A4B8
EventText_JP_0824A4B8: @ 0x0824A4B8
	.string "こちらは　ポケモンコンテストの\n4めいさま　せんようの　うけつけです!\pおともだちが　あと3めい　そろえば\n4にんで　おなじ　コンテストに　でられます!\lさんか　しますか?{EOS}"
