	@ src/data/easy_chat/easy_chat_group_feelings.h:55 gEasyChatWord_Want (+1 aliases)
	.globl gText_Rom_22470A
gText_Rom_22470A: @ 0x0822470A
	.string "ほしい$"
	.if (. - gText_Rom_22470A) > 0x4
	.error "gText_Rom_22470A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22470A) < 0x4
	.space 0x4 - (. - gText_Rom_22470A)
	.endif
	@ analyzed canonical ROM range 0x0822470E-0x08224AC1
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_0822470E: @ 0x0822470E
	.string "ほんとうに　みとめて　くれるのかね?\nうそだったら　いやすぎる　からな\pいや　ほんとうなら　いいんだ　すまなかった\nさっそく　うけつけを　すませてくる$"
EventText_JP_0822475A: @ 0x0822475A
	.string "え?　なぜ　ことわるのかね?\nわるい　じょうだん　では　ないのかね?$"
EventText_JP_0822477D: @ 0x0822477D
	.string "わたし\nミニスカート　{STR_VAR_1}!$"
EventText_JP_0822478C: @ 0x0822478C
	.string "わたしはね……\n{STR_VAR_1}を　つかう　{STR_VAR_2}とね……$"
EventText_JP_082247A3: @ 0x082247A3
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nつれて　あるいているの!\pどう?\nパートナーに　なってくれない?$"
EventText_JP_082247D0: @ 0x082247D0
	.string "ありがとうー!\nいまから　とうろく　してくるわね$"
EventText_JP_082247E9: @ 0x082247E9
	.string "わたしの　パートナーに　ならないなんて\nきっと　こうかい　するから!$"
EventText_JP_0822480C: @ 0x0822480C
	.string "あのね!\pぼくは\nたんパンこぞう　{STR_VAR_1}!$"
EventText_JP_08224821: @ 0x08224821
	.string "ぼくはね……\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08224836: @ 0x08224836
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nもっているよ!\pねぇねぇ\nいっしょに　タッグを　くもうよ?$"
EventText_JP_08224860: @ 0x08224860
	.string "やったー!\nうけつけで　とうろく　してくるねー!$"
EventText_JP_08224879: @ 0x08224879
	.string "ぼくの　ポケモンと　タッグを　くめば\nきっと　つよいのにー!$"
EventText_JP_08224898: @ 0x08224898
	.string "ヤッホー!\pわし\nやまおとこ　{STR_VAR_1}!$"
EventText_JP_082248AB: @ 0x082248AB
	.string "わし\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……$"
EventText_JP_082248BB: @ 0x082248BB
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれて　あるいています!\pどうですかな?\nいっしょに　タッグを　くみませんか?$"
EventText_JP_082248EE: @ 0x082248EE
	.string "ヤッホー!\pいまから　うけつけで\nとうろくを　すませてきますよ$"
EventText_JP_0822490E: @ 0x0822490E
	.string "きみと　いっしょに\nバトルを　したかったです$"
EventText_JP_08224925: @ 0x08224925
	.string "こんにちは!\pわたし\nおとなのおねえさん　{STR_VAR_1}よ!$"
EventText_JP_0822493F: @ 0x0822493F
	.string "わたし\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08224951: @ 0x08224951
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nそだてているのよ!\pどう?\nいっしょに　タッグを　くんでみない?$"
EventText_JP_0822497E: @ 0x0822497E
	.string "うれしい!\pすぐに　とうろくを　すませるわね$"
EventText_JP_08224995: @ 0x08224995
	.string "ざんねんね!\pあなたと　わたしが\nくんだら　さいこう　だったのに……$"
EventText_JP_082249B8: @ 0x082249B8
	.string "よー!\pわし\nつりびと　{STR_VAR_1}!$"
EventText_JP_082249C8: @ 0x082249C8
	.string "わしは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_082249DA: @ 0x082249DA
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nつれているぞ\pどうだね?\nいっしょに　たたかうかね?$"
EventText_JP_08224A01: @ 0x08224A01
	.string "よしよし!\nまかせとけー\pいまから　とうろくを　するからな!$"
EventText_JP_08224A20: @ 0x08224A20
	.string "きみと　わしの　あいしょうは\nバッチリ　だったのにな……$"
EventText_JP_08224A3D: @ 0x08224A3D
	.string "わたくし\nおじょうさま　{STR_VAR_1}と\lもうします!$"
EventText_JP_08224A54: @ 0x08224A54
	.string "わたくし\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……$"
EventText_JP_08224A67: @ 0x08224A67
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nつれていますの\pどうですか?\pわたくしと　いっしょに\nタッグを　くんで　いただけませんか?$"
	.byte 0x01, 0x28, 0x37, 0x14, 0x03, 0x3B, 0x3C, 0x02, 0x1F, 0x0D, 0xAB, 0xFB, 0x44, 0x1A, 0x00, 0x2C
	.byte 0x10, 0x08, 0x0C, 0x1A, 0x00, 0xFE, 0x14, 0x03, 0x2B, 0x08, 0x2D, 0x00, 0x0D, 0x1F, 0x0E, 0x13
	.byte 0x07
