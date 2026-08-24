	@ field-script:0x2124EB FieldScriptText_212557
	.globl FieldScriptText_212557
FieldScriptText_212557: @ 0x08212557
	.string "マユミ『あっ！　{0xFD}{0x01}{0xFD}{0x05}\pちらかっていて　ごめんなさい……\nけんきゅうに　むちゅうに　なると\lつい　こう　なっちゃうんです……\pはずかしいから　ヒミツに　してくださいね\nこれ　あげますから……{EOS}"
	.if (. - FieldScriptText_212557) > 0x61
	.error "FieldScriptText_212557 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_212557) < 0x61
	.space 0x61 - (. - FieldScriptText_212557)
	.endif
	@ field-script:0x21250A FieldScriptText_2125B8
	.globl FieldScriptText_2125B8
FieldScriptText_2125B8: @ 0x082125B8
	.string "あずかりシステムを　つくった\nあたしからの　アドバイス　です\pどの　ボックスに　どの　ポケモンを\nあずけたか　わかるように\lきちんと　せいり　したほうが　いいですよ！{EOS}"
	.if (. - FieldScriptText_2125B8) > 0x54
	.error "FieldScriptText_2125B8 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2125B8) < 0x54
	.space 0x54 - (. - FieldScriptText_2125B8)
	.endif
	@ field-script:0x212515 FieldScriptText_21260C
	.globl FieldScriptText_21260C
FieldScriptText_21260C: @ 0x0821260C
	.string "けんきゅう　ようの　ノートだ\nボックスに　ついて　かかれている！\pボックス1つに　30ぴきの\nポケモンを　あずけられる　ようにする\pパソコンには　ぜんぶで　420ひきの\nポケモンを　あずけられる　ようにする\pつづきを　よみますか？{EOS}"
	.if (. - FieldScriptText_21260C) > 0x74
	.error "FieldScriptText_21260C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21260C) < 0x74
	.space 0x74 - (. - FieldScriptText_21260C)
	.endif
	@ field-script:0x212532 FieldScriptText_212680
	.globl FieldScriptText_212680
FieldScriptText_212680: @ 0x08212680
	.string "ポケモンを　マーキングすると　ボックスが\nせいり　しやすくなる　ようにする\pボックスの　なまえ　かべがみを\nかえられる　ようにして　あずけられた\lポケモンが　よろこぶ　ようにする\pつづきを　よみますか？{EOS}"
	.if (. - FieldScriptText_212680) > 0x66
	.error "FieldScriptText_212680 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_212680) < 0x66
	.space 0x66 - (. - FieldScriptText_212680)
	.endif
	@ field-script:0x212547 FieldScriptText_2126E6
	.globl FieldScriptText_2126E6
FieldScriptText_2126E6: @ 0x082126E6
	.string "ポケモンが　てんそう　される　ボックスは\nさいごに　みた　ボックスにする\pその　ボックスが　いっぱいの　ときは\nつぎの　ボックスに　てんそう　する\pつまり　ボックスを　みることで\nポケモンを　てんそう　したい　ボックスに\lきりかえられる　ようにする{EOS}"
	.if (. - FieldScriptText_2126E6) > 0x7d
	.error "FieldScriptText_2126E6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2126E6) < 0x7d
	.space 0x7d - (. - FieldScriptText_2126E6)
	.endif
	@ field-script:0x212528 FieldScriptText_212763
	.globl FieldScriptText_212763
FieldScriptText_212763: @ 0x08212763
	.string "{0xFD}{0x01}は　ノートを　とじた{EOS}"
	.if (. - FieldScriptText_212763) > 0xd
	.error "FieldScriptText_212763 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_212763) < 0xd
	.space 0xd - (. - FieldScriptText_212763)
	.endif
	@ field-script:0x212550 FieldScriptText_212770
	.globl FieldScriptText_212770
FieldScriptText_212770: @ 0x08212770
	.string "パソコンを　みると\nなんと　でんしメールが　きていた！\p「……　……　……\pきみの　あずかり　システム\nなかなか　べんり　やな\pいろんな　ところに\nじょせい　らしい　きくばりが　あって\lつかってて　たのしいし\pいっしょに　かいはつ　した\nなかま　として　うれしいわ！\pほな　これからも　あずかりシステムの\nけんきゅう　がんばってな\p……　……　……」{EOS}"
	.if (. - FieldScriptText_212770) > 0xb0
	.error "FieldScriptText_212770 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_212770) < 0xb0
	.space 0xb0 - (. - FieldScriptText_212770)
	.endif
	@ Embedded ROM bytes: file offset 0x212820, size 0x3B
	.byte 0x03, 0x26, 0x28, 0x21, 0x08, 0x00, 0x29, 0xBA, 0x08, 0x02, 0x0F, 0x00, 0x5B, 0x28, 0x21, 0x08
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0xDD, 0x28, 0x21, 0x08, 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x2B, 0xC7
	.byte 0x00, 0x06, 0x01, 0x51, 0x28, 0x21, 0x08, 0x0F, 0x00, 0x5A, 0x29, 0x21, 0x08, 0x09, 0x04, 0x6C
	.byte 0x02, 0x0F, 0x00, 0x9F, 0x29, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02
