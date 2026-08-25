	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gTVTextPointerTable_Entry007
gTVTextPointerTable_Entry007: @ 0x0824D7AD
	.string "このてがみ　じぶんてきには\n{0xFD}{0x04}てん　ていう　かんじかなー！\pつぎは　もっと　いい　てがみを\nきたい　してるよ！　{0xFD}{0x02}さん！！\pおっと　もう　こんなじかんだ！\nそれでは　また　じかい\lみなさま　おあい　しましょう！！{EOS}"
	.if (. - gTVTextPointerTable_Entry007) > 0x6d
	.error "gTVTextPointerTable_Entry007 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry007) < 0x6d
	.space 0x6d - (. - gTVTextPointerTable_Entry007)
	.endif

	@ data/text/tv.inc:1069 SlateportCity_OceanicMuseum_1F_Text_InterviewRequest
	.globl SlateportCity_OceanicMuseum_1F_Text_InterviewRequest
SlateportCity_OceanicMuseum_1F_Text_InterviewRequest: @ 0x0824D81A
	.string "おや?\nあなたも ポケモンのことが おすきで?\pわたくし テレビきょくの もので\nさいきん おきた\pトレーナーと ポケモンの できごとを\nきいて まわって いるのです\pもし よければ なにか\nはなしを きかせて くれませんかね?{EOS}"
	.if (. - SlateportCity_OceanicMuseum_1F_Text_InterviewRequest) > 0x73
	.error "SlateportCity_OceanicMuseum_1F_Text_InterviewRequest may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_OceanicMuseum_1F_Text_InterviewRequest) < 0x73
	.space 0x73 - (. - SlateportCity_OceanicMuseum_1F_Text_InterviewRequest)
	.endif

	@ data/text/tv.inc:1072 SlateportCity_OceanicMuseum_1F_Text_InterviewRequestShort
	.globl SlateportCity_OceanicMuseum_1F_Text_InterviewRequestShort
SlateportCity_OceanicMuseum_1F_Text_InterviewRequestShort: @ 0x0824D88D
	.string "いま さいきん おきた\nトレーナーと ポケモンの できごとを\lきいて まわって いるのですが\pもし よければ なにか\nはなしを きかせて くれませんかね?{EOS}"
	.if (. - SlateportCity_OceanicMuseum_1F_Text_InterviewRequestShort) > 0x4e
	.error "SlateportCity_OceanicMuseum_1F_Text_InterviewRequestShort may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_OceanicMuseum_1F_Text_InterviewRequestShort) < 0x4e
	.space 0x4e - (. - SlateportCity_OceanicMuseum_1F_Text_InterviewRequestShort)
	.endif

	@ data/text/tv.inc:1075 SlateportCity_OceanicMuseum_1F_Text_TellMeExperienceInvolvingPokemon
	.globl SlateportCity_OceanicMuseum_1F_Text_TellMeExperienceInvolvingPokemon
SlateportCity_OceanicMuseum_1F_Text_TellMeExperienceInvolvingPokemon: @ 0x0824D8DB
	.string "おお きかせて くれますか!\nありがとう ございます\pでは さいきん おきたこと なら\nなんでも よいので\lはなしを きかせて ください!{EOS}"
	.if (. - SlateportCity_OceanicMuseum_1F_Text_TellMeExperienceInvolvingPokemon) > 0x46
	.error "SlateportCity_OceanicMuseum_1F_Text_TellMeExperienceInvolvingPokemon may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_OceanicMuseum_1F_Text_TellMeExperienceInvolvingPokemon) < 0x46
	.space 0x46 - (. - SlateportCity_OceanicMuseum_1F_Text_TellMeExperienceInvolvingPokemon)
	.endif

	@ data/text/tv.inc:1078 SlateportCity_OceanicMuseum_1F_Text_LetMeKnowIfYouHaveStory
	.globl SlateportCity_OceanicMuseum_1F_Text_LetMeKnowIfYouHaveStory
SlateportCity_OceanicMuseum_1F_Text_LetMeKnowIfYouHaveStory: @ 0x0824D921
	.string "そうですか……\pでは また なにか おもしろい はなしが\nあったら きかせて くださいね{EOS}"
	.if (. - SlateportCity_OceanicMuseum_1F_Text_LetMeKnowIfYouHaveStory) > 0x2d
	.error "SlateportCity_OceanicMuseum_1F_Text_LetMeKnowIfYouHaveStory may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_OceanicMuseum_1F_Text_LetMeKnowIfYouHaveStory) < 0x2d
	.space 0x2d - (. - SlateportCity_OceanicMuseum_1F_Text_LetMeKnowIfYouHaveStory)
	.endif

	@ data/text/tv.inc:1081 SlateportCity_OceanicMuseum_1F_Text_ThatsAllForInterview
	.globl SlateportCity_OceanicMuseum_1F_Text_ThatsAllForInterview
SlateportCity_OceanicMuseum_1F_Text_ThatsAllForInterview: @ 0x0824D94E
	.string "……おお\nなんて いいはなしだ!\pこのはなし テレビで\nつかわせて いただきます!\pいつか ほうそう するかも しれないので\nたのしみに まっていて くださいね{EOS}"
	.if (. - SlateportCity_OceanicMuseum_1F_Text_ThatsAllForInterview) > 0x51
	.error "SlateportCity_OceanicMuseum_1F_Text_ThatsAllForInterview may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_OceanicMuseum_1F_Text_ThatsAllForInterview) < 0x51
	.space 0x51 - (. - SlateportCity_OceanicMuseum_1F_Text_ThatsAllForInterview)
	.endif

	@ data/text/tv.inc:1084 SlateportCity_OceanicMuseum_1F_Text_BetterWriteUpStory
	.globl SlateportCity_OceanicMuseum_1F_Text_BetterWriteUpStory
SlateportCity_OceanicMuseum_1F_Text_BetterWriteUpStory: @ 0x0824D99F
	.string "うーん\nいい テレビばんぐみが できそうだ!\pいそいで まとめないと!{EOS}"
	.if (. - SlateportCity_OceanicMuseum_1F_Text_BetterWriteUpStory) > 0x24
	.error "SlateportCity_OceanicMuseum_1F_Text_BetterWriteUpStory may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_OceanicMuseum_1F_Text_BetterWriteUpStory) < 0x24
	.space 0x24 - (. - SlateportCity_OceanicMuseum_1F_Text_BetterWriteUpStory)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gTVTextPointerTable_Entry008
gTVTextPointerTable_Entry008: @ 0x0824D9C3
	.string "『さいきんの　できごと』\pポケモントレーナーに　とって\nまいにちが　ものがたりです\lその　ものがたりを　すこしでも\lしょうかい　できたら　うれしいですね\pさて　きょうは　トレーナーの\n{0xFD}{0x02}さんの　おはなしです\p{0xFD}{0x02}さん　さいきん\nどんなことが　あったんで　しょうか？\lさっそく　みてみることに　しましょう\pえーと……{EOS}"
	.if (. - gTVTextPointerTable_Entry008) > 0x9f
	.error "gTVTextPointerTable_Entry008 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry008) < 0x9f
	.space 0x9f - (. - gTVTextPointerTable_Entry008)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gTVTextPointerTable_Entry009
gTVTextPointerTable_Entry009: @ 0x0824DA62
	.string "なるほど　{0xFD}{0x02}さんの\nまわりで　さいきん　おきている　ことが\lてに　とるように　わかりますね{EOS}"
	.if (. - gTVTextPointerTable_Entry009) > 0x2f
	.error "gTVTextPointerTable_Entry009 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry009) < 0x2f
	.space 0x2f - (. - gTVTextPointerTable_Entry009)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gTVTextPointerTable_Entry010
gTVTextPointerTable_Entry010: @ 0x0824DA91
	.string "「{0xFD}{0x04}」という　ことばが\nおはなしに　ストーリーを　かんじさせますね{EOS}"
	.if (. - gTVTextPointerTable_Entry010) > 0x23
	.error "gTVTextPointerTable_Entry010 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry010) < 0x23
	.space 0x23 - (. - gTVTextPointerTable_Entry010)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gTVTextPointerTable_Entry011
gTVTextPointerTable_Entry011: @ 0x0824DAB4
	.string "「{0xFD}{0x04}」という　ことばの\nおかげで　まるで　じょうけいが\lうかんで　くるようですね{EOS}"
	.if (. - gTVTextPointerTable_Entry011) > 0x2a
	.error "gTVTextPointerTable_Entry011 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry011) < 0x2a
	.space 0x2a - (. - gTVTextPointerTable_Entry011)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gTVTextPointerTable_Entry012
gTVTextPointerTable_Entry012: @ 0x0824DADE
	.string "このおはなしは　「{0xFD}{0x04}」という\nぶぶんが　とても　いんしょうてき　ですね{EOS}"
	.if (. - gTVTextPointerTable_Entry012) > 0x25
	.error "gTVTextPointerTable_Entry012 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry012) < 0x25
	.space 0x25 - (. - gTVTextPointerTable_Entry012)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gTVTextPointerTable_Entry013
gTVTextPointerTable_Entry013: @ 0x0824DB03
	.string "{0xFD}{0x02}さんは　とても　いい\nおはなしを　きかせて　くれましたね\pこれで　あなたの　こころにも\n{0xFD}{0x02}さん　という　ストーリーが\lきざみ　こまれましたよ\pそれでは　また　じかいの\nほうそうで　おあいしましょう{EOS}"
	.if (. - gTVTextPointerTable_Entry013) > 0x66
	.error "gTVTextPointerTable_Entry013 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry013) < 0x66
	.space 0x66 - (. - gTVTextPointerTable_Entry013)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gTVTextPointerTable_Entry019
gTVTextPointerTable_Entry019: @ 0x0824DB69
	.string "こんにちは\n『ポケモン　ニュース』の　じかんです\pたいへん　めずらしい　ニュースが\nはいって　きました\p{0xFD}{0x02}で\n{0xFD}{0x03}が　たいりょうはっせい　した\lという　ほうこくが　ありました！\p{0xFD}{0x03}と　いえば\nなかなか　みつけることが　むずかしい\lポケモンとしても　ゆうめい　ですね\pあなたも　このしんぴてきな\n{0xFD}{0x03}の　たいりょうはっせいを\lみにいっては　いかが　でしょうか？\pいじょう\n『ポケモン　ニュース』でした{EOS}"
	.if (. - gTVTextPointerTable_Entry019) != 0xca
	.error "gTVTextPointerTable_Entry019 must retain its original byte length"
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gTVTextPointerTable_Entry054
gTVTextPointerTable_Entry054: @ 0x0824DC33
	.string "しかい『ごきげん　いかがですか？\n『ポロック　バンザイ！』の　おじかんです\pきょうの　ポロックは\n{0xFD}{0x02}さんと　その　おなかまが\lブレンドした　ポロックです\pさっそく　わたしの　グルメな　ポケモン\nゴクリンちゃんに　たべさせて　みましょう！\p……　……　……　……\n……　……　……　……{EOS}"
	.if (. - gTVTextPointerTable_Entry054) > 0x90
	.error "gTVTextPointerTable_Entry054 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry054) < 0x90
	.space 0x90 - (. - gTVTextPointerTable_Entry054)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gTVTextPointerTable_Entry055
gTVTextPointerTable_Entry055: @ 0x0824DCC3
	.string "ゴクリン『グビィ！　グビィ！\pしかい『おお！　とっても　{0xFD}{0x02}くて\n「{0xFD}{0x03}！」と　いってますね\pきっと　これは　{0xFD}{0x04}さんが\nがんばって　まわした　おかげですね！\p{0xFD}{0x04}さん！\nごちそうさま　でした！{EOS}"
	.if (. - gTVTextPointerTable_Entry055) > 0x62
	.error "gTVTextPointerTable_Entry055 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry055) < 0x62
	.space 0x62 - (. - gTVTextPointerTable_Entry055)
	.endif
