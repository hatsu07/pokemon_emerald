	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24CE89
gText_Rom_24CE89: @ 0x0824CE89
	.string "なし{EOS}"
	.if (. - gText_Rom_24CE89) > 0x3
	.error "gText_Rom_24CE89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CE89) < 0x3
	.space 0x3 - (. - gText_Rom_24CE89)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24CE8C
gText_Rom_24CE8C: @ 0x0824CE8C
	.string "なし{EOS}"
	.if (. - gText_Rom_24CE8C) > 0x3
	.error "gText_Rom_24CE8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CE8C) < 0x3
	.space 0x3 - (. - gText_Rom_24CE8C)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24CE8F
gText_Rom_24CE8F: @ 0x0824CE8F
	.string "なし{EOS}"
	.if (. - gText_Rom_24CE8F) > 0x3
	.error "gText_Rom_24CE8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CE8F) < 0x3
	.space 0x3 - (. - gText_Rom_24CE8F)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CE92
gText_Rom_24CE92: @ 0x0824CE92
	.string "その　ことばは\n「{0xFD}{0x02}！」{EOS}"
	.if (. - gText_Rom_24CE92) > 0xe
	.error "gText_Rom_24CE92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CE92) < 0xe
	.space 0xe - (. - gText_Rom_24CE92)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CEA0
gText_Rom_24CEA0: @ 0x0824CEA0
	.string "「{0xFD}{0x02}！」\nうーん　　いい　ことばだねぇ！！\p{0xFD}{0x03}さんの　うれしさを\nこのことばが　よく　あらわしているよ！\pたしかに　{0xFD}{0x04}さんとの　たたかいは\nまさに　「{0xFD}{0x02}」　という\lかんじ　だったからねぇ！{EOS}"
	.if (. - gText_Rom_24CEA0) > 0x63
	.error "gText_Rom_24CEA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CEA0) < 0x63
	.space 0x63 - (. - gText_Rom_24CEA0)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CF03
gText_Rom_24CF03: @ 0x0824CF03
	.string "「{0xFD}{0x02}！」\nなるほどねぇ\pたしかに　{0xFD}{0x04}さんとの　たたかいは\n「{0xFD}{0x02}」　としか　いいようがない\lたたかい　でしたからねぇ\p{0xFD}{0x03}さんの　くやしさが\nよく　つたわってくるよ！　くー！{EOS}"
	.if (. - gText_Rom_24CF03) > 0x5a
	.error "gText_Rom_24CF03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CF03) < 0x5a
	.space 0x5a - (. - gText_Rom_24CF03)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CF5D
gText_Rom_24CF5D: @ 0x0824CF5D
	.string "ブラボー！　{0xFD}{0x02}\nブラボー！！　{0xFD}{0x03}\pこんごの　{0xFD}{0x02}さんの　かつやくに\nきたい　したいねぇ！\pそれじゃあ　また　じかいの\nほうそうで　あいましょー！{EOS}"
	.if (. - gText_Rom_24CF5D) > 0x4b
	.error "gText_Rom_24CF5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CF5D) < 0x4b
	.space 0x4b - (. - gText_Rom_24CF5D)
	.endif

	@ data/text/tv.inc:1087 SlateportCity_PokemonFanClub_Text_InterviewRequestHasName
	.globl SlateportCity_PokemonFanClub_Text_InterviewRequestHasName
SlateportCity_PokemonFanClub_Text_InterviewRequestHasName: @ 0x0824CFA8
	.string "わあ!\pきみ その {STR_VAR_1}を とても\nだいじに している みたいね!\p{STR_VAR_2} って いうんだ……\pそうだ!\pいま わたし テレビの しゅざいで\nポケモンの アンケートを してるんだけど\pすこしだけ しつもんに\nこたえて くれないかな?{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_InterviewRequestHasName) > 0x74
	.error "SlateportCity_PokemonFanClub_Text_InterviewRequestHasName may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_PokemonFanClub_Text_InterviewRequestHasName) < 0x74
	.space 0x74 - (. - SlateportCity_PokemonFanClub_Text_InterviewRequestHasName)
	.endif

	@ data/text/tv.inc:1090 SlateportCity_PokemonFanClub_Text_HereGoesQuickAnswers
	.globl SlateportCity_PokemonFanClub_Text_HereGoesQuickAnswers
SlateportCity_PokemonFanClub_Text_HereGoesQuickAnswers: @ 0x0824D01C
	.string "ありがとう!\pじゃあ きくね\nずばり ひとことで こたえて!{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_HereGoesQuickAnswers) > 0x1f
	.error "SlateportCity_PokemonFanClub_Text_HereGoesQuickAnswers may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_PokemonFanClub_Text_HereGoesQuickAnswers) < 0x1f
	.space 0x1f - (. - SlateportCity_PokemonFanClub_Text_HereGoesQuickAnswers)
	.endif

	@ data/text/tv.inc:1093 SlateportCity_PokemonFanClub_Text_DescribeFeelingsFirstMetMon
	.globl SlateportCity_PokemonFanClub_Text_DescribeFeelingsFirstMetMon
SlateportCity_PokemonFanClub_Text_DescribeFeelingsFirstMetMon: @ 0x0824D03B
	.string "きみが {STR_VAR_1}と\nであったときって\pなにか かんじた?\nどう おもったか おしえて!{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_DescribeFeelingsFirstMetMon) > 0x2a
	.error "SlateportCity_PokemonFanClub_Text_DescribeFeelingsFirstMetMon may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_PokemonFanClub_Text_DescribeFeelingsFirstMetMon) < 0x2a
	.space 0x2a - (. - SlateportCity_PokemonFanClub_Text_DescribeFeelingsFirstMetMon)
	.endif

	@ data/text/tv.inc:1096 SlateportCity_PokemonFanClub_Text_LikenMonToSomethingYouLike
	.globl SlateportCity_PokemonFanClub_Text_LikenMonToSomethingYouLike
SlateportCity_PokemonFanClub_Text_LikenMonToSomethingYouLike: @ 0x0824D065
	.string "きみの かわいがってる {STR_VAR_1}!\pもし なにか すきなものに たとえると\nすれば なんだと おもう?{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_LikenMonToSomethingYouLike) > 0x32
	.error "SlateportCity_PokemonFanClub_Text_LikenMonToSomethingYouLike may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_PokemonFanClub_Text_LikenMonToSomethingYouLike) < 0x32
	.space 0x32 - (. - SlateportCity_PokemonFanClub_Text_LikenMonToSomethingYouLike)
	.endif

	@ data/text/tv.inc:1099 SlateportCity_PokemonFanClub_Text_WhatAttractedYouAboutMon
	.globl SlateportCity_PokemonFanClub_Text_WhatAttractedYouAboutMon
SlateportCity_PokemonFanClub_Text_WhatAttractedYouAboutMon: @ 0x0824D097
	.string "きみの かわいがってる {STR_VAR_1}!\pきみは {STR_VAR_1}の どこに\nひかれたの?{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_WhatAttractedYouAboutMon) > 0x23
	.error "SlateportCity_PokemonFanClub_Text_WhatAttractedYouAboutMon may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_PokemonFanClub_Text_WhatAttractedYouAboutMon) < 0x23
	.space 0x23 - (. - SlateportCity_PokemonFanClub_Text_WhatAttractedYouAboutMon)
	.endif

	@ data/text/tv.inc:1102 SlateportCity_PokemonFanClub_Text_WhatDoPokemonMeanToYou
	.globl SlateportCity_PokemonFanClub_Text_WhatDoPokemonMeanToYou
SlateportCity_PokemonFanClub_Text_WhatDoPokemonMeanToYou: @ 0x0824D0BA
	.string "うーん なるほどね\pじゃあ つぎは ちょっと\nむずかしい しつもんを するね!\pじゃあ……\pきみに とって ポケモンって\nひとことで いうと なんだと おもう?{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_WhatDoPokemonMeanToYou) > 0x51
	.error "SlateportCity_PokemonFanClub_Text_WhatDoPokemonMeanToYou may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_PokemonFanClub_Text_WhatDoPokemonMeanToYou) < 0x51
	.space 0x51 - (. - SlateportCity_PokemonFanClub_Text_WhatDoPokemonMeanToYou)
	.endif

	@ data/text/tv.inc:1105 SlateportCity_PokemonFanClub_Text_ThatsAllForInterview
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SlateportCity_PokemonFanClub_Text_ThatsAllForInterview
SlateportCity_PokemonFanClub_Text_ThatsAllForInterview: @ 0x0824D10B
	.string "なるほどー!\pふむふむ……\pあ!\nきょうりょく ありがとうね!\pいろいろ はなしが きけて\nおもしろ かったよ\pこのはなし もしかしたら テレビで\nながすかも しれないから きたい しててね\pじゃあね\nバイバイ!{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_ThatsAllForInterview) != 0x6b
	.error "SlateportCity_PokemonFanClub_Text_ThatsAllForInterview must retain its original byte length"
	.endif

	@ data/text/tv.inc:1114 SlateportCity_PokemonFanClub_Text_HereIfYouGetUrgeToTellMe
	.globl SlateportCity_PokemonFanClub_Text_HereIfYouGetUrgeToTellMe
SlateportCity_PokemonFanClub_Text_HereIfYouGetUrgeToTellMe: @ 0x0824D176
	.string "そっか……\pじゃあ また ポケモンの ことを\nはなしたく なったら いつでも きてね{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_HereIfYouGetUrgeToTellMe) > 0x2b
	.error "SlateportCity_PokemonFanClub_Text_HereIfYouGetUrgeToTellMe may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_PokemonFanClub_Text_HereIfYouGetUrgeToTellMe) < 0x2b
	.space 0x2b - (. - SlateportCity_PokemonFanClub_Text_HereIfYouGetUrgeToTellMe)
	.endif

	@ data/text/tv.inc:1120 SlateportCity_PokemonFanClub_Text_EnjoyDoingInterviews
	.globl SlateportCity_PokemonFanClub_Text_EnjoyDoingInterviews
SlateportCity_PokemonFanClub_Text_EnjoyDoingInterviews: @ 0x0824D1A1
	.string "ここに いると いろんな ポケモンの\nはなしが きけるから おもしろいわ{EOS}"
	.if (. - SlateportCity_PokemonFanClub_Text_EnjoyDoingInterviews) > 0x25
	.error "SlateportCity_PokemonFanClub_Text_EnjoyDoingInterviews may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_PokemonFanClub_Text_EnjoyDoingInterviews) < 0x25
	.space 0x25 - (. - SlateportCity_PokemonFanClub_Text_EnjoyDoingInterviews)
	.endif
