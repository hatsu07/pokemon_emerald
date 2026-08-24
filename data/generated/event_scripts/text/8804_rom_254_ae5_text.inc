	@ data/text/pokemon_news.inc:2 gPokeNewsTextSlateport_Upcoming
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextSlateport_Upcoming
gPokeNewsTextSlateport_Upcoming: @ 0x08254510
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pカイナシティの いちばの にんきもの\nがんばりやさんが あと {STR_VAR_1}にち したら\lものすごく がんばるそうです!\pなにを がんばるのか わかっていませんが\nがんばりやさん が いうには\lおかねを ためておくと いい とのことです\pきになる ひとは とうじつ\nカイナシティに いくと いいでしょうね\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextSlateport_Upcoming) != 0xc1
	.error "gPokeNewsTextSlateport_Upcoming must retain its original byte length"
	.endif
	.globl gText_Rom_2545CD
	.set gText_Rom_2545CD, gPokeNewsTextSlateport_Upcoming + 0xbd
	@ data/text/pokemon_news.inc:16 gPokeNewsTextSlateport_Ongoing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextSlateport_Ongoing
gPokeNewsTextSlateport_Ongoing: @ 0x082545D1
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pおまたせ しました!\pカイナシティの がんばりやさんが\nいちばで ものすごく がんばっています!\pいまなら タウリンや リゾチウムが\nほかよりも やすく かえるそうです!\pあなたも カイナシティに いって\nおもう ぞんぶん かいものを\lたのしんで みては いかがで しょうか?\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextSlateport_Ongoing) != 0xb8
	.error "gPokeNewsTextSlateport_Ongoing must retain its original byte length"
	.endif
	.globl gText_Rom_254685
	.set gText_Rom_254685, gPokeNewsTextSlateport_Ongoing + 0xb4
	@ data/text/pokemon_news.inc:30 gPokeNewsTextSlateport_Ending
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextSlateport_Ending
gPokeNewsTextSlateport_Ending: @ 0x08254689
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pおまたせ しました!\pカイナシティの がんばりやさんが\nいちばで ものすごく がんばっています!\pいまなら タウリンや リゾチウムが\nほかよりも やすく かえるそうです!\pがんばりやさん が いうには まだまだ\nしょうひんは のこって いるそうです!\pあなたも カイナシティで かいものを\nたのしんでは いかがで しょうか?\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextSlateport_Ending) != 0xd0
	.error "gPokeNewsTextSlateport_Ending must retain its original byte length"
	.endif
	.globl gText_Rom_254755
	.set gText_Rom_254755, gPokeNewsTextSlateport_Ending + 0xcc
	@ data/text/pokemon_news.inc:45 gPokeNewsTextGameCorner_Upcoming
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextGameCorner_Upcoming
gPokeNewsTextGameCorner_Upcoming: @ 0x08254759
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pついに きます!\nきて しまいます\pゲームコーナーの サービスデーが\nあと {STR_VAR_1}にちで きて しまいます!\pひごろ うんのない あなたも\nこのひ だけは ラッキーに!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextGameCorner_Upcoming) != 0x81
	.error "gPokeNewsTextGameCorner_Upcoming must retain its original byte length"
	.endif
	.globl gText_Rom_2547D6
	.set gText_Rom_2547D6, gPokeNewsTextGameCorner_Upcoming + 0x7d
	@ data/text/pokemon_news.inc:57 gPokeNewsTextGameCorner_Ongoing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextGameCorner_Ongoing
gPokeNewsTextGameCorner_Ongoing: @ 0x082547DA
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pついに きた!\nきて しまいました!\pゲームコーナーの サービスデーが\nきて しまいました!!\pきょうなら スロットも ルーレットも\nあなたに ほほえんで くれるかも!?\pさあ はやく\nキンセツシティに いそぎましょう!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextGameCorner_Ongoing) != 0x9c
	.error "gPokeNewsTextGameCorner_Ongoing must retain its original byte length"
	.endif
	.globl gText_Rom_254872
	.set gText_Rom_254872, gPokeNewsTextGameCorner_Ongoing + 0x98
	@ data/text/pokemon_news.inc:71 gPokeNewsTextGameCorner_Ending
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextGameCorner_Ending
gPokeNewsTextGameCorner_Ending: @ 0x08254876
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pついに きた!\nきて しまいました!\pゲームコーナーの サービスデーが\nきて しまいました!!\pきょうなら スロットも ルーレットも\nあなたに ほほえんで くれるかも!?\pさあ! おわりが ちかく なってきました\nはやく キンセツシティに いそぎましょう!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextGameCorner_Ending) != 0xae
	.error "gPokeNewsTextGameCorner_Ending must retain its original byte length"
	.endif
	.globl gText_Rom_254920
	.set gText_Rom_254920, gPokeNewsTextGameCorner_Ending + 0xaa
	@ data/text/pokemon_news.inc:85 gPokeNewsTextLilycove_Upcoming
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokeNewsTextLilycove_Upcoming
gPokeNewsTextLilycove_Upcoming: @ 0x08254924
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pミナモシティの デパートから\nステキな ニュースが はいってきました\pあと {STR_VAR_1}にちしたら デパートで\nほりだしものいちが はじまります!\pあなたの ほしかった あんなものや\nこんなものが みつかるかも しれません\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gPokeNewsTextLilycove_Upcoming) != 0x99
	.error "gPokeNewsTextLilycove_Upcoming must retain its original byte length"
	.endif
	.globl gText_Rom_2549B9
	.set gText_Rom_2549B9, gPokeNewsTextLilycove_Upcoming + 0x95
	@ data/text/pokemon_news.inc:97 gPokeNewsTextLilycove_Ongoing (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2549BD
gText_Rom_2549BD: @ 0x082549BD
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pおまたせ しました!\pきょう ついに ミナモ デパートで\nほりだしものいちが かいさい されました\pあなたが ゆめにまでみた\nあんなものや こんなもの との\pうんめいの であいが\nまってるかも しれませんよ!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gText_Rom_2549BD) != 0x96
	.error "gText_Rom_2549BD must retain its original byte length"
	.endif
	.globl gText_Rom_254A4F
	.set gText_Rom_254A4F, gText_Rom_2549BD + 0x92
	@ data/text/pokemon_news.inc:97 gPokeNewsTextLilycove_Ongoing (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_254A53
gText_Rom_254A53: @ 0x08254A53
	.string "こんにちは\n『ポケモン ニュース』の じかんです\pおまたせ しました!\pきょう ついに ミナモ デパートで\nほりだしものいちが かいさい されました\pあなたが ゆめにまでみた\nあんなものや こんなもの との\pうんめいの であいが\nまってるかも しれませんよ!\pいじょう\n『ポケモン ニュース』でした"
	.byte EOS
	.if (. - gText_Rom_254A53) != 0x96
	.error "gText_Rom_254A53 must retain its original byte length"
	.endif
	.globl gText_Rom_254AE5
	.set gText_Rom_254AE5, gText_Rom_254A53 + 0x92
	@ Original ROM bytes: 0x254AE9-0x254BDF (0xF7 bytes)
	.byte 0x0A, 0x2E, 0x16, 0x11, 0x1A, 0xFE, 0xB1, 0x9F, 0x59, 0x73, 0x7E, 0x00, 0x66, 0x85, 0xAE, 0x5D
	.byte 0xB2, 0x19, 0x00, 0x3D, 0x06, 0x2E, 0x44, 0x0D, 0xFB, 0x9F, 0x7B, 0xA0, 0x58, 0x2D, 0x00, 0x12
	.byte 0x08, 0x50, 0x13, 0x02, 0x29, 0x00, 0x20, 0x15, 0x0B, 0x2E, 0x1D, 0xFE, 0x97, 0xA0, 0x89, 0x66
	.byte 0x85, 0xAE, 0x5D, 0x37, 0x00, 0x1A, 0x02, 0x50, 0x13, 0x00, 0x07, 0x1F, 0x0C, 0x10, 0xAB, 0xFB
	.byte 0x01, 0x19, 0x00, 0x44, 0x2E, 0x0E, 0x12, 0x19, 0x00, 0x98, 0x7A, 0x7E, 0x95, 0x22, 0x02, 0x3D
	.byte 0x2E, 0x37, 0xFE, 0xFD, 0x02, 0x16, 0x11, 0x3B, 0x00, 0x70, 0x65, 0x73, 0x5C, 0x63, 0x80, 0x44
	.byte 0xFA, 0x07, 0x19, 0x20, 0x98, 0x7A, 0x7E, 0x91, 0xAE, 0x2D, 0x00, 0x0D, 0x29, 0x0F, 0x03, 0x44
	.byte 0x0D, 0xFB, 0x98, 0x7A, 0x7E, 0x95, 0x22, 0x02, 0x3D, 0x2E, 0x00, 0x14, 0x02, 0x04, 0x46, 0xFE
	.byte 0x07, 0x19, 0x20, 0x98, 0x7A, 0x7E, 0x91, 0xAE, 0x2D, 0x00, 0x1F, 0x2C, 0x0B, 0x0E, 0x10, 0x27
	.byte 0xFA, 0x6E, 0x53, 0x54, 0x7E, 0x44, 0x00, 0x02, 0x11, 0x46, 0x2E, 0x14, 0x00, 0x02, 0x2C, 0x2A
	.byte 0x13, 0x02, 0x1F, 0x0D, 0xFB, 0x0D, 0x46, 0x27, 0x0C, 0x02, 0x00, 0x9F, 0x7B, 0xA0, 0x58, 0x2D
	.byte 0x00, 0x12, 0x08, 0x28, 0x10, 0x02, 0x00, 0x06, 0x10, 0x24, 0xFE, 0x22, 0x02, 0x3D, 0x2E, 0x19
	.byte 0x00, 0x63, 0x58, 0x66, 0xA0, 0x58, 0x2D, 0x00, 0x20, 0x10, 0x02, 0x00, 0x06, 0x10, 0x1A, 0xFA
	.byte 0x07, 0x19, 0x20, 0x2D, 0x00, 0x02, 0x50, 0x4B, 0x02, 0x00, 0x01, 0x12, 0x22, 0x13, 0x00, 0x05
	.byte 0x07, 0x1F, 0x0C, 0x36, 0x03, 0xAB, 0xFB, 0x02, 0x3D, 0x36, 0x03, 0xFE, 0xB1, 0x9F, 0x59, 0x73
	.byte 0x7E, 0x00, 0x66, 0x85, 0xAE, 0x5D, 0xB2
