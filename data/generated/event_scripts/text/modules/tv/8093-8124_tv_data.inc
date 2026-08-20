	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D7AD
gText_Rom_24D7AD: @ 0x0824D7AD
	.string "このてがみ　じぶんてきには\n{0xFD}{0x04}てん　ていう　かんじかなー！\pつぎは　もっと　いい　てがみを\nきたい　してるよ！　{0xFD}{0x02}さん！！\pおっと　もう　こんなじかんだ！\nそれでは　また　じかい\lみなさま　おあい　しましょう！！{EOS}"
	.if (. - gText_Rom_24D7AD) > 0x6d
	.error "gText_Rom_24D7AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D7AD) < 0x6d
	.space 0x6d - (. - gText_Rom_24D7AD)
	.endif

	@ data/text/tv.inc:1069 SlateportCity_OceanicMuseum_1F_Text_InterviewRequest
	.globl gText_Rom_24D81A
gText_Rom_24D81A: @ 0x0824D81A
	.string "おや?\nあなたも ポケモンのことが おすきで?\pわたくし テレビきょくの もので\nさいきん おきた\pトレーナーと ポケモンの できごとを\nきいて まわって いるのです\pもし よければ なにか\nはなしを きかせて くれませんかね?{EOS}"
	.if (. - gText_Rom_24D81A) > 0x73
	.error "gText_Rom_24D81A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D81A) < 0x73
	.space 0x73 - (. - gText_Rom_24D81A)
	.endif

	@ data/text/tv.inc:1072 SlateportCity_OceanicMuseum_1F_Text_InterviewRequestShort
	.globl gText_Rom_24D88D
gText_Rom_24D88D: @ 0x0824D88D
	.string "いま さいきん おきた\nトレーナーと ポケモンの できごとを\lきいて まわって いるのですが\pもし よければ なにか\nはなしを きかせて くれませんかね?{EOS}"
	.if (. - gText_Rom_24D88D) > 0x4e
	.error "gText_Rom_24D88D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D88D) < 0x4e
	.space 0x4e - (. - gText_Rom_24D88D)
	.endif

	@ data/text/tv.inc:1075 SlateportCity_OceanicMuseum_1F_Text_TellMeExperienceInvolvingPokemon
	.globl gText_Rom_24D8DB
gText_Rom_24D8DB: @ 0x0824D8DB
	.string "おお きかせて くれますか!\nありがとう ございます\pでは さいきん おきたこと なら\nなんでも よいので\lはなしを きかせて ください!{EOS}"
	.if (. - gText_Rom_24D8DB) > 0x46
	.error "gText_Rom_24D8DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D8DB) < 0x46
	.space 0x46 - (. - gText_Rom_24D8DB)
	.endif

	@ data/text/tv.inc:1078 SlateportCity_OceanicMuseum_1F_Text_LetMeKnowIfYouHaveStory
	.globl gText_Rom_24D921
gText_Rom_24D921: @ 0x0824D921
	.string "そうですか……\pでは また なにか おもしろい はなしが\nあったら きかせて くださいね{EOS}"
	.if (. - gText_Rom_24D921) > 0x2d
	.error "gText_Rom_24D921 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D921) < 0x2d
	.space 0x2d - (. - gText_Rom_24D921)
	.endif

	@ data/text/tv.inc:1081 SlateportCity_OceanicMuseum_1F_Text_ThatsAllForInterview
	.globl gText_Rom_24D94E
gText_Rom_24D94E: @ 0x0824D94E
	.string "……おお\nなんて いいはなしだ!\pこのはなし テレビで\nつかわせて いただきます!\pいつか ほうそう するかも しれないので\nたのしみに まっていて くださいね{EOS}"
	.if (. - gText_Rom_24D94E) > 0x51
	.error "gText_Rom_24D94E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D94E) < 0x51
	.space 0x51 - (. - gText_Rom_24D94E)
	.endif

	@ data/text/tv.inc:1084 SlateportCity_OceanicMuseum_1F_Text_BetterWriteUpStory
	.globl gText_Rom_24D99F
gText_Rom_24D99F: @ 0x0824D99F
	.string "うーん\nいい テレビばんぐみが できそうだ!\pいそいで まとめないと!{EOS}"
	.if (. - gText_Rom_24D99F) > 0x24
	.error "gText_Rom_24D99F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D99F) < 0x24
	.space 0x24 - (. - gText_Rom_24D99F)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24D9C3
gText_Rom_24D9C3: @ 0x0824D9C3
	.string "『さいきんの　できごと』\pポケモントレーナーに　とって\nまいにちが　ものがたりです\lその　ものがたりを　すこしでも\lしょうかい　できたら　うれしいですね\pさて　きょうは　トレーナーの\n{0xFD}{0x02}さんの　おはなしです\p{0xFD}{0x02}さん　さいきん\nどんなことが　あったんで　しょうか？\lさっそく　みてみることに　しましょう\pえーと……{EOS}"
	.if (. - gText_Rom_24D9C3) > 0x9f
	.error "gText_Rom_24D9C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D9C3) < 0x9f
	.space 0x9f - (. - gText_Rom_24D9C3)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24DA62
gText_Rom_24DA62: @ 0x0824DA62
	.string "なるほど　{0xFD}{0x02}さんの\nまわりで　さいきん　おきている　ことが\lてに　とるように　わかりますね{EOS}"
	.if (. - gText_Rom_24DA62) > 0x2f
	.error "gText_Rom_24DA62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DA62) < 0x2f
	.space 0x2f - (. - gText_Rom_24DA62)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24DA91
gText_Rom_24DA91: @ 0x0824DA91
	.string "「{0xFD}{0x04}」という　ことばが\nおはなしに　ストーリーを　かんじさせますね{EOS}"
	.if (. - gText_Rom_24DA91) > 0x23
	.error "gText_Rom_24DA91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DA91) < 0x23
	.space 0x23 - (. - gText_Rom_24DA91)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24DAB4
gText_Rom_24DAB4: @ 0x0824DAB4
	.string "「{0xFD}{0x04}」という　ことばの\nおかげで　まるで　じょうけいが\lうかんで　くるようですね{EOS}"
	.if (. - gText_Rom_24DAB4) > 0x2a
	.error "gText_Rom_24DAB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DAB4) < 0x2a
	.space 0x2a - (. - gText_Rom_24DAB4)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24DADE
gText_Rom_24DADE: @ 0x0824DADE
	.string "このおはなしは　「{0xFD}{0x04}」という\nぶぶんが　とても　いんしょうてき　ですね{EOS}"
	.if (. - gText_Rom_24DADE) > 0x25
	.error "gText_Rom_24DADE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DADE) < 0x25
	.space 0x25 - (. - gText_Rom_24DADE)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24DB03
gText_Rom_24DB03: @ 0x0824DB03
	.string "{0xFD}{0x02}さんは　とても　いい\nおはなしを　きかせて　くれましたね\pこれで　あなたの　こころにも\n{0xFD}{0x02}さん　という　ストーリーが\lきざみ　こまれましたよ\pそれでは　また　じかいの\nほうそうで　おあいしましょう{EOS}"
	.if (. - gText_Rom_24DB03) > 0x66
	.error "gText_Rom_24DB03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DB03) < 0x66
	.space 0x66 - (. - gText_Rom_24DB03)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24DB69
gText_Rom_24DB69: @ 0x0824DB69
	.string "こんにちは\n『ポケモン　ニュース』の　じかんです\pたいへん　めずらしい　ニュースが\nはいって　きました\p{0xFD}{0x02}で\n{0xFD}{0x03}が　たいりょうはっせい　した\lという　ほうこくが　ありました！\p{0xFD}{0x03}と　いえば\nなかなか　みつけることが　むずかしい\lポケモンとしても　ゆうめい　ですね\pあなたも　このしんぴてきな\n{0xFD}{0x03}の　たいりょうはっせいを\lみにいっては　いかが　でしょうか？\pいじょう\n『ポケモン　ニュース』でした{EOS}"
	.if (. - gText_Rom_24DB69) != 0xca
	.error "gText_Rom_24DB69 must retain its original byte length"
	.endif
	.globl gText_Rom_24DC2F
	.set gText_Rom_24DC2F, gText_Rom_24DB69 + 0xc6

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24DC33
gText_Rom_24DC33: @ 0x0824DC33
	.string "しかい『ごきげん　いかがですか？\n『ポロック　バンザイ！』の　おじかんです\pきょうの　ポロックは\n{0xFD}{0x02}さんと　その　おなかまが\lブレンドした　ポロックです\pさっそく　わたしの　グルメな　ポケモン\nゴクリンちゃんに　たべさせて　みましょう！\p……　……　……　……\n……　……　……　……{EOS}"
	.if (. - gText_Rom_24DC33) > 0x90
	.error "gText_Rom_24DC33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DC33) < 0x90
	.space 0x90 - (. - gText_Rom_24DC33)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24DCC3
gText_Rom_24DCC3: @ 0x0824DCC3
	.string "ゴクリン『グビィ！　グビィ！\pしかい『おお！　とっても　{0xFD}{0x02}くて\n「{0xFD}{0x03}！」と　いってますね\pきっと　これは　{0xFD}{0x04}さんが\nがんばって　まわした　おかげですね！\p{0xFD}{0x04}さん！\nごちそうさま　でした！{EOS}"
	.if (. - gText_Rom_24DCC3) > 0x62
	.error "gText_Rom_24DCC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DCC3) < 0x62
	.space 0x62 - (. - gText_Rom_24DCC3)
	.endif
