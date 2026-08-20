	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250612
gText_Rom_250612: @ 0x08250612
	.string "いやー\nすばらしい　おへや　でしたねー\pみなさんも　いちど　{0xFD}{0x02}さんの\nひみつきちを　ごほうもん　されてみては\lいかが　でしょうか？\pでは　また　じかい　おあいしましょう！\nさようなら！{EOS}"
	.if (. - gText_Rom_250612) > 0x5e
	.error "gText_Rom_250612 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250612) < 0x5e
	.space 0x5e - (. - gText_Rom_250612)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+24 aliases)
	.globl gText_Rom_250670
gText_Rom_250670: @ 0x08250670
	.string "『ドキドキ！　ワクワク！\n　ポケモンくじ　とうせんしゃ　そくほう！』\pこんにちは！\nこちらは　ミナモデパート　1かい\lポケモンくじ　うりば　です！\pきょうも　ひとりの　ラッキートレーナーが\nあらわれました！\pその　かたの　おなまえは……\l{0xFD}{0x02}さん　です！\p{0xFD}{0x02}さんは\nみごと　{0xFD}{0x03}とうを　あてて\l{0xFD}{0x04}を　かくとく　しました！\p{0xFD}{0x02}さん！\nおめでとう　ございました！\pテレビの　まえの　みなさんも　ぜひ\nミナモデパートへ　ごらいてん　ください！\lてんいん　いちどう　おまち　しております！\pいじょう\nホウエン　いちの　しなぞろえ\lミナモデパート　より　おおくり　しました！{EOS}"
	.if (. - gText_Rom_250670) > 0x11e
	.error "gText_Rom_250670 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250670) < 0x11e
	.space 0x11e - (. - gText_Rom_250670)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_25078E
gText_Rom_25078E: @ 0x0825078E
	.string "『ポケモン　バトル　こうざ！』\pきょうも　みなさんと　ごいっしょに\nバトルに　ついて　べんきょう　しましょう\pきょうの　もんだいは\n{0xFD}{0x02}さんの　バトルに　ついてです\p{0xFD}{0x02}さんは　{0xFD}{0x03}で\n{0xFD}{0x04}と　たたかったの　ですが……{EOS}"
	.if (. - gText_Rom_25078E) > 0x6e
	.error "gText_Rom_25078E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25078E) < 0x6e
	.space 0x6e - (. - gText_Rom_25078E)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_2507FC
gText_Rom_2507FC: @ 0x082507FC
	.string "{0xFD}{0x03}に　たいして\n「{0xFD}{0x04}」を　やってしまいました……\pうーん……　{0xFD}{0x02}さん！\nこれは　いけませんね……{EOS}"
	.if (. - gText_Rom_2507FC) > 0x34
	.error "gText_Rom_2507FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2507FC) < 0x34
	.space 0x34 - (. - gText_Rom_2507FC)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_250830
gText_Rom_250830: @ 0x08250830
	.string "{0xFD}{0x02}は　そのほかに……{EOS}"
	.if (. - gText_Rom_250830) > 0xc
	.error "gText_Rom_250830 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250830) < 0xc
	.space 0xc - (. - gText_Rom_250830)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_25083C
gText_Rom_25083C: @ 0x0825083C
	.string "「{0xFD}{0x02}」　「{0xFD}{0x03}」\n「{0xFD}{0x04}」　……を　おぼえていました{EOS}"
	.if (. - gText_Rom_25083C) > 0x1c
	.error "gText_Rom_25083C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25083C) < 0x1c
	.space 0x1c - (. - gText_Rom_25083C)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_250858
gText_Rom_250858: @ 0x08250858
	.string "「{0xFD}{0x02}」　「{0xFD}{0x03}」\n……を　おぼえていました{EOS}"
	.if (. - gText_Rom_250858) != 0x17
	.error "gText_Rom_250858 must retain its original byte length"
	.endif
	.globl gText_Rom_25085D
	.set gText_Rom_25085D, gText_Rom_250858 + 0x5

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_25086F
gText_Rom_25086F: @ 0x0825086F
	.string "「{0xFD}{0x03}」\n……を　おぼえていました{EOS}"
	.if (. - gText_Rom_25086F) > 0x12
	.error "gText_Rom_25086F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25086F) < 0x12
	.space 0x12 - (. - gText_Rom_25086F)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_250881
gText_Rom_250881: @ 0x08250881
	.string "この　なかで　いちばん　よいのは\n…………………………………………\p「{0xFD}{0x02}」　ですね！\p「{0xFD}{0x03}」より\nぜったい　「{0xFD}{0x02}」です\pテレビの　まえの　みなさんも\nよーく　かんがえて　バトルを　しましょう！\pそれでは　さようなら！{EOS}"
	.if (. - gText_Rom_250881) > 0x70
	.error "gText_Rom_250881 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250881) < 0x70
	.space 0x70 - (. - gText_Rom_250881)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_2508F1
gText_Rom_2508F1: @ 0x082508F1
	.string "せーの！\n『トレーナー　だいすき　クラブ！！』\pしかい『みんなー　げんきかーい！？\nきょうは　いま　だいにんきの　トレーナー\l{0xFD}{0x02}さんの　ファンに\lあつまって　もらったよ！\pファン『ワアアアアアアアアアーーー！\pファン『{0xFD}{0x02}さまーーーー！\pしかい『みんなー！\n{0xFD}{0x02}さんの　ことは　すきかいー？\pファン『だいすきー！！\pしかい『どんな　ところがー？{EOS}"
	.if (. - gText_Rom_2508F1) > 0xae
	.error "gText_Rom_2508F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2508F1) < 0xae
	.space 0xae - (. - gText_Rom_2508F1)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_25099F
gText_Rom_25099F: @ 0x0825099F
	.string "ファン『モンスターボールを　なげる　しぐさが\nかっこいい　ところ！！{EOS}"
	.if (. - gText_Rom_25099F) > 0x23
	.error "gText_Rom_25099F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25099F) < 0x23
	.space 0x23 - (. - gText_Rom_25099F)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_2509C2
gText_Rom_2509C2: @ 0x082509C2
	.string "ファン『はしる　すがたが\nかわいい　ところ！！{EOS}"
	.if (. - gText_Rom_2509C2) > 0x18
	.error "gText_Rom_2509C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2509C2) < 0x18
	.space 0x18 - (. - gText_Rom_2509C2)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_2509DA
gText_Rom_2509DA: @ 0x082509DA
	.string "ファン『ポケモンバトルで\nここ　いちばんに　つよい　ところ！！{EOS}"
	.if (. - gText_Rom_2509DA) > 0x20
	.error "gText_Rom_2509DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2509DA) < 0x20
	.space 0x20 - (. - gText_Rom_2509DA)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_2509FA
gText_Rom_2509FA: @ 0x082509FA
	.string "ファン『ポケモンの　ことに　ついて\nくわしい　ところ！！{EOS}"
	.if (. - gText_Rom_2509FA) > 0x1d
	.error "gText_Rom_2509FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2509FA) < 0x1d
	.space 0x1d - (. - gText_Rom_2509FA)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_250A17
gText_Rom_250A17: @ 0x08250A17
	.string "ファン『ポケモンに　たいして\nいつも　やさしい　ところ！！{EOS}"
	.if (. - gText_Rom_250A17) > 0x1e
	.error "gText_Rom_250A17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250A17) < 0x1e
	.space 0x1e - (. - gText_Rom_250A17)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_250A35
gText_Rom_250A35: @ 0x08250A35
	.string "ファン『じてんしゃを　あやつる\nテクニックが　すごい　ところ！！{EOS}"
	.if (. - gText_Rom_250A35) > 0x21
	.error "gText_Rom_250A35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250A35) < 0x21
	.space 0x21 - (. - gText_Rom_250A35)
	.endif
