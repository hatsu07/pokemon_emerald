	@ data/text/tv.inc:1123 LilycoveCity_ContestLobby_Text_InterviewRequest
	.globl LilycoveCity_ContestLobby_Text_InterviewRequest
LilycoveCity_ContestLobby_Text_InterviewRequest: @ 0x0824C585
	.string "おや? あなた ポケモンコンテストに\nさんかして いましたね!\lその ポケモンを みれば わかりますよ!\pわたくし ポケモンコンテストに ついて\nきじを かいて いるのですが\pできれば すこし かんそうを\nきかせて くれませんかね?{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_InterviewRequest) > 0x75
	.error "LilycoveCity_ContestLobby_Text_InterviewRequest may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_InterviewRequest) < 0x75
	.space 0x75 - (. - LilycoveCity_ContestLobby_Text_InterviewRequest)
	.endif

	@ data/text/tv.inc:1126 LilycoveCity_ContestLobby_Text_DescribeContest
	.globl LilycoveCity_ContestLobby_Text_DescribeContest
LilycoveCity_ContestLobby_Text_DescribeContest: @ 0x0824C5FA
	.string "ほんとう ですか!\nありがとう ございます\pそれでは いまの コンテストの かんそうを\nひとことで おねがいします!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_DescribeContest) > 0x3b
	.error "LilycoveCity_ContestLobby_Text_DescribeContest may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_DescribeContest) < 0x3b
	.space 0x3b - (. - LilycoveCity_ContestLobby_Text_DescribeContest)
	.endif

	@ data/text/tv.inc:1129 LilycoveCity_ContestLobby_Text_WhatImageWhenYouHearX
	.globl LilycoveCity_ContestLobby_Text_WhatImageWhenYouHearX
LilycoveCity_ContestLobby_Text_WhatImageWhenYouHearX: @ 0x0824C635
	.string "うーん なるほど!\pどんな コンテストだったか\nよくわかる ひとこと ですね!\p……さいごに\nちょっと おききしたいの ですが\pあなたが イメージする {STR_VAR_2}って\nいったい どんなもの ですかね?{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_WhatImageWhenYouHearX) > 0x62
	.error "LilycoveCity_ContestLobby_Text_WhatImageWhenYouHearX may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_WhatImageWhenYouHearX) < 0x62
	.space 0x62 - (. - LilycoveCity_ContestLobby_Text_WhatImageWhenYouHearX)
	.endif

	@ data/text/tv.inc:1132 LilycoveCity_ContestLobby_Text_ThatsAllForInterview
	.globl LilycoveCity_ContestLobby_Text_ThatsAllForInterview
LilycoveCity_ContestLobby_Text_ThatsAllForInterview: @ 0x0824C697
	.string "なるほど!\pそれが あなたの イメージする\n{STR_VAR_2} なんですね!\pいろいろ さんこうに なりました!\pコンテストに ついて\nいい きじが かけそう ですよ\pもしかしたら テレビで このことが\nながれるかも しれないので\lたのしみに してくださいね!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_ThatsAllForInterview) > 0x7c
	.error "LilycoveCity_ContestLobby_Text_ThatsAllForInterview may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_ThatsAllForInterview) < 0x7c
	.space 0x7c - (. - LilycoveCity_ContestLobby_Text_ThatsAllForInterview)
	.endif

	@ data/text/tv.inc:1135 LilycoveCity_ContestLobby_Text_PleaseDoShareStoryWithMe
	.globl LilycoveCity_ContestLobby_Text_PleaseDoShareStoryWithMe
LilycoveCity_ContestLobby_Text_PleaseDoShareStoryWithMe: @ 0x0824C713
	.string "そうですか……\pこんど おもしろいことが あれば\nきかせて くださいね{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_PleaseDoShareStoryWithMe) > 0x24
	.error "LilycoveCity_ContestLobby_Text_PleaseDoShareStoryWithMe may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_PleaseDoShareStoryWithMe) < 0x24
	.space 0x24 - (. - LilycoveCity_ContestLobby_Text_PleaseDoShareStoryWithMe)
	.endif

	@ data/text/tv.inc:1138 LilycoveCity_ContestLobby_Text_LookingForwardToNextContest
	.globl LilycoveCity_ContestLobby_Text_LookingForwardToNextContest
LilycoveCity_ContestLobby_Text_LookingForwardToNextContest: @ 0x0824C737
	.string "こんどの ポケモンコンテストも\nたのしみに してますよ!{EOS}"
	.if (. - LilycoveCity_ContestLobby_Text_LookingForwardToNextContest) > 0x1d
	.error "LilycoveCity_ContestLobby_Text_LookingForwardToNextContest may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_ContestLobby_Text_LookingForwardToNextContest) < 0x1d
	.space 0x1d - (. - LilycoveCity_ContestLobby_Text_LookingForwardToNextContest)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gTVTextPointerTable_Entry045
gTVTextPointerTable_Entry045: @ 0x0824C754
	.string "イヤー！\n『ブラボー　トレーナー』の　じかんだ！\pきょうは　{0xFD}{0x04}クラスの\n{0xFD}{0x03}を　ほこる\l{0xFD}{0x02}さんの　ポケモン！{EOS}"
	.if (. - gTVTextPointerTable_Entry045) > 0x39
	.error "gTVTextPointerTable_Entry045 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry045) < 0x39
	.space 0x39 - (. - gTVTextPointerTable_Entry045)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gTVTextPointerTable_Entry046
gTVTextPointerTable_Entry046: @ 0x0824C78D
	.string "{0xFD}{0x02}　の　「{0xFD}{0x03}」の\nしょうかいだー！\p「{0xFD}{0x03}」か……\pもう　ニックネーム　からして\n{0xFD}{0x04}が　にじみ　でているぜ！{EOS}"
	.if (. - gTVTextPointerTable_Entry046) > 0x3a
	.error "gTVTextPointerTable_Entry046 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry046) < 0x3a
	.space 0x3a - (. - gTVTextPointerTable_Entry046)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gTVTextPointerTable_Entry047
gTVTextPointerTable_Entry047: @ 0x0824C7C7
	.string "さーて　この　{0xFD}{0x02}さんが\nポケモンコンテストに　さんか　したとき\pじぶんの　ポケモンに　ついて\nあつく　はなして　くれたぞ！{EOS}"
	.if (. - gTVTextPointerTable_Entry047) > 0x3f
	.error "gTVTextPointerTable_Entry047 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry047) < 0x3f
	.space 0x3f - (. - gTVTextPointerTable_Entry047)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gTVTextPointerTable_Entry048
gTVTextPointerTable_Entry048: @ 0x0824C806
	.string "コンテストを　したあとの\nかんそうを　きくと\lすごく　うれしそうに\p「{0xFD}{0x03}」って\nこたえて　くれたぞ！\pまあ　コンテストでは\n{0xFD}{0x04}ばん　でした　からねー！\pいまの　{0xFD}{0x02}さんには\nぴったりの　セリフだよ　まったく！{EOS}"
	.if (. - gTVTextPointerTable_Entry048) > 0x6b
	.error "gTVTextPointerTable_Entry048 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry048) < 0x6b
	.space 0x6b - (. - gTVTextPointerTable_Entry048)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gTVTextPointerTable_Entry049
gTVTextPointerTable_Entry049: @ 0x0824C871
	.string "コンテストを　したあとの\nかんそうを　きくと\lびみょうに　くやしがり　ながら\p「{0xFD}{0x03}」って\nこたえて　くれたぞ！\pまあ　コンテストでは\n{0xFD}{0x04}ばん　でした　からねー！\pこの　ことばに　{0xFD}{0x02}さんの\nくやしさが　みえかくれ　するねー{EOS}"
	.if (. - gTVTextPointerTable_Entry049) > 0x72
	.error "gTVTextPointerTable_Entry049 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry049) < 0x72
	.space 0x72 - (. - gTVTextPointerTable_Entry049)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gTVTextPointerTable_Entry050
gTVTextPointerTable_Entry050: @ 0x0824C8E3
	.string "ところで　{0xFD}{0x02}さんの　めざしてる\n{0xFD}{0x03}って　いったい　なんだろう？\lきいて　みたいねー！\pもちろん　きいて　きました！\pそれは　つぎの　ひとことに\nすべてが　つまって　います！\pそれは　「{0xFD}{0x04}！」\pそれこそ　{0xFD}{0x02}さんの\n{0xFD}{0x03}の　すべて　なんです！{EOS}"
	.if (. - gTVTextPointerTable_Entry050) > 0x7c
	.error "gTVTextPointerTable_Entry050 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry050) < 0x7c
	.space 0x7c - (. - gTVTextPointerTable_Entry050)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gTVTextPointerTable_Entry051
gTVTextPointerTable_Entry051: @ 0x0824C95F
	.string "さいごに　{0xFD}{0x02}が\nつかった　{0xFD}{0x03}も\lすべて　「{0xFD}{0x04}」　なんです！{EOS}"
	.if (. - gTVTextPointerTable_Entry051) > 0x21
	.error "gTVTextPointerTable_Entry051 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry051) < 0x21
	.space 0x21 - (. - gTVTextPointerTable_Entry051)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gTVTextPointerTable_Entry052
gTVTextPointerTable_Entry052: @ 0x0824C980
	.string "ブラボー！　{0xFD}{0x02}\nブラボー！！　{0xFD}{0x03}\pこんごの　{0xFD}{0x02}さんの　かつやくに\nきたい　したいねー！\pそれじゃあ　また　じかいの\nほうそうで　あいましょー！{EOS}"
	.if (. - gTVTextPointerTable_Entry052) > 0x4b
	.error "gTVTextPointerTable_Entry052 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry052) < 0x4b
	.space 0x4b - (. - gTVTextPointerTable_Entry052)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gTVTextPointerTable_Entry053
gTVTextPointerTable_Entry053: @ 0x0824C9CB
	.string "{0xFD}{0x02}　の　しょうかいだー！{EOS}"
	.if (. - gTVTextPointerTable_Entry053) > 0xe
	.error "gTVTextPointerTable_Entry053 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry053) < 0xe
	.space 0xe - (. - gTVTextPointerTable_Entry053)
	.endif

	@ data/text/tv.inc:28 BattleFrontier_BattleTowerLobby_Text_InterviewRequest
	.globl BattleFrontier_BattleTowerLobby_Text_InterviewRequest
BattleFrontier_BattleTowerLobby_Text_InterviewRequest: @ 0x0824C9D9
	.string "あ! いま たたかっていた\nトレーナーの かたですね!\pわたし いま いろんな トレーナーの\nはなしを きいて まわってるんだけど\pたたかいおわった かんそうを\nすこしだけ きかせて もらえませんか?{EOS}"
	.if (. - BattleFrontier_BattleTowerLobby_Text_InterviewRequest) > 0x65
	.error "BattleFrontier_BattleTowerLobby_Text_InterviewRequest may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_InterviewRequest) < 0x65
	.space 0x65 - (. - BattleFrontier_BattleTowerLobby_Text_InterviewRequest)
	.endif

