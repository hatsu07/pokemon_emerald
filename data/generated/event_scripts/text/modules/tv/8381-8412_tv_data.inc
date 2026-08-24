	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gTVTextPointerTable_Entry208
gTVTextPointerTable_Entry208: @ 0x08250612
	.string "いやー\nすばらしい　おへや　でしたねー\pみなさんも　いちど　{0xFD}{0x02}さんの\nひみつきちを　ごほうもん　されてみては\lいかが　でしょうか？\pでは　また　じかい　おあいしましょう！\nさようなら！{EOS}"
	.if (. - gTVTextPointerTable_Entry208) > 0x5e
	.error "gTVTextPointerTable_Entry208 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry208) < 0x5e
	.space 0x5e - (. - gTVTextPointerTable_Entry208)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+24 aliases)
	.globl gTVTextPointerTable_Entry209
gTVTextPointerTable_Entry209: @ 0x08250670
	.string "『ドキドキ！　ワクワク！\n　ポケモンくじ　とうせんしゃ　そくほう！』\pこんにちは！\nこちらは　ミナモデパート　1かい\lポケモンくじ　うりば　です！\pきょうも　ひとりの　ラッキートレーナーが\nあらわれました！\pその　かたの　おなまえは……\l{0xFD}{0x02}さん　です！\p{0xFD}{0x02}さんは\nみごと　{0xFD}{0x03}とうを　あてて\l{0xFD}{0x04}を　かくとく　しました！\p{0xFD}{0x02}さん！\nおめでとう　ございました！\pテレビの　まえの　みなさんも　ぜひ\nミナモデパートへ　ごらいてん　ください！\lてんいん　いちどう　おまち　しております！\pいじょう\nホウエン　いちの　しなぞろえ\lミナモデパート　より　おおくり　しました！{EOS}"
	.if (. - gTVTextPointerTable_Entry209) > 0x11e
	.error "gTVTextPointerTable_Entry209 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry209) < 0x11e
	.space 0x11e - (. - gTVTextPointerTable_Entry209)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gTVTextPointerTable_Entry210
gTVTextPointerTable_Entry210: @ 0x0825078E
	.string "『ポケモン　バトル　こうざ！』\pきょうも　みなさんと　ごいっしょに\nバトルに　ついて　べんきょう　しましょう\pきょうの　もんだいは\n{0xFD}{0x02}さんの　バトルに　ついてです\p{0xFD}{0x02}さんは　{0xFD}{0x03}で\n{0xFD}{0x04}と　たたかったの　ですが……{EOS}"
	.if (. - gTVTextPointerTable_Entry210) > 0x6e
	.error "gTVTextPointerTable_Entry210 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry210) < 0x6e
	.space 0x6e - (. - gTVTextPointerTable_Entry210)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gTVTextPointerTable_Entry211
gTVTextPointerTable_Entry211: @ 0x082507FC
	.string "{0xFD}{0x03}に　たいして\n「{0xFD}{0x04}」を　やってしまいました……\pうーん……　{0xFD}{0x02}さん！\nこれは　いけませんね……{EOS}"
	.if (. - gTVTextPointerTable_Entry211) > 0x34
	.error "gTVTextPointerTable_Entry211 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry211) < 0x34
	.space 0x34 - (. - gTVTextPointerTable_Entry211)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gTVTextPointerTable_Entry212
gTVTextPointerTable_Entry212: @ 0x08250830
	.string "{0xFD}{0x02}は　そのほかに……{EOS}"
	.if (. - gTVTextPointerTable_Entry212) > 0xc
	.error "gTVTextPointerTable_Entry212 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry212) < 0xc
	.space 0xc - (. - gTVTextPointerTable_Entry212)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gTVTextPointerTable_Entry213
gTVTextPointerTable_Entry213: @ 0x0825083C
	.string "「{0xFD}{0x02}」　「{0xFD}{0x03}」\n「{0xFD}{0x04}」　……を　おぼえていました{EOS}"
	.if (. - gTVTextPointerTable_Entry213) > 0x1c
	.error "gTVTextPointerTable_Entry213 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry213) < 0x1c
	.space 0x1c - (. - gTVTextPointerTable_Entry213)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gTVTextPointerTable_Entry214
gTVTextPointerTable_Entry214: @ 0x08250858
	.string "「{0xFD}{0x02}」　「{0xFD}{0x03}」\n……を　おぼえていました{EOS}"
	.if (. - gTVTextPointerTable_Entry214) != 0x17
	.error "gTVTextPointerTable_Entry214 must retain its original byte length"
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gTVTextPointerTable_Entry215
gTVTextPointerTable_Entry215: @ 0x0825086F
	.string "「{0xFD}{0x03}」\n……を　おぼえていました{EOS}"
	.if (. - gTVTextPointerTable_Entry215) > 0x12
	.error "gTVTextPointerTable_Entry215 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry215) < 0x12
	.space 0x12 - (. - gTVTextPointerTable_Entry215)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gTVTextPointerTable_Entry216
gTVTextPointerTable_Entry216: @ 0x08250881
	.string "この　なかで　いちばん　よいのは\n…………………………………………\p「{0xFD}{0x02}」　ですね！\p「{0xFD}{0x03}」より\nぜったい　「{0xFD}{0x02}」です\pテレビの　まえの　みなさんも\nよーく　かんがえて　バトルを　しましょう！\pそれでは　さようなら！{EOS}"
	.if (. - gTVTextPointerTable_Entry216) > 0x70
	.error "gTVTextPointerTable_Entry216 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry216) < 0x70
	.space 0x70 - (. - gTVTextPointerTable_Entry216)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gTVTextPointerTable_Entry217
gTVTextPointerTable_Entry217: @ 0x082508F1
	.string "せーの！\n『トレーナー　だいすき　クラブ！！』\pしかい『みんなー　げんきかーい！？\nきょうは　いま　だいにんきの　トレーナー\l{0xFD}{0x02}さんの　ファンに\lあつまって　もらったよ！\pファン『ワアアアアアアアアアーーー！\pファン『{0xFD}{0x02}さまーーーー！\pしかい『みんなー！\n{0xFD}{0x02}さんの　ことは　すきかいー？\pファン『だいすきー！！\pしかい『どんな　ところがー？{EOS}"
	.if (. - gTVTextPointerTable_Entry217) > 0xae
	.error "gTVTextPointerTable_Entry217 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry217) < 0xae
	.space 0xae - (. - gTVTextPointerTable_Entry217)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gTVTextPointerTable_Entry218
gTVTextPointerTable_Entry218: @ 0x0825099F
	.string "ファン『モンスターボールを　なげる　しぐさが\nかっこいい　ところ！！{EOS}"
	.if (. - gTVTextPointerTable_Entry218) > 0x23
	.error "gTVTextPointerTable_Entry218 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry218) < 0x23
	.space 0x23 - (. - gTVTextPointerTable_Entry218)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gTVTextPointerTable_Entry219
gTVTextPointerTable_Entry219: @ 0x082509C2
	.string "ファン『はしる　すがたが\nかわいい　ところ！！{EOS}"
	.if (. - gTVTextPointerTable_Entry219) > 0x18
	.error "gTVTextPointerTable_Entry219 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry219) < 0x18
	.space 0x18 - (. - gTVTextPointerTable_Entry219)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gTVTextPointerTable_Entry220
gTVTextPointerTable_Entry220: @ 0x082509DA
	.string "ファン『ポケモンバトルで\nここ　いちばんに　つよい　ところ！！{EOS}"
	.if (. - gTVTextPointerTable_Entry220) > 0x20
	.error "gTVTextPointerTable_Entry220 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry220) < 0x20
	.space 0x20 - (. - gTVTextPointerTable_Entry220)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gTVTextPointerTable_Entry221
gTVTextPointerTable_Entry221: @ 0x082509FA
	.string "ファン『ポケモンの　ことに　ついて\nくわしい　ところ！！{EOS}"
	.if (. - gTVTextPointerTable_Entry221) > 0x1d
	.error "gTVTextPointerTable_Entry221 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry221) < 0x1d
	.space 0x1d - (. - gTVTextPointerTable_Entry221)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gTVTextPointerTable_Entry222
gTVTextPointerTable_Entry222: @ 0x08250A17
	.string "ファン『ポケモンに　たいして\nいつも　やさしい　ところ！！{EOS}"
	.if (. - gTVTextPointerTable_Entry222) > 0x1e
	.error "gTVTextPointerTable_Entry222 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry222) < 0x1e
	.space 0x1e - (. - gTVTextPointerTable_Entry222)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gTVTextPointerTable_Entry223
gTVTextPointerTable_Entry223: @ 0x08250A35
	.string "ファン『じてんしゃを　あやつる\nテクニックが　すごい　ところ！！{EOS}"
	.if (. - gTVTextPointerTable_Entry223) > 0x21
	.error "gTVTextPointerTable_Entry223 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry223) < 0x21
	.space 0x21 - (. - gTVTextPointerTable_Entry223)
	.endif
