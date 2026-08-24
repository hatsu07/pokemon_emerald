	@ field-script:0x2071E4 FieldScriptText_24A6AA
	.globl gText_Rom_24A6AA
gText_Rom_24A6AA: @ 0x0824A6AA
	.string "それでは　おきゃくさまの　ポケモンを\nエントリー　します！\pおきゃくさまの　エントリーナンバーは\n{0xFD}{0x03}ばん　に　なります！{EOS}"
	.if (. - gText_Rom_24A6AA) > 0x3e
	.error "gText_Rom_24A6AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A6AA) < 0x3e
	.space 0x3e - (. - gText_Rom_24A6AA)
	.endif
	@ field-script:0x20730A FieldScriptText_24A6E8
	.globl gText_Rom_24A6E8
gText_Rom_24A6E8: @ 0x0824A6E8
	.string "コンテストは　すぐに　はじまります！{EOS}"
	.if (. - gText_Rom_24A6E8) > 0x13
	.error "gText_Rom_24A6E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A6E8) < 0x13
	.space 0x13 - (. - gText_Rom_24A6E8)
	.endif
	@ field-script:0x206ECD FieldScriptText_24A6FB
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24A6FB
gText_Rom_24A6FB: @ 0x0824A6FB
	.string "ポケモン　コンテスト\nつうしん　うけつけへ　ようこそ！\pこちらでは　ともだちと\nおなじ　コンテストに　でられます{EOS}"
	.if (. - gText_Rom_24A6FB) != 0x39
	.error "gText_Rom_24A6FB must retain its original byte length"
	.endif
	.globl gText_Rom_24A72E
	.set gText_Rom_24A72E, gText_Rom_24A6FB + 0x33
	@ field-script:0x206FCE FieldScriptText_24A734
	.globl gText_Rom_24A734
gText_Rom_24A734: @ 0x0824A734
	.string "どの　せつめいを　ききますか？{EOS}"
	.if (. - gText_Rom_24A734) > 0x10
	.error "gText_Rom_24A734 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A734) < 0x10
	.space 0x10 - (. - gText_Rom_24A734)
	.endif
	@ field-script:0x206EDA FieldScriptText_24A744
	.globl gText_Rom_24A744
gText_Rom_24A744: @ 0x0824A744
	.string "コンテストに\nさんか　しますか？{EOS}"
	.if (. - gText_Rom_24A744) > 0x11
	.error "gText_Rom_24A744 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A744) < 0x11
	.space 0x11 - (. - gText_Rom_24A744)
	.endif
	@ field-script:0x206F9D FieldScriptText_24A755
	.globl gText_Rom_24A755
gText_Rom_24A755: @ 0x0824A755
	.string "どの　コンテストに　さんか　しますか？{EOS}"
	.if (. - gText_Rom_24A755) > 0x14
	.error "gText_Rom_24A755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A755) < 0x14
	.space 0x14 - (. - gText_Rom_24A755)
	.endif
	@ field-script:0x2070BE FieldScriptText_24A769
	.globl gText_Rom_24A769
gText_Rom_24A769: @ 0x0824A769
	.string "そちらの　ポケモンは　げんきがない\nようなので　しゅつじょう　できないです…{EOS}"
	.if (. - gText_Rom_24A769) > 0x27
	.error "gText_Rom_24A769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A769) < 0x27
	.space 0x27 - (. - gText_Rom_24A769)
	.endif
	@ field-script:0x2070B0 FieldScriptText_24A790
	.globl gText_Rom_24A790
gText_Rom_24A790: @ 0x0824A790
	.string "ごめんなさい！\nタマゴは　コンテストに　でられないんです…{EOS}"
	.if (. - gText_Rom_24A790) > 0x1e
	.error "gText_Rom_24A790 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A790) < 0x1e
	.space 0x1e - (. - gText_Rom_24A790)
	.endif
	@ field-script:0x20704E FieldScriptText_24A7AE
	.globl gText_Rom_24A7AE
gText_Rom_24A7AE: @ 0x0824A7AE
	.string "どの　ポケモンを　さんか　させますか？{EOS}"
	.if (. - gText_Rom_24A7AE) > 0x14
	.error "gText_Rom_24A7AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A7AE) < 0x14
	.space 0x14 - (. - gText_Rom_24A7AE)
	.endif
	@ data/text/cable_club.inc:262 CableClub_Text_ChooseGroupLeader
	.globl gText_Rom_24A7C2
gText_Rom_24A7C2: @ 0x0824A7C2
	.string "みんなで はなしあって ひとりが\nグループリーダーに なってください\pほかの ひとは グループにはいる を\nえらんでください{EOS}"
	.if (. - gText_Rom_24A7C2) > 0x3f
	.error "gText_Rom_24A7C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A7C2) < 0x3f
	.space 0x3f - (. - gText_Rom_24A7C2)
	.endif
	@ field-script:0x2071A3 FieldScriptText_24A801
	.globl gText_Rom_24A801
gText_Rom_24A801: @ 0x0824A801
	.string "ともだちの　なかに\n4にんせんようの　うけつけから\lエントリーしている　かたが　います\pつうしんケーブルを　つなげた　ともだちを\n4にん　あつめて\lグローバルモードを　えらんで\lとうろくを　やりなおして　ください{EOS}"
	.if (. - gText_Rom_24A801) > 0x6b
	.error "gText_Rom_24A801 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A801) < 0x6b
	.space 0x6b - (. - gText_Rom_24A801)
	.endif
	@ field-script:0x207017 FieldScriptText_24A86C
	.globl gText_Rom_24A86C
gText_Rom_24A86C: @ 0x0824A86C
	.string "ワイヤレスアダプタか　つうしんケーブルを\nつないだ　ともだちが　2にん　いじょう\lあつまると　おこなえます！\pさんかする　かたには\nまず　エントリーする　モードを\lえらんで　いただきます！\p2にん　から　4にん　まで　じゆうに\nとうろく　できる　エメラルドモードと\p4にんせんようの　うけつけから　さんかする\nともだちとも　いっしょに　とうろく　できる\lグローバルモードと\p2しゅるいの　モードが　ありますので\nともだちと　そうだんして\lおなじ　モードを　えらんで　くださいね！\pともだちと　おなじ　モードで\nおなじ　コンテストを　えらぶと\lエントリー　かんりょうと　なります！\pいつもの　とおりに　コンテストが\nはじまりますので　がんばって　くださいね！{EOS}"
	.if (. - gText_Rom_24A86C) > 0x149
	.error "gText_Rom_24A86C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A86C) < 0x149
	.space 0x149 - (. - gText_Rom_24A86C)
	.endif
	@ field-script:0x207025 FieldScriptText_24A9B5
	.globl gText_Rom_24A9B5
gText_Rom_24A9B5: @ 0x0824A9B5
	.string "エメラルドモードでは\nつうしんケーブルか　ワイヤレスアダプタを\lつなげた　ともだちが\l2にん　いじょう　あつまれば\lつうしんコンテストが　おこなえます！\p4にん　いない　ときは\nかいじょうに　いる　トレーナーが\lコンテストに　さんかして　くれますよ！\pただし　モードを　えらぶことが　できない\n4にんせんようの　うけつけから\lさんかする　ともだちが　いるばあいは\lこちらの　モードでは　できませんので\lごちゅうい　ください！{EOS}"
	.if (. - gText_Rom_24A9B5) > 0xd5
	.error "gText_Rom_24A9B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A9B5) < 0xd5
	.space 0xd5 - (. - gText_Rom_24A9B5)
	.endif
	@ field-script:0x207033 FieldScriptText_24AA8A
	.globl gText_Rom_24AA8A
gText_Rom_24AA8A: @ 0x0824AA8A
	.string "グローバルモードでは\nモードを　えらぶことが　できない\l4にんせんようの　うけつけから\lさんかする　ともだち　とも\lつうしんコンテストが　おこなえます！\pこの　モードでは\nつうしんケーブルを　つないだ\lともだちが　4にん　あつまらないと\lコンテストが　おこなえません！{EOS}"
	.if (. - gText_Rom_24AA8A) > 0x87
	.error "gText_Rom_24AA8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AA8A) < 0x87
	.space 0x87 - (. - gText_Rom_24AA8A)
	.endif
	@ field-script:0x2071C1 FieldScriptText_24AB11
	.globl gText_Rom_24AB11
gText_Rom_24AB11: @ 0x0824AB11
	.string "もうしわけ　ありません！\pワイヤレスアダプタでは\nグローバルモードは　おこなえません！\pエメラルドモードを　えらぶか\nつうしんケーブルを　つなげて\lやりなおして　ください！{EOS}"
	.if (. - gText_Rom_24AB11) > 0x57
	.error "gText_Rom_24AB11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AB11) < 0x57
	.space 0x57 - (. - gText_Rom_24AB11)
	.endif
	@ field-script:0x206F3A FieldScriptText_24AB68
	.globl gText_Rom_24AB68
gText_Rom_24AB68: @ 0x0824AB68
	.string "どの　モードで\nコンテストに　さんかしますか？{EOS}"
	.if (. - gText_Rom_24AB68) > 0x18
	.error "gText_Rom_24AB68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AB68) < 0x18
	.space 0x18 - (. - gText_Rom_24AB68)
	.endif
	@ field-script:0x248F0E FieldScriptText_24AB80
	.globl gText_Rom_24AB80
gText_Rom_24AB80: @ 0x0824AB80
	.string "しかい『はい！　これより\nおともだち　4にん　つうしんの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！{EOS}"
	.if (. - gText_Rom_24AB80) > 0x33
	.error "gText_Rom_24AB80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AB80) < 0x33
	.space 0x33 - (. - gText_Rom_24AB80)
	.endif
	@ field-script:0x248F19 FieldScriptText_24ABB3
	.globl gText_Rom_24ABB3
gText_Rom_24ABB3: @ 0x0824ABB3
	.string "しゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！{EOS}"
	.if (. - gText_Rom_24ABB3) > 0x23
	.error "gText_Rom_24ABB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ABB3) < 0x23
	.space 0x23 - (. - gText_Rom_24ABB3)
	.endif
	@ field-script:0x2490C7 FieldScriptText_24ABD6
	.globl gText_Rom_24ABD6
gText_Rom_24ABD6: @ 0x0824ABD6
	.string "しかい『さあ\nポケモンの　しょうかいが　おわりました\l1じ　しんさに　はいりましょう！{EOS}"
	.if (. - gText_Rom_24ABD6) > 0x2c
	.error "gText_Rom_24ABD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ABD6) < 0x2c
	.space 0x2c - (. - gText_Rom_24ABD6)
	.endif
	@ field-script:0x2490D2 FieldScriptText_24AC02
	.globl gText_Rom_24AC02
gText_Rom_24AC02: @ 0x0824AC02
	.string "かいじょうの　おきゃくさまに　よる\nポケモンの　にんき　とうひょうです！{EOS}"
	.if (. - gText_Rom_24AC02) > 0x25
	.error "gText_Rom_24AC02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC02) < 0x25
	.space 0x25 - (. - gText_Rom_24AC02)
	.endif
	@ field-script:0x2490DD FieldScriptText_24AC27
	.globl gText_Rom_24AC27
gText_Rom_24AC27: @ 0x0824AC27
	.string "では　さっそく　はじめましょう！\nとうひょう　おねがいします！{EOS}"
	.if (. - gText_Rom_24AC27) > 0x20
	.error "gText_Rom_24AC27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC27) < 0x20
	.space 0x20 - (. - gText_Rom_24AC27)
	.endif
	@ field-script:0x2496B3 FieldScriptText_24AC47
	.globl gText_Rom_24AC47
gText_Rom_24AC47: @ 0x0824AC47
	.string "さあ！\nいま　とうひょうが　おわりました！\lしゅうけいを　している　あいだに\l2じ　しんさに　うつりましょう！{EOS}"
	.if (. - gText_Rom_24AC47) > 0x38
	.error "gText_Rom_24AC47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC47) < 0x38
	.space 0x38 - (. - gText_Rom_24AC47)
	.endif
	@ field-script:0x2496BE FieldScriptText_24AC7F
	.globl gText_Rom_24AC7F
gText_Rom_24AC7F: @ 0x0824AC7F
	.string "2じ　しんさは　いよいよ\nおまちかねの　アピールタイム！\lわざで　アピール　しまくりましょうー！{EOS}"
	.if (. - gText_Rom_24AC7F) > 0x31
	.error "gText_Rom_24AC7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC7F) < 0x31
	.space 0x31 - (. - gText_Rom_24AC7F)
	.endif
	@ field-script:0x2496C9 FieldScriptText_24ACB0
	.globl gText_Rom_24ACB0
gText_Rom_24ACB0: @ 0x0824ACB0
	.string "では　はりきって　どうぞ！\nレッツ！　アピール！{EOS}"
	.if (. - gText_Rom_24ACB0) > 0x19
	.error "gText_Rom_24ACB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ACB0) < 0x19
	.space 0x19 - (. - gText_Rom_24ACB0)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ACC9
gText_Rom_24ACC9: @ 0x0824ACC9
	.string "たくさん　アピール　できる{EOS}"
	.if (. - gText_Rom_24ACC9) != 0xe
	.error "gText_Rom_24ACC9 must retain its original byte length"
	.endif
	.globl gText_Rom_24ACD3
	.set gText_Rom_24ACD3, gText_Rom_24ACC9 + 0xa
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ACD7
gText_Rom_24ACD7: @ 0x0824ACD7
	.string "この　アピールの　あと\nびっくり　しやすく　なってしまう{EOS}"
	.if (. - gText_Rom_24ACD7) != 0x1d
	.error "gText_Rom_24ACD7 must retain its original byte length"
	.endif
	.globl gText_Rom_24ACF0
	.set gText_Rom_24ACF0, gText_Rom_24ACD7 + 0x19
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24ACF4
gText_Rom_24ACF4: @ 0x0824ACF4
	.string "すごいアピールに　なるが　このあと\nさいごまで　なにも　できなくなる{EOS}"
	.if (. - gText_Rom_24ACF4) > 0x23
	.error "gText_Rom_24ACF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ACF4) < 0x23
	.space 0x23 - (. - gText_Rom_24ACF4)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD17
gText_Rom_24AD17: @ 0x0824AD17
	.string "つづけて　だしても　しんさいんに\nあきられずに　アピール　できる{EOS}"
	.if (. - gText_Rom_24AD17) != 0x21
	.error "gText_Rom_24AD17 must retain its original byte length"
	.endif
	.globl gText_Rom_24AD34
	.set gText_Rom_24AD34, gText_Rom_24AD17 + 0x1d
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD38
gText_Rom_24AD38: @ 0x0824AD38
	.string "ほかの　ポケモンに　おどかされても\n1ど　くらいは　がまんできる{EOS}"
	.if (. - gText_Rom_24AD38) != 0x21
	.error "gText_Rom_24AD38 must retain its original byte length"
	.endif
	.globl gText_Rom_24AD55
	.set gText_Rom_24AD55, gText_Rom_24AD38 + 0x1d
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD59
gText_Rom_24AD59: @ 0x0824AD59
	.string "ほかの　ポケモンに　おどかされても\nがまんできる{EOS}"
	.if (. - gText_Rom_24AD59) != 0x19
	.error "gText_Rom_24AD59 must retain its original byte length"
	.endif
	.globl gText_Rom_24AD6E
	.set gText_Rom_24AD6E, gText_Rom_24AD59 + 0x15
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD72
gText_Rom_24AD72: @ 0x0824AD72
	.string "ほかの　ポケモンに　おどかされても\nすこし　くらいなら　がまんできる{EOS}"
	.if (. - gText_Rom_24AD72) != 0x23
	.error "gText_Rom_24AD72 must retain its original byte length"
	.endif
	.globl gText_Rom_24AD91
	.set gText_Rom_24AD91, gText_Rom_24AD72 + 0x1f
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24AD95
gText_Rom_24AD95: @ 0x0824AD95
	.string "この　わざを　だした　あとは\nあまり　びっくり　しなくなる{EOS}"
	.if (. - gText_Rom_24AD95) > 0x1e
	.error "gText_Rom_24AD95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AD95) < 0x1e
	.space 0x1e - (. - gText_Rom_24AD95)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ADB3
gText_Rom_24ADB3: @ 0x0824ADB3
	.string "じぶんの　まえに　アピールした\nポケモンを　ちょっと　おどろかす{EOS}"
	.if (. - gText_Rom_24ADB3) != 0x21
	.error "gText_Rom_24ADB3 must retain its original byte length"
	.endif
	.globl gText_Rom_24ADCE
	.set gText_Rom_24ADCE, gText_Rom_24ADB3 + 0x1b
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ADD4
gText_Rom_24ADD4: @ 0x0824ADD4
	.string "アピールが　おわっている　ポケモン\nみんなを　ちょっと　おどろかす{EOS}"
	.if (. - gText_Rom_24ADD4) != 0x22
	.error "gText_Rom_24ADD4 must retain its original byte length"
	.endif
	.globl gText_Rom_24ADF0
	.set gText_Rom_24ADF0, gText_Rom_24ADD4 + 0x1c
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ADF6
gText_Rom_24ADF6: @ 0x0824ADF6
	.string "じぶんの　まえに　アピールした\nポケモンを　おどろかす{EOS}"
	.if (. - gText_Rom_24ADF6) != 0x1c
	.error "gText_Rom_24ADF6 must retain its original byte length"
	.endif
	.globl gText_Rom_24AE0C
	.set gText_Rom_24AE0C, gText_Rom_24ADF6 + 0x16
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE12
gText_Rom_24AE12: @ 0x0824AE12
	.string "アピールが　おわっている　ポケモン\nみんなを　おどろかす{EOS}"
	.if (. - gText_Rom_24AE12) != 0x1d
	.error "gText_Rom_24AE12 must retain its original byte length"
	.endif
	.globl gText_Rom_24AE29
	.set gText_Rom_24AE29, gText_Rom_24AE12 + 0x17
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE2F
gText_Rom_24AE2F: @ 0x0824AE2F
	.string "じぶんの　まえに　アピールした\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24AE2F) != 0x20
	.error "gText_Rom_24AE2F must retain its original byte length"
	.endif
	.globl gText_Rom_24AE49
	.set gText_Rom_24AE49, gText_Rom_24AE2F + 0x1a
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE4F
gText_Rom_24AE4F: @ 0x0824AE4F
	.string "アピールが　おわっている　ポケモン\nみんなを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24AE4F) != 0x21
	.error "gText_Rom_24AE4F must retain its original byte length"
	.endif
	.globl gText_Rom_24AE6A
	.set gText_Rom_24AE6A, gText_Rom_24AE4F + 0x1b
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE70
gText_Rom_24AE70: @ 0x0824AE70
	.string "じぶんの　まえに　アピールした\nポケモンを　おどろかす{EOS}"
	.if (. - gText_Rom_24AE70) != 0x1c
	.error "gText_Rom_24AE70 must retain its original byte length"
	.endif
	.globl gText_Rom_24AE86
	.set gText_Rom_24AE86, gText_Rom_24AE70 + 0x16
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE8C
gText_Rom_24AE8C: @ 0x0824AE8C
	.string "アピールが　おわっている　ポケモン\nみんなを　おどろかす{EOS}"
	.if (. - gText_Rom_24AE8C) != 0x1d
	.error "gText_Rom_24AE8C must retain its original byte length"
	.endif
	.globl gText_Rom_24AEA3
	.set gText_Rom_24AEA3, gText_Rom_24AE8C + 0x17
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AEA9
gText_Rom_24AEA9: @ 0x0824AEA9
	.string "しんさいんの　ほかの　ポケモンへの\nちゅうもくを　そらすことが　できる{EOS}"
	.if (. - gText_Rom_24AEA9) != 0x24
	.error "gText_Rom_24AEA9 must retain its original byte length"
	.endif
	.globl gText_Rom_24AEC9
	.set gText_Rom_24AEC9, gText_Rom_24AEA9 + 0x20
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AECD
gText_Rom_24AECD: @ 0x0824AECD
	.string "しんさいんに　ちゅうもく　されている\nポケモンを　とくに　おどろかす{EOS}"
	.if (. - gText_Rom_24AECD) != 0x23
	.error "gText_Rom_24AECD must retain its original byte length"
	.endif
	.globl gText_Rom_24AEEA
	.set gText_Rom_24AEEA, gText_Rom_24AECD + 0x1d
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AEF0
gText_Rom_24AEF0: @ 0x0824AEF0
	.string "みんなの　じゃまを　しまくって\nつぎの　アピールは　さんか　しない{EOS}"
	.if (. - gText_Rom_24AEF0) != 0x22
	.error "gText_Rom_24AEF0 must retain its original byte length"
	.endif
	.globl gText_Rom_24AF0E
	.set gText_Rom_24AF0E, gText_Rom_24AEF0 + 0x1e
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF12
gText_Rom_24AF12: @ 0x0824AF12
	.string "おなじ　タイプの　アピールを　した\nポケモンを　とくに　おどろかす{EOS}"
	.if (. - gText_Rom_24AF12) != 0x22
	.error "gText_Rom_24AF12 must retain its original byte length"
	.endif
	.globl gText_Rom_24AF2E
	.set gText_Rom_24AF2E, gText_Rom_24AF12 + 0x1c
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF34
gText_Rom_24AF34: @ 0x0824AF34
	.string "かっこいい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24AF34) != 0x1f
	.error "gText_Rom_24AF34 must retain its original byte length"
	.endif
	.globl gText_Rom_24AF4D
	.set gText_Rom_24AF4D, gText_Rom_24AF34 + 0x19
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF53
gText_Rom_24AF53: @ 0x0824AF53
	.string "うつくしい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24AF53) != 0x1f
	.error "gText_Rom_24AF53 must retain its original byte length"
	.endif
	.globl gText_Rom_24AF6C
	.set gText_Rom_24AF6C, gText_Rom_24AF53 + 0x19
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF72
gText_Rom_24AF72: @ 0x0824AF72
	.string "かわいい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24AF72) != 0x1e
	.error "gText_Rom_24AF72 must retain its original byte length"
	.endif
	.globl gText_Rom_24AF8A
	.set gText_Rom_24AF8A, gText_Rom_24AF72 + 0x18
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF90
gText_Rom_24AF90: @ 0x0824AF90
	.string "かしこい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24AF90) != 0x1e
	.error "gText_Rom_24AF90 must retain its original byte length"
	.endif
	.globl gText_Rom_24AFA8
	.set gText_Rom_24AFA8, gText_Rom_24AF90 + 0x18
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AFAE
gText_Rom_24AFAE: @ 0x0824AFAE
	.string "たくましい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24AFAE) != 0x1f
	.error "gText_Rom_24AFAE must retain its original byte length"
	.endif
	.globl gText_Rom_24AFC7
	.set gText_Rom_24AFC7, gText_Rom_24AFAE + 0x19
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24AFCD
gText_Rom_24AFCD: @ 0x0824AFCD
	.string "このあと　アピールする　ポケモン\n1ひきを　きんちょう　させる{EOS}"
	.if (. - gText_Rom_24AFCD) > 0x20
	.error "gText_Rom_24AFCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AFCD) < 0x20
	.space 0x20 - (. - gText_Rom_24AFCD)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24AFED
gText_Rom_24AFED: @ 0x0824AFED
	.string "このあと　アピールする　ポケモン\nみんなを　きんちょう　させる{EOS}"
	.if (. - gText_Rom_24AFED) > 0x20
	.error "gText_Rom_24AFED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AFED) < 0x20
	.space 0x20 - (. - gText_Rom_24AFED)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B00D
gText_Rom_24B00D: @ 0x0824B00D
	.string "アピールが　おわった　ポケモンの\nちょうしを　さげる{EOS}"
	.if (. - gText_Rom_24B00D) > 0x1b
	.error "gText_Rom_24B00D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B00D) < 0x1b
	.space 0x1b - (. - gText_Rom_24B00D)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B028
gText_Rom_24B028: @ 0x0824B028
	.string "ちょうしの　いい　ポケモン\nみんなを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24B028) != 0x1d
	.error "gText_Rom_24B028 must retain its original byte length"
	.endif
	.globl gText_Rom_24B03F
	.set gText_Rom_24B03F, gText_Rom_24B028 + 0x17
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B045
gText_Rom_24B045: @ 0x0824B045
	.string "1ばん　はじめに　アピールすると\nアピールが　すごく　うまくいく{EOS}"
	.if (. - gText_Rom_24B045) > 0x21
	.error "gText_Rom_24B045 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B045) < 0x21
	.space 0x21 - (. - gText_Rom_24B045)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B066
gText_Rom_24B066: @ 0x0824B066
	.string "1ばん　さいごに　アピールすると\nアピールが　すごく　うまくいく{EOS}"
	.if (. - gText_Rom_24B066) > 0x21
	.error "gText_Rom_24B066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B066) < 0x21
	.space 0x21 - (. - gText_Rom_24B066)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B087
gText_Rom_24B087: @ 0x0824B087
	.string "それまでの　ポケモンの　アピールと\nおなじくらいの　アピールに　みせる{EOS}"
	.if (. - gText_Rom_24B087) != 0x24
	.error "gText_Rom_24B087 must retain its original byte length"
	.endif
	.globl gText_Rom_24B0A7
	.set gText_Rom_24B0A7, gText_Rom_24B087 + 0x20
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B0AB
gText_Rom_24B0AB: @ 0x0824B0AB
	.string "1つまえの　ポケモンの　アピールと\nおなじくらい　うまく　できる{EOS}"
	.if (. - gText_Rom_24B0AB) != 0x21
	.error "gText_Rom_24B0AB must retain its original byte length"
	.endif
	.globl gText_Rom_24B0C8
	.set gText_Rom_24B0C8, gText_Rom_24B0AB + 0x1d
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B0CC
gText_Rom_24B0CC: @ 0x0824B0CC
	.string "みんなの　あとで　アピールするほど\nすごい　アピールに　みせられる{EOS}"
	.if (. - gText_Rom_24B0CC) != 0x22
	.error "gText_Rom_24B0CC must retain its original byte length"
	.endif
	.globl gText_Rom_24B0EA
	.set gText_Rom_24B0EA, gText_Rom_24B0CC + 0x1e
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B0EE
gText_Rom_24B0EE: @ 0x0824B0EE
	.string "だすときに　よって　アピールの\nできぐあいが　いろいろと　かわる{EOS}"
	.if (. - gText_Rom_24B0EE) > 0x21
	.error "gText_Rom_24B0EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B0EE) < 0x21
	.space 0x21 - (. - gText_Rom_24B0EE)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B10F
gText_Rom_24B10F: @ 0x0824B10F
	.string "1つまえの　ポケモンの　アピールと\nタイプが　おなじなら　きにいられる{EOS}"
	.if (. - gText_Rom_24B10F) != 0x24
	.error "gText_Rom_24B10F must retain its original byte length"
	.endif
	.globl gText_Rom_24B12F
	.set gText_Rom_24B12F, gText_Rom_24B10F + 0x20
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B133
gText_Rom_24B133: @ 0x0824B133
	.string "1つまえの　ポケモンの　アピールと\nタイプが　ちがうなら　きにいられる{EOS}"
	.if (. - gText_Rom_24B133) != 0x24
	.error "gText_Rom_24B133 must retain its original byte length"
	.endif
	.globl gText_Rom_24B153
	.set gText_Rom_24B153, gText_Rom_24B133 + 0x20
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B157
gText_Rom_24B157: @ 0x0824B157
	.string "1つまえの　ポケモンの　アピールの\nうまさに　えいきょう　される{EOS}"
	.if (. - gText_Rom_24B157) > 0x21
	.error "gText_Rom_24B157 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B157) < 0x21
	.space 0x21 - (. - gText_Rom_24B157)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B178
gText_Rom_24B178: @ 0x0824B178
	.string "アピールの　ちょうしが　あがる\nきんちょうも　しにくくなる{EOS}"
	.if (. - gText_Rom_24B178) > 0x1e
	.error "gText_Rom_24B178 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B178) < 0x1e
	.space 0x1e - (. - gText_Rom_24B178)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B196
gText_Rom_24B196: @ 0x0824B196
	.string "ちょうしが　いいときに　だすと\nアピールが　とても　うまくいく{EOS}"
	.if (. - gText_Rom_24B196) > 0x20
	.error "gText_Rom_24B196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B196) < 0x20
	.space 0x20 - (. - gText_Rom_24B196)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B1B6
gText_Rom_24B1B6: @ 0x0824B1B6
	.string "このつぎの　アピールを\nはじめの　ほうに　だすことが　できる{EOS}"
	.if (. - gText_Rom_24B1B6) != 0x1f
	.error "gText_Rom_24B1B6 must retain its original byte length"
	.endif
	.globl gText_Rom_24B1D1
	.set gText_Rom_24B1D1, gText_Rom_24B1B6 + 0x1b
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B1D5
gText_Rom_24B1D5: @ 0x0824B1D5
	.string "このつぎの　アピールを\nおわりの　ほうに　だすことが　できる{EOS}"
	.if (. - gText_Rom_24B1D5) != 0x1f
	.error "gText_Rom_24B1D5 must retain its original byte length"
	.endif
	.globl gText_Rom_24B1F0
	.set gText_Rom_24B1F0, gText_Rom_24B1D5 + 0x1b
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B1F4
gText_Rom_24B1F4: @ 0x0824B1F4
	.string "このつぎの　アピールの\nじゅんばんが　かわりやすく　なる{EOS}"
	.if (. - gText_Rom_24B1F4) > 0x1d
	.error "gText_Rom_24B1F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B1F4) < 0x1d
	.space 0x1d - (. - gText_Rom_24B1F4)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B211
gText_Rom_24B211: @ 0x0824B211
	.string "このつぎの　アピールの\nじゅんばんを　めちゃくちゃに　する{EOS}"
	.if (. - gText_Rom_24B211) > 0x1e
	.error "gText_Rom_24B211 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B211) < 0x1e
	.space 0x1e - (. - gText_Rom_24B211)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B22F
gText_Rom_24B22F: @ 0x0824B22F
	.string "どの　コンテストで　みせても\nかならず　もりあがる　アピール{EOS}"
	.if (. - gText_Rom_24B22F) != 0x1f
	.error "gText_Rom_24B22F must retain its original byte length"
	.endif
	.globl gText_Rom_24B249
	.set gText_Rom_24B249, gText_Rom_24B22F + 0x1a
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B24E
gText_Rom_24B24E: @ 0x0824B24E
	.string "アピールが　うまくいった　ポケモン\nみんなを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24B24E) != 0x21
	.error "gText_Rom_24B24E must retain its original byte length"
	.endif
	.globl gText_Rom_24B269
	.set gText_Rom_24B269, gText_Rom_24B24E + 0x1b
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B26F
gText_Rom_24B26F: @ 0x0824B26F
	.string "かいじょうが　もりあがっている　ほど\nアピールが　きにいられる{EOS}"
	.if (. - gText_Rom_24B26F) != 0x20
	.error "gText_Rom_24B26F must retain its original byte length"
	.endif
	.globl gText_Rom_24B28B
	.set gText_Rom_24B28B, gText_Rom_24B26F + 0x1c
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B28F
gText_Rom_24B28F: @ 0x0824B28F
	.string "このアピールのあと　かいじょうが\nしばらく　もりあがらなく　なる{EOS}"
	.if (. - gText_Rom_24B28F) > 0x21
	.error "gText_Rom_24B28F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B28F) < 0x21
	.space 0x21 - (. - gText_Rom_24B28F)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2B0
gText_Rom_24B2B0: @ 0x0824B2B0
	.string "あまごい{EOS}"
	.if (. - gText_Rom_24B2B0) > 0x5
	.error "gText_Rom_24B2B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2B0) < 0x5
	.space 0x5 - (. - gText_Rom_24B2B0)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2B5
gText_Rom_24B2B5: @ 0x0824B2B5
	.string "いかり{EOS}"
	.if (. - gText_Rom_24B2B5) > 0x4
	.error "gText_Rom_24B2B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2B5) < 0x4
	.space 0x4 - (. - gText_Rom_24B2B5)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2B9
gText_Rom_24B2B9: @ 0x0824B2B9
	.string "きあいだめ{EOS}"
	.if (. - gText_Rom_24B2B9) > 0x6
	.error "gText_Rom_24B2B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2B9) < 0x6
	.space 0x6 - (. - gText_Rom_24B2B9)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2BF
gText_Rom_24B2BF: @ 0x0824B2BF
	.string "さいみんじゅつ{EOS}"
	.if (. - gText_Rom_24B2BF) > 0x8
	.error "gText_Rom_24B2BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2BF) < 0x8
	.space 0x8 - (. - gText_Rom_24B2BF)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2C7
gText_Rom_24B2C7: @ 0x0824B2C7
	.string "タマゴうみ{EOS}"
	.if (. - gText_Rom_24B2C7) > 0x6
	.error "gText_Rom_24B2C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2C7) < 0x6
	.space 0x6 - (. - gText_Rom_24B2C7)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2CD
gText_Rom_24B2CD: @ 0x0824B2CD
	.string "つのでつく{EOS}"
	.if (. - gText_Rom_24B2CD) > 0x6
	.error "gText_Rom_24B2CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2CD) < 0x6
	.space 0x6 - (. - gText_Rom_24B2CD)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2D3
gText_Rom_24B2D3: @ 0x0824B2D3
	.string "つるぎのまい{EOS}"
	.if (. - gText_Rom_24B2D3) > 0x7
	.error "gText_Rom_24B2D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2D3) < 0x7
	.space 0x7 - (. - gText_Rom_24B2D3)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2DA
gText_Rom_24B2DA: @ 0x0824B2DA
	.string "テクスチャー{EOS}"
	.if (. - gText_Rom_24B2DA) > 0x7
	.error "gText_Rom_24B2DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2DA) < 0x7
	.space 0x7 - (. - gText_Rom_24B2DA)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2E1
gText_Rom_24B2E1: @ 0x0824B2E1
	.string "にほんばれ{EOS}"
	.if (. - gText_Rom_24B2E1) > 0x6
	.error "gText_Rom_24B2E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2E1) < 0x6
	.space 0x6 - (. - gText_Rom_24B2E1)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2E7
gText_Rom_24B2E7: @ 0x0824B2E7
	.string "ねむる{EOS}"
	.if (. - gText_Rom_24B2E7) > 0x4
	.error "gText_Rom_24B2E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2E7) < 0x4
	.space 0x4 - (. - gText_Rom_24B2E7)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2EB
gText_Rom_24B2EB: @ 0x0824B2EB
	.string "はさむ{EOS}"
	.if (. - gText_Rom_24B2EB) > 0x4
	.error "gText_Rom_24B2EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2EB) < 0x4
	.space 0x4 - (. - gText_Rom_24B2EB)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2EF
gText_Rom_24B2EF: @ 0x0824B2EF
	.string "まるくなる{EOS}"
	.if (. - gText_Rom_24B2EF) > 0x6
	.error "gText_Rom_24B2EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2EF) < 0x6
	.space 0x6 - (. - gText_Rom_24B2EF)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2F5
gText_Rom_24B2F5: @ 0x0824B2F5
	.string "ロックオン{EOS}"
	.if (. - gText_Rom_24B2F5) > 0x6
	.error "gText_Rom_24B2F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2F5) < 0x6
	.space 0x6 - (. - gText_Rom_24B2F5)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2FB
gText_Rom_24B2FB: @ 0x0824B2FB
	.string "かっこいい{EOS}"
	.if (. - gText_Rom_24B2FB) > 0x6
	.error "gText_Rom_24B2FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2FB) < 0x6
	.space 0x6 - (. - gText_Rom_24B2FB)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B301
gText_Rom_24B301: @ 0x0824B301
	.string "うつくしい{EOS}"
	.if (. - gText_Rom_24B301) > 0x6
	.error "gText_Rom_24B301 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B301) < 0x6
	.space 0x6 - (. - gText_Rom_24B301)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B307
gText_Rom_24B307: @ 0x0824B307
	.string "かわいい{EOS}"
	.if (. - gText_Rom_24B307) > 0x5
	.error "gText_Rom_24B307 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B307) < 0x5
	.space 0x5 - (. - gText_Rom_24B307)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B30C
gText_Rom_24B30C: @ 0x0824B30C
	.string "かしこい{EOS}"
	.if (. - gText_Rom_24B30C) > 0x5
	.error "gText_Rom_24B30C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B30C) < 0x5
	.space 0x5 - (. - gText_Rom_24B30C)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B311
gText_Rom_24B311: @ 0x0824B311
	.string "たくましい{EOS}"
	.if (. - gText_Rom_24B311) > 0x6
	.error "gText_Rom_24B311 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B311) < 0x6
	.space 0x6 - (. - gText_Rom_24B311)
	.endif
	@ asm/contest.s:1545 sub_080D7B68
	.globl gText_Rom_24B317
gText_Rom_24B317: @ 0x0824B317
	.string "かいめの　アピール！\nどの　わざを　だす？{EOS}"
	.if (. - gText_Rom_24B317) > 0x16
	.error "gText_Rom_24B317 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B317) < 0x16
	.space 0x16 - (. - gText_Rom_24B317)
	.endif
	@ asm/contest.s:1562 sub_080D7B68
	.globl gText_Rom_24B32D
gText_Rom_24B32D: @ 0x0824B32D
	.string "かいめの　アピール！\nしかし　さんか　できない！{EOS}"
	.if (. - gText_Rom_24B32D) > 0x19
	.error "gText_Rom_24B32D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B32D) < 0x19
	.space 0x19 - (. - gText_Rom_24B32D)
	.endif
	@ asm/contest.s:2878 sub_080D8334
	.globl gText_Rom_24B346
gText_Rom_24B346: @ 0x0824B346
	.string "{0xFD}{0x02}は\n{0xFD}{0x03}で　アピール！{EOS}"
	.if (. - gText_Rom_24B346) > 0xe
	.error "gText_Rom_24B346 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B346) < 0xe
	.space 0xe - (. - gText_Rom_24B346)
	.endif
	@ asm/contest.s:4961 sub_080D8334
	.globl gText_Rom_24B354
gText_Rom_24B354: @ 0x0824B354
	.string "{0xFD}{0x02}は\nみんなを　みていた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24B354) > 0x1b
	.error "gText_Rom_24B354 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B354) < 0x1b
	.space 0x1b - (. - gText_Rom_24B354)
	.endif
	@ asm/contest.s:5766 sub_080D9DD8
	.globl gText_Rom_24B36F
gText_Rom_24B36F: @ 0x0824B36F
	.string "アピールタイム　しゅうりょう！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24B36F) > 0x1c
	.error "gText_Rom_24B36F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B36F) < 0x1c
	.space 0x1c - (. - gText_Rom_24B36F)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B38B
gText_Rom_24B38B: @ 0x0824B38B
	.string "しかし　じゃまを　された！{EOS}"
	.if (. - gText_Rom_24B38B) > 0xe
	.error "gText_Rom_24B38B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B38B) < 0xe
	.space 0xe - (. - gText_Rom_24B38B)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B399
gText_Rom_24B399: @ 0x0824B399
	.string "ほかの　ポケモンに　つられた！{EOS}"
	.if (. - gText_Rom_24B399) > 0x10
	.error "gText_Rom_24B399 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B399) < 0x10
	.space 0x10 - (. - gText_Rom_24B399)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3A9
gText_Rom_24B3A9: @ 0x0824B3A9
	.string "しかし　しっぱいして\nしまった！{EOS}"
	.if (. - gText_Rom_24B3A9) > 0x11
	.error "gText_Rom_24B3A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3A9) < 0x11
	.space 0x11 - (. - gText_Rom_24B3A9)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3BA
gText_Rom_24B3BA: @ 0x0824B3BA
	.string "いつもより　うまく　いった！{EOS}"
	.if (. - gText_Rom_24B3BA) > 0xf
	.error "gText_Rom_24B3BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3BA) < 0xf
	.space 0xf - (. - gText_Rom_24B3BA)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3C9
gText_Rom_24B3C9: @ 0x0824B3C9
	.string "しんさいんが　なぜか\nめを　そらした！{EOS}"
	.if (. - gText_Rom_24B3C9) > 0x14
	.error "gText_Rom_24B3C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3C9) < 0x14
	.space 0x14 - (. - gText_Rom_24B3C9)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3DD
gText_Rom_24B3DD: @ 0x0824B3DD
	.string "これまでの　しっぱいを\nいかして　がんばってみた！{EOS}"
	.if (. - gText_Rom_24B3DD) > 0x1a
	.error "gText_Rom_24B3DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3DD) < 0x1a
	.space 0x1a - (. - gText_Rom_24B3DD)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3F7
gText_Rom_24B3F7: @ 0x0824B3F7
	.string "これいじょう　わざを\nだせなくなった！{EOS}"
	.if (. - gText_Rom_24B3F7) > 0x14
	.error "gText_Rom_24B3F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3F7) < 0x14
	.space 0x14 - (. - gText_Rom_24B3F7)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B40B
gText_Rom_24B40B: @ 0x0824B40B
	.string "こわいくらい　うまく　いった！{EOS}"
	.if (. - gText_Rom_24B40B) > 0x10
	.error "gText_Rom_24B40B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B40B) < 0x10
	.space 0x10 - (. - gText_Rom_24B40B)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B41B
gText_Rom_24B41B: @ 0x0824B41B
	.string "めだっている　ポケモンと\nおなじくらい　がんばった！{EOS}"
	.if (. - gText_Rom_24B41B) > 0x1b
	.error "gText_Rom_24B41B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B41B) < 0x1b
	.space 0x1b - (. - gText_Rom_24B41B)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B436
gText_Rom_24B436: @ 0x0824B436
	.string "しんさいんが　きたいを\nこめた　めで　みつめた！{EOS}"
	.if (. - gText_Rom_24B436) > 0x19
	.error "gText_Rom_24B436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B436) < 0x19
	.space 0x19 - (. - gText_Rom_24B436)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B44F
gText_Rom_24B44F: @ 0x0824B44F
	.string "かなり　うまく　いった！{EOS}"
	.if (. - gText_Rom_24B44F) > 0xd
	.error "gText_Rom_24B44F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B44F) < 0xd
	.space 0xd - (. - gText_Rom_24B44F)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B45C
gText_Rom_24B45C: @ 0x0824B45C
	.string "ふつうより　ちょっと\nうまく　いった！{EOS}"
	.if (. - gText_Rom_24B45C) > 0x14
	.error "gText_Rom_24B45C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B45C) < 0x14
	.space 0x14 - (. - gText_Rom_24B45C)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B470
gText_Rom_24B470: @ 0x0824B470
	.string "{0xFD}{0x02}は\nぜんぜん　めだたなかった…{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_24B470) > 0x14
	.error "gText_Rom_24B470 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B470) < 0x14
	.space 0x14 - (. - gText_Rom_24B470)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B484
gText_Rom_24B484: @ 0x0824B484
	.string "{0xFD}{0x02}は\nあんまり　めだたなかった…{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_24B484) > 0x14
	.error "gText_Rom_24B484 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B484) < 0x14
	.space 0x14 - (. - gText_Rom_24B484)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B498
gText_Rom_24B498: @ 0x0824B498
	.string "{0xFD}{0x02}は\nまあまあ　めだった！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_24B498) > 0x11
	.error "gText_Rom_24B498 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B498) < 0x11
	.space 0x11 - (. - gText_Rom_24B498)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B4A9
gText_Rom_24B4A9: @ 0x0824B4A9
	.string "{0xFD}{0x02}は\nかなり　めだった！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_24B4A9) > 0x10
	.error "gText_Rom_24B4A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B4A9) < 0x10
	.space 0x10 - (. - gText_Rom_24B4A9)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B4B9
gText_Rom_24B4B9: @ 0x0824B4B9
	.string "{0xFD}{0x02}は\nものすごく　めだった！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_24B4B9) > 0x12
	.error "gText_Rom_24B4B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B4B9) < 0x12
	.space 0x12 - (. - gText_Rom_24B4B9)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B4CB
gText_Rom_24B4CB: @ 0x0824B4CB
	.string "{0xFD}{0x02}は\nアピール　していない！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_24B4CB) > 0x12
	.error "gText_Rom_24B4CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B4CB) < 0x12
	.space 0x12 - (. - gText_Rom_24B4CB)
	.endif
	@ analyzed canonical ROM range 0x0824B4DD-0x0824B4F7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_0824B4DD: @ 0x0824B4DD
	.string "つぎの　{STR_VAR_1}の　アピールに\nきたいが　たかまった!{EOS}"
.globl EventText_JP_0824B4F7
EventText_JP_0824B4F7: @ 0x0824B4F7
	.string "{EOS}"
