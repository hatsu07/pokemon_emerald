	@ src/data/easy_chat/easy_chat_group_endings.h:346 easy_chat_group_endings_line_346
	.globl gText_Rom_224AC2
gText_Rom_224AC2: @ 0x08224AC2
	.string "ますわ{EOS}"
	.if (. - gText_Rom_224AC2) > 0x4
	.error "gText_Rom_224AC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_224AC2) < 0x4
	.space 0x4 - (. - gText_Rom_224AC2)
	.endif
	@ analyzed canonical ROM range 0x08224AC6-0x08224D50
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08224AC6: @ 0x08224AC6
.Lbatch81_text_start_EventText_JP_08224AC6: @ 0x08224AC6
	.string "わたくしの　パートナーに　ならないと\nきっと　こうかい　しますわよ{EOS}"
.Lbatch81_text_start_EventText_JP_08224AE8: @ 0x08224AE8
	.string "わたし\nトライアスリート　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08224AF9: @ 0x08224AF9
	.string "わたしはね……\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08224B0E: @ 0x08224B0E
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nもっているの!\pおねがい!\nいっしょに　タッグを　くんでよ?{EOS}"
.Lbatch81_text_start_EventText_JP_08224B38: @ 0x08224B38
	.string "ありがとうー!\nうけつけで　とうろく　してくるー{EOS}"
.Lbatch81_text_start_EventText_JP_08224B51: @ 0x08224B51
	.string "わたしと　タッグを　くんだら\nきっと　つよいのにー!{EOS}"
.Lbatch81_text_start_EventText_JP_08224B6C: @ 0x08224B6C
	.string "やあ!\pぼく\nむしとりしょうねん　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08224B81: @ 0x08224B81
	.string "ぼく\n{STR_VAR_1}を　おぼえた　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08224B93: @ 0x08224B93
	.string "{STR_VAR_1}を　おぼえた　{STR_VAR_2}を\nもっているよ!\pねー?\nぼくと　いっしょに　タッグを　くまない?{EOS}"
.Lbatch81_text_start_EventText_JP_08224BC1: @ 0x08224BC1
	.string "やったね!\pじゃ　いまから　うけつけで\nとうろくを　すませてくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_08224BE4: @ 0x08224BE4
	.string "ぼくの　ポケモン　さいこう　なのに!\nこうかい　しないでよ{EOS}"
.Lbatch81_text_start_EventText_JP_08224C02: @ 0x08224C02
	.string "こんにちは!\pぼくは\nじゅくがえり　{STR_VAR_1}　です{EOS}"
.Lbatch81_text_start_EventText_JP_08224C1A: @ 0x08224C1A
	.string "ぼくは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08224C2C: @ 0x08224C2C
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nそだてています!\pどうです?\pぼくと\nいっしょに　タッグを　くみませんか?{EOS}"
.Lbatch81_text_start_EventText_JP_08224C5E: @ 0x08224C5E
	.string "ありがとうございます!\pでは\nうけつけで　とうろくを　すませてきますね!{EOS}"
.Lbatch81_text_start_EventText_JP_08224C83: @ 0x08224C83
	.string "ざんねんです……\pきみと　いっしょに　タッグを　くんで\nべんきょう　したかったです……{EOS}"
.Lbatch81_text_start_EventText_JP_08224CAF: @ 0x08224CAF
	.string "よう!\pオレ\nおぼっちゃま　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08224CC1: @ 0x08224CC1
	.string "オレ\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08224CD1: @ 0x08224CD1
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nもっているんだぜ!\pオレ　いっしょに\nタッグを　くんでもいいぜ?{EOS}"
.Lbatch81_text_start_EventText_JP_08224CFD: @ 0x08224CFD
	.string "よし!\pじゃあ　いまから\nうけつけで　とうろくを　すませてくるぜ!{EOS}"
.Lbatch81_text_start_EventText_JP_08224D1F: @ 0x08224D1F
	.string "オレと　タッグを　くまない　なんて\nきっと　こうかい　するぜ!{EOS}"
	.byte 0x55, 0xA0, 0x5D, 0xAB, 0xFB, 0x56, 0x77, 0x63, 0x05, 0x03, 0x00, 0xFD, 0x02, 0xFE, 0x14, 0x00
	.byte 0x23, 0x03
	.globl gText_Rom_224D51
gText_Rom_224D51: @ 0x08224D51
	.string "します{EOS}"
	.if (. - gText_Rom_224D51) > 0x4
	.error "gText_Rom_224D51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_224D51) < 0x4
	.space 0x4 - (. - gText_Rom_224D51)
	.endif
	@ analyzed canonical ROM range 0x08224D55-0x0822533F
	@ semantic recovery: script_data; byte-verified against linked ROM
.Lbatch81_text_start_EventText_JP_08224D55: @ 0x08224D55
	.string "いま　わたくし\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08224D6A: @ 0x08224D6A
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれております!\pおねがいします!\pわたくしと\nタッグを　くんで　くれませんか?{EOS}"
.Lbatch81_text_start_EventText_JP_08224D9E: @ 0x08224D9E
	.string "オッス!\pさっそく\nうけつけに　とうろく　してまいります!{EOS}"
.Lbatch81_text_start_EventText_JP_08224DBC: @ 0x08224DBC
	.string "オッス……\pつぎの　きかいは\nぜひ　タッグを　くんでください……{EOS}"
.Lbatch81_text_start_EventText_JP_08224DDD: @ 0x08224DDD
	.string "こんにちは!\pわたし\nうきわガール　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08224DF3: @ 0x08224DF3
	.string "わたし\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08224E04: @ 0x08224E04
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれているの!\pねぇ?\pいっしょに\nタッグを　くんでよー?{EOS}"
.Lbatch81_text_start_EventText_JP_08224E2D: @ 0x08224E2D
	.string "ありがとうー!\pじゃあ　いまから\nうけつけで　とうろくを　すませてくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_08224E53: @ 0x08224E53
	.string "わたしと　タッグを　くんだら\nとっても　つよかったのにー!{EOS}"
.Lbatch81_text_start_EventText_JP_08224E71: @ 0x08224E71
	.string "こんにちは……\pオカルトマニア　{STR_VAR_1}と\nもうします……{EOS}"
.Lbatch81_text_start_EventText_JP_08224E8D: @ 0x08224E8D
	.string "わたくし……\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08224EA1: @ 0x08224EA1
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nもっております……\pどうか　わたくしと\nタッグを　くんでいただけませんか?{EOS}"
.Lbatch81_text_start_EventText_JP_08224ED2: @ 0x08224ED2
	.string "ありがとうございます……\nうけつけで　とうろくを　してきます……{EOS}"
.Lbatch81_text_start_EventText_JP_08224EF3: @ 0x08224EF3
	.string "あなたと　タッグを\nくみたかったです……{EOS}"
.Lbatch81_text_start_EventText_JP_08224F08: @ 0x08224F08
	.string "やあ!\pぼく\nポケモンブリーダー　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08224F1D: @ 0x08224F1D
	.string "ぼくは　いま\n{STR_VAR_1}を　もつ　{STR_VAR_2}とね……{EOS}"
.Lbatch81_text_start_EventText_JP_08224F32: @ 0x08224F32
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nそだてているんだ!\pどう?\pぼくと\nいっしょに　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_08224F62: @ 0x08224F62
	.string "ありがとう!\pでは　さっそく\nうけつけで　とうろくを　すませてきますね!{EOS}"
.Lbatch81_text_start_EventText_JP_08224F87: @ 0x08224F87
	.string "きみと　いっしょに　タッグを\nくみたかったよ……{EOS}"
.Lbatch81_text_start_EventText_JP_08224FA0: @ 0x08224FA0
	.string "こんにちは!\pわたし\nトライアスリート　{STR_VAR_1}よ!{EOS}"
.Lbatch81_text_start_EventText_JP_08224FB9: @ 0x08224FB9
	.string "わたしは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08224FCB: @ 0x08224FCB
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれて　はしっているの!\pどう?\nわたしと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_08224FF9: @ 0x08224FF9
	.string "やったね!\pじゃ　さっそく　うけつけで\nとうろくを　すませてくるわー!{EOS}"
.Lbatch81_text_start_EventText_JP_0822501D: @ 0x0822501D
	.string "わたしと　タッグを　くんだら\nさいこうなのに　ざんねんね……{EOS}"
.Lbatch81_text_start_EventText_JP_0822503C: @ 0x0822503C
	.string "やあ!\pぼく\nトライアスリート　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225050: @ 0x08225050
	.string "ぼく\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225060: @ 0x08225060
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれて　はしっているんだ!\pどうだい?\nぼくと　タッグを　くんでみないかい?{EOS}"
.Lbatch81_text_start_EventText_JP_08225092: @ 0x08225092
	.string "やったー!\pいま　うけつけで\nとうろくを　すませてくるよー!{EOS}"
.Lbatch81_text_start_EventText_JP_082250B1: @ 0x082250B1
	.string "きみと　タッグを　くんで\nいっしょに　たたかいたかったよ……{EOS}"
.Lbatch81_text_start_EventText_JP_082250D0: @ 0x082250D0
	.string "わたし\nバトルガール　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_082250DF: @ 0x082250DF
	.string "わたし\n{STR_VAR_1}を　もつ　{STR_VAR_2}……{EOS}"
.Lbatch81_text_start_EventText_JP_082250EF: @ 0x082250EF
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nきたえているの!\pどう?\nわたしと　タッグを　くまない?{EOS}"
.Lbatch81_text_start_EventText_JP_08225117: @ 0x08225117
	.string "ありがとう!\pいまから　うけつけで\nとうろくを　すませてくるからねー!{EOS}"
.Lbatch81_text_start_EventText_JP_0822513B: @ 0x0822513B
	.string "あなたとなら　さいきょうの　タッグを\nくめると　おもったのに……{EOS}"
.Lbatch81_text_start_EventText_JP_0822515C: @ 0x0822515C
	.string "オレ\nトライアスリート　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_0822516C: @ 0x0822516C
	.string "オレ\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_0822517C: @ 0x0822517C
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれて　はしっているんだぜ!\pどうだい?\nオレと　いっしょに　タッグを　くまない?{EOS}"
.Lbatch81_text_start_EventText_JP_082251B1: @ 0x082251B1
	.string "サンキュー!\pいまから　うけつけで\nとうろくを　すませてくるぜ!{EOS}"
.Lbatch81_text_start_EventText_JP_082251D2: @ 0x082251D2
	.string "きみとなら　さいきょうの　タッグを\nくめたのに　ざんねんだよ!{EOS}"
.Lbatch81_text_start_EventText_JP_082251F2: @ 0x082251F2
	.string "ぼくはね……\nうきわボーイ　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225204: @ 0x08225204
	.string "ぼくは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225215: @ 0x08225215
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれているんだよ!\pねぇ?\nぼくと　いっしょに　タッグを　くもうよ?{EOS}"
.Lbatch81_text_start_EventText_JP_08225243: @ 0x08225243
	.string "やったねー!\pうけつけで　とうろく　してくるよー!\nがんばろうねー!{EOS}"
.Lbatch81_text_start_EventText_JP_08225266: @ 0x08225266
	.string "ぼくの　ポケモン　とっても　つよいのに……\nタッグに　なれなくて　ざんねん!{EOS}"
.Lbatch81_text_start_EventText_JP_0822528D: @ 0x0822528D
	.string "イエーイ!\pオレは\nギタリスト　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_082252A1: @ 0x082252A1
	.string "オレは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082252B3: @ 0x082252B3
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nつれているんだぜー!\pイエーイ?\nオレと　いっしょに　タッグを　くもうぜ?{EOS}"
.Lbatch81_text_start_EventText_JP_082252E5: @ 0x082252E5
	.string "イエーイ!\pいまから\nうけつけで　とうろく　してくるぜー!{EOS}"
.Lbatch81_text_start_EventText_JP_08225303: @ 0x08225303
	.string "オレの　ポケモン　とっても　つよいぜー!\nこうかい　しないように　するんだぜー!{EOS}"
	.byte 0x0A, 0x2E, 0x16, 0x11, 0x1A, 0xFB, 0x8D, 0x82, 0x7E, 0x64, 0x79, 0x6F, 0x7E, 0x00, 0xFD, 0x02
	.byte 0x14, 0xFE, 0x23, 0x03
	.globl gText_Rom_225340
gText_Rom_225340: @ 0x08225340
	.string "します{EOS}"
	.if (. - gText_Rom_225340) > 0x4
	.error "gText_Rom_225340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_225340) < 0x4
	.space 0x4 - (. - gText_Rom_225340)
	.endif
	@ analyzed canonical ROM range 0x08225344-0x082253E2
	@ semantic recovery: script_data; byte-verified against linked ROM
.Lbatch81_text_start_EventText_JP_08225344: @ 0x08225344
	.string "わたくし\n{STR_VAR_1}を　もった　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225357: @ 0x08225357
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}を\nつれておりますぞ!\pどうですかな?\nわたくしの　パートナーに　なりませんかな?{EOS}"
.Lbatch81_text_start_EventText_JP_0822538B: @ 0x0822538B
	.string "よろしく　おねがいしますぞ!\pでは\nうけつけで　とうろく　してきます!{EOS}"
.Lbatch81_text_start_EventText_JP_082253AF: @ 0x082253AF
	.string "ざんねん　ですな……\nつぎの　きかいを　きたいして　おりますぞ{EOS}"
	.byte 0x2C, 0x10, 0x08, 0x0C, 0xFE, 0x41, 0x02, 0x0D, 0x07, 0x58, 0x77, 0x98, 0x19, 0x00, 0xFD, 0x02
	.byte 0x14, 0xFA, 0x23, 0x03
	.globl gText_Rom_2253E3
gText_Rom_2253E3: @ 0x082253E3
	.string "します{EOS}"
	.if (. - gText_Rom_2253E3) > 0x4
	.error "gText_Rom_2253E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2253E3) < 0x4
	.space 0x4 - (. - gText_Rom_2253E3)
	.endif
	@ analyzed canonical ROM range 0x082253E7-0x08225AB0
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082253E7: @ 0x082253E7
.Lbatch81_text_start_EventText_JP_082253E7: @ 0x082253E7
	.string "わたくしは　いま\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082253FD: @ 0x082253FD
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれて　おります!\pどうでしょう?\nわたくしと　タッグを　くみませんかな?{EOS}"
.Lbatch81_text_start_EventText_JP_0822542E: @ 0x0822542E
	.string "ありがとう　ございます!\nそれでは　とうろくに　いってまいります!{EOS}"
.Lbatch81_text_start_EventText_JP_08225450: @ 0x08225450
	.string "わたくしの　ポケモン\nさいこうなのに　ざんねんです……{EOS}"
.Lbatch81_text_start_EventText_JP_0822546C: @ 0x0822546C
	.string "うむ!\pわしは\nたつじん　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_0822547D: @ 0x0822547D
	.string "わしの　きたえあげた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_0822549C: @ 0x0822549C
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}じゃ\pどうじゃ?\nわしと　タッグを　くまぬか?{EOS}"
.Lbatch81_text_start_EventText_JP_082254BE: @ 0x082254BE
	.string "うむ!\pいまから　とうろくを　すませてくるぞ!\nおたがい　がんばろうぞ!{EOS}"
.Lbatch81_text_start_EventText_JP_082254E3: @ 0x082254E3
	.string "おぬしの　せんたくが\nただしいことを　いのっておるぞ……{EOS}"
.Lbatch81_text_start_EventText_JP_08225500: @ 0x08225500
	.string "……はいはい\pわたしは\nたつじん　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225515: @ 0x08225515
	.string "わたしの　きたえあげた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225535: @ 0x08225535
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　ですよ\pどうですかね?\nわたしと　タッグを　くみませんか?{EOS}"
.Lbatch81_text_start_EventText_JP_0822555E: @ 0x0822555E
	.string "……はいはい\nいまから　とうろくを　してきますよ……{EOS}"
.Lbatch81_text_start_EventText_JP_08225579: @ 0x08225579
	.string "つぎに　あったときには\nタッグを　くみたいものですね……{EOS}"
.Lbatch81_text_start_EventText_JP_08225596: @ 0x08225596
	.string "オレは\nドラゴンつかい　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_082255A6: @ 0x082255A6
	.string "オレの　きたえあげた　ポケモンは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082255C4: @ 0x082255C4
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}　だ!\pどうだ?\nオレと　タッグを　くんでみないか?{EOS}"
.Lbatch81_text_start_EventText_JP_082255E8: @ 0x082255E8
	.string "……よしっ!　がんばるぜー!\pすぐに　とうろくを　すませて　くるからな!{EOS}"
.Lbatch81_text_start_EventText_JP_0822560D: @ 0x0822560D
	.string "オレより　つよい　パートナーは\nそうそう　いないぜ!{EOS}"
.Lbatch81_text_start_EventText_JP_08225628: @ 0x08225628
	.string "ぼくは\nとりつかい　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225636: @ 0x08225636
	.string "ぼくの　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_0822564E: @ 0x0822564E
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　だね\pどうだい?\nボクと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_08225673: @ 0x08225673
	.string "ありがとー!\pいまから　とうろくを　してくるよ!{EOS}"
.Lbatch81_text_start_EventText_JP_0822568C: @ 0x0822568C
	.string "ぼくの　ポケモン\nほんとに　つよいのに　ざんねんだよ!{EOS}"
.Lbatch81_text_start_EventText_JP_082256A8: @ 0x082256A8
	.string "ぼく\nにんじゃごっこ　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_082256B7: @ 0x082256B7
	.string "ぼくの　もっている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082256D5: @ 0x082256D5
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}だよ\pねー?\nぼくと　タッグを　くもうよ?{EOS}"
.Lbatch81_text_start_EventText_JP_082256F5: @ 0x082256F5
	.string "やったー!\nすぐ　とうろくを　してくるねー!{EOS}"
.Lbatch81_text_start_EventText_JP_0822570C: @ 0x0822570C
	.string "ぼくの　ポケモンの　つよさに\nきっと　こうかい　するよー{EOS}"
.Lbatch81_text_start_EventText_JP_08225729: @ 0x08225729
	.string "こんにちは!\pわたし\nパラソルおねえさん　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225742: @ 0x08225742
	.string "わたしは　いま\n{STR_VAR_1}を　もった　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225758: @ 0x08225758
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}を\nつれているの!\pどう?\nわたしの　ポケモンと　タッグを　くまない?{EOS}"
.Lbatch81_text_start_EventText_JP_08225786: @ 0x08225786
	.string "ありがとうねー!\pいま　うけつけで　とうろく　してくるから\nがんばろうねー!{EOS}"
.Lbatch81_text_start_EventText_JP_082257AD: @ 0x082257AD
	.string "あたしの　ポケモン　とっても　つよいのに\nざんねんよ……{EOS}"
.Lbatch81_text_start_EventText_JP_082257CA: @ 0x082257CA
	.string "わたしは\nこんちゅうマニア　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_082257DC: @ 0x082257DC
	.string "わたしの　みつけた　ポケモンは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082257F9: @ 0x082257F9
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}　ですよ!\pどうですか?\nわたしと　タッグを　くみませんか?{EOS}"
.Lbatch81_text_start_EventText_JP_08225821: @ 0x08225821
	.string "はい!\nりょうかい　しました\pいま　とうろくを　してきますからね{EOS}"
.Lbatch81_text_start_EventText_JP_08225842: @ 0x08225842
	.string "わたしが　みつけた　ポケモンと　くめば\nまけないのに……{EOS}"
.Lbatch81_text_start_EventText_JP_0822585F: @ 0x0822585F
	.string "オッス!\pオレは\nふなのり　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225871: @ 0x08225871
	.string "オレの　じまんの　ポケモンは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_0822588D: @ 0x0822588D
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}　だ!\pなあ!　\nもちろん　オレと　タッグを　くむだろう?{EOS}"
.Lbatch81_text_start_EventText_JP_082258B4: @ 0x082258B4
	.string "とうぜん　だよな!\nいまから　とうろく　してくるぜ!{EOS}"
.Lbatch81_text_start_EventText_JP_082258CF: @ 0x082258CF
	.string "オレと　くんだら　らくしょう　なのに\nざんねん　だぜ!{EOS}"
.Lbatch81_text_start_EventText_JP_082258EB: @ 0x082258EB
	.string "やあ\pぼくは\nポケモンコレクター　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225900: @ 0x08225900
	.string "ぼくの　じまんの　ポケモンは\n{STR_VAR_1}を　もった　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_0822591D: @ 0x0822591D
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}だよ\pどうだい?\nぼくと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_08225941: @ 0x08225941
	.string "おおー!\pじゃあ　さっそく　うけつけで\nとうろく　してくるよ!{EOS}"
.Lbatch81_text_start_EventText_JP_08225961: @ 0x08225961
	.string "ぼくの　ポケモンの　みりょくに\nきが　つかないなんて　ガッカリだよ……{EOS}"
.Lbatch81_text_start_EventText_JP_08225985: @ 0x08225985
	.string "ぼくは\nポケモンレンジャー　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225997: @ 0x08225997
	.string "ぼくの　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082259B5: @ 0x082259B5
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}だ!\pどうだい?\nぼくと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_082259D9: @ 0x082259D9
	.string "よしー!\nすぐ　うけつけで　とうろく　してくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_082259F3: @ 0x082259F3
	.string "つぎに　あったときは\nぼくの　ポケモン　えらんでくれよ!{EOS}"
.Lbatch81_text_start_EventText_JP_08225A10: @ 0x08225A10
	.string "わたしは\nポケモンレンジャー　{STR_VAR_1}よ!{EOS}"
.Lbatch81_text_start_EventText_JP_08225A24: @ 0x08225A24
	.string "わたしが　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225A43: @ 0x08225A43
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}よ!\pどう?\nわたしと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_08225A66: @ 0x08225A66
	.string "がんばるわよー!\nすぐ　うけつけで　とうろく　してくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_08225A84: @ 0x08225A84
	.string "つぎこそ\nわたしの　ポケモンを　えらんでよね!{EOS}"
	.byte 0x2C, 0x10, 0x08, 0x0C, 0xFE, 0x51, 0x7B, 0x6F, 0x15, 0x05, 0x18, 0x04, 0x0B, 0x2E, 0x00, 0xFD
	.byte 0x02, 0x14, 0xFA, 0x23, 0x03
	.globl gText_Rom_225AB1
gText_Rom_225AB1: @ 0x08225AB1
	.string "します{EOS}"
	.if (. - gText_Rom_225AB1) > 0x4
	.error "gText_Rom_225AB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_225AB1) < 0x4
	.space 0x4 - (. - gText_Rom_225AB1)
	.endif
	@ analyzed canonical ROM range 0x08225AB5-0x082261C9
	@ semantic recovery: script_data; byte-verified against linked ROM
.Lbatch81_text_start_EventText_JP_08225AB5: @ 0x08225AB5
	.string "わたくしの　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225AD5: @ 0x08225AD5
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}です\pどうでしょう?\nわたくしと　タッグを　くんでみませんか?{EOS}"
.Lbatch81_text_start_EventText_JP_08225AFF: @ 0x08225AFF
	.string "こうえいです\nすぐ　うけつけで　とうろく　してきますね!{EOS}"
.Lbatch81_text_start_EventText_JP_08225B1C: @ 0x08225B1C
	.string "つぎに　おあいした　ときには\nタッグを　くみたいものですね……{EOS}"
.Lbatch81_text_start_EventText_JP_08225B3C: @ 0x08225B3C
	.string "わし\nいせきマニア　{STR_VAR_1}じゃ!{EOS}"
.Lbatch81_text_start_EventText_JP_08225B4C: @ 0x08225B4C
	.string "わしの　もっている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225B6A: @ 0x08225B6A
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}じゃ!\pどうじゃ?\nわしと　タッグを　くんでみないか?{EOS}"
.Lbatch81_text_start_EventText_JP_08225B90: @ 0x08225B90
	.string "よしよし!\nすぐ　うけつけで　とうろく　してくるぞい!{EOS}"
.Lbatch81_text_start_EventText_JP_08225BAC: @ 0x08225BAC
	.string "うーむ……\nわしの　ポケモン　つよいと　おもうぞ……{EOS}"
.Lbatch81_text_start_EventText_JP_08225BC7: @ 0x08225BC7
	.string "ぼく\nエリートトレーナー　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225BD8: @ 0x08225BD8
	.string "ぼくの　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225BF6: @ 0x08225BF6
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}だよ\pどう?\nぼくと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_08225C18: @ 0x08225C18
	.string "よしっ!\nすぐ　うけつけで　とうろく　してくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_08225C32: @ 0x08225C32
	.string "きみとなら　さいきょうの　チームに　なると\nおもったんだけどな……{EOS}"
.Lbatch81_text_start_EventText_JP_08225C54: @ 0x08225C54
	.string "わたしは\nエリートトレーナー　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225C67: @ 0x08225C67
	.string "わたしの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225C85: @ 0x08225C85
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　だよ\pどう?\nわたしと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_08225CA9: @ 0x08225CA9
	.string "やったわ!\nすぐ　うけつけで　とうろく　してくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_08225CC4: @ 0x08225CC4
	.string "あなたとなら　つよい　タッグチームが\nできると　おもったのに……{EOS}"
.Lbatch81_text_start_EventText_JP_08225CE5: @ 0x08225CE5
	.string "オレは\nかいじゅうマニア　{STR_VAR_1}だ!{EOS}"
.Lbatch81_text_start_EventText_JP_08225CF7: @ 0x08225CF7
	.string "オレの　もっている　ポケモンは\n{STR_VAR_1}を　もった　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225D15: @ 0x08225D15
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}だ!\pどうだ?\nオレと　タッグを　くんでみないか?{EOS}"
.Lbatch81_text_start_EventText_JP_08225D39: @ 0x08225D39
	.string "やったぜ!\nすぐ　うけつけで　とうろく　してくるぜ!{EOS}"
.Lbatch81_text_start_EventText_JP_08225D54: @ 0x08225D54
	.string "オレの　ポケモン　つよいぞ!\nこうかい　しても　しらないぞ!{EOS}"
.Lbatch81_text_start_EventText_JP_08225D73: @ 0x08225D73
	.string "オレ\nキャンプファイヤー　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225D84: @ 0x08225D84
	.string "オレの　そだてあげた　ポケモンは\n{STR_VAR_1}を　もった　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225DA3: @ 0x08225DA3
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}　だよ\pどうだい?\nオレと　タッグを　くんでみないか?{EOS}"
.Lbatch81_text_start_EventText_JP_08225DC9: @ 0x08225DC9
	.string "やったー!\nいま　うけつけで　とうろく　してくるからな!{EOS}"
.Lbatch81_text_start_EventText_JP_08225DE6: @ 0x08225DE6
	.string "つぎに　あったときには\nタッグを　くんでくれよな!{EOS}"
.Lbatch81_text_start_EventText_JP_08225E00: @ 0x08225E00
	.string "ぼくは\nキャンプボーイ　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225E10: @ 0x08225E10
	.string "ぼくの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225E2D: @ 0x08225E2D
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　だよ\pどう?\nぼくと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_08225E50: @ 0x08225E50
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_08225E6B: @ 0x08225E6B
	.string "つぎに　あったときには\nタッグを　くんでよね!{EOS}"
.Lbatch81_text_start_EventText_JP_08225E83: @ 0x08225E83
	.string "わたしは\nピクニックガール　{STR_VAR_1}です!{EOS}"
.Lbatch81_text_start_EventText_JP_08225E97: @ 0x08225E97
	.string "わたしの　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225EB6: @ 0x08225EB6
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}です\pどうすか?\nわたしと　タッグを　くんでみませんか?{EOS}"
.Lbatch81_text_start_EventText_JP_08225EDD: @ 0x08225EDD
	.string "ありがとうございます!\nすぐ　うけつけで　とうろく　してきます!{EOS}"
.Lbatch81_text_start_EventText_JP_08225EFE: @ 0x08225EFE
	.string "つぎに　あったときには\nタッグを　くんでくださいね{EOS}"
.Lbatch81_text_start_EventText_JP_08225F18: @ 0x08225F18
	.string "ぼくは\nサイキッカー　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225F27: @ 0x08225F27
	.string "ぼくの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225F44: @ 0x08225F44
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　だよ\pどう?\nぼくと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_08225F67: @ 0x08225F67
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_08225F82: @ 0x08225F82
	.string "つぎに　あったときには\nタッグを　くみたいね……{EOS}"
.Lbatch81_text_start_EventText_JP_08225F9B: @ 0x08225F9B
	.string "わたし\nサイキッカー　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08225FAA: @ 0x08225FAA
	.string "わたしが　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08225FC9: @ 0x08225FC9
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}よ!\pどう?\nわたしと　タッグを　くまない?{EOS}"
.Lbatch81_text_start_EventText_JP_08225FEA: @ 0x08225FEA
	.string "ありがとう!\nすぐ　うけつけで　とうろく　してくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_08226006: @ 0x08226006
	.string "つぎに　あったときには\nタッグを　くみたいわね!{EOS}"
.Lbatch81_text_start_EventText_JP_0822601F: @ 0x0822601F
	.string "わたし\nじゅくがえり　{STR_VAR_1}です!{EOS}"
.Lbatch81_text_start_EventText_JP_08226030: @ 0x08226030
	.string "わたしの　つれている　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_0822604F: @ 0x0822604F
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}です!\pどうですか?\nわたしと　タッグを　くんでくれませんか?{EOS}"
.Lbatch81_text_start_EventText_JP_08226079: @ 0x08226079
	.string "ありがとうございます!\nすぐ　うけつけで　とうろく　してきます!{EOS}"
.Lbatch81_text_start_EventText_JP_0822609A: @ 0x0822609A
	.string "つぎに　あったときには\nタッグを　くんでくださいね……{EOS}"
.Lbatch81_text_start_EventText_JP_082260B6: @ 0x082260B6
	.string "わたし\nポケモンブリーダー　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_082260C8: @ 0x082260C8
	.string "わたしの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082260E6: @ 0x082260E6
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　なの\pどう?\nわたしと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_0822610A: @ 0x0822610A
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_08226125: @ 0x08226125
	.string "つぎに　あったときには\nぜったいに　タッグを　くんでよね!{EOS}"
.Lbatch81_text_start_EventText_JP_08226143: @ 0x08226143
	.string "わたくし\nだいすきクラブ　{STR_VAR_1}と\lもうしますのよ{EOS}"
.Lbatch81_text_start_EventText_JP_0822615C: @ 0x0822615C
	.string "わたくしの　そだてた　ポケモンちゃんは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_0822617D: @ 0x0822617D
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}　ですの\pどうでしょう?\nわたくしと　タッグを　くみませんか?{EOS}"
	.byte 0x01, 0x28, 0x37, 0x14, 0x03, 0x3B, 0x3C, 0x02, 0x1F, 0x0D, 0xAB, 0xFB, 0x2C, 0x10, 0x08, 0x0C
	.byte 0x00, 0x0B, 0x50, 0x0F, 0x08, 0xFE, 0x03, 0x09, 0x12, 0x09, 0x44, 0x00, 0x14, 0x03, 0x2B, 0x08
	.byte 0x00, 0x0C, 0x13, 0x07
	.globl gText_Rom_2261CA
gText_Rom_2261CA: @ 0x082261CA
	.string "ますわ{EOS}"
	.if (. - gText_Rom_2261CA) > 0x4
	.error "gText_Rom_2261CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2261CA) < 0x4
	.space 0x4 - (. - gText_Rom_2261CA)
	.endif
	@ analyzed canonical ROM range 0x082261CE-0x08226BFC
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082261CE: @ 0x082261CE
.Lbatch81_text_start_EventText_JP_082261CE: @ 0x082261CE
	.string "わたくしの　ポケモンちゃん\nさいこうなのに　ざんねんです……{EOS}"
.Lbatch81_text_start_EventText_JP_082261ED: @ 0x082261ED
	.string "わたし\nビキニのおねえさん　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_082261FF: @ 0x082261FF
	.string "わたしの　そだてた　ポケモンは\n{STR_VAR_1}を　もった　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_0822621D: @ 0x0822621D
	.string "{STR_VAR_1}を　もった　{STR_VAR_2}よっ\pどう?\nわたしと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_08226240: @ 0x08226240
	.string "やったねっ!\nすぐ　うけつけで　とうろく　してくるねっ!{EOS}"
.Lbatch81_text_start_EventText_JP_0822625D: @ 0x0822625D
	.string "つぎに　あったときには\nタッグを　くんでよねっ!{EOS}"
.Lbatch81_text_start_EventText_JP_08226276: @ 0x08226276
	.string "オレ\nトライアスリート　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08226286: @ 0x08226286
	.string "オレの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082262A3: @ 0x082262A3
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}　だよ\pどう?\nオレと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_082262C6: @ 0x082262C6
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_082262E1: @ 0x082262E1
	.string "つぎに　あったときには\nタッグを　くんでくれよな!{EOS}"
.Lbatch81_text_start_EventText_JP_082262FB: @ 0x082262FB
	.string "わたし\nトライアスリート　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_0822630C: @ 0x0822630C
	.string "わたしの　そだてた　ポケモンは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_0822632A: @ 0x0822632A
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}よ\pどう?\nわたしと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_0822634C: @ 0x0822634C
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_08226367: @ 0x08226367
	.string "つぎに　あったときには\nタッグを　くんでよね!{EOS}"
.Lbatch81_text_start_EventText_JP_0822637F: @ 0x0822637F
	.string "オレ\nかいパンやろう　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_0822638E: @ 0x0822638E
	.string "オレが　そだてた　ポケモンは\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082263AA: @ 0x082263AA
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}だよ\pどう?\nオレと　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_082263CB: @ 0x082263CB
	.string "やったね!\nすぐ　うけつけで　とうろく　してくるね!{EOS}"
.Lbatch81_text_start_EventText_JP_082263E6: @ 0x082263E6
	.string "つぎに　あったときには\nタッグを　くんでくれよな!{EOS}"
gMapScriptDispatch_BattleFrontier_BattleTowerMultiCorridor_OnTransition_OnWarpIntoMap_OnFrame: @ 0x08226400
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08226410
	.byte 0x04
	.4byte gMapScriptConditionTable_BattleFrontier_BattleTowerMultiCorridor_OnWarpIntoMap
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattleTowerMultiCorridor_OnFrame
	.byte 0
EventScript_JP_08226410: @ 0x08226410
	compare_var_to_value 0x40CE, 0x0002
	call_if 0x01, EventScript_JP_08226427
	compare_var_to_value 0x40CE, 0x0003
	call_if 0x01, EventScript_JP_08226447
	end
EventScript_JP_08226427: @ 0x08226427
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000E
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	checkplayergender
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08226441
	setvar 0x401F, 0x0000
	return
EventScript_JP_08226441: @ 0x08226441
	setvar 0x401F, 0x0059
	return
EventScript_JP_08226447: @ 0x08226447
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x01C2
	return
gMapScriptConditionTable_BattleFrontier_BattleTowerMultiCorridor_OnWarpIntoMap: @ 0x0822644B
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08226455
	.2byte 0
EventScript_JP_08226455: @ 0x08226455
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
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
	end
gMapScriptConditionTable_BattleFrontier_BattleTowerMultiCorridor_OnFrame: @ 0x08226468
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08226472
	.2byte 0
EventScript_JP_08226472: @ 0x08226472
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setflag 0x4002
	setvar 0x8004, 0x000E
	setvar 0x8005, 0x0001
	opendoor 0x0001, 0x0001
	waitdooranim
	clearflag 0x4002
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
	.4byte BattleFrontier_BattleTowerMultiCorridor_Movement_WalkDown @ BattleFrontier_BattleTowerMultiCorridor_Movement_WalkDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte BattleFrontier_BattleTowerMultiCorridor_Movement_WalkDown @ BattleFrontier_BattleTowerMultiCorridor_Movement_WalkDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setflag 0x4002
	setvar 0x8004, 0x000E
	setvar 0x8005, 0x0001
	closedoor 0x0001, 0x0001
	waitdooranim
	clearflag 0x4002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte BattleFrontier_BattleTowerMultiCorridor_Movement_WalkDown_WalkRightX6 @ BattleFrontier_BattleTowerMultiCorridor_Movement_WalkDown_WalkRightX6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte BattleFrontier_BattleTowerMultiCorridor_Movement_WalkDown_WalkLeftX6 @ BattleFrontier_BattleTowerMultiCorridor_Movement_WalkDown_WalkLeftX6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte BattleFrontier_BattleTowerMultiCorridor_Movement_WalkRightX6_WalkUp_WalkInPlaceFastestRight @ BattleFrontier_BattleTowerMultiCorridor_Movement_WalkRightX6_WalkUp_WalkInPlaceFastestRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte BattleFrontier_BattleTowerMultiCorridor_Movement_WalkLeftX6_WalkUp_WalkInPlaceFastestLeft @ BattleFrontier_BattleTowerMultiCorridor_Movement_WalkLeftX6_WalkUp_WalkInPlaceFastestLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x0028
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	opendoor 0x0007, 0x0001
	waitdooranim
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte BattleFrontier_BattleTowerMultiCorridor_Movement_WalkUp_SetInvisible @ BattleFrontier_BattleTowerMultiCorridor_Movement_WalkUp_SetInvisible
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte BattleFrontier_BattleTowerMultiCorridor_Movement_WalkUp_SetInvisible @ BattleFrontier_BattleTowerMultiCorridor_Movement_WalkUp_SetInvisible
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte BattleFrontier_BattleTowerMultiCorridor_Movement_Delay16_WalkUpX2_SetInvisible @ BattleFrontier_BattleTowerMultiCorridor_Movement_Delay16_WalkUpX2_SetInvisible
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte BattleFrontier_BattleTowerMultiCorridor_Movement_Delay16_WalkUpX2_SetInvisible @ BattleFrontier_BattleTowerMultiCorridor_Movement_Delay16_WalkUpX2_SetInvisible
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	closedoor 0x0007, 0x0001
	waitdooranim
	delay 0x001E
	setvar 0x4001, 0x0001
	call EventScript_JP_08226527
	releaseall
	end
EventScript_JP_08226527: @ 0x08226527
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_08226554
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_08226554
	compare_var_to_value 0x40CE, 0x0002
	call_if 0x01, EventScript_JP_0822655E
	compare_var_to_value 0x40CE, 0x0003
	call_if 0x01, EventScript_JP_08226568
	return
EventScript_JP_08226554: @ 0x08226554
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x08
	.byte 0xFF
	.2byte 0x0004
	.2byte 0x0008
	.byte 0x27, 0x03
EventScript_JP_0822655E: @ 0x0822655E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x11
	.byte 0xFF
	.2byte 0x0004
	.2byte 0x0005
	.byte 0x27, 0x03
EventScript_JP_08226568: @ 0x08226568
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x11
	.byte 0xFF
	.2byte 0x0004
	.2byte 0x0005
	.byte 0x27, 0x03
BattleFrontier_BattleTowerMultiCorridor_Movement_WalkDown_WalkRightX6: @ 0x08226572
	@ object movement sequence
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
BattleFrontier_BattleTowerMultiCorridor_Movement_WalkDown_WalkLeftX6: @ 0x0822657A
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
BattleFrontier_BattleTowerMultiCorridor_Movement_WalkRightX6_WalkUp_WalkInPlaceFastestRight: @ 0x08226582
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_in_place_fastest_right
	step_end
BattleFrontier_BattleTowerMultiCorridor_Movement_WalkLeftX6_WalkUp_WalkInPlaceFastestLeft: @ 0x0822658B
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_in_place_fastest_left
	step_end
BattleFrontier_BattleTowerMultiCorridor_Movement_Delay16_WalkUpX2_SetInvisible: @ 0x08226594
	@ object movement sequence
	delay_16
	walk_up
	walk_up
	set_invisible
	step_end
BattleFrontier_BattleTowerMultiCorridor_Movement_WalkUp_SetInvisible: @ 0x08226599
	@ object movement sequence
	walk_up
	set_invisible
	step_end
BattleFrontier_BattleTowerMultiCorridor_Movement_WalkDown: @ 0x0822659C
	@ object movement sequence
	walk_down
	step_end
gMapScriptDispatch_BattleFrontier_BattleTowerMultiBattleRoom_OnTransition_OnWarpIntoMap_OnFrame: @ 0x0822659E
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082265AE
	.byte 0x04
	.4byte gMapScriptConditionTable_BattleFrontier_BattleTowerMultiBattleRoom_OnWarpIntoMap
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattleTowerMultiBattleRoom_OnFrame
	.byte 0
EventScript_JP_082265AE: @ 0x082265AE
	compare_var_to_value 0x40CE, 0x0002
	call_if 0x01, EventScript_JP_082265C5
	compare_var_to_value 0x40CE, 0x0003
	call_if 0x01, EventScript_JP_082265E5
	end
EventScript_JP_082265C5: @ 0x082265C5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000E
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	checkplayergender
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082265DF
	setvar 0x401F, 0x0000
	return
EventScript_JP_082265DF: @ 0x082265DF
	setvar 0x401F, 0x0059
	return
EventScript_JP_082265E5: @ 0x082265E5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x01C2
	return
gMapScriptConditionTable_BattleFrontier_BattleTowerMultiBattleRoom_OnWarpIntoMap: @ 0x082265E9
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082265F3
	.2byte 0
EventScript_JP_082265F3: @ 0x082265F3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x00FF
	.byte 0x1A
	.byte 0x11
	end
gMapScriptConditionTable_BattleFrontier_BattleTowerMultiBattleRoom_OnFrame: @ 0x082265F9
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08226603
	.2byte 0
EventScript_JP_08226603: @ 0x08226603
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkUpX4_FaceRight @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkUpX4_FaceRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkLeft_WalkUpX3_FaceRight @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkLeft_WalkUpX3_FaceRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822666A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRightX2 @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRightX2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRightX2 @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRightX2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceLeft @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceLeft
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceLeft @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	goto EventScript_JP_082267F9
EventScript_JP_0822666A: @ 0x0822666A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0003
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
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkDownX4_FaceLeft @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkDownX4_FaceLeft
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRight_WalkDownX3_FaceLeft @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRight_WalkDownX3_FaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x40CE, 0x0003
	goto_if 0x01, EventScript_JP_082266DC
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	delay 0x000F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, 0x02021C7C
	callstd 0x04
	waitmessage
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, 0x02021C7C
	callstd 0x04
	waitmessage
	goto EventScript_JP_0822671F
EventScript_JP_082266DC: @ 0x082266DC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	delay 0x000F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	messageautoscroll 0x02021C7C
	waitmessage
	delay 0x0030
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	messageautoscroll 0x02021C7C
	waitmessage
	delay 0x0030
EventScript_JP_0822671F: @ 0x0822671F
	call 0x08222207
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08226760
EventScript_JP_08226734: @ 0x08226734
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	setvar 0x8004, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00AA
	goto 0x082222AC
EventScript_JP_08226760: @ 0x08226760
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call BattleFrontier_EventScript_IncrementWinStreak
	setvar 0x8004, 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScript_JP_08226965
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkUpX3_SetInvisible @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkUpX3_SetInvisible
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkUpX4 @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkUpX4
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
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRightX2 @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRightX2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRightX2 @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRightX2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceLeft @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceLeft
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceLeft @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x40CE, 0x0003
	goto_if 0x01, EventScript_JP_082267CE
	loadword 0x00, gText_Rom_22230B
	callstd 0x04
	goto EventScript_JP_082267D7
EventScript_JP_082267CE: @ 0x082267CE
	messageautoscroll gText_Rom_22230B
	waitmessage
	delay 0x0030
EventScript_JP_082267D7: @ 0x082267D7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x40CE, 0x0003
	call_if 0x01, EventScript_JP_08226BCA
	playfanfare 0x0170
	waitfanfare
	@ event command: special
	.byte 0x25
	.2byte 0x0000
EventScript_JP_082267F9: @ 0x082267F9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	call EventScript_JP_082269B3
	compare_var_to_value 0x40CE, 0x0003
	goto_if 0x01, EventScript_JP_08226939
	call 0x0821F921
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08226867
	multichoice 0x13, 0x04, 0x67, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08226939
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822689D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082268D9
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08226907
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082267F9
EventScript_JP_08226867: @ 0x08226867
	multichoice 0x14, 0x06, 0x68, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08226939
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082268D9
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08226907
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082267F9
EventScript_JP_0822689D: @ 0x0822689D
	message gText_Rom_2223F2
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082267F9
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082268CF
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082267F9
EventScript_JP_082268CF: @ 0x082268CF
	call 0x0821F8F5
	goto EventScript_JP_082267F9
EventScript_JP_082268D9: @ 0x082268D9
	loadword 0x00, gText_Rom_22242F
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082267F9
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08226991
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082267F9
EventScript_JP_08226907: @ 0x08226907
	message gText_Rom_222464
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082267F9
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08226734
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082267F9
EventScript_JP_08226939: @ 0x08226939
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	clearflag 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceFastestRight @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceFastestRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceFastestRight @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceFastestRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkLeftX2_WalkInPlaceFastestRight @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkLeftX2_WalkInPlaceFastestRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkLeftX2_WalkInPlaceFastestRight @ BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkLeftX2_WalkInPlaceFastestRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	goto EventScript_JP_0822666A
	.byte 0x02
EventScript_JP_08226965: @ 0x08226965
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	setvar 0x8004, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00AA
	goto 0x082222AC
EventScript_JP_08226991: @ 0x08226991
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_222446
	waitmessage
	setvar 0x8004, 0x0006
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	playse 0x0037
	waitse
	fadescreen 0x01
	setvar 0x8004, 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	end
EventScript_JP_082269B3: @ 0x082269B3
	compare_var_to_value 0x40CE, 0x0003
	goto_if 0x01, EventScript_JP_08226A34
	copyvar 0x400F, 0x800D
	copyvar 0x8000, 0x400F
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08226A0A
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08226A11
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08226A18
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08226A1F
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_08226A26
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_08226A2D
EventScript_JP_08226A0A: @ 0x08226A0A
	message gText_Rom_226BFD
	waitmessage
	return
EventScript_JP_08226A11: @ 0x08226A11
	message gText_Rom_226C1A
	waitmessage
	return
EventScript_JP_08226A18: @ 0x08226A18
	message gText_Rom_226C37
	waitmessage
	return
EventScript_JP_08226A1F: @ 0x08226A1F
	message gText_Rom_226C54
	waitmessage
	return
EventScript_JP_08226A26: @ 0x08226A26
	message gText_Rom_226C71
	waitmessage
	return
EventScript_JP_08226A2D: @ 0x08226A2D
	message gText_Rom_226C8E
	waitmessage
	return
EventScript_JP_08226A34: @ 0x08226A34
	copyvar 0x400F, 0x800D
	copyvar 0x8000, 0x400F
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08226A80
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08226A8C
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08226A98
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08226AA4
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_08226AB0
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_08226ABC
EventScript_JP_08226A80: @ 0x08226A80
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_226BFD
	waitmessage
	goto EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226A8C: @ 0x08226A8C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_226C1A
	waitmessage
	goto EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226A98: @ 0x08226A98
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_226C37
	waitmessage
	goto EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226AA4: @ 0x08226AA4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_226C54
	waitmessage
	goto EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226AB0: @ 0x08226AB0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_226C71
	waitmessage
	goto EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226ABC: @ 0x08226ABC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_226C8E
	waitmessage
	goto EventScript_JP_08226ACD
	.byte 0x02
EventScript_JP_08226AC8: @ 0x08226AC8
	waitmessage
	delay 0x0030
	return
EventScript_JP_08226ACD: @ 0x08226ACD
	checkflag 0x0002
	goto_if 0x01, EventScript_JP_08226B0D
	multichoice 0x13, 0x06, 0x69, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08226B39
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08226B5E
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08226B93
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08226B93
	end
EventScript_JP_08226B0D: @ 0x08226B0D
	multichoice 0x14, 0x08, 0x6A, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08226B39
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08226B93
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08226B93
	end
EventScript_JP_08226B39: @ 0x08226B39
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	setvar 0x8005, 0x0000
	message gText_Rom_226D53
	waitmessage
	@ event command: special
	.byte 0x25
	.2byte 0x01F6
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_08226734
	goto EventScript_JP_08226AC8
	.byte 0x02
EventScript_JP_08226B5E: @ 0x08226B5E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_2223F2
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082267F9
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082267F9
	call 0x0821F8F5
	setflag 0x0002
	goto EventScript_JP_082267F9
	.byte 0x02
EventScript_JP_08226B93: @ 0x08226B93
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_222464
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08226BB0
	goto EventScript_JP_082267F9
	.byte 0x02
EventScript_JP_08226BB0: @ 0x08226BB0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0000
	message gText_Rom_226D53
	waitmessage
	@ event command: special
	.byte 0x25
	.2byte 0x01F6
	waitstate
	goto EventScript_JP_08226734
	.byte 0x02
EventScript_JP_08226BCA: @ 0x08226BCA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x01F7
	return
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkUpX4_FaceRight: @ 0x08226BCE
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	face_right
	step_end
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkLeft_WalkUpX3_FaceRight: @ 0x08226BD4
	@ object movement sequence
	walk_left
	walk_up
	walk_up
	walk_up
	face_right
	step_end
BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceLeft: @ 0x08226BDA
	@ object movement sequence
	face_left
	step_end
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceFastestRight: @ 0x08226BDC
	@ object movement sequence
	walk_in_place_fastest_right
	step_end
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkDownX4_FaceLeft: @ 0x08226BDE
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRight_WalkDownX3_FaceLeft: @ 0x08226BE4
	@ object movement sequence
	walk_right
	walk_down
	walk_down
	walk_down
	face_left
	step_end
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkUpX3_SetInvisible: @ 0x08226BEA
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkUpX4: @ 0x08226BEF
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkRightX2: @ 0x08226BF4
	@ object movement sequence
	walk_right
	walk_right
	step_end
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkLeftX2_WalkInPlaceFastestRight: @ 0x08226BF7
	@ object movement sequence
	walk_left
	walk_left
	walk_in_place_fastest_right
	step_end
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft: @ 0x08226BFB
	@ object movement sequence
	walk_in_place_left
	step_end
