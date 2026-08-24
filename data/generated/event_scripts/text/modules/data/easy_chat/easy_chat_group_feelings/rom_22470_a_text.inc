	@ src/data/easy_chat/easy_chat_group_feelings.h:55 gEasyChatWord_Want (+1 aliases)
	.globl gEasyChatWord_Want_Copy_EasyChat
gEasyChatWord_Want_Copy_EasyChat: @ 0x0822470A
	.string "ほしい{EOS}"
	.if (. - gEasyChatWord_Want_Copy_EasyChat) > 0x4
	.error "gEasyChatWord_Want_Copy_EasyChat may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Want_Copy_EasyChat) < 0x4
	.space 0x4 - (. - gEasyChatWord_Want_Copy_EasyChat)
	.endif
	@ analyzed canonical ROM range 0x0822470E-0x08224AC1
	@ semantic recovery: script_data; byte-verified against linked ROM
.Lbatch81_text_start_EventText_JP_0822470E: @ 0x0822470E
	.string "ほんとうに　みとめて　くれるのかね?\nうそだったら　いやすぎる　からな\pいや　ほんとうなら　いいんだ　すまなかった\nさっそく　うけつけを　すませてくる{EOS}"
.Lbatch81_text_start_EventText_JP_0822475A: @ 0x0822475A
	.string "え?　なぜ　ことわるのかね?\nわるい　じょうだん　では　ないのかね?{EOS}"
.Lbatch81_text_start_EventText_JP_0822477D: @ 0x0822477D
	.string "わたし\nミニスカート　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_0822478C: @ 0x0822478C
	.string "わたしはね……\n{STR_VAR_1}を　つかう　{STR_VAR_2}とね……{EOS}"
.Lbatch81_text_start_EventText_JP_082247A3: @ 0x082247A3
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nつれて　あるいているの!\pどう?\nパートナーに　なってくれない?{EOS}"
.Lbatch81_text_start_EventText_JP_082247D0: @ 0x082247D0
	.string "ありがとうー!\nいまから　とうろく　してくるわね{EOS}"
.Lbatch81_text_start_EventText_JP_082247E9: @ 0x082247E9
	.string "わたしの　パートナーに　ならないなんて\nきっと　こうかい　するから!{EOS}"
.Lbatch81_text_start_EventText_JP_0822480C: @ 0x0822480C
	.string "あのね!\pぼくは\nたんパンこぞう　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_08224821: @ 0x08224821
	.string "ぼくはね……\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08224836: @ 0x08224836
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nもっているよ!\pねぇねぇ\nいっしょに　タッグを　くもうよ?{EOS}"
.Lbatch81_text_start_EventText_JP_08224860: @ 0x08224860
	.string "やったー!\nうけつけで　とうろく　してくるねー!{EOS}"
.Lbatch81_text_start_EventText_JP_08224879: @ 0x08224879
	.string "ぼくの　ポケモンと　タッグを　くめば\nきっと　つよいのにー!{EOS}"
.Lbatch81_text_start_EventText_JP_08224898: @ 0x08224898
	.string "ヤッホー!\pわし\nやまおとこ　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_082248AB: @ 0x082248AB
	.string "わし\n{STR_VAR_1}を　もつ　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082248BB: @ 0x082248BB
	.string "{STR_VAR_1}を　もつ　{STR_VAR_2}を\nつれて　あるいています!\pどうですかな?\nいっしょに　タッグを　くみませんか?{EOS}"
.Lbatch81_text_start_EventText_JP_082248EE: @ 0x082248EE
	.string "ヤッホー!\pいまから　うけつけで\nとうろくを　すませてきますよ{EOS}"
.Lbatch81_text_start_EventText_JP_0822490E: @ 0x0822490E
	.string "きみと　いっしょに\nバトルを　したかったです{EOS}"
.Lbatch81_text_start_EventText_JP_08224925: @ 0x08224925
	.string "こんにちは!\pわたし\nおとなのおねえさん　{STR_VAR_1}よ!{EOS}"
.Lbatch81_text_start_EventText_JP_0822493F: @ 0x0822493F
	.string "わたし\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08224951: @ 0x08224951
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nそだてているのよ!\pどう?\nいっしょに　タッグを　くんでみない?{EOS}"
.Lbatch81_text_start_EventText_JP_0822497E: @ 0x0822497E
	.string "うれしい!\pすぐに　とうろくを　すませるわね{EOS}"
.Lbatch81_text_start_EventText_JP_08224995: @ 0x08224995
	.string "ざんねんね!\pあなたと　わたしが\nくんだら　さいこう　だったのに……{EOS}"
.Lbatch81_text_start_EventText_JP_082249B8: @ 0x082249B8
	.string "よー!\pわし\nつりびと　{STR_VAR_1}!{EOS}"
.Lbatch81_text_start_EventText_JP_082249C8: @ 0x082249C8
	.string "わしは\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_082249DA: @ 0x082249DA
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nつれているぞ\pどうだね?\nいっしょに　たたかうかね?{EOS}"
.Lbatch81_text_start_EventText_JP_08224A01: @ 0x08224A01
	.string "よしよし!\nまかせとけー\pいまから　とうろくを　するからな!{EOS}"
.Lbatch81_text_start_EventText_JP_08224A20: @ 0x08224A20
	.string "きみと　わしの　あいしょうは\nバッチリ　だったのにな……{EOS}"
.Lbatch81_text_start_EventText_JP_08224A3D: @ 0x08224A3D
	.string "わたくし\nおじょうさま　{STR_VAR_1}と\lもうします!{EOS}"
.Lbatch81_text_start_EventText_JP_08224A54: @ 0x08224A54
	.string "わたくし\n{STR_VAR_1}を　つかう　{STR_VAR_2}と……{EOS}"
.Lbatch81_text_start_EventText_JP_08224A67: @ 0x08224A67
	.string "{STR_VAR_1}を　つかう　{STR_VAR_2}を\nつれていますの\pどうですか?\pわたくしと　いっしょに\nタッグを　くんで　いただけませんか?{EOS}"
	.byte 0x01, 0x28, 0x37, 0x14, 0x03, 0x3B, 0x3C, 0x02, 0x1F, 0x0D, 0xAB, 0xFB, 0x44, 0x1A, 0x00, 0x2C
	.byte 0x10, 0x08, 0x0C, 0x1A, 0x00, 0xFE, 0x14, 0x03, 0x2B, 0x08, 0x2D, 0x00, 0x0D, 0x1F, 0x0E, 0x13
	.byte 0x07
