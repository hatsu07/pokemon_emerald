
	@ data/text/tv.inc:1108 SlateportCity_PokemonFanClub_Text_InterviewRequest
	.globl gText_Rom_24D1C6
gText_Rom_24D1C6: @ 0x0824D1C6
	.string "きみの その {STR_VAR_1}と\nとても なかが よさそうね\pそうだ! いま わたし\nテレビの しゅざいで\pいろんな ポケモンの はなしを\nきいて まわってるんだけど\pよかったら きみの {STR_VAR_1}の\nはなしを きかせて くれないかな?$"
	.if (. - gText_Rom_24D1C6) > 0x6e
	.error "gText_Rom_24D1C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D1C6) < 0x6e
	.space 0x6e - (. - gText_Rom_24D1C6)
	.endif

	@ data/text/tv.inc:1111 SlateportCity_PokemonFanClub_Text_TellMeAnythingAboutYourMon
	.globl gText_Rom_24D234
gText_Rom_24D234: @ 0x0824D234
	.string "わあ!\nありがとう!\pじゃあ {STR_VAR_1}の はなし\nなんでも いいので きかせてよ!$"
	.if (. - gText_Rom_24D234) > 0x28
	.error "gText_Rom_24D234 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D234) < 0x28
	.space 0x28 - (. - gText_Rom_24D234)
	.endif

	@ data/text/tv.inc:1117 SlateportCity_PokemonFanClub_Text_ThatsAllForInterview2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24D25C
gText_Rom_24D25C: @ 0x0824D25C
	.string "へー……\nおもしろい はなし だね!\pきみは ほんとうに {STR_VAR_1}と\nなかが いいんだね\pうーん なんか このはなしで\nいい ばんぐみが できそうな よかん!\pきっと おもしろい ばんぐみに\nするから たのしみに まっててね\pじゃあ ありがとうね\nバイバイ!$"
	.if (. - gText_Rom_24D25C) != 0x80
	.error "gText_Rom_24D25C must retain its original byte length"
	.endif
	.globl gText_Rom_24D2D6
	.set gText_Rom_24D2D6, gText_Rom_24D25C + 0x7a

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gText_Rom_24D2DC
gText_Rom_24D2DC: @ 0x0824D2DC
	.string "『ぼくたち！\nポケモン　だいすきクラブ！』\pはい　はじまりました！\pこのばんぐみは　みなさんの\nいけんを　このわたしが\lかわりに　さけんで　しまおう！\lという　すごい　ばんぐみ！！\pさて　きょうは　ポケモンだいすきクラブ　に\nいって　いろんな　はなしを　きいてきた\lリポーターからの　じょうほうだ！\pさて　きょうの\nポケモンだいすき　にんげんは？\pんー……\p{0xFD}{0x02}さんだー！！\pそれでは　ごじぶんの　ポケモン\p{0xFD}{0x03}の　「{0xFD}{0x04}」に\nついての　あつい　きもちを\pかわりに　この　わたくしが　テレビに\nむかって　さけんで　あげましょう！\pうー！！\pレッツ　シャウト！！！$"
	.if (. - gText_Rom_24D2DC) > 0x11a
	.error "gText_Rom_24D2DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D2DC) < 0x11a
	.space 0x11a - (. - gText_Rom_24D2DC)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gText_Rom_24D3F6
gText_Rom_24D3F6: @ 0x0824D3F6
	.string "さて　{0xFD}{0x02}さんが　はじめて\n{0xFD}{0x03}と　あったとき　ちょっかんてきに\lおもった　ことは……\l……\p「{0xFD}{0x04}！！」\pんー　いい　さけびだ！\pまるで　そのときの　おもいでが\nよみがえる　ようだー！！$"
	.if (. - gText_Rom_24D3F6) > 0x5f
	.error "gText_Rom_24D3F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D3F6) < 0x5f
	.space 0x5f - (. - gText_Rom_24D3F6)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gText_Rom_24D455
gText_Rom_24D455: @ 0x0824D455
	.string "さて　{0xFD}{0x02}さんの　だいすきな\n{0xFD}{0x03}を　なにかに　たとえると　したら\l……\p「{0xFD}{0x04}！！」\pんー　すごい　はっそうだ！！\pはげしい　{0xFD}{0x03}への　おもいこみが\nかんじられるねー！$"
	.if (. - gText_Rom_24D455) > 0x56
	.error "gText_Rom_24D455 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D455) < 0x56
	.space 0x56 - (. - gText_Rom_24D455)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gText_Rom_24D4AB
gText_Rom_24D4AB: @ 0x0824D4AB
	.string "さて　{0xFD}{0x02}さんが　{0xFD}{0x03}に\nひかれた　りゆうは……\l……\p「{0xFD}{0x04}！！」\pおー！！　すんばらしい　いけんだー！\p{0xFD}{0x03}を　どんなに　すきか\nビンビン　つたわって　くるねー！$"
	.if (. - gText_Rom_24D4AB) > 0x54
	.error "gText_Rom_24D4AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D4AB) < 0x54
	.space 0x54 - (. - gText_Rom_24D4AB)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gText_Rom_24D4FF
gText_Rom_24D4FF: @ 0x0824D4FF
	.string "んー？　まだ　つづきが　ありますねー\nよんで　みましょう！\pえーと……\p{0xFD}{0x02}さんに　とって　ポケモンを\nひとことで　たとえると　すれば　それは！\l……\p「{0xFD}{0x04}！！」\pブラボー！！\pいままでの　なかで　いちばん\nいい　さけび　だったー！\p「{0xFD}{0x04}！！」\pなんども　さけびたくなる　ことばだねー！\pそれでは　いいさけびと　であった　ところで\nまた　じかい　おあいしましょう！\pさいごに　もういちど\nみんなで　さけびましょう！\p「{0xFD}{0x04}！！」$"
	.if (. - gText_Rom_24D4FF) > 0xd9
	.error "gText_Rom_24D4FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D4FF) < 0xd9
	.space 0xd9 - (. - gText_Rom_24D4FF)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D5D8
gText_Rom_24D5D8: @ 0x0824D5D8
	.string "『ぼくたち！\nポケモン　だいすきクラブ！』\pはい　はじまりました！\pじゃあ　きょうは　ポケモンアンケートの\nコーナーから！\pかずある　ポケモンと　トレーナーの\nはなしの　なかから\pきょうは　どんな　はなしが\nとびだして　くるのでしょうか！？\lさて　きょうの　はなしは？\pんー……\pこれだ！\pでは　てがみの　しょうかい　から！！\p{0xFD}{0x03}の　ことに　ついて\n{0xFD}{0x02}さん　からの　おてがみだー\pでは　どれだけ　{0xFD}{0x03}への\nあつい　いけんが　かいてあるか\lよませて　もらいましょう！\lえーと……$"
	.if (. - gText_Rom_24D5D8) > 0xf1
	.error "gText_Rom_24D5D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D5D8) < 0xf1
	.space 0xf1 - (. - gText_Rom_24D5D8)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D6C9
gText_Rom_24D6C9: @ 0x0824D6C9
	.string "おー！！\nなんて　すばらしい　てがみなんだ！！$"
	.if (. - gText_Rom_24D6C9) > 0x18
	.error "gText_Rom_24D6C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D6C9) < 0x18
	.space 0x18 - (. - gText_Rom_24D6C9)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D6E1
gText_Rom_24D6E1: @ 0x0824D6E1
	.string "きにいったから　もういちど！$"
	.if (. - gText_Rom_24D6E1) > 0xf
	.error "gText_Rom_24D6E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D6E1) < 0xf
	.space 0xf - (. - gText_Rom_24D6E1)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D6F0
gText_Rom_24D6F0: @ 0x0824D6F0
	.string "いい　てがみは\nなんど　きいても　いいねー！！$"
	.if (. - gText_Rom_24D6F0) > 0x18
	.error "gText_Rom_24D6F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D6F0) < 0x18
	.space 0x18 - (. - gText_Rom_24D6F0)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D708
gText_Rom_24D708: @ 0x0824D708
	.string "「{0xFD}{0x04}」　っていう　ことばの\nおかげで　グッと　こころに　つたわってくる\lいい　てがみに　なっているねー！！$"
	.if (. - gText_Rom_24D708) > 0x37
	.error "gText_Rom_24D708 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D708) < 0x37
	.space 0x37 - (. - gText_Rom_24D708)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D73F
gText_Rom_24D73F: @ 0x0824D73F
	.string "とくに「{0xFD}{0x04}」って　ところ！\p「{0xFD}{0x04}」っていう　ところが\nきにいったぞー！$"
	.if (. - gText_Rom_24D73F) > 0x26
	.error "gText_Rom_24D73F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D73F) < 0x26
	.space 0x26 - (. - gText_Rom_24D73F)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D765
gText_Rom_24D765: @ 0x0824D765
	.string "ところで　あんまり　かんけい　ないけど\n「{0xFD}{0x04}」って　いいことば　だよね\pじつは　おれも　「{0xFD}{0x04}」って\nことば　さいきん　よく　つかうんだよね$"
	.if (. - gText_Rom_24D765) > 0x48
	.error "gText_Rom_24D765 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D765) < 0x48
	.space 0x48 - (. - gText_Rom_24D765)
	.endif

