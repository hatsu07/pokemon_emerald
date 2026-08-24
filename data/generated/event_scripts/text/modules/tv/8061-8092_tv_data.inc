
	@ data/text/tv.inc:1108 SlateportCity_PokemonFanClub_Text_InterviewRequest
	.globl SlateportCity_PokemonFanClub_Text_InterviewRequest
SlateportCity_PokemonFanClub_Text_InterviewRequest: @ 0x0824D1C6
	.string "きみの その {STR_VAR_1}と\nとても なかが よさそうね\pそうだ! いま わたし\nテレビの しゅざいで\pいろんな ポケモンの はなしを\nきいて まわってるんだけど\pよかったら きみの {STR_VAR_1}の\nはなしを きかせて くれないかな?{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_InterviewRequest) > 0x6e
	.error "SlateportCity_PokemonFanClub_Text_InterviewRequest may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_PokemonFanClub_Text_InterviewRequest) < 0x6e
	.space 0x6e - (. - SlateportCity_PokemonFanClub_Text_InterviewRequest)
	.endif

	@ data/text/tv.inc:1111 SlateportCity_PokemonFanClub_Text_TellMeAnythingAboutYourMon
	.globl SlateportCity_PokemonFanClub_Text_TellMeAnythingAboutYourMon
SlateportCity_PokemonFanClub_Text_TellMeAnythingAboutYourMon: @ 0x0824D234
	.string "わあ!\nありがとう!\pじゃあ {STR_VAR_1}の はなし\nなんでも いいので きかせてよ!{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_TellMeAnythingAboutYourMon) > 0x28
	.error "SlateportCity_PokemonFanClub_Text_TellMeAnythingAboutYourMon may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_PokemonFanClub_Text_TellMeAnythingAboutYourMon) < 0x28
	.space 0x28 - (. - SlateportCity_PokemonFanClub_Text_TellMeAnythingAboutYourMon)
	.endif

	@ data/text/tv.inc:1117 SlateportCity_PokemonFanClub_Text_ThatsAllForInterview2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SlateportCity_PokemonFanClub_Text_ThatsAllForInterview2
SlateportCity_PokemonFanClub_Text_ThatsAllForInterview2: @ 0x0824D25C
	.string "へー……\nおもしろい はなし だね!\pきみは ほんとうに {STR_VAR_1}と\nなかが いいんだね\pうーん なんか このはなしで\nいい ばんぐみが できそうな よかん!\pきっと おもしろい ばんぐみに\nするから たのしみに まっててね\pじゃあ ありがとうね\nバイバイ!{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_ThatsAllForInterview2) != 0x80
	.error "SlateportCity_PokemonFanClub_Text_ThatsAllForInterview2 must retain its original byte length"
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gTVTextPointerTable_Entry014
gTVTextPointerTable_Entry014: @ 0x0824D2DC
	.string "『ぼくたち！\nポケモン　だいすきクラブ！』\pはい　はじまりました！\pこのばんぐみは　みなさんの\nいけんを　このわたしが\lかわりに　さけんで　しまおう！\lという　すごい　ばんぐみ！！\pさて　きょうは　ポケモンだいすきクラブ　に\nいって　いろんな　はなしを　きいてきた\lリポーターからの　じょうほうだ！\pさて　きょうの\nポケモンだいすき　にんげんは？\pんー……\p{0xFD}{0x02}さんだー！！\pそれでは　ごじぶんの　ポケモン\p{0xFD}{0x03}の　「{0xFD}{0x04}」に\nついての　あつい　きもちを\pかわりに　この　わたくしが　テレビに\nむかって　さけんで　あげましょう！\pうー！！\pレッツ　シャウト！！！{EOS}"
	.if (. - gTVTextPointerTable_Entry014) > 0x11a
	.error "gTVTextPointerTable_Entry014 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry014) < 0x11a
	.space 0x11a - (. - gTVTextPointerTable_Entry014)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gTVTextPointerTable_Entry015
gTVTextPointerTable_Entry015: @ 0x0824D3F6
	.string "さて　{0xFD}{0x02}さんが　はじめて\n{0xFD}{0x03}と　あったとき　ちょっかんてきに\lおもった　ことは……\l……\p「{0xFD}{0x04}！！」\pんー　いい　さけびだ！\pまるで　そのときの　おもいでが\nよみがえる　ようだー！！{EOS}"
	.if (. - gTVTextPointerTable_Entry015) > 0x5f
	.error "gTVTextPointerTable_Entry015 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry015) < 0x5f
	.space 0x5f - (. - gTVTextPointerTable_Entry015)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gTVTextPointerTable_Entry016
gTVTextPointerTable_Entry016: @ 0x0824D455
	.string "さて　{0xFD}{0x02}さんの　だいすきな\n{0xFD}{0x03}を　なにかに　たとえると　したら\l……\p「{0xFD}{0x04}！！」\pんー　すごい　はっそうだ！！\pはげしい　{0xFD}{0x03}への　おもいこみが\nかんじられるねー！{EOS}"
	.if (. - gTVTextPointerTable_Entry016) > 0x56
	.error "gTVTextPointerTable_Entry016 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry016) < 0x56
	.space 0x56 - (. - gTVTextPointerTable_Entry016)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gTVTextPointerTable_Entry017
gTVTextPointerTable_Entry017: @ 0x0824D4AB
	.string "さて　{0xFD}{0x02}さんが　{0xFD}{0x03}に\nひかれた　りゆうは……\l……\p「{0xFD}{0x04}！！」\pおー！！　すんばらしい　いけんだー！\p{0xFD}{0x03}を　どんなに　すきか\nビンビン　つたわって　くるねー！{EOS}"
	.if (. - gTVTextPointerTable_Entry017) > 0x54
	.error "gTVTextPointerTable_Entry017 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry017) < 0x54
	.space 0x54 - (. - gTVTextPointerTable_Entry017)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gTVTextPointerTable_Entry018
gTVTextPointerTable_Entry018: @ 0x0824D4FF
	.string "んー？　まだ　つづきが　ありますねー\nよんで　みましょう！\pえーと……\p{0xFD}{0x02}さんに　とって　ポケモンを\nひとことで　たとえると　すれば　それは！\l……\p「{0xFD}{0x04}！！」\pブラボー！！\pいままでの　なかで　いちばん\nいい　さけび　だったー！\p「{0xFD}{0x04}！！」\pなんども　さけびたくなる　ことばだねー！\pそれでは　いいさけびと　であった　ところで\nまた　じかい　おあいしましょう！\pさいごに　もういちど\nみんなで　さけびましょう！\p「{0xFD}{0x04}！！」{EOS}"
	.if (. - gTVTextPointerTable_Entry018) > 0xd9
	.error "gTVTextPointerTable_Entry018 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry018) < 0xd9
	.space 0xd9 - (. - gTVTextPointerTable_Entry018)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gTVTextPointerTable_Entry000
gTVTextPointerTable_Entry000: @ 0x0824D5D8
	.string "『ぼくたち！\nポケモン　だいすきクラブ！』\pはい　はじまりました！\pじゃあ　きょうは　ポケモンアンケートの\nコーナーから！\pかずある　ポケモンと　トレーナーの\nはなしの　なかから\pきょうは　どんな　はなしが\nとびだして　くるのでしょうか！？\lさて　きょうの　はなしは？\pんー……\pこれだ！\pでは　てがみの　しょうかい　から！！\p{0xFD}{0x03}の　ことに　ついて\n{0xFD}{0x02}さん　からの　おてがみだー\pでは　どれだけ　{0xFD}{0x03}への\nあつい　いけんが　かいてあるか\lよませて　もらいましょう！\lえーと……{EOS}"
	.if (. - gTVTextPointerTable_Entry000) > 0xf1
	.error "gTVTextPointerTable_Entry000 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry000) < 0xf1
	.space 0xf1 - (. - gTVTextPointerTable_Entry000)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gTVTextPointerTable_Entry001
gTVTextPointerTable_Entry001: @ 0x0824D6C9
	.string "おー！！\nなんて　すばらしい　てがみなんだ！！{EOS}"
	.if (. - gTVTextPointerTable_Entry001) > 0x18
	.error "gTVTextPointerTable_Entry001 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry001) < 0x18
	.space 0x18 - (. - gTVTextPointerTable_Entry001)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gTVTextPointerTable_Entry002
gTVTextPointerTable_Entry002: @ 0x0824D6E1
	.string "きにいったから　もういちど！{EOS}"
	.if (. - gTVTextPointerTable_Entry002) > 0xf
	.error "gTVTextPointerTable_Entry002 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry002) < 0xf
	.space 0xf - (. - gTVTextPointerTable_Entry002)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gTVTextPointerTable_Entry003
gTVTextPointerTable_Entry003: @ 0x0824D6F0
	.string "いい　てがみは\nなんど　きいても　いいねー！！{EOS}"
	.if (. - gTVTextPointerTable_Entry003) > 0x18
	.error "gTVTextPointerTable_Entry003 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry003) < 0x18
	.space 0x18 - (. - gTVTextPointerTable_Entry003)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gTVTextPointerTable_Entry004
gTVTextPointerTable_Entry004: @ 0x0824D708
	.string "「{0xFD}{0x04}」　っていう　ことばの\nおかげで　グッと　こころに　つたわってくる\lいい　てがみに　なっているねー！！{EOS}"
	.if (. - gTVTextPointerTable_Entry004) > 0x37
	.error "gTVTextPointerTable_Entry004 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry004) < 0x37
	.space 0x37 - (. - gTVTextPointerTable_Entry004)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gTVTextPointerTable_Entry005
gTVTextPointerTable_Entry005: @ 0x0824D73F
	.string "とくに「{0xFD}{0x04}」って　ところ！\p「{0xFD}{0x04}」っていう　ところが\nきにいったぞー！{EOS}"
	.if (. - gTVTextPointerTable_Entry005) > 0x26
	.error "gTVTextPointerTable_Entry005 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry005) < 0x26
	.space 0x26 - (. - gTVTextPointerTable_Entry005)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gTVTextPointerTable_Entry006
gTVTextPointerTable_Entry006: @ 0x0824D765
	.string "ところで　あんまり　かんけい　ないけど\n「{0xFD}{0x04}」って　いいことば　だよね\pじつは　おれも　「{0xFD}{0x04}」って\nことば　さいきん　よく　つかうんだよね{EOS}"
	.if (. - gTVTextPointerTable_Entry006) > 0x48
	.error "gTVTextPointerTable_Entry006 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry006) < 0x48
	.space 0x48 - (. - gTVTextPointerTable_Entry006)
	.endif

