	@ data/text/tv.inc:31 BattleFrontier_BattleTowerLobby_Text_HowDidBattleTowerTurnOut
	.globl BattleFrontier_BattleTowerLobby_Text_HowDidBattleTowerTurnOut
BattleFrontier_BattleTowerLobby_Text_HowDidBattleTowerTurnOut: @ 0x0824CA3E
	.string "ほんと!?\nありがとう!\lえっと それじゃあねぇ……\pこんかいの バトルタワーの\nたいせんは どうでしたか\pまんぞく でしたか!\nそれとも ふまん ですか!?{EOS}"
	.if (. - BattleFrontier_BattleTowerLobby_Text_HowDidBattleTowerTurnOut) > 0x50
	.error "BattleFrontier_BattleTowerLobby_Text_HowDidBattleTowerTurnOut may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_HowDidBattleTowerTurnOut) < 0x50
	.space 0x50 - (. - BattleFrontier_BattleTowerLobby_Text_HowDidBattleTowerTurnOut)
	.endif

	@ data/text/tv.inc:34 BattleFrontier_BattleTowerLobby_Text_SorryWeDisturbedYou
	.globl BattleFrontier_BattleTowerLobby_Text_SorryWeDisturbedYou
BattleFrontier_BattleTowerLobby_Text_SorryWeDisturbedYou: @ 0x0824CA8E
	.string "あぁ!\nごめんなさい\pじゃあ またこんど バトルタワーに きたら\nきかせて くださいね{EOS}"
	.if (. - BattleFrontier_BattleTowerLobby_Text_SorryWeDisturbedYou) > 0x2c
	.error "BattleFrontier_BattleTowerLobby_Text_SorryWeDisturbedYou may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_SorryWeDisturbedYou) < 0x2c
	.space 0x2c - (. - BattleFrontier_BattleTowerLobby_Text_SorryWeDisturbedYou)
	.endif

	@ data/text/tv.inc:37 BattleFrontier_BattleTowerLobby_Text_ObviousYouHadGreatBattle
	.globl BattleFrontier_BattleTowerLobby_Text_ObviousYouHadGreatBattle
BattleFrontier_BattleTowerLobby_Text_ObviousYouHadGreatBattle: @ 0x0824CABA
	.string "さっすが!\pその まんぞくした かおを みれば\nどんなに いいしあいだったか\lわかりますよ!{EOS}"
	.if (. - BattleFrontier_BattleTowerLobby_Text_ObviousYouHadGreatBattle) > 0x2f
	.error "BattleFrontier_BattleTowerLobby_Text_ObviousYouHadGreatBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_ObviousYouHadGreatBattle) < 0x2f
	.space 0x2f - (. - BattleFrontier_BattleTowerLobby_Text_ObviousYouHadGreatBattle)
	.endif

	@ data/text/tv.inc:40 BattleFrontier_BattleTowerLobby_Text_DifficultToMakeBattleTurnOutAsPlanned
	.globl BattleFrontier_BattleTowerLobby_Text_DifficultToMakeBattleTurnOutAsPlanned
BattleFrontier_BattleTowerLobby_Text_DifficultToMakeBattleTurnOutAsPlanned: @ 0x0824CAE9
	.string "うーん そうですか……\pおもいどおりに しょうぶを するのって\nなかなか むずかしい ですからね……{EOS}"
	.if (. - BattleFrontier_BattleTowerLobby_Text_DifficultToMakeBattleTurnOutAsPlanned) > 0x33
	.error "BattleFrontier_BattleTowerLobby_Text_DifficultToMakeBattleTurnOutAsPlanned may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_DifficultToMakeBattleTurnOutAsPlanned) < 0x33
	.space 0x33 - (. - BattleFrontier_BattleTowerLobby_Text_DifficultToMakeBattleTurnOutAsPlanned)
	.endif

	@ data/text/tv.inc:43 BattleFrontier_BattleTowerLobby_Text_DescribeYourBattle
	.globl BattleFrontier_BattleTowerLobby_Text_DescribeYourBattle
BattleFrontier_BattleTowerLobby_Text_DescribeYourBattle: @ 0x0824CB1C
	.string "あぁっ あと\nもう ひとつだけ いいですか?\pこの たたかいの かんそうを\nひとことで ビシッと きかせてください!{EOS}"
	.if (. - BattleFrontier_BattleTowerLobby_Text_DescribeYourBattle) > 0x3b
	.error "BattleFrontier_BattleTowerLobby_Text_DescribeYourBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_DescribeYourBattle) < 0x3b
	.space 0x3b - (. - BattleFrontier_BattleTowerLobby_Text_DescribeYourBattle)
	.endif

	@ data/text/tv.inc:46 BattleFrontier_BattleTowerLobby_Text_ThatsGreatLine
	.globl BattleFrontier_BattleTowerLobby_Text_ThatsGreatLine
BattleFrontier_BattleTowerLobby_Text_ThatsGreatLine: @ 0x0824CB57
	.string "かっこいー!!\pいい きめゼリフ ですね\nつぎの たたかいも きたい してますよ\pそれでは また!{EOS}"
	.if (. - BattleFrontier_BattleTowerLobby_Text_ThatsGreatLine) > 0x32
	.error "BattleFrontier_BattleTowerLobby_Text_ThatsGreatLine may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_ThatsGreatLine) < 0x32
	.space 0x32 - (. - BattleFrontier_BattleTowerLobby_Text_ThatsGreatLine)
	.endif

	@ data/text/tv.inc:49 BattleFrontier_BattleTowerLobby_Text_SilentType
	.globl BattleFrontier_BattleTowerLobby_Text_SilentType
BattleFrontier_BattleTowerLobby_Text_SilentType: @ 0x0824CB89
	.string "そうですか……\pでも なにも いわないのも\nまた かっこいいですね!\pそれじゃあ またの きかいに\nかんそうを きかせて ください!{EOS}"
	.if (. - BattleFrontier_BattleTowerLobby_Text_SilentType) > 0x43
	.error "BattleFrontier_BattleTowerLobby_Text_SilentType may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_SilentType) < 0x43
	.space 0x43 - (. - BattleFrontier_BattleTowerLobby_Text_SilentType)
	.endif

	@ data/text/tv.inc:52 BattleFrontier_BattleTowerLobby_Text_LookingForwardToNextBattle
	.globl BattleFrontier_BattleTowerLobby_Text_LookingForwardToNextBattle
BattleFrontier_BattleTowerLobby_Text_LookingForwardToNextBattle: @ 0x0824CBCC
	.string "つぎの たたかいも\nきたい してますよ{EOS}"
	.if (. - BattleFrontier_BattleTowerLobby_Text_LookingForwardToNextBattle) > 0x14
	.error "BattleFrontier_BattleTowerLobby_Text_LookingForwardToNextBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_LookingForwardToNextBattle) < 0x14
	.space 0x14 - (. - BattleFrontier_BattleTowerLobby_Text_LookingForwardToNextBattle)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gTVTextPointerTable_Entry060
gTVTextPointerTable_Entry060: @ 0x0824CBE0
	.string "イヤー！\n『ブラボー　トレーナー』の　じかんだ！\pきょうは　バトルタワーに　ちょうせんした\n{0xFD}{0x02}さんの　しょうかいだー！\p{0xFD}{0x02}さんは　{0xFD}{0x03}を\nつかった　たたかいをして{EOS}"
	.if (. - gTVTextPointerTable_Entry060) > 0x54
	.error "gTVTextPointerTable_Entry060 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry060) < 0x54
	.space 0x54 - (. - gTVTextPointerTable_Entry060)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gTVTextPointerTable_Entry061
gTVTextPointerTable_Entry061: @ 0x0824CC34
	.string "なんと　{0xFD}{0x02}の　へやで\n{0xFD}{0x03}れんしょう　という\lきろくを　うちたてたぞ！{EOS}"
	.if (. - gTVTextPointerTable_Entry061) > 0x25
	.error "gTVTextPointerTable_Entry061 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry061) < 0x25
	.space 0x25 - (. - gTVTextPointerTable_Entry061)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gTVTextPointerTable_Entry062
gTVTextPointerTable_Entry062: @ 0x0824CC59
	.string "おしくも　{0xFD}{0x03}にんめで　たたかった\n{0xFD}{0x02}さんに　まけて　しまいました\lうーん！　ざんねんだねぇ\pでも　こんなはじめに　{0xFD}{0x02}さんに\nあたるとは　うんがないとしか　いえないよ\pさて　その　{0xFD}{0x02}さんとの\nしょうぶの　かんそうを　きいたところ{EOS}"
	.if (. - gTVTextPointerTable_Entry062) > 0x76
	.error "gTVTextPointerTable_Entry062 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry062) < 0x76
	.space 0x76 - (. - gTVTextPointerTable_Entry062)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gTVTextPointerTable_Entry063
gTVTextPointerTable_Entry063: @ 0x0824CCCF
	.string "さいごには　{0xFD}{0x02}さんの\n{0xFD}{0x03}を　みごとに　たおして\lしょうり　したんですねぇ\pいや　{0xFD}{0x02}さんに　かつなんて\nすごいとしか　いいようがないよ　まったく\pさて　そのしょうりを　つかんだ\nしゅんかんの　かんそうを　きいたところ{EOS}"
	.if (. - gTVTextPointerTable_Entry063) > 0x6f
	.error "gTVTextPointerTable_Entry063 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry063) < 0x6f
	.space 0x6f - (. - gTVTextPointerTable_Entry063)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gTVTextPointerTable_Entry064
gTVTextPointerTable_Entry064: @ 0x0824CD3E
	.string "しかし　さいごに　とうじょうした\n{0xFD}{0x02}さんの　{0xFD}{0x03}に\lついに　まけて　しまったんですねぇ\pまあ　「{0xFD}{0x02}の　{0xFD}{0x03}」\nといえば　ゆうめいな　コンビ　ですからね\p……さて　その　ゆうめいじんとの\nしょうぶの　かんそうを　きいたところ{EOS}"
	.if (. - gTVTextPointerTable_Entry064) > 0x72
	.error "gTVTextPointerTable_Entry064 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry064) < 0x72
	.space 0x72 - (. - gTVTextPointerTable_Entry064)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gTVTextPointerTable_Entry065
gTVTextPointerTable_Entry065: @ 0x0824CDB0
	.string "まんぞく　した！！\pと　すがすがしく　こたえてくれたよ\nさすがだぜ！\pまんぞくいく　たたかいが　できるなんて\nほんと　すごいよねぇ　まったく！\pその　まんぞくかんは　つぎの　ひとことを\nきいたとき　すべて　わかったよ{EOS}"
	.if (. - gTVTextPointerTable_Entry065) > 0x6d
	.error "gTVTextPointerTable_Entry065 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry065) < 0x6d
	.space 0x6d - (. - gTVTextPointerTable_Entry065)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gTVTextPointerTable_Entry066
gTVTextPointerTable_Entry066: @ 0x0824CE1D
	.string "ふまんだった……\pと　びみょうに　おちこみながら\nこたえて　くれたよ\p……まあ　まんぞくいく　たたかいって\nなかなかできる　もんじゃないからねー\pそのときの　くやしさは\nつぎの　ひとことが　よくあらわしてるよ{EOS}"
	.if (. - gTVTextPointerTable_Entry066) > 0x69
	.error "gTVTextPointerTable_Entry066 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry066) < 0x69
	.space 0x69 - (. - gTVTextPointerTable_Entry066)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gTVTextPointerTable_Entry067
gTVTextPointerTable_Entry067: @ 0x0824CE86
	.string "なし{EOS}"
	.if (. - gTVTextPointerTable_Entry067) > 0x3
	.error "gTVTextPointerTable_Entry067 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry067) < 0x3
	.space 0x3 - (. - gTVTextPointerTable_Entry067)
	.endif

