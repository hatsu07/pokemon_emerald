	@ field-script:0x1EA5B8 FieldScriptText_1EAAFC
	.globl gText_Rom_1EAAFC
gText_Rom_1EAAFC: @ 0x081EAAFC
	.string "あんた……　いそぎのたびで　ないのなら\nうちに　よっていって　おくれ……{EOS}"
	.if (. - gText_Rom_1EAAFC) > 0x25
	.error "gText_Rom_1EAAFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAAFC) < 0x25
	.space 0x25 - (. - gText_Rom_1EAAFC)
	.endif
	@ field-script:0x1EA631 FieldScriptText_1EAB21
	.globl gText_Rom_1EAB21
gText_Rom_1EAB21: @ 0x081EAB21
	.string "もっと　ポケモン　きたえないと\nかちぬくのは　きびしそうだ\pいままでの　ジムリーダーより\nはるかに　つよいと　きくからな\lポケモンリーグにいる　してんのうは！{EOS}"
	.if (. - gText_Rom_1EAB21) > 0x50
	.error "gText_Rom_1EAB21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAB21) < 0x50
	.space 0x50 - (. - gText_Rom_1EAB21)
	.endif
	@ field-script:0x1EA63A FieldScriptText_1EAB71
	.globl gText_Rom_1EAB71
gText_Rom_1EAB71: @ 0x081EAB71
	.string "カチヌキいっかに　いどんだけれど\n4にん　つづけての　ポケモンしょうぶは\lきびしいよな……　ボロまけ　したよ{EOS}"
	.if (. - gText_Rom_1EAB71) > 0x37
	.error "gText_Rom_1EAB71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAB71) < 0x37
	.space 0x37 - (. - gText_Rom_1EAB71)
	.endif
	@ field-script:0x1EA5FB FieldScriptText_1EABA8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EABA8
gText_Rom_1EABA8: @ 0x081EABA8
	.string "ここは　111ばん　どうろ\n{ESCAPE}{0x01}　キンセツシティ{EOS}"
	.if (. - gText_Rom_1EABA8) != 0x1a
	.error "gText_Rom_1EABA8 must retain its original byte length"
	.endif
	.globl gText_Rom_1EABBA
	.set gText_Rom_1EABBA, gText_Rom_1EABA8 + 0x12
	.globl gText_Rom_1EABBE
	.set gText_Rom_1EABBE, gText_Rom_1EABA8 + 0x16
	@ field-script:0x1EA604 FieldScriptText_1EABC2
	.globl gText_Rom_1EABC2
gText_Rom_1EABC2: @ 0x081EABC2
	.string "われら　かぞくの　こころは　ひとつ\n「カチヌキ　ファミリーの　いえ」{EOS}"
	.if (. - gText_Rom_1EABC2) > 0x23
	.error "gText_Rom_1EABC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EABC2) < 0x23
	.space 0x23 - (. - gText_Rom_1EABC2)
	.endif
	@ field-script:0x1EA60D FieldScriptText_1EABE5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EABE5
gText_Rom_1EABE5: @ 0x081EABE5
	.string "ここは　111ばん　どうろ\n{ESCAPE}{0x02}　112ばん　どうろ{EOS}"
	.if (. - gText_Rom_1EABE5) != 0x1c
	.error "gText_Rom_1EABE5 must retain its original byte length"
	.endif
	.globl gText_Rom_1EABF7
	.set gText_Rom_1EABF7, gText_Rom_1EABE5 + 0x12
	@ field-script:0x1EA616 FieldScriptText_1EAC01
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EAC01
gText_Rom_1EAC01: @ 0x081EAC01
	.string "ここは　111ばん　どうろ\n{ESCAPE}{0x02}　113ばん　どうろ{EOS}"
	.if (. - gText_Rom_1EAC01) != 0x1c
	.error "gText_Rom_1EAC01 must retain its original byte length"
	.endif
	.globl gText_Rom_1EAC13
	.set gText_Rom_1EAC13, gText_Rom_1EAC01 + 0x12
	@ field-script:0x1EA61F FieldScriptText_1EAC1D
	.globl gText_Rom_1EAC1D
gText_Rom_1EAC1D: @ 0x081EAC1D
	.string "「ケンコーばあさんの　いえ」\nつかれたと　おもうなら　よってらっしゃい！{EOS}"
	.if (. - gText_Rom_1EAC1D) > 0x25
	.error "gText_Rom_1EAC1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAC1D) < 0x25
	.space 0x25 - (. - gText_Rom_1EAC1D)
	.endif
	@ field-script:0x1EA628 FieldScriptText_1EAC42
	.globl gText_Rom_1EAC42
gText_Rom_1EAC42: @ 0x081EAC42
	.string "おとくな　けいじばん！！\pポケモンの　つよさを　あらわす　ことばで\nとくこう　とは\lとくしゅ　こうげきりょく　のこと！\pとくぼう　とは\nとくしゅ　ぼうぎょりょく　のこと　です！{EOS}"
	.if (. - gText_Rom_1EAC42) > 0x59
	.error "gText_Rom_1EAC42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAC42) < 0x59
	.space 0x59 - (. - gText_Rom_1EAC42)
	.endif
	@ field-script:0x1EA664 FieldScriptText_1EAC9B
	.globl gText_Rom_1EAC9B
gText_Rom_1EAC9B: @ 0x081EAC9B
	.string "この　あたりに　すなで　できた\nとうが　たっている　はず　なんだが\pどうしたわけか\nみえるときと　みえないときが　あるのだ\pだから　わたしは　それを\nげんえいのとう　と　よんでいる……{EOS}"
	.if (. - gText_Rom_1EAC9B) > 0x5d
	.error "gText_Rom_1EAC9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAC9B) < 0x5d
	.space 0x5d - (. - gText_Rom_1EAC9B)
	.endif
	@ field-script:0x1EA682 FieldScriptText_1EACF8
	.globl gText_Rom_1EACF8
gText_Rom_1EACF8: @ 0x081EACF8
	.string "みえるぞ！　すなのとう　が！\nげんえい　と　よばれた　すなのとうが\nはっきりと　みえる！\pしかし　そのすがたは　はかなくて\nいまにも　くずれて　しまいそうだ……\pうーん　はいって　みたいが\nこわくて　ゆうきが　でん！{EOS}"
	.if (. - gText_Rom_1EACF8) > 0x6d
	.error "gText_Rom_1EACF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EACF8) < 0x6d
	.space 0x6d - (. - gText_Rom_1EACF8)
	.endif
	@ field-script:0x1EA678 FieldScriptText_1EAD65
	.globl gText_Rom_1EAD65
gText_Rom_1EAD65: @ 0x081EAD65
	.string "はー　びっくりした……\pいきなり　すなが　そらから\nバラバラと　ふって　きたんじゃ\pで　なかは　どうじゃった？\nやはり　すなの　オバケ　とか　でたか？{EOS}"
	.if (. - gText_Rom_1EAD65) > 0x4c
	.error "gText_Rom_1EAD65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAD65) < 0x4c
	.space 0x4c - (. - gText_Rom_1EAD65)
	.endif
	@ field-script:0x1EA66E FieldScriptText_1EADB1
	.globl gText_Rom_1EADB1
gText_Rom_1EADB1: @ 0x081EADB1
	.string "あれから\nすなのとう　は　みえなく　なった\pやはり　げんえいのとう　だったのか……{EOS}"
	.if (. - gText_Rom_1EADB1) > 0x2a
	.error "gText_Rom_1EADB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EADB1) < 0x2a
	.space 0x2a - (. - gText_Rom_1EADB1)
	.endif
	@ field-script:0x1EA345 FieldScriptText_1EADDB
	.globl gText_Rom_1EADDB
gText_Rom_1EADDB: @ 0x081EADDB
	.string "ツメのかせきは\nすなに　もぐって　しまった……{EOS}"
	.if (. - gText_Rom_1EADDB) > 0x18
	.error "gText_Rom_1EADDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EADDB) < 0x18
	.space 0x18 - (. - gText_Rom_1EADDB)
	.endif
	@ field-script:0x1EA34F FieldScriptText_1EADF3
	.globl gText_Rom_1EADF3
gText_Rom_1EADF3: @ 0x081EADF3
	.string "ねっこのかせきは\nすなに　もぐって　しまった……{EOS}"
	.if (. - gText_Rom_1EADF3) > 0x19
	.error "gText_Rom_1EADF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EADF3) < 0x19
	.space 0x19 - (. - gText_Rom_1EADF3)
	.endif
	@ field-script:0x1EA697 FieldScriptText_1EAE0C
	.globl gText_Rom_1EAE0C
gText_Rom_1EAE0C: @ 0x081EAE0C
	.string "しまった！\p111ばんどうろに　いくなら\nいわくだきを　もっていけ　って\lキンセツの　おじさんに　いわれてたんだ！\pおじさん？　サイクルショップの\nむかいがわの　いえに　すんでるよ{EOS}"
	.if (. - gText_Rom_1EAE0C) > 0x5b
	.error "gText_Rom_1EAE0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAE0C) < 0x5b
	.space 0x5b - (. - gText_Rom_1EAE0C)
	.endif
	@ field-script:0x1EA914 FieldScriptText_1EAE67
	.globl gText_Rom_1EAE67
gText_Rom_1EAE67: @ 0x081EAE67
	.string "{ESCAPE}{0x03}　トレーナーヒル　いりぐち\nかけあがれ！　あつき　トレーナーたち！{EOS}"
	.if (. - gText_Rom_1EAE67) > 0x25
	.error "gText_Rom_1EAE67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAE67) < 0x25
	.space 0x25 - (. - gText_Rom_1EAE67)
	.endif
	@ Embedded ROM bytes: file offset 0x1EAE8C, size 0x197
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x03, 0x92, 0xAE, 0x1E, 0x08, 0x00, 0x2A, 0x9D, 0x00, 0x16, 0xBD, 0x40, 0x00, 0x00, 0x02, 0x69
	.byte 0x28, 0x28, 0x00, 0x4F, 0x01, 0x00, 0x2B, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x28, 0x14, 0x00
	.byte 0x0F, 0x00
	.4byte Route112_Text_LeaderGoingToAwakenThing
	.byte 0x09, 0x04, 0x68, 0x4F, 0x01, 0x00, 0x25, 0x36, 0x24, 0x08
	.byte 0x51, 0x00, 0x00, 0x28, 0x28, 0x00, 0x4F, 0x06, 0x00, 0x27, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00
	.byte 0x28, 0x14, 0x00, 0x0F, 0x00
	.4byte Route112_Text_YeahWeNeedMeteorite
	.byte 0x09, 0x04, 0x68, 0x4F, 0x06, 0x00, 0x25
	.byte 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x28, 0x28, 0x00, 0x4F, 0x01, 0x00, 0x2B, 0x36, 0x24, 0x08
	.byte 0x51, 0x00, 0x00, 0x28, 0x14, 0x00, 0x0F, 0x00
	.4byte Route112_Text_OhThatsWhyCrewWentToFallarbor @ ROM pointer 0x081EB06C
	.byte 0x09, 0x04, 0x68, 0x4F, 0x01, 0x00, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x28, 0x28, 0x00
	.byte 0x4F, 0x06, 0x00, 0x27, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x28, 0x14, 0x00, 0x0F, 0x00, 0x8B
	.byte 0xB0, 0x1E, 0x08, 0x09, 0x04, 0x68, 0x4F, 0x06, 0x00, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00
	.byte 0x6B, 0x02, 0x0F, 0x00
	.4byte gText_Rom_1EB0EC @ ROM pointer 0x081EB0EC
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte Route112_Text_MtChimneySign
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00, 0x3A, 0xB1
	.byte 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte Route112_Text_NotEasyToGetBackToLavaridge
	.byte 0x09, 0x02, 0x02, 0x5C, 0x00
	.byte 0x72, 0x02, 0x00, 0x00
	.4byte Route112_Text_BriceIntro @ ROM pointer 0x0825C2CD
	.4byte Route112_Text_BriceDefeat @ ROM pointer 0x0825C2F1
	.byte 0x0F, 0x00, 0xFF, 0xC2, 0x25, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x02, 0x73, 0x02, 0x00, 0x00, 0x29
	.byte 0xC3, 0x25, 0x08
	.4byte Route112_Text_TrentDefeat
	.byte 0x91, 0xAF, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00
	.byte 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xB0, 0xAF, 0x1E, 0x08, 0x0F, 0x00, 0x60, 0xC3, 0x25
	.byte 0x08, 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00, 0x97, 0xC3, 0x25
	.byte 0x08, 0x09, 0x04, 0x16, 0x04, 0x80, 0x73, 0x02, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x73, 0x02
	.byte 0x09, 0x08, 0x6C, 0x02, 0x5C, 0x05, 0x73, 0x02, 0x00, 0x00
	.4byte Route112_Text_TrentRematchIntro
	.byte 0x01, 0xC4
	.byte 0x25, 0x08, 0x0F, 0x00
	.4byte Route112_Text_TrentRematchPostBattle @ ROM pointer 0x0825C40C
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xD5, 0x00, 0x00, 0x00
	.4byte Route112_Text_LarryIntro @ ROM pointer 0x0825C43E
	.4byte Route112_Text_LarryDefeat @ ROM pointer 0x0825C45C
	.byte 0x0F, 0x00
	.4byte Route112_Text_LarryPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xD7, 0x01, 0x00, 0x00
	.4byte Route112_Text_CarolIntro @ ROM pointer 0x0825C48B
	.4byte Route112_Text_CarolDefeat @ ROM pointer 0x0825C4AB
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte Route112_Text_CarolPostBattle @ ROM pointer 0x0825C4BA
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xEA, 0x02, 0x00, 0x00
	.4byte Route112_Text_BryantIntro
	.byte 0x13, 0xC5, 0x25
	.byte 0x08, 0x0F, 0x00
	.4byte Route112_Text_BryantPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xEB, 0x02, 0x00, 0x00
	.4byte Route112_Text_ShaylaIntro @ ROM pointer 0x0825C538
	.4byte Route112_Text_ShaylaDefeat @ ROM pointer 0x0825C56E
	.byte 0x0F, 0x00
	.4byte Route112_Text_ShaylaPostBattle @ ROM pointer 0x0825C58A
	.byte 0x09, 0x06, 0x02
