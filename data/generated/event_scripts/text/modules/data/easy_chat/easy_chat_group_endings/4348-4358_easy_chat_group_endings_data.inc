	@ src/data/easy_chat/easy_chat_group_endings.h:346 easy_chat_group_endings_line_346
	.globl gText_Rom_224AC2
gText_Rom_224AC2: @ 0x08224AC2
	.string "ますわ$"
	.if (. - gText_Rom_224AC2) > 0x4
	.error "gText_Rom_224AC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_224AC2) < 0x4
	.space 0x4 - (. - gText_Rom_224AC2)
	.endif
	@ analyzed canonical ROM range 0x08224AC6-0x08224D50
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08224AC6: @ 0x08224AC6
EventText_JP_08224AC6: @ 0x08224AC6
	.string "わたくしの　パートナーに　ならないと\nきっと　こうかい　しますわよ$"
EventText_JP_08224AE8: @ 0x08224AE8
	.string "わたし\nトライアスリート　{STR_VAR_1}!$"
EventText_JP_08224AF9: @ 0x08224AF9
	.string "わたしはね……\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_08224B0E: @ 0x08224B0E
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nもっているの!\pおねがい!\nいっしょに　タッグを　くんでよ?$"
EventText_JP_08224B38: @ 0x08224B38
	.string "ありがとうー!\nうけつけで　とうろく　してくるー$"
EventText_JP_08224B51: @ 0x08224B51
	.string "わたしと　タッグを　くんだら\nきっと　つよいのにー!$"
EventText_JP_08224B6C: @ 0x08224B6C
	.string "やあ!\pぼく\nむしとりしょうねん　{STR_VAR_1}!$"
EventText_JP_08224B81: @ 0x08224B81
	.string "ぼく\n{STR_VAR_1}を　おぼえた　{STR_VAR_2}と……$"
EventText_JP_08224B93: @ 0x08224B93
	.string "{STR_VAR_1}を　おぼえた　{STR_VAR_2}を\nもっているよ!\pねー?\nぼくと　いっしょに　タッグを　くまない?$"
EventText_JP_08224BC1: @ 0x08224BC1
	.string "やったね!\pじゃ　いまから　うけつけで\nとうろくを　すませてくるね!$"
EventText_JP_08224BE4: @ 0x08224BE4
	.string "ぼくの　ポケモン　さいこう　なのに!\nこうかい　しないでよ$"
EventText_JP_08224C02: @ 0x08224C02
	.string "こんにちは!\pぼくは\nじゅくがえり　{STR_VAR_1}　です$"
EventText_JP_08224C1A: @ 0x08224C1A
	.string "ぼくは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08224C2C: @ 0x08224C2C
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nそだてています!\pどうです?\pぼくと\nいっしょに　タッグを　くみませんか?$"
EventText_JP_08224C5E: @ 0x08224C5E
	.string "ありがとうございます!\pでは\nうけつけで　とうろくを　すませてきますね!$"
EventText_JP_08224C83: @ 0x08224C83
	.string "ざんねんです……\pきみと　いっしょに　タッグを　くんで\nべんきょう　したかったです……$"
EventText_JP_08224CAF: @ 0x08224CAF
	.string "よう!\pオレ\nおぼっちゃま　{STR_VAR_1}!$"
EventText_JP_08224CC1: @ 0x08224CC1
	.string "オレ\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_08224CD1: @ 0x08224CD1
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nもっているんだぜ!\pオレ　いっしょに\nタッグを　くんでもいいぜ?$"
EventText_JP_08224CFD: @ 0x08224CFD
	.string "よし!\pじゃあ　いまから\nうけつけで　とうろくを　すませてくるぜ!$"
EventText_JP_08224D1F: @ 0x08224D1F
	.string "オレと　タッグを　くまない　なんて\nきっと　こうかい　するぜ!$"
	.byte 0x55, 0xA0, 0x5D, 0xAB, 0xFB, 0x56, 0x77, 0x63, 0x05, 0x03, 0x00, 0xFD, 0x02, 0xFE, 0x14, 0x00
	.byte 0x23, 0x03
	.globl gText_Rom_224D51
gText_Rom_224D51: @ 0x08224D51
	.string "します$"
	.if (. - gText_Rom_224D51) > 0x4
	.error "gText_Rom_224D51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_224D51) < 0x4
	.space 0x4 - (. - gText_Rom_224D51)
	.endif
	@ analyzed canonical ROM range 0x08224D55-0x0822533F
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08224D55: @ 0x08224D55
	.string "いま　わたくし\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_08224D6A: @ 0x08224D6A
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれております!\pおねがいします!\pわたくしと\nタッグを　くんで　くれませんか?$"
EventText_JP_08224D9E: @ 0x08224D9E
	.string "オッス!\pさっそく\nうけつけに　とうろく　してまいります!$"
EventText_JP_08224DBC: @ 0x08224DBC
	.string "オッス……\pつぎの　きかいは\nぜひ　タッグを　くんでください……$"
EventText_JP_08224DDD: @ 0x08224DDD
	.string "こんにちは!\pわたし\nうきわガール　{STR_VAR_1}!$"
EventText_JP_08224DF3: @ 0x08224DF3
	.string "わたし\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_08224E04: @ 0x08224E04
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれているの!\pねぇ?\pいっしょに\nタッグを　くんでよー?$"
EventText_JP_08224E2D: @ 0x08224E2D
	.string "ありがとうー!\pじゃあ　いまから\nうけつけで　とうろくを　すませてくるね!$"
EventText_JP_08224E53: @ 0x08224E53
	.string "わたしと　タッグを　くんだら\nとっても　つよかったのにー!$"
EventText_JP_08224E71: @ 0x08224E71
	.string "こんにちは……\pオカルトマニア　{STR_VAR_1}と\nもうします……$"
EventText_JP_08224E8D: @ 0x08224E8D
	.string "わたくし……\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_08224EA1: @ 0x08224EA1
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nもっております……\pどうか　わたくしと\nタッグを　くんでいただけませんか?$"
EventText_JP_08224ED2: @ 0x08224ED2
	.string "ありがとうございます……\nうけつけで　とうろくを　してきます……$"
EventText_JP_08224EF3: @ 0x08224EF3
	.string "あなたと　タッグを\nくみたかったです……$"
EventText_JP_08224F08: @ 0x08224F08
	.string "やあ!\pぼく\nポケモンブリーダー　{STR_VAR_1}!$"
EventText_JP_08224F1D: @ 0x08224F1D
	.string "ぼくは　いま\n{STR_VAR_1}を　もつ　{STR_VAR_2}とね……$"
EventText_JP_08224F32: @ 0x08224F32
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nそだてているんだ!\pどう?\pぼくと\nいっしょに　タッグを　くんでみない?$"
EventText_JP_08224F62: @ 0x08224F62
	.string "ありがとう!\pでは　さっそく\nうけつけで　とうろくを　すませてきますね!$"
EventText_JP_08224F87: @ 0x08224F87
	.string "きみと　いっしょに　タッグを\nくみたかったよ……$"
EventText_JP_08224FA0: @ 0x08224FA0
	.string "こんにちは!\pわたし\nトライアスリート　{STR_VAR_1}よ!$"
EventText_JP_08224FB9: @ 0x08224FB9
	.string "わたしは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_08224FCB: @ 0x08224FCB
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれて　はしっているの!\pどう?\nわたしと　タッグを　くんでみない?$"
EventText_JP_08224FF9: @ 0x08224FF9
	.string "やったね!\pじゃ　さっそく　うけつけで\nとうろくを　すませてくるわー!$"
EventText_JP_0822501D: @ 0x0822501D
	.string "わたしと　タッグを　くんだら\nさいこうなのに　ざんねんね……$"
EventText_JP_0822503C: @ 0x0822503C
	.string "やあ!\pぼく\nトライアスリート　{STR_VAR_1}!$"
EventText_JP_08225050: @ 0x08225050
	.string "ぼく\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_08225060: @ 0x08225060
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれて　はしっているんだ!\pどうだい?\nぼくと　タッグを　くんでみないかい?$"
EventText_JP_08225092: @ 0x08225092
	.string "やったー!\pいま　うけつけで\nとうろくを　すませてくるよー!$"
EventText_JP_082250B1: @ 0x082250B1
	.string "きみと　タッグを　くんで\nいっしょに　たたかいたかったよ……$"
EventText_JP_082250D0: @ 0x082250D0
	.string "わたし\nバトルガール　{STR_VAR_1}!$"
EventText_JP_082250DF: @ 0x082250DF
	.string "わたし\n{STR_VAR_1}を　もつ　{STR_VAR_2}……$"
EventText_JP_082250EF: @ 0x082250EF
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nきたえているの!\pどう?\nわたしと　タッグを　くまない?$"
EventText_JP_08225117: @ 0x08225117
	.string "ありがとう!\pいまから　うけつけで\nとうろくを　すませてくるからねー!$"
EventText_JP_0822513B: @ 0x0822513B
	.string "あなたとなら　さいきょうの　タッグを\nくめると　おもったのに……$"
EventText_JP_0822515C: @ 0x0822515C
	.string "オレ\nトライアスリート　{STR_VAR_1}!$"
EventText_JP_0822516C: @ 0x0822516C
	.string "オレ\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_0822517C: @ 0x0822517C
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれて　はしっているんだぜ!\pどうだい?\nオレと　いっしょに　タッグを　くまない?$"
EventText_JP_082251B1: @ 0x082251B1
	.string "サンキュー!\pいまから　うけつけで\nとうろくを　すませてくるぜ!$"
EventText_JP_082251D2: @ 0x082251D2
	.string "きみとなら　さいきょうの　タッグを\nくめたのに　ざんねんだよ!$"
EventText_JP_082251F2: @ 0x082251F2
	.string "ぼくはね……\nうきわボーイ　{STR_VAR_1}!$"
EventText_JP_08225204: @ 0x08225204
	.string "ぼくは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_08225215: @ 0x08225215
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれているんだよ!\pねぇ?\nぼくと　いっしょに　タッグを　くもうよ?$"
EventText_JP_08225243: @ 0x08225243
	.string "やったねー!\pうけつけで　とうろく　してくるよー!\nがんばろうねー!$"
EventText_JP_08225266: @ 0x08225266
	.string "ぼくの　ポケモン　とっても　つよいのに……\nタッグに　なれなくて　ざんねん!$"
EventText_JP_0822528D: @ 0x0822528D
	.string "イエーイ!\pオレは\nギタリスト　{STR_VAR_1}!$"
EventText_JP_082252A1: @ 0x082252A1
	.string "オレは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_082252B3: @ 0x082252B3
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nつれているんだぜー!\pイエーイ?\nオレと　いっしょに　タッグを　くもうぜ?$"
EventText_JP_082252E5: @ 0x082252E5
	.string "イエーイ!\pいまから\nうけつけで　とうろく　してくるぜー!$"
EventText_JP_08225303: @ 0x08225303
	.string "オレの　ポケモン　とっても　つよいぜー!\nこうかい　しないように　するんだぜー!$"
	.byte 0x0A, 0x2E, 0x16, 0x11, 0x1A, 0xFB, 0x8D, 0x82, 0x7E, 0x64, 0x79, 0x6F, 0x7E, 0x00, 0xFD, 0x02
	.byte 0x14, 0xFE, 0x23, 0x03
	.globl gText_Rom_225340
gText_Rom_225340: @ 0x08225340
	.string "します$"
	.if (. - gText_Rom_225340) > 0x4
	.error "gText_Rom_225340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_225340) < 0x4
	.space 0x4 - (. - gText_Rom_225340)
	.endif
	@ analyzed canonical ROM range 0x08225344-0x082253E2
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08225344: @ 0x08225344
	.string "わたくし\n{STR_VAR_1}を　もった　{STR_VAR_2}と……$"
EventText_JP_08225357: @ 0x08225357
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}を\nつれておりますぞ!\pどうですかな?\nわたくしの　パートナーに　なりませんかな?$"
EventText_JP_0822538B: @ 0x0822538B
	.string "よろしく　おねがいしますぞ!\pでは\nうけつけで　とうろく　してきます!$"
EventText_JP_082253AF: @ 0x082253AF
	.string "ざんねん　ですな……\nつぎの　きかいを　きたいして　おりますぞ$"
	.byte 0x2C, 0x10, 0x08, 0x0C, 0xFE, 0x41, 0x02, 0x0D, 0x07, 0x58, 0x77, 0x98, 0x19, 0x00, 0xFD, 0x02
	.byte 0x14, 0xFA, 0x23, 0x03
	.globl gText_Rom_2253E3
gText_Rom_2253E3: @ 0x082253E3
	.string "します$"
	.if (. - gText_Rom_2253E3) > 0x4
	.error "gText_Rom_2253E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2253E3) < 0x4
	.space 0x4 - (. - gText_Rom_2253E3)
	.endif
	@ analyzed canonical ROM range 0x082253E7-0x08225AB0
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082253E7: @ 0x082253E7
EventText_JP_082253E7: @ 0x082253E7
	.string "わたくしは　いま\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_082253FD: @ 0x082253FD
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれて　おります!\pどうでしょう?\nわたくしと　タッグを　くみませんかな?$"
EventText_JP_0822542E: @ 0x0822542E
	.string "ありがとう　ございます!\nそれでは　とうろくに　いってまいります!$"
EventText_JP_08225450: @ 0x08225450
	.string "わたくしの　ポケモン\nさいこうなのに　ざんねんです……$"
EventText_JP_0822546C: @ 0x0822546C
	.string "うむ!\pわしは\nたつじん　{STR_VAR_1}!$"
EventText_JP_0822547D: @ 0x0822547D
	.string "わしの　きたえあげた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_0822549C: @ 0x0822549C
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}じゃ\pどうじゃ?\nわしと　タッグを　くまぬか?$"
EventText_JP_082254BE: @ 0x082254BE
	.string "うむ!\pいまから　とうろくを　すませてくるぞ!\nおたがい　がんばろうぞ!$"
EventText_JP_082254E3: @ 0x082254E3
	.string "おぬしの　せんたくが\nただしいことを　いのっておるぞ……$"
EventText_JP_08225500: @ 0x08225500
	.string "……はいはい\pわたしは\nたつじん　{STR_VAR_1}!$"
EventText_JP_08225515: @ 0x08225515
	.string "わたしの　きたえあげた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08225535: @ 0x08225535
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　ですよ\pどうですかね?\nわたしと　タッグを　くみませんか?$"
EventText_JP_0822555E: @ 0x0822555E
	.string "……はいはい\nいまから　とうろくを　してきますよ……$"
EventText_JP_08225579: @ 0x08225579
	.string "つぎに　あったときには\nタッグを　くみたいものですね……$"
EventText_JP_08225596: @ 0x08225596
	.string "オレは\nドラゴンつかい　{STR_VAR_1}!$"
EventText_JP_082255A6: @ 0x082255A6
	.string "オレの　きたえあげた　ポケモンは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_082255C4: @ 0x082255C4
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}　だ!\pどうだ?\nオレと　タッグを　くんでみないか?$"
EventText_JP_082255E8: @ 0x082255E8
	.string "……よしっ!　がんばるぜー!\pすぐに　とうろくを　すませて　くるからな!$"
EventText_JP_0822560D: @ 0x0822560D
	.string "オレより　つよい　パートナーは\nそうそう　いないぜ!$"
EventText_JP_08225628: @ 0x08225628
	.string "ぼくは\nとりつかい　{STR_VAR_1}!$"
EventText_JP_08225636: @ 0x08225636
	.string "ぼくの　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_0822564E: @ 0x0822564E
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　だね\pどうだい?\nボクと　タッグを　くんでみない?$"
EventText_JP_08225673: @ 0x08225673
	.string "ありがとー!\pいまから　とうろくを　してくるよ!$"
EventText_JP_0822568C: @ 0x0822568C
	.string "ぼくの　ポケモン\nほんとに　つよいのに　ざんねんだよ!$"
EventText_JP_082256A8: @ 0x082256A8
	.string "ぼく\nにんじゃごっこ　{STR_VAR_1}!$"
EventText_JP_082256B7: @ 0x082256B7
	.string "ぼくの　もっている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_082256D5: @ 0x082256D5
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}だよ\pねー?\nぼくと　タッグを　くもうよ?$"
EventText_JP_082256F5: @ 0x082256F5
	.string "やったー!\nすぐ　とうろくを　してくるねー!$"
EventText_JP_0822570C: @ 0x0822570C
	.string "ぼくの　ポケモンの　つよさに\nきっと　こうかい　するよー$"
EventText_JP_08225729: @ 0x08225729
	.string "こんにちは!\pわたし\nパラソルおねえさん　{STR_VAR_1}!$"
EventText_JP_08225742: @ 0x08225742
	.string "わたしは　いま\n{STR_VAR_1}を　もった　{STR_VAR_2}と……$"
EventText_JP_08225758: @ 0x08225758
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}を\nつれているの!\pどう?\nわたしの　ポケモンと　タッグを　くまない?$"
EventText_JP_08225786: @ 0x08225786
	.string "ありがとうねー!\pいま　うけつけで　とうろく　してくるから\nがんばろうねー!$"
EventText_JP_082257AD: @ 0x082257AD
	.string "あたしの　ポケモン　とっても　つよいのに\nざんねんよ……$"
EventText_JP_082257CA: @ 0x082257CA
	.string "わたしは\nこんちゅうマニア　{STR_VAR_1}!$"
EventText_JP_082257DC: @ 0x082257DC
	.string "わたしの　みつけた　ポケモンは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_082257F9: @ 0x082257F9
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}　ですよ!\pどうですか?\nわたしと　タッグを　くみませんか?$"
EventText_JP_08225821: @ 0x08225821
	.string "はい!\nりょうかい　しました\pいま　とうろくを　してきますからね$"
EventText_JP_08225842: @ 0x08225842
	.string "わたしが　みつけた　ポケモンと　くめば\nまけないのに……$"
EventText_JP_0822585F: @ 0x0822585F
	.string "オッス!\pオレは\nふなのり　{STR_VAR_1}!$"
EventText_JP_08225871: @ 0x08225871
	.string "オレの　じまんの　ポケモンは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_0822588D: @ 0x0822588D
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}　だ!\pなあ!　\nもちろん　オレと　タッグを　くむだろう?$"
EventText_JP_082258B4: @ 0x082258B4
	.string "とうぜん　だよな!\nいまから　とうろく　してくるぜ!$"
EventText_JP_082258CF: @ 0x082258CF
	.string "オレと　くんだら　らくしょう　なのに\nざんねん　だぜ!$"
EventText_JP_082258EB: @ 0x082258EB
	.string "やあ\pぼくは\nポケモンコレクター　{STR_VAR_1}!$"
EventText_JP_08225900: @ 0x08225900
	.string "ぼくの　じまんの　ポケモンは\n{STR_VAR_1}を　もった　{STR_VAR_2}と……$"
EventText_JP_0822591D: @ 0x0822591D
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}だよ\pどうだい?\nぼくと　タッグを　くんでみない?$"
EventText_JP_08225941: @ 0x08225941
	.string "おおー!\pじゃあ　さっそく　うけつけで\nとうろく　してくるよ!$"
EventText_JP_08225961: @ 0x08225961
	.string "ぼくの　ポケモンの　みりょくに\nきが　つかないなんて　ガッカリだよ……$"
EventText_JP_08225985: @ 0x08225985
	.string "ぼくは\nポケモンレンジャー　{STR_VAR_1}!$"
EventText_JP_08225997: @ 0x08225997
	.string "ぼくの　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_082259B5: @ 0x082259B5
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}だ!\pどうだい?\nぼくと　タッグを　くんでみない?$"
EventText_JP_082259D9: @ 0x082259D9
	.string "よしー!\nすぐ　うけつけで　とうろく　してくるね!$"
EventText_JP_082259F3: @ 0x082259F3
	.string "つぎに　あったときは\nぼくの　ポケモン　えらんでくれよ!$"
EventText_JP_08225A10: @ 0x08225A10
	.string "わたしは\nポケモンレンジャー　{STR_VAR_1}よ!$"
EventText_JP_08225A24: @ 0x08225A24
	.string "わたしが　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08225A43: @ 0x08225A43
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}よ!\pどう?\nわたしと　タッグを　くんでみない?$"
EventText_JP_08225A66: @ 0x08225A66
	.string "がんばるわよー!\nすぐ　うけつけで　とうろく　してくるね!$"
EventText_JP_08225A84: @ 0x08225A84
	.string "つぎこそ\nわたしの　ポケモンを　えらんでよね!$"
	.byte 0x2C, 0x10, 0x08, 0x0C, 0xFE, 0x51, 0x7B, 0x6F, 0x15, 0x05, 0x18, 0x04, 0x0B, 0x2E, 0x00, 0xFD
	.byte 0x02, 0x14, 0xFA, 0x23, 0x03
	.globl gText_Rom_225AB1
gText_Rom_225AB1: @ 0x08225AB1
	.string "します$"
	.if (. - gText_Rom_225AB1) > 0x4
	.error "gText_Rom_225AB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_225AB1) < 0x4
	.space 0x4 - (. - gText_Rom_225AB1)
	.endif
	@ analyzed canonical ROM range 0x08225AB5-0x082261C9
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08225AB5: @ 0x08225AB5
	.string "わたくしの　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08225AD5: @ 0x08225AD5
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}です\pどうでしょう?\nわたくしと　タッグを　くんでみませんか?$"
EventText_JP_08225AFF: @ 0x08225AFF
	.string "こうえいです\nすぐ　うけつけで　とうろく　してきますね!$"
EventText_JP_08225B1C: @ 0x08225B1C
	.string "つぎに　おあいした　ときには\nタッグを　くみたいものですね……$"
EventText_JP_08225B3C: @ 0x08225B3C
	.string "わし\nいせきマニア　{STR_VAR_1}じゃ!$"
EventText_JP_08225B4C: @ 0x08225B4C
	.string "わしの　もっている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08225B6A: @ 0x08225B6A
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}じゃ!\pどうじゃ?\nわしと　タッグを　くんでみないか?$"
EventText_JP_08225B90: @ 0x08225B90
	.string "よしよし!\nすぐ　うけつけで　とうろく　してくるぞい!$"
EventText_JP_08225BAC: @ 0x08225BAC
	.string "うーむ……\nわしの　ポケモン　つよいと　おもうぞ……$"
EventText_JP_08225BC7: @ 0x08225BC7
	.string "ぼく\nエリートトレーナー　{STR_VAR_1}!$"
EventText_JP_08225BD8: @ 0x08225BD8
	.string "ぼくの　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08225BF6: @ 0x08225BF6
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}だよ\pどう?\nぼくと　タッグを　くんでみない?$"
EventText_JP_08225C18: @ 0x08225C18
	.string "よしっ!\nすぐ　うけつけで　とうろく　してくるね!$"
EventText_JP_08225C32: @ 0x08225C32
	.string "きみとなら　さいきょうの　チームに　なると\nおもったんだけどな……$"
EventText_JP_08225C54: @ 0x08225C54
	.string "わたしは\nエリートトレーナー　{STR_VAR_1}!$"
EventText_JP_08225C67: @ 0x08225C67
	.string "わたしの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08225C85: @ 0x08225C85
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　だよ\pどう?\nわたしと　タッグを　くんでみない?$"
EventText_JP_08225CA9: @ 0x08225CA9
	.string "やったわ!\nすぐ　うけつけで　とうろく　してくるね!$"
EventText_JP_08225CC4: @ 0x08225CC4
	.string "あなたとなら　つよい　タッグチームが\nできると　おもったのに……$"
EventText_JP_08225CE5: @ 0x08225CE5
	.string "オレは\nかいじゅうマニア　{STR_VAR_1}だ!$"
EventText_JP_08225CF7: @ 0x08225CF7
	.string "オレの　もっている　ポケモンは\n{STR_VAR_1}を　もった　{STR_VAR_2}と……$"
EventText_JP_08225D15: @ 0x08225D15
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}だ!\pどうだ?\nオレと　タッグを　くんでみないか?$"
EventText_JP_08225D39: @ 0x08225D39
	.string "やったぜ!\nすぐ　うけつけで　とうろく　してくるぜ!$"
EventText_JP_08225D54: @ 0x08225D54
	.string "オレの　ポケモン　つよいぞ!\nこうかい　しても　しらないぞ!$"
EventText_JP_08225D73: @ 0x08225D73
	.string "オレ\nキャンプファイヤー　{STR_VAR_1}!$"
EventText_JP_08225D84: @ 0x08225D84
	.string "オレの　そだてあげた　ポケモンは\n{STR_VAR_1}を　もった　{STR_VAR_2}と……$"
EventText_JP_08225DA3: @ 0x08225DA3
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}　だよ\pどうだい?\nオレと　タッグを　くんでみないか?$"
EventText_JP_08225DC9: @ 0x08225DC9
	.string "やったー!\nいま　うけつけで　とうろく　してくるからな!$"
EventText_JP_08225DE6: @ 0x08225DE6
	.string "つぎに　あったときには\nタッグを　くんでくれよな!$"
EventText_JP_08225E00: @ 0x08225E00
	.string "ぼくは\nキャンプボーイ　{STR_VAR_1}!$"
EventText_JP_08225E10: @ 0x08225E10
	.string "ぼくの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08225E2D: @ 0x08225E2D
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　だよ\pどう?\nぼくと　タッグを　くんでみない?$"
EventText_JP_08225E50: @ 0x08225E50
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!$"
EventText_JP_08225E6B: @ 0x08225E6B
	.string "つぎに　あったときには\nタッグを　くんでよね!$"
EventText_JP_08225E83: @ 0x08225E83
	.string "わたしは\nピクニックガール　{STR_VAR_1}です!$"
EventText_JP_08225E97: @ 0x08225E97
	.string "わたしの　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08225EB6: @ 0x08225EB6
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}です\pどうすか?\nわたしと　タッグを　くんでみませんか?$"
EventText_JP_08225EDD: @ 0x08225EDD
	.string "ありがとうございます!\nすぐ　うけつけで　とうろく　してきます!$"
EventText_JP_08225EFE: @ 0x08225EFE
	.string "つぎに　あったときには\nタッグを　くんでくださいね$"
EventText_JP_08225F18: @ 0x08225F18
	.string "ぼくは\nサイキッカー　{STR_VAR_1}!$"
EventText_JP_08225F27: @ 0x08225F27
	.string "ぼくの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08225F44: @ 0x08225F44
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　だよ\pどう?\nぼくと　タッグを　くんでみない?$"
EventText_JP_08225F67: @ 0x08225F67
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!$"
EventText_JP_08225F82: @ 0x08225F82
	.string "つぎに　あったときには\nタッグを　くみたいね……$"
EventText_JP_08225F9B: @ 0x08225F9B
	.string "わたし\nサイキッカー　{STR_VAR_1}!$"
EventText_JP_08225FAA: @ 0x08225FAA
	.string "わたしが　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08225FC9: @ 0x08225FC9
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}よ!\pどう?\nわたしと　タッグを　くまない?$"
EventText_JP_08225FEA: @ 0x08225FEA
	.string "ありがとう!\nすぐ　うけつけで　とうろく　してくるね!$"
EventText_JP_08226006: @ 0x08226006
	.string "つぎに　あったときには\nタッグを　くみたいわね!$"
EventText_JP_0822601F: @ 0x0822601F
	.string "わたし\nじゅくがえり　{STR_VAR_1}です!$"
EventText_JP_08226030: @ 0x08226030
	.string "わたしの　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_0822604F: @ 0x0822604F
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}です!\pどうですか?\nわたしと　タッグを　くんでくれませんか?$"
EventText_JP_08226079: @ 0x08226079
	.string "ありがとうございます!\nすぐ　うけつけで　とうろく　してきます!$"
EventText_JP_0822609A: @ 0x0822609A
	.string "つぎに　あったときには\nタッグを　くんでくださいね……$"
EventText_JP_082260B6: @ 0x082260B6
	.string "わたし\nポケモンブリーダー　{STR_VAR_1}!$"
EventText_JP_082260C8: @ 0x082260C8
	.string "わたしの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_082260E6: @ 0x082260E6
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　なの\pどう?\nわたしと　タッグを　くんでみない?$"
EventText_JP_0822610A: @ 0x0822610A
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!$"
EventText_JP_08226125: @ 0x08226125
	.string "つぎに　あったときには\nぜったいに　タッグを　くんでよね!$"
EventText_JP_08226143: @ 0x08226143
	.string "わたくし\nだいすきクラブ　{STR_VAR_1}と\lもうしますのよ$"
EventText_JP_0822615C: @ 0x0822615C
	.string "わたくしの　そだてた　ポケモンちゃんは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_0822617D: @ 0x0822617D
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}　ですの\pどうでしょう?\nわたくしと　タッグを　くみませんか?$"
	.byte 0x01, 0x28, 0x37, 0x14, 0x03, 0x3B, 0x3C, 0x02, 0x1F, 0x0D, 0xAB, 0xFB, 0x2C, 0x10, 0x08, 0x0C
	.byte 0x00, 0x0B, 0x50, 0x0F, 0x08, 0xFE, 0x03, 0x09, 0x12, 0x09, 0x44, 0x00, 0x14, 0x03, 0x2B, 0x08
	.byte 0x00, 0x0C, 0x13, 0x07
	.globl gText_Rom_2261CA
gText_Rom_2261CA: @ 0x082261CA
	.string "ますわ$"
	.if (. - gText_Rom_2261CA) > 0x4
	.error "gText_Rom_2261CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2261CA) < 0x4
	.space 0x4 - (. - gText_Rom_2261CA)
	.endif
	@ analyzed canonical ROM range 0x082261CE-0x08226BFC
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082261CE: @ 0x082261CE
EventText_JP_082261CE: @ 0x082261CE
	.string "わたくしの　ポケモンちゃん\nさいこうなのに　ざんねんです……$"
EventText_JP_082261ED: @ 0x082261ED
	.string "わたし\nビキニのおねえさん　{STR_VAR_1}!$"
EventText_JP_082261FF: @ 0x082261FF
	.string "わたしの　そだてた　ポケモンは\n{STR_VAR_1}を　もった　{STR_VAR_2}と……$"
EventText_JP_0822621D: @ 0x0822621D
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}よっ\pどう?\nわたしと　タッグを　くんでみない?$"
EventText_JP_08226240: @ 0x08226240
	.string "やったねっ!\nすぐ　うけつけで　とうろく　してくるねっ!$"
EventText_JP_0822625D: @ 0x0822625D
	.string "つぎに　あったときには\nタッグを　くんでよねっ!$"
EventText_JP_08226276: @ 0x08226276
	.string "オレ\nトライアスリート　{STR_VAR_1}!$"
EventText_JP_08226286: @ 0x08226286
	.string "オレの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_082262A3: @ 0x082262A3
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　だよ\pどう?\nオレと　タッグを　くんでみない?$"
EventText_JP_082262C6: @ 0x082262C6
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!$"
EventText_JP_082262E1: @ 0x082262E1
	.string "つぎに　あったときには\nタッグを　くんでくれよな!$"
EventText_JP_082262FB: @ 0x082262FB
	.string "わたし\nトライアスリート　{STR_VAR_1}!$"
EventText_JP_0822630C: @ 0x0822630C
	.string "わたしの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_0822632A: @ 0x0822632A
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}よ\pどう?\nわたしと　タッグを　くんでみない?$"
EventText_JP_0822634C: @ 0x0822634C
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!$"
EventText_JP_08226367: @ 0x08226367
	.string "つぎに　あったときには\nタッグを　くんでよね!$"
EventText_JP_0822637F: @ 0x0822637F
	.string "オレ\nかいパンやろう　{STR_VAR_1}!$"
EventText_JP_0822638E: @ 0x0822638E
	.string "オレが　そだてた　ポケモンは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_082263AA: @ 0x082263AA
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}だよ\pどう?\nオレと　タッグを　くんでみない?$"
EventText_JP_082263CB: @ 0x082263CB
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!$"
EventText_JP_082263E6: @ 0x082263E6
	.string "つぎに　あったときには\nタッグを　くんでくれよな!$"
MapScripts_JP_08226400: @ 0x08226400
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08226410
	.byte 0x04
	.4byte MapScriptTable_JP_0822644B
	.byte 0x02
	.4byte MapScriptTable_JP_08226468
	.byte 0
EventScript_JP_08226410: @ 0x08226410
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08226427 @ EventScript_JP_08226427
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08226447 @ EventScript_JP_08226447
	@ event command: end
	.byte 0x02
EventScript_JP_08226427: @ 0x08226427
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000E
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226441 @ EventScript_JP_08226441
	@ event command: setvar
	.byte 0x16
	.2byte 0x401F
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08226441: @ 0x08226441
	@ event command: setvar
	.byte 0x16
	.2byte 0x401F
	.2byte 0x0059
	@ event command: return
	.byte 0x03
EventScript_JP_08226447: @ 0x08226447
	@ event command: special
	.byte 0x25
	.2byte 0x01C2
	@ event command: return
	.byte 0x03
MapScriptTable_JP_0822644B: @ 0x0822644B
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08226455
	.2byte 0
EventScript_JP_08226455: @ 0x08226455
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x00FF
	.byte 0x1A
	.byte 0x10
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x0001
	.byte 0x1A
	.byte 0x10
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x0004
	.byte 0x1A
	.byte 0x10
	@ event command: special
	.byte 0x25
	.2byte 0x01AD
	@ event command: end
	.byte 0x02
MapScriptTable_JP_08226468: @ 0x08226468
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08226472
	.2byte 0
EventScript_JP_08226472: @ 0x08226472
	@ event command: lockall
	.byte 0x69
	@ event command: setflag
	.byte 0x29
	.2byte 0x4002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0001
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x4002
	@ event command: showobjectat
	.byte 0x58
	.2byte 0x0001
	.byte 0x1A
	.byte 0x10
	@ event command: showobjectat
	.byte 0x58
	.2byte 0x0004
	.byte 0x1A
	.byte 0x10
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822659C @ Movement_JP_0822659C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0822659C @ Movement_JP_0822659C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x4002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0001
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x4002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08226572 @ Movement_JP_08226572
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0822657A @ Movement_JP_0822657A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08226582 @ Movement_JP_08226582
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0822658B @ Movement_JP_0822658B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0028
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0007
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08226599 @ Movement_JP_08226599
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08226599 @ Movement_JP_08226599
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08226594 @ Movement_JP_08226594
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08226594 @ Movement_JP_08226594
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0007
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x08226527 @ EventScript_JP_08226527
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08226527: @ 0x08226527
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08226554 @ EventScript_JP_08226554
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08226554 @ EventScript_JP_08226554
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822655E @ EventScript_JP_0822655E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08226568 @ EventScript_JP_08226568
	@ event command: return
	.byte 0x03
EventScript_JP_08226554: @ 0x08226554
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x08
	.byte 0xFF
	.2byte 0x0004
	.2byte 0x0008
	.byte 0x27, 0x03
EventScript_JP_0822655E: @ 0x0822655E
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x11
	.byte 0xFF
	.2byte 0x0004
	.2byte 0x0005
	.byte 0x27, 0x03
EventScript_JP_08226568: @ 0x08226568
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x11
	.byte 0xFF
	.2byte 0x0004
	.2byte 0x0005
	.byte 0x27, 0x03
Movement_JP_08226572: @ 0x08226572
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_0822657A: @ 0x0822657A
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_08226582: @ 0x08226582
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_0822658B: @ 0x0822658B
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_08226594: @ 0x08226594
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08226599: @ 0x08226599
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_0822659C: @ 0x0822659C
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
MapScripts_JP_0822659E: @ 0x0822659E
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082265AE
	.byte 0x04
	.4byte MapScriptTable_JP_082265E9
	.byte 0x02
	.4byte MapScriptTable_JP_082265F9
	.byte 0
EventScript_JP_082265AE: @ 0x082265AE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082265C5 @ EventScript_JP_082265C5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082265E5 @ EventScript_JP_082265E5
	@ event command: end
	.byte 0x02
EventScript_JP_082265C5: @ 0x082265C5
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000E
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082265DF @ EventScript_JP_082265DF
	@ event command: setvar
	.byte 0x16
	.2byte 0x401F
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_082265DF: @ 0x082265DF
	@ event command: setvar
	.byte 0x16
	.2byte 0x401F
	.2byte 0x0059
	@ event command: return
	.byte 0x03
EventScript_JP_082265E5: @ 0x082265E5
	@ event command: special
	.byte 0x25
	.2byte 0x01C2
	@ event command: return
	.byte 0x03
MapScriptTable_JP_082265E9: @ 0x082265E9
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082265F3
	.2byte 0
EventScript_JP_082265F3: @ 0x082265F3
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x00FF
	.byte 0x1A
	.byte 0x11
	@ event command: end
	.byte 0x02
MapScriptTable_JP_082265F9: @ 0x082265F9
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08226603
	.2byte 0
EventScript_JP_08226603: @ 0x08226603
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08226BCE @ Movement_JP_08226BCE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08226BD4 @ Movement_JP_08226BD4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822666A @ EventScript_JP_0822666A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08226BF4 @ Movement_JP_08226BF4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08226BF4 @ Movement_JP_08226BF4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08226BDA @ Movement_JP_08226BDA
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08226BDA @ Movement_JP_08226BDA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: goto
	.byte 0x05
	.4byte 0x082267F9 @ EventScript_JP_082267F9
EventScript_JP_0822666A: @ 0x0822666A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: addobject
	.byte 0x55
	.2byte 0x0001
	@ event command: addobject
	.byte 0x55
	.2byte 0x0004
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08226BDE @ Movement_JP_08226BDE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08226BE4 @ Movement_JP_08226BE4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082266DC @ EventScript_JP_082266DC
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: delay
	.byte 0x28
	.2byte 0x000F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08226BFB @ Movement_JP_08226BFB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x02021C7C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08226BFB @ Movement_JP_08226BFB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x02021C7C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x0822671F @ EventScript_JP_0822671F
EventScript_JP_082266DC: @ 0x082266DC
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: delay
	.byte 0x28
	.2byte 0x000F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08226BFB @ Movement_JP_08226BFB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: messageautoscroll
	.byte 0x9B
	.4byte 0x02021C7C
	@ event command: waitmessage
	.byte 0x66
	@ event command: delay
	.byte 0x28
	.2byte 0x0030
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08226BFB @ Movement_JP_08226BFB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: messageautoscroll
	.byte 0x9B
	.4byte 0x02021C7C
	@ event command: waitmessage
	.byte 0x66
	@ event command: delay
	.byte 0x28
	.2byte 0x0030
EventScript_JP_0822671F: @ 0x0822671F
	@ event command: call
	.byte 0x04
	.4byte 0x08222207
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226760 @ EventScript_JP_08226760
EventScript_JP_08226734: @ 0x08226734
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00AA
	@ event command: goto
	.byte 0x05
	.4byte 0x082222AC
EventScript_JP_08226760: @ 0x08226760
	@ event command: call
	.byte 0x04
	.4byte 0x08221FB3
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226965 @ EventScript_JP_08226965
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08226BEA @ Movement_JP_08226BEA
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08226BEF @ Movement_JP_08226BEF
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0001
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08226BF4 @ Movement_JP_08226BF4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08226BF4 @ Movement_JP_08226BF4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08226BDA @ Movement_JP_08226BDA
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08226BDA @ Movement_JP_08226BDA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082267CE @ EventScript_JP_082267CE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822230B @ gText_Rom_22230B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082267D7 @ EventScript_JP_082267D7
EventScript_JP_082267CE: @ 0x082267CE
	@ event command: messageautoscroll
	.byte 0x9B
	.4byte 0x0822230B @ gText_Rom_22230B
	@ event command: waitmessage
	.byte 0x66
	@ event command: delay
	.byte 0x28
	.2byte 0x0030
EventScript_JP_082267D7: @ 0x082267D7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08226BCA @ EventScript_JP_08226BCA
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0170
	@ event command: waitfanfare
	.byte 0x32
	@ event command: special
	.byte 0x25
	.2byte 0x0000
EventScript_JP_082267F9: @ 0x082267F9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: call
	.byte 0x04
	.4byte 0x082269B3 @ EventScript_JP_082269B3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226939 @ EventScript_JP_08226939
	@ event command: call
	.byte 0x04
	.4byte 0x0821F921
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226867 @ EventScript_JP_08226867
	@ event command: multichoice
	.byte 0x6F
	.byte 0x13
	.byte 0x04
	.byte 0x67
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226939 @ EventScript_JP_08226939
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822689D @ EventScript_JP_0822689D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082268D9 @ EventScript_JP_082268D9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226907 @ EventScript_JP_08226907
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082267F9 @ EventScript_JP_082267F9
EventScript_JP_08226867: @ 0x08226867
	@ event command: multichoice
	.byte 0x6F
	.byte 0x14
	.byte 0x06
	.byte 0x68
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226939 @ EventScript_JP_08226939
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082268D9 @ EventScript_JP_082268D9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226907 @ EventScript_JP_08226907
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082267F9 @ EventScript_JP_082267F9
EventScript_JP_0822689D: @ 0x0822689D
	@ event command: message
	.byte 0x67
	.4byte 0x082223F2 @ gText_Rom_2223F2
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x14
	.byte 0x08
	.byte 0x5E
	.byte 0x01
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082267F9 @ EventScript_JP_082267F9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082268CF @ EventScript_JP_082268CF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082267F9 @ EventScript_JP_082267F9
EventScript_JP_082268CF: @ 0x082268CF
	@ event command: call
	.byte 0x04
	.4byte 0x0821F8F5
	@ event command: goto
	.byte 0x05
	.4byte 0x082267F9 @ EventScript_JP_082267F9
EventScript_JP_082268D9: @ 0x082268D9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822242F @ gText_Rom_22242F
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082267F9 @ EventScript_JP_082267F9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226991 @ EventScript_JP_08226991
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082267F9 @ EventScript_JP_082267F9
EventScript_JP_08226907: @ 0x08226907
	@ event command: message
	.byte 0x67
	.4byte 0x08222464 @ gText_Rom_222464
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x14
	.byte 0x08
	.byte 0x5E
	.byte 0x01
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082267F9 @ EventScript_JP_082267F9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226734 @ EventScript_JP_08226734
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082267F9 @ EventScript_JP_082267F9
EventScript_JP_08226939: @ 0x08226939
	@ event command: closemessage
	.byte 0x68
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08226BDC @ Movement_JP_08226BDC
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08226BDC @ Movement_JP_08226BDC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08226BF7 @ Movement_JP_08226BF7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08226BF7 @ Movement_JP_08226BF7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x0822666A @ EventScript_JP_0822666A
	.byte 0x02
EventScript_JP_08226965: @ 0x08226965
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00AA
	@ event command: goto
	.byte 0x05
	.4byte 0x082222AC
EventScript_JP_08226991: @ 0x08226991
	@ event command: message
	.byte 0x67
	.4byte 0x08222446 @ gText_Rom_222446
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: end
	.byte 0x02
EventScript_JP_082269B3: @ 0x082269B3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226A34 @ EventScript_JP_08226A34
	@ event command: copyvar
	.byte 0x19
	.2byte 0x400F
	.2byte 0x800D
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x400F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226A0A @ EventScript_JP_08226A0A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226A11 @ EventScript_JP_08226A11
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226A18 @ EventScript_JP_08226A18
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226A1F @ EventScript_JP_08226A1F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226A26 @ EventScript_JP_08226A26
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226A2D @ EventScript_JP_08226A2D
EventScript_JP_08226A0A: @ 0x08226A0A
	@ event command: message
	.byte 0x67
	.4byte 0x08226BFD @ gText_Rom_226BFD
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08226A11: @ 0x08226A11
	@ event command: message
	.byte 0x67
	.4byte 0x08226C1A @ gText_Rom_226C1A
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08226A18: @ 0x08226A18
	@ event command: message
	.byte 0x67
	.4byte 0x08226C37 @ gText_Rom_226C37
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08226A1F: @ 0x08226A1F
	@ event command: message
	.byte 0x67
	.4byte 0x08226C54 @ gText_Rom_226C54
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08226A26: @ 0x08226A26
	@ event command: message
	.byte 0x67
	.4byte 0x08226C71 @ gText_Rom_226C71
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08226A2D: @ 0x08226A2D
	@ event command: message
	.byte 0x67
	.4byte 0x08226C8E @ gText_Rom_226C8E
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_08226A34: @ 0x08226A34
	@ event command: copyvar
	.byte 0x19
	.2byte 0x400F
	.2byte 0x800D
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x400F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226A80 @ EventScript_JP_08226A80
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226A8C @ EventScript_JP_08226A8C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226A98 @ EventScript_JP_08226A98
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226AA4 @ EventScript_JP_08226AA4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226AB0 @ EventScript_JP_08226AB0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226ABC @ EventScript_JP_08226ABC
EventScript_JP_08226A80: @ 0x08226A80
	@ event command: message
	.byte 0x67
	.4byte 0x08226BFD @ gText_Rom_226BFD
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x08226ACD @ EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226A8C: @ 0x08226A8C
	@ event command: message
	.byte 0x67
	.4byte 0x08226C1A @ gText_Rom_226C1A
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x08226ACD @ EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226A98: @ 0x08226A98
	@ event command: message
	.byte 0x67
	.4byte 0x08226C37 @ gText_Rom_226C37
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x08226ACD @ EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226AA4: @ 0x08226AA4
	@ event command: message
	.byte 0x67
	.4byte 0x08226C54 @ gText_Rom_226C54
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x08226ACD @ EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226AB0: @ 0x08226AB0
	@ event command: message
	.byte 0x67
	.4byte 0x08226C71 @ gText_Rom_226C71
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x08226ACD @ EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226ABC: @ 0x08226ABC
	@ event command: message
	.byte 0x67
	.4byte 0x08226C8E @ gText_Rom_226C8E
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x08226ACD @ EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226AC8: @ 0x08226AC8
	@ event command: waitmessage
	.byte 0x66
	@ event command: delay
	.byte 0x28
	.2byte 0x0030
	@ event command: return
	.byte 0x03
EventScript_JP_08226ACD: @ 0x08226ACD
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226B0D @ EventScript_JP_08226B0D
	@ event command: multichoice
	.byte 0x6F
	.byte 0x13
	.byte 0x06
	.byte 0x69
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226B39 @ EventScript_JP_08226B39
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226B5E @ EventScript_JP_08226B5E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226B93 @ EventScript_JP_08226B93
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226B93 @ EventScript_JP_08226B93
	@ event command: end
	.byte 0x02
EventScript_JP_08226B0D: @ 0x08226B0D
	@ event command: multichoice
	.byte 0x6F
	.byte 0x14
	.byte 0x08
	.byte 0x6A
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226B39 @ EventScript_JP_08226B39
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226B93 @ EventScript_JP_08226B93
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226B93 @ EventScript_JP_08226B93
	@ event command: end
	.byte 0x02
EventScript_JP_08226B39: @ 0x08226B39
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: message
	.byte 0x67
	.4byte 0x08226D53 @ gText_Rom_226D53
	@ event command: waitmessage
	.byte 0x66
	@ event command: special
	.byte 0x25
	.2byte 0x01F6
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08226734 @ EventScript_JP_08226734
	@ event command: goto
	.byte 0x05
	.4byte 0x08226AC8 @ EventScript_JP_08226AC8
	.byte 0x02
EventScript_JP_08226B5E: @ 0x08226B5E
	@ event command: message
	.byte 0x67
	.4byte 0x082223F2 @ gText_Rom_2223F2
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x14
	.byte 0x08
	.byte 0x5E
	.byte 0x01
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082267F9 @ EventScript_JP_082267F9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082267F9 @ EventScript_JP_082267F9
	@ event command: call
	.byte 0x04
	.4byte 0x0821F8F5
	@ event command: setflag
	.byte 0x29
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x082267F9 @ EventScript_JP_082267F9
	.byte 0x02
EventScript_JP_08226B93: @ 0x08226B93
	@ event command: message
	.byte 0x67
	.4byte 0x08222464 @ gText_Rom_222464
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x14
	.byte 0x08
	.byte 0x5E
	.byte 0x01
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08226BB0 @ EventScript_JP_08226BB0
	@ event command: goto
	.byte 0x05
	.4byte 0x082267F9 @ EventScript_JP_082267F9
	.byte 0x02
EventScript_JP_08226BB0: @ 0x08226BB0
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: message
	.byte 0x67
	.4byte 0x08226D53 @ gText_Rom_226D53
	@ event command: waitmessage
	.byte 0x66
	@ event command: special
	.byte 0x25
	.2byte 0x01F6
	@ event command: waitstate
	.byte 0x27
	@ event command: goto
	.byte 0x05
	.4byte 0x08226734 @ EventScript_JP_08226734
	.byte 0x02
EventScript_JP_08226BCA: @ 0x08226BCA
	@ event command: special
	.byte 0x25
	.2byte 0x01F7
	@ event command: return
	.byte 0x03
Movement_JP_08226BCE: @ 0x08226BCE
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x03 @ face_right
	.byte 0xFE @ step_end
Movement_JP_08226BD4: @ 0x08226BD4
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x03 @ face_right
	.byte 0xFE @ step_end
Movement_JP_08226BDA: @ 0x08226BDA
	@ object movement sequence
	.byte 0x02 @ face_left
	.byte 0xFE @ step_end
Movement_JP_08226BDC: @ 0x08226BDC
	@ object movement sequence
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_08226BDE: @ 0x08226BDE
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x02 @ face_left
	.byte 0xFE @ step_end
Movement_JP_08226BE4: @ 0x08226BE4
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x02 @ face_left
	.byte 0xFE @ step_end
Movement_JP_08226BEA: @ 0x08226BEA
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08226BEF: @ 0x08226BEF
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_08226BF4: @ 0x08226BF4
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_08226BF7: @ 0x08226BF7
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_08226BFB: @ 0x08226BFB
	@ object movement sequence
	.byte 0x1F @ walk_in_place_left
	.byte 0xFE @ step_end
