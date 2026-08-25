	@ field-script:0x2071E4 FieldScriptText_24A6AA
	.globl FieldScriptText_24A6AA
FieldScriptText_24A6AA: @ 0x0824A6AA
	.string "それでは　おきゃくさまの　ポケモンを\nエントリー　します！\pおきゃくさまの　エントリーナンバーは\n{0xFD}{0x03}ばん　に　なります！{EOS}"
	.if (. - FieldScriptText_24A6AA) > 0x3e
	.error "FieldScriptText_24A6AA may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A6AA) < 0x3e
	.space 0x3e - (. - FieldScriptText_24A6AA)
	.endif
	@ field-script:0x20730A FieldScriptText_24A6E8
	.globl FieldScriptText_24A6E8
FieldScriptText_24A6E8: @ 0x0824A6E8
	.string "コンテストは　すぐに　はじまります！{EOS}"
	.if (. - FieldScriptText_24A6E8) > 0x13
	.error "FieldScriptText_24A6E8 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A6E8) < 0x13
	.space 0x13 - (. - FieldScriptText_24A6E8)
	.endif
	@ field-script:0x206ECD FieldScriptText_24A6FB
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_24A6FB
FieldScriptText_24A6FB: @ 0x0824A6FB
	.string "ポケモン　コンテスト\nつうしん　うけつけへ　ようこそ！\pこちらでは　ともだちと\nおなじ　コンテストに　でられます{EOS}"
	.if (. - FieldScriptText_24A6FB) != 0x39
	.error "FieldScriptText_24A6FB must retain its original byte length"
	.endif
	@ field-script:0x206FCE FieldScriptText_24A734
	.globl FieldScriptText_24A734
FieldScriptText_24A734: @ 0x0824A734
	.string "どの　せつめいを　ききますか？{EOS}"
	.if (. - FieldScriptText_24A734) > 0x10
	.error "FieldScriptText_24A734 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A734) < 0x10
	.space 0x10 - (. - FieldScriptText_24A734)
	.endif
	@ field-script:0x206EDA FieldScriptText_24A744
	.globl FieldScriptText_24A744
FieldScriptText_24A744: @ 0x0824A744
	.string "コンテストに\nさんか　しますか？{EOS}"
	.if (. - FieldScriptText_24A744) > 0x11
	.error "FieldScriptText_24A744 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A744) < 0x11
	.space 0x11 - (. - FieldScriptText_24A744)
	.endif
	@ field-script:0x206F9D FieldScriptText_24A755
	.globl FieldScriptText_24A755
FieldScriptText_24A755: @ 0x0824A755
	.string "どの　コンテストに　さんか　しますか？{EOS}"
	.if (. - FieldScriptText_24A755) > 0x14
	.error "FieldScriptText_24A755 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A755) < 0x14
	.space 0x14 - (. - FieldScriptText_24A755)
	.endif
	@ field-script:0x2070BE FieldScriptText_24A769
	.globl FieldScriptText_24A769
FieldScriptText_24A769: @ 0x0824A769
	.string "そちらの　ポケモンは　げんきがない\nようなので　しゅつじょう　できないです…{EOS}"
	.if (. - FieldScriptText_24A769) > 0x27
	.error "FieldScriptText_24A769 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A769) < 0x27
	.space 0x27 - (. - FieldScriptText_24A769)
	.endif
	@ field-script:0x2070B0 FieldScriptText_24A790
	.globl FieldScriptText_24A790
FieldScriptText_24A790: @ 0x0824A790
	.string "ごめんなさい！\nタマゴは　コンテストに　でられないんです…{EOS}"
	.if (. - FieldScriptText_24A790) > 0x1e
	.error "FieldScriptText_24A790 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A790) < 0x1e
	.space 0x1e - (. - FieldScriptText_24A790)
	.endif
	@ field-script:0x20704E FieldScriptText_24A7AE
	.globl FieldScriptText_24A7AE
FieldScriptText_24A7AE: @ 0x0824A7AE
	.string "どの　ポケモンを　さんか　させますか？{EOS}"
	.if (. - FieldScriptText_24A7AE) > 0x14
	.error "FieldScriptText_24A7AE may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A7AE) < 0x14
	.space 0x14 - (. - FieldScriptText_24A7AE)
	.endif
	@ data/text/cable_club.inc:262 CableClub_Text_ChooseGroupLeader
	.globl CableClub_Text_ChooseGroupLeader_Copy_Rom_24A7C2
CableClub_Text_ChooseGroupLeader_Copy_Rom_24A7C2: @ 0x0824A7C2
	.string "みんなで はなしあって ひとりが\nグループリーダーに なってください\pほかの ひとは グループにはいる を\nえらんでください{EOS}"
	.if (. - CableClub_Text_ChooseGroupLeader_Copy_Rom_24A7C2) > 0x3f
	.error "CableClub_Text_ChooseGroupLeader_Copy_Rom_24A7C2 may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_ChooseGroupLeader_Copy_Rom_24A7C2) < 0x3f
	.space 0x3f - (. - CableClub_Text_ChooseGroupLeader_Copy_Rom_24A7C2)
	.endif
	@ field-script:0x2071A3 FieldScriptText_24A801
	.globl FieldScriptText_24A801
FieldScriptText_24A801: @ 0x0824A801
	.string "ともだちの　なかに\n4にんせんようの　うけつけから\lエントリーしている　かたが　います\pつうしんケーブルを　つなげた　ともだちを\n4にん　あつめて\lグローバルモードを　えらんで\lとうろくを　やりなおして　ください{EOS}"
	.if (. - FieldScriptText_24A801) > 0x6b
	.error "FieldScriptText_24A801 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A801) < 0x6b
	.space 0x6b - (. - FieldScriptText_24A801)
	.endif
	@ field-script:0x207017 FieldScriptText_24A86C
	.globl FieldScriptText_24A86C
FieldScriptText_24A86C: @ 0x0824A86C
	.string "ワイヤレスアダプタか　つうしんケーブルを\nつないだ　ともだちが　2にん　いじょう\lあつまると　おこなえます！\pさんかする　かたには\nまず　エントリーする　モードを\lえらんで　いただきます！\p2にん　から　4にん　まで　じゆうに\nとうろく　できる　エメラルドモードと\p4にんせんようの　うけつけから　さんかする\nともだちとも　いっしょに　とうろく　できる\lグローバルモードと\p2しゅるいの　モードが　ありますので\nともだちと　そうだんして\lおなじ　モードを　えらんで　くださいね！\pともだちと　おなじ　モードで\nおなじ　コンテストを　えらぶと\lエントリー　かんりょうと　なります！\pいつもの　とおりに　コンテストが\nはじまりますので　がんばって　くださいね！{EOS}"
	.if (. - FieldScriptText_24A86C) > 0x149
	.error "FieldScriptText_24A86C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A86C) < 0x149
	.space 0x149 - (. - FieldScriptText_24A86C)
	.endif
	@ field-script:0x207025 FieldScriptText_24A9B5
	.globl FieldScriptText_24A9B5
FieldScriptText_24A9B5: @ 0x0824A9B5
	.string "エメラルドモードでは\nつうしんケーブルか　ワイヤレスアダプタを\lつなげた　ともだちが\l2にん　いじょう　あつまれば\lつうしんコンテストが　おこなえます！\p4にん　いない　ときは\nかいじょうに　いる　トレーナーが\lコンテストに　さんかして　くれますよ！\pただし　モードを　えらぶことが　できない\n4にんせんようの　うけつけから\lさんかする　ともだちが　いるばあいは\lこちらの　モードでは　できませんので\lごちゅうい　ください！{EOS}"
	.if (. - FieldScriptText_24A9B5) > 0xd5
	.error "FieldScriptText_24A9B5 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A9B5) < 0xd5
	.space 0xd5 - (. - FieldScriptText_24A9B5)
	.endif
	@ field-script:0x207033 FieldScriptText_24AA8A
	.globl FieldScriptText_24AA8A
FieldScriptText_24AA8A: @ 0x0824AA8A
	.string "グローバルモードでは\nモードを　えらぶことが　できない\l4にんせんようの　うけつけから\lさんかする　ともだち　とも\lつうしんコンテストが　おこなえます！\pこの　モードでは\nつうしんケーブルを　つないだ\lともだちが　4にん　あつまらないと\lコンテストが　おこなえません！{EOS}"
	.if (. - FieldScriptText_24AA8A) > 0x87
	.error "FieldScriptText_24AA8A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24AA8A) < 0x87
	.space 0x87 - (. - FieldScriptText_24AA8A)
	.endif
	@ field-script:0x2071C1 FieldScriptText_24AB11
	.globl FieldScriptText_24AB11
FieldScriptText_24AB11: @ 0x0824AB11
	.string "もうしわけ　ありません！\pワイヤレスアダプタでは\nグローバルモードは　おこなえません！\pエメラルドモードを　えらぶか\nつうしんケーブルを　つなげて\lやりなおして　ください！{EOS}"
	.if (. - FieldScriptText_24AB11) > 0x57
	.error "FieldScriptText_24AB11 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24AB11) < 0x57
	.space 0x57 - (. - FieldScriptText_24AB11)
	.endif
	@ field-script:0x206F3A FieldScriptText_24AB68
	.globl FieldScriptText_24AB68
FieldScriptText_24AB68: @ 0x0824AB68
	.string "どの　モードで\nコンテストに　さんかしますか？{EOS}"
	.if (. - FieldScriptText_24AB68) > 0x18
	.error "FieldScriptText_24AB68 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24AB68) < 0x18
	.space 0x18 - (. - FieldScriptText_24AB68)
	.endif
	@ field-script:0x248F0E FieldScriptText_24AB80
	.globl FieldScriptText_24AB80
FieldScriptText_24AB80: @ 0x0824AB80
	.string "しかい『はい！　これより\nおともだち　4にん　つうしんの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！{EOS}"
	.if (. - FieldScriptText_24AB80) > 0x33
	.error "FieldScriptText_24AB80 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24AB80) < 0x33
	.space 0x33 - (. - FieldScriptText_24AB80)
	.endif
	@ field-script:0x248F19 FieldScriptText_24ABB3
	.globl FieldScriptText_24ABB3
FieldScriptText_24ABB3: @ 0x0824ABB3
	.string "しゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！{EOS}"
	.if (. - FieldScriptText_24ABB3) > 0x23
	.error "FieldScriptText_24ABB3 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24ABB3) < 0x23
	.space 0x23 - (. - FieldScriptText_24ABB3)
	.endif
	@ field-script:0x2490C7 FieldScriptText_24ABD6
	.globl FieldScriptText_24ABD6
FieldScriptText_24ABD6: @ 0x0824ABD6
	.string "しかい『さあ\nポケモンの　しょうかいが　おわりました\l1じ　しんさに　はいりましょう！{EOS}"
	.if (. - FieldScriptText_24ABD6) > 0x2c
	.error "FieldScriptText_24ABD6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24ABD6) < 0x2c
	.space 0x2c - (. - FieldScriptText_24ABD6)
	.endif
	@ field-script:0x2490D2 FieldScriptText_24AC02
	.globl FieldScriptText_24AC02
FieldScriptText_24AC02: @ 0x0824AC02
	.string "かいじょうの　おきゃくさまに　よる\nポケモンの　にんき　とうひょうです！{EOS}"
	.if (. - FieldScriptText_24AC02) > 0x25
	.error "FieldScriptText_24AC02 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24AC02) < 0x25
	.space 0x25 - (. - FieldScriptText_24AC02)
	.endif
	@ field-script:0x2490DD FieldScriptText_24AC27
	.globl FieldScriptText_24AC27
FieldScriptText_24AC27: @ 0x0824AC27
	.string "では　さっそく　はじめましょう！\nとうひょう　おねがいします！{EOS}"
	.if (. - FieldScriptText_24AC27) > 0x20
	.error "FieldScriptText_24AC27 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24AC27) < 0x20
	.space 0x20 - (. - FieldScriptText_24AC27)
	.endif
	@ field-script:0x2496B3 FieldScriptText_24AC47
	.globl FieldScriptText_24AC47
FieldScriptText_24AC47: @ 0x0824AC47
	.string "さあ！\nいま　とうひょうが　おわりました！\lしゅうけいを　している　あいだに\l2じ　しんさに　うつりましょう！{EOS}"
	.if (. - FieldScriptText_24AC47) > 0x38
	.error "FieldScriptText_24AC47 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24AC47) < 0x38
	.space 0x38 - (. - FieldScriptText_24AC47)
	.endif
	@ field-script:0x2496BE FieldScriptText_24AC7F
	.globl FieldScriptText_24AC7F
FieldScriptText_24AC7F: @ 0x0824AC7F
	.string "2じ　しんさは　いよいよ\nおまちかねの　アピールタイム！\lわざで　アピール　しまくりましょうー！{EOS}"
	.if (. - FieldScriptText_24AC7F) > 0x31
	.error "FieldScriptText_24AC7F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24AC7F) < 0x31
	.space 0x31 - (. - FieldScriptText_24AC7F)
	.endif
	@ field-script:0x2496C9 FieldScriptText_24ACB0
	.globl FieldScriptText_24ACB0
FieldScriptText_24ACB0: @ 0x0824ACB0
	.string "では　はりきって　どうぞ！\nレッツ！　アピール！{EOS}"
	.if (. - FieldScriptText_24ACB0) > 0x19
	.error "FieldScriptText_24ACB0 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24ACB0) < 0x19
	.space 0x19 - (. - FieldScriptText_24ACB0)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_HighlyAppealing
gContestMoveEffectDescription_HighlyAppealing: @ 0x0824ACC9
	.string "たくさん　アピール　できる{EOS}"
	.if (. - gContestMoveEffectDescription_HighlyAppealing) != 0xe
	.error "gContestMoveEffectDescription_HighlyAppealing must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_UserMoreEasilyStartled
gContestMoveEffectDescription_UserMoreEasilyStartled: @ 0x0824ACD7
	.string "この　アピールの　あと\nびっくり　しやすく　なってしまう{EOS}"
	.if (. - gContestMoveEffectDescription_UserMoreEasilyStartled) != 0x1d
	.error "gContestMoveEffectDescription_UserMoreEasilyStartled must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_GreatAppealButNoMoreMoves
gContestMoveEffectDescription_GreatAppealButNoMoreMoves: @ 0x0824ACF4
	.string "すごいアピールに　なるが　このあと\nさいごまで　なにも　できなくなる{EOS}"
	.if (. - gContestMoveEffectDescription_GreatAppealButNoMoreMoves) > 0x23
	.error "gContestMoveEffectDescription_GreatAppealButNoMoreMoves may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_GreatAppealButNoMoreMoves) < 0x23
	.space 0x23 - (. - gContestMoveEffectDescription_GreatAppealButNoMoreMoves)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_RepetitionNotBoring
gContestMoveEffectDescription_RepetitionNotBoring: @ 0x0824AD17
	.string "つづけて　だしても　しんさいんに\nあきられずに　アピール　できる{EOS}"
	.if (. - gContestMoveEffectDescription_RepetitionNotBoring) != 0x21
	.error "gContestMoveEffectDescription_RepetitionNotBoring must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_AvoidStartleOnce
gContestMoveEffectDescription_AvoidStartleOnce: @ 0x0824AD38
	.string "ほかの　ポケモンに　おどかされても\n1ど　くらいは　がまんできる{EOS}"
	.if (. - gContestMoveEffectDescription_AvoidStartleOnce) != 0x21
	.error "gContestMoveEffectDescription_AvoidStartleOnce must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_AvoidStartle
gContestMoveEffectDescription_AvoidStartle: @ 0x0824AD59
	.string "ほかの　ポケモンに　おどかされても\nがまんできる{EOS}"
	.if (. - gContestMoveEffectDescription_AvoidStartle) != 0x19
	.error "gContestMoveEffectDescription_AvoidStartle must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_AvoidStartleSlightly
gContestMoveEffectDescription_AvoidStartleSlightly: @ 0x0824AD72
	.string "ほかの　ポケモンに　おどかされても\nすこし　くらいなら　がまんできる{EOS}"
	.if (. - gContestMoveEffectDescription_AvoidStartleSlightly) != 0x23
	.error "gContestMoveEffectDescription_AvoidStartleSlightly must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_UserLessEasilyStartled
gContestMoveEffectDescription_UserLessEasilyStartled: @ 0x0824AD95
	.string "この　わざを　だした　あとは\nあまり　びっくり　しなくなる{EOS}"
	.if (. - gContestMoveEffectDescription_UserLessEasilyStartled) > 0x1e
	.error "gContestMoveEffectDescription_UserLessEasilyStartled may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_UserLessEasilyStartled) < 0x1e
	.space 0x1e - (. - gContestMoveEffectDescription_UserLessEasilyStartled)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartleFrontMon
gContestMoveEffectDescription_StartleFrontMon: @ 0x0824ADB3
	.string "じぶんの　まえに　アピールした\nポケモンを　ちょっと　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartleFrontMon) != 0x21
	.error "gContestMoveEffectDescription_StartleFrontMon must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_SlightlyStartlePrevMons
gContestMoveEffectDescription_SlightlyStartlePrevMons: @ 0x0824ADD4
	.string "アピールが　おわっている　ポケモン\nみんなを　ちょっと　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_SlightlyStartlePrevMons) != 0x22
	.error "gContestMoveEffectDescription_SlightlyStartlePrevMons must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartlePrevMon
gContestMoveEffectDescription_StartlePrevMon: @ 0x0824ADF6
	.string "じぶんの　まえに　アピールした\nポケモンを　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartlePrevMon) != 0x1c
	.error "gContestMoveEffectDescription_StartlePrevMon must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartlePrevMons
gContestMoveEffectDescription_StartlePrevMons: @ 0x0824AE12
	.string "アピールが　おわっている　ポケモン\nみんなを　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartlePrevMons) != 0x1d
	.error "gContestMoveEffectDescription_StartlePrevMons must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_BadlyStartleFrontMon
gContestMoveEffectDescription_BadlyStartleFrontMon: @ 0x0824AE2F
	.string "じぶんの　まえに　アピールした\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_BadlyStartleFrontMon) != 0x20
	.error "gContestMoveEffectDescription_BadlyStartleFrontMon must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_BadlyStartlePrevMons
gContestMoveEffectDescription_BadlyStartlePrevMons: @ 0x0824AE4F
	.string "アピールが　おわっている　ポケモン\nみんなを　かなり　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_BadlyStartlePrevMons) != 0x21
	.error "gContestMoveEffectDescription_BadlyStartlePrevMons must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartlePrevMon2
gContestMoveEffectDescription_StartlePrevMon2: @ 0x0824AE70
	.string "じぶんの　まえに　アピールした\nポケモンを　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartlePrevMon2) != 0x1c
	.error "gContestMoveEffectDescription_StartlePrevMon2 must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartlePrevMons2
gContestMoveEffectDescription_StartlePrevMons2: @ 0x0824AE8C
	.string "アピールが　おわっている　ポケモン\nみんなを　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartlePrevMons2) != 0x1d
	.error "gContestMoveEffectDescription_StartlePrevMons2 must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_ShiftJudgeAttention
gContestMoveEffectDescription_ShiftJudgeAttention: @ 0x0824AEA9
	.string "しんさいんの　ほかの　ポケモンへの\nちゅうもくを　そらすことが　できる{EOS}"
	.if (. - gContestMoveEffectDescription_ShiftJudgeAttention) != 0x24
	.error "gContestMoveEffectDescription_ShiftJudgeAttention must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartleMonWithJudgesAttention
gContestMoveEffectDescription_StartleMonWithJudgesAttention: @ 0x0824AECD
	.string "しんさいんに　ちゅうもく　されている\nポケモンを　とくに　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartleMonWithJudgesAttention) != 0x23
	.error "gContestMoveEffectDescription_StartleMonWithJudgesAttention must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_JamsOthersButMissOneTurn
gContestMoveEffectDescription_JamsOthersButMissOneTurn: @ 0x0824AEF0
	.string "みんなの　じゃまを　しまくって\nつぎの　アピールは　さんか　しない{EOS}"
	.if (. - gContestMoveEffectDescription_JamsOthersButMissOneTurn) != 0x22
	.error "gContestMoveEffectDescription_JamsOthersButMissOneTurn must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartleMonsSameTypeAppeal
gContestMoveEffectDescription_StartleMonsSameTypeAppeal: @ 0x0824AF12
	.string "おなじ　タイプの　アピールを　した\nポケモンを　とくに　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartleMonsSameTypeAppeal) != 0x22
	.error "gContestMoveEffectDescription_StartleMonsSameTypeAppeal must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartleMonsCoolAppeal
gContestMoveEffectDescription_StartleMonsCoolAppeal: @ 0x0824AF34
	.string "かっこいい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartleMonsCoolAppeal) != 0x1f
	.error "gContestMoveEffectDescription_StartleMonsCoolAppeal must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartleMonsBeautyAppeal
gContestMoveEffectDescription_StartleMonsBeautyAppeal: @ 0x0824AF53
	.string "うつくしい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartleMonsBeautyAppeal) != 0x1f
	.error "gContestMoveEffectDescription_StartleMonsBeautyAppeal must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartleMonsCuteAppeal
gContestMoveEffectDescription_StartleMonsCuteAppeal: @ 0x0824AF72
	.string "かわいい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartleMonsCuteAppeal) != 0x1e
	.error "gContestMoveEffectDescription_StartleMonsCuteAppeal must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartleMonsSmartAppeal
gContestMoveEffectDescription_StartleMonsSmartAppeal: @ 0x0824AF90
	.string "かしこい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartleMonsSmartAppeal) != 0x1e
	.error "gContestMoveEffectDescription_StartleMonsSmartAppeal must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_StartleMonsToughAppeal
gContestMoveEffectDescription_StartleMonsToughAppeal: @ 0x0824AFAE
	.string "たくましい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_StartleMonsToughAppeal) != 0x1f
	.error "gContestMoveEffectDescription_StartleMonsToughAppeal must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_MakeFollowingMonNervous
gContestMoveEffectDescription_MakeFollowingMonNervous: @ 0x0824AFCD
	.string "このあと　アピールする　ポケモン\n1ひきを　きんちょう　させる{EOS}"
	.if (. - gContestMoveEffectDescription_MakeFollowingMonNervous) > 0x20
	.error "gContestMoveEffectDescription_MakeFollowingMonNervous may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_MakeFollowingMonNervous) < 0x20
	.space 0x20 - (. - gContestMoveEffectDescription_MakeFollowingMonNervous)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_MakeFollowingMonsNervous
gContestMoveEffectDescription_MakeFollowingMonsNervous: @ 0x0824AFED
	.string "このあと　アピールする　ポケモン\nみんなを　きんちょう　させる{EOS}"
	.if (. - gContestMoveEffectDescription_MakeFollowingMonsNervous) > 0x20
	.error "gContestMoveEffectDescription_MakeFollowingMonsNervous may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_MakeFollowingMonsNervous) < 0x20
	.space 0x20 - (. - gContestMoveEffectDescription_MakeFollowingMonsNervous)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_WorsenConditionOfPrevMons
gContestMoveEffectDescription_WorsenConditionOfPrevMons: @ 0x0824B00D
	.string "アピールが　おわった　ポケモンの\nちょうしを　さげる{EOS}"
	.if (. - gContestMoveEffectDescription_WorsenConditionOfPrevMons) > 0x1b
	.error "gContestMoveEffectDescription_WorsenConditionOfPrevMons may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_WorsenConditionOfPrevMons) < 0x1b
	.space 0x1b - (. - gContestMoveEffectDescription_WorsenConditionOfPrevMons)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_BadlyStartlesMonsInGoodCondition
gContestMoveEffectDescription_BadlyStartlesMonsInGoodCondition: @ 0x0824B028
	.string "ちょうしの　いい　ポケモン\nみんなを　かなり　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_BadlyStartlesMonsInGoodCondition) != 0x1d
	.error "gContestMoveEffectDescription_BadlyStartlesMonsInGoodCondition must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_BetterIfFirst
gContestMoveEffectDescription_BetterIfFirst: @ 0x0824B045
	.string "1ばん　はじめに　アピールすると\nアピールが　すごく　うまくいく{EOS}"
	.if (. - gContestMoveEffectDescription_BetterIfFirst) > 0x21
	.error "gContestMoveEffectDescription_BetterIfFirst may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_BetterIfFirst) < 0x21
	.space 0x21 - (. - gContestMoveEffectDescription_BetterIfFirst)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_BetterIfLast
gContestMoveEffectDescription_BetterIfLast: @ 0x0824B066
	.string "1ばん　さいごに　アピールすると\nアピールが　すごく　うまくいく{EOS}"
	.if (. - gContestMoveEffectDescription_BetterIfLast) > 0x21
	.error "gContestMoveEffectDescription_BetterIfLast may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_BetterIfLast) < 0x21
	.space 0x21 - (. - gContestMoveEffectDescription_BetterIfLast)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_AppealAsGoodAsPrevOnes
gContestMoveEffectDescription_AppealAsGoodAsPrevOnes: @ 0x0824B087
	.string "それまでの　ポケモンの　アピールと\nおなじくらいの　アピールに　みせる{EOS}"
	.if (. - gContestMoveEffectDescription_AppealAsGoodAsPrevOnes) != 0x24
	.error "gContestMoveEffectDescription_AppealAsGoodAsPrevOnes must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_AppealAsGoodAsPrevOne
gContestMoveEffectDescription_AppealAsGoodAsPrevOne: @ 0x0824B0AB
	.string "1つまえの　ポケモンの　アピールと\nおなじくらい　うまく　できる{EOS}"
	.if (. - gContestMoveEffectDescription_AppealAsGoodAsPrevOne) != 0x21
	.error "gContestMoveEffectDescription_AppealAsGoodAsPrevOne must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_BetterWhenLater
gContestMoveEffectDescription_BetterWhenLater: @ 0x0824B0CC
	.string "みんなの　あとで　アピールするほど\nすごい　アピールに　みせられる{EOS}"
	.if (. - gContestMoveEffectDescription_BetterWhenLater) != 0x22
	.error "gContestMoveEffectDescription_BetterWhenLater must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_QualityDependsOnTiming
gContestMoveEffectDescription_QualityDependsOnTiming: @ 0x0824B0EE
	.string "だすときに　よって　アピールの\nできぐあいが　いろいろと　かわる{EOS}"
	.if (. - gContestMoveEffectDescription_QualityDependsOnTiming) > 0x21
	.error "gContestMoveEffectDescription_QualityDependsOnTiming may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_QualityDependsOnTiming) < 0x21
	.space 0x21 - (. - gContestMoveEffectDescription_QualityDependsOnTiming)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_BetterIfSameType
gContestMoveEffectDescription_BetterIfSameType: @ 0x0824B10F
	.string "1つまえの　ポケモンの　アピールと\nタイプが　おなじなら　きにいられる{EOS}"
	.if (. - gContestMoveEffectDescription_BetterIfSameType) != 0x24
	.error "gContestMoveEffectDescription_BetterIfSameType must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_BetterIfDiffType
gContestMoveEffectDescription_BetterIfDiffType: @ 0x0824B133
	.string "1つまえの　ポケモンの　アピールと\nタイプが　ちがうなら　きにいられる{EOS}"
	.if (. - gContestMoveEffectDescription_BetterIfDiffType) != 0x24
	.error "gContestMoveEffectDescription_BetterIfDiffType must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_AffectedByPrevAppeal
gContestMoveEffectDescription_AffectedByPrevAppeal: @ 0x0824B157
	.string "1つまえの　ポケモンの　アピールの\nうまさに　えいきょう　される{EOS}"
	.if (. - gContestMoveEffectDescription_AffectedByPrevAppeal) > 0x21
	.error "gContestMoveEffectDescription_AffectedByPrevAppeal may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_AffectedByPrevAppeal) < 0x21
	.space 0x21 - (. - gContestMoveEffectDescription_AffectedByPrevAppeal)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_ImproveConditionPreventNervousness
gContestMoveEffectDescription_ImproveConditionPreventNervousness: @ 0x0824B178
	.string "アピールの　ちょうしが　あがる\nきんちょうも　しにくくなる{EOS}"
	.if (. - gContestMoveEffectDescription_ImproveConditionPreventNervousness) > 0x1e
	.error "gContestMoveEffectDescription_ImproveConditionPreventNervousness may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_ImproveConditionPreventNervousness) < 0x1e
	.space 0x1e - (. - gContestMoveEffectDescription_ImproveConditionPreventNervousness)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_BetterWithGoodCondition
gContestMoveEffectDescription_BetterWithGoodCondition: @ 0x0824B196
	.string "ちょうしが　いいときに　だすと\nアピールが　とても　うまくいく{EOS}"
	.if (. - gContestMoveEffectDescription_BetterWithGoodCondition) > 0x20
	.error "gContestMoveEffectDescription_BetterWithGoodCondition may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_BetterWithGoodCondition) < 0x20
	.space 0x20 - (. - gContestMoveEffectDescription_BetterWithGoodCondition)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_NextAppealEarlier
gContestMoveEffectDescription_NextAppealEarlier: @ 0x0824B1B6
	.string "このつぎの　アピールを\nはじめの　ほうに　だすことが　できる{EOS}"
	.if (. - gContestMoveEffectDescription_NextAppealEarlier) != 0x1f
	.error "gContestMoveEffectDescription_NextAppealEarlier must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_NextAppealLater
gContestMoveEffectDescription_NextAppealLater: @ 0x0824B1D5
	.string "このつぎの　アピールを\nおわりの　ほうに　だすことが　できる{EOS}"
	.if (. - gContestMoveEffectDescription_NextAppealLater) != 0x1f
	.error "gContestMoveEffectDescription_NextAppealLater must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_MakeScramblingTurnOrderEasier
gContestMoveEffectDescription_MakeScramblingTurnOrderEasier: @ 0x0824B1F4
	.string "このつぎの　アピールの\nじゅんばんが　かわりやすく　なる{EOS}"
	.if (. - gContestMoveEffectDescription_MakeScramblingTurnOrderEasier) > 0x1d
	.error "gContestMoveEffectDescription_MakeScramblingTurnOrderEasier may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_MakeScramblingTurnOrderEasier) < 0x1d
	.space 0x1d - (. - gContestMoveEffectDescription_MakeScramblingTurnOrderEasier)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_ScrambleNextTurnOrder
gContestMoveEffectDescription_ScrambleNextTurnOrder: @ 0x0824B211
	.string "このつぎの　アピールの\nじゅんばんを　めちゃくちゃに　する{EOS}"
	.if (. - gContestMoveEffectDescription_ScrambleNextTurnOrder) > 0x1e
	.error "gContestMoveEffectDescription_ScrambleNextTurnOrder may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_ScrambleNextTurnOrder) < 0x1e
	.space 0x1e - (. - gContestMoveEffectDescription_ScrambleNextTurnOrder)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_ExciteAudienceInAnyContest
gContestMoveEffectDescription_ExciteAudienceInAnyContest: @ 0x0824B22F
	.string "どの　コンテストで　みせても\nかならず　もりあがる　アピール{EOS}"
	.if (. - gContestMoveEffectDescription_ExciteAudienceInAnyContest) != 0x1f
	.error "gContestMoveEffectDescription_ExciteAudienceInAnyContest must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_BadlyStartleMonsWithGoodAppeals
gContestMoveEffectDescription_BadlyStartleMonsWithGoodAppeals: @ 0x0824B24E
	.string "アピールが　うまくいった　ポケモン\nみんなを　かなり　おどろかす{EOS}"
	.if (. - gContestMoveEffectDescription_BadlyStartleMonsWithGoodAppeals) != 0x21
	.error "gContestMoveEffectDescription_BadlyStartleMonsWithGoodAppeals must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gContestMoveEffectDescription_BetterWhenAudienceExcited
gContestMoveEffectDescription_BetterWhenAudienceExcited: @ 0x0824B26F
	.string "かいじょうが　もりあがっている　ほど\nアピールが　きにいられる{EOS}"
	.if (. - gContestMoveEffectDescription_BetterWhenAudienceExcited) != 0x20
	.error "gContestMoveEffectDescription_BetterWhenAudienceExcited must retain its original byte length"
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestMoveEffectDescription_DontExciteAudience
gContestMoveEffectDescription_DontExciteAudience: @ 0x0824B28F
	.string "このアピールのあと　かいじょうが\nしばらく　もりあがらなく　なる{EOS}"
	.if (. - gContestMoveEffectDescription_DontExciteAudience) > 0x21
	.error "gContestMoveEffectDescription_DontExciteAudience may not grow beyond its original slot"
	.endif
	.if (. - gContestMoveEffectDescription_DontExciteAudience) < 0x21
	.space 0x21 - (. - gContestMoveEffectDescription_DontExciteAudience)
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
	.globl gContestCategoryName_Cool
gContestCategoryName_Cool: @ 0x0824B2FB
	.string "かっこいい{EOS}"
	.if (. - gContestCategoryName_Cool) > 0x6
	.error "gContestCategoryName_Cool may not grow beyond its original slot"
	.endif
	.if (. - gContestCategoryName_Cool) < 0x6
	.space 0x6 - (. - gContestCategoryName_Cool)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestCategoryName_Beauty
gContestCategoryName_Beauty: @ 0x0824B301
	.string "うつくしい{EOS}"
	.if (. - gContestCategoryName_Beauty) > 0x6
	.error "gContestCategoryName_Beauty may not grow beyond its original slot"
	.endif
	.if (. - gContestCategoryName_Beauty) < 0x6
	.space 0x6 - (. - gContestCategoryName_Beauty)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestCategoryName_Cute
gContestCategoryName_Cute: @ 0x0824B307
	.string "かわいい{EOS}"
	.if (. - gContestCategoryName_Cute) > 0x5
	.error "gContestCategoryName_Cute may not grow beyond its original slot"
	.endif
	.if (. - gContestCategoryName_Cute) < 0x5
	.space 0x5 - (. - gContestCategoryName_Cute)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestCategoryName_Smart
gContestCategoryName_Smart: @ 0x0824B30C
	.string "かしこい{EOS}"
	.if (. - gContestCategoryName_Smart) > 0x5
	.error "gContestCategoryName_Smart may not grow beyond its original slot"
	.endif
	.if (. - gContestCategoryName_Smart) < 0x5
	.space 0x5 - (. - gContestCategoryName_Smart)
	.endif
	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gContestCategoryName_Tough
gContestCategoryName_Tough: @ 0x0824B311
	.string "たくましい{EOS}"
	.if (. - gContestCategoryName_Tough) > 0x6
	.error "gContestCategoryName_Tough may not grow beyond its original slot"
	.endif
	.if (. - gContestCategoryName_Tough) < 0x6
	.space 0x6 - (. - gContestCategoryName_Tough)
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
