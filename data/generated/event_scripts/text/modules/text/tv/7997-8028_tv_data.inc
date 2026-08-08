	@ data/text/tv.inc:31 BattleFrontier_BattleTowerLobby_Text_HowDidBattleTowerTurnOut
	.globl gText_Rom_24CA3E
gText_Rom_24CA3E: @ 0x0824CA3E
	.string "ほんと!?\nありがとう!\lえっと それじゃあねぇ……\pこんかいの バトルタワーの\nたいせんは どうでしたか\pまんぞく でしたか!\nそれとも ふまん ですか!?$"
	.if (. - gText_Rom_24CA3E) > 0x50
	.error "gText_Rom_24CA3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CA3E) < 0x50
	.space 0x50 - (. - gText_Rom_24CA3E)
	.endif

	@ data/text/tv.inc:34 BattleFrontier_BattleTowerLobby_Text_SorryWeDisturbedYou
	.globl gText_Rom_24CA8E
gText_Rom_24CA8E: @ 0x0824CA8E
	.string "あぁ!\nごめんなさい\pじゃあ またこんど バトルタワーに きたら\nきかせて くださいね$"
	.if (. - gText_Rom_24CA8E) > 0x2c
	.error "gText_Rom_24CA8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CA8E) < 0x2c
	.space 0x2c - (. - gText_Rom_24CA8E)
	.endif

	@ data/text/tv.inc:37 BattleFrontier_BattleTowerLobby_Text_ObviousYouHadGreatBattle
	.globl gText_Rom_24CABA
gText_Rom_24CABA: @ 0x0824CABA
	.string "さっすが!\pその まんぞくした かおを みれば\nどんなに いいしあいだったか\lわかりますよ!$"
	.if (. - gText_Rom_24CABA) > 0x2f
	.error "gText_Rom_24CABA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CABA) < 0x2f
	.space 0x2f - (. - gText_Rom_24CABA)
	.endif

	@ data/text/tv.inc:40 BattleFrontier_BattleTowerLobby_Text_DifficultToMakeBattleTurnOutAsPlanned
	.globl gText_Rom_24CAE9
gText_Rom_24CAE9: @ 0x0824CAE9
	.string "うーん そうですか……\pおもいどおりに しょうぶを するのって\nなかなか むずかしい ですからね……$"
	.if (. - gText_Rom_24CAE9) > 0x33
	.error "gText_Rom_24CAE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CAE9) < 0x33
	.space 0x33 - (. - gText_Rom_24CAE9)
	.endif

	@ data/text/tv.inc:43 BattleFrontier_BattleTowerLobby_Text_DescribeYourBattle
	.globl gText_Rom_24CB1C
gText_Rom_24CB1C: @ 0x0824CB1C
	.string "あぁっ あと\nもう ひとつだけ いいですか?\pこの たたかいの かんそうを\nひとことで ビシッと きかせてください!$"
	.if (. - gText_Rom_24CB1C) > 0x3b
	.error "gText_Rom_24CB1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CB1C) < 0x3b
	.space 0x3b - (. - gText_Rom_24CB1C)
	.endif

	@ data/text/tv.inc:46 BattleFrontier_BattleTowerLobby_Text_ThatsGreatLine
	.globl gText_Rom_24CB57
gText_Rom_24CB57: @ 0x0824CB57
	.string "かっこいー!!\pいい きめゼリフ ですね\nつぎの たたかいも きたい してますよ\pそれでは また!$"
	.if (. - gText_Rom_24CB57) > 0x32
	.error "gText_Rom_24CB57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CB57) < 0x32
	.space 0x32 - (. - gText_Rom_24CB57)
	.endif

	@ data/text/tv.inc:49 BattleFrontier_BattleTowerLobby_Text_SilentType
	.globl gText_Rom_24CB89
gText_Rom_24CB89: @ 0x0824CB89
	.string "そうですか……\pでも なにも いわないのも\nまた かっこいいですね!\pそれじゃあ またの きかいに\nかんそうを きかせて ください!$"
	.if (. - gText_Rom_24CB89) > 0x43
	.error "gText_Rom_24CB89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CB89) < 0x43
	.space 0x43 - (. - gText_Rom_24CB89)
	.endif

	@ data/text/tv.inc:52 BattleFrontier_BattleTowerLobby_Text_LookingForwardToNextBattle
	.globl gText_Rom_24CBCC
gText_Rom_24CBCC: @ 0x0824CBCC
	.string "つぎの たたかいも\nきたい してますよ$"
	.if (. - gText_Rom_24CBCC) > 0x14
	.error "gText_Rom_24CBCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CBCC) < 0x14
	.space 0x14 - (. - gText_Rom_24CBCC)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CBE0
gText_Rom_24CBE0: @ 0x0824CBE0
	.string "イヤー！\n『ブラボー　トレーナー』の　じかんだ！\pきょうは　バトルタワーに　ちょうせんした\n{0xFD}{0x02}さんの　しょうかいだー！\p{0xFD}{0x02}さんは　{0xFD}{0x03}を\nつかった　たたかいをして$"
	.if (. - gText_Rom_24CBE0) > 0x54
	.error "gText_Rom_24CBE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CBE0) < 0x54
	.space 0x54 - (. - gText_Rom_24CBE0)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CC34
gText_Rom_24CC34: @ 0x0824CC34
	.string "なんと　{0xFD}{0x02}の　へやで\n{0xFD}{0x03}れんしょう　という\lきろくを　うちたてたぞ！$"
	.if (. - gText_Rom_24CC34) > 0x25
	.error "gText_Rom_24CC34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CC34) < 0x25
	.space 0x25 - (. - gText_Rom_24CC34)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CC59
gText_Rom_24CC59: @ 0x0824CC59
	.string "おしくも　{0xFD}{0x03}にんめで　たたかった\n{0xFD}{0x02}さんに　まけて　しまいました\lうーん！　ざんねんだねぇ\pでも　こんなはじめに　{0xFD}{0x02}さんに\nあたるとは　うんがないとしか　いえないよ\pさて　その　{0xFD}{0x02}さんとの\nしょうぶの　かんそうを　きいたところ$"
	.if (. - gText_Rom_24CC59) > 0x76
	.error "gText_Rom_24CC59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CC59) < 0x76
	.space 0x76 - (. - gText_Rom_24CC59)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CCCF
gText_Rom_24CCCF: @ 0x0824CCCF
	.string "さいごには　{0xFD}{0x02}さんの\n{0xFD}{0x03}を　みごとに　たおして\lしょうり　したんですねぇ\pいや　{0xFD}{0x02}さんに　かつなんて\nすごいとしか　いいようがないよ　まったく\pさて　そのしょうりを　つかんだ\nしゅんかんの　かんそうを　きいたところ$"
	.if (. - gText_Rom_24CCCF) > 0x6f
	.error "gText_Rom_24CCCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CCCF) < 0x6f
	.space 0x6f - (. - gText_Rom_24CCCF)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CD3E
gText_Rom_24CD3E: @ 0x0824CD3E
	.string "しかし　さいごに　とうじょうした\n{0xFD}{0x02}さんの　{0xFD}{0x03}に\lついに　まけて　しまったんですねぇ\pまあ　「{0xFD}{0x02}の　{0xFD}{0x03}」\nといえば　ゆうめいな　コンビ　ですからね\p……さて　その　ゆうめいじんとの\nしょうぶの　かんそうを　きいたところ$"
	.if (. - gText_Rom_24CD3E) > 0x72
	.error "gText_Rom_24CD3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CD3E) < 0x72
	.space 0x72 - (. - gText_Rom_24CD3E)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CDB0
gText_Rom_24CDB0: @ 0x0824CDB0
	.string "まんぞく　した！！\pと　すがすがしく　こたえてくれたよ\nさすがだぜ！\pまんぞくいく　たたかいが　できるなんて\nほんと　すごいよねぇ　まったく！\pその　まんぞくかんは　つぎの　ひとことを\nきいたとき　すべて　わかったよ$"
	.if (. - gText_Rom_24CDB0) > 0x6d
	.error "gText_Rom_24CDB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CDB0) < 0x6d
	.space 0x6d - (. - gText_Rom_24CDB0)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CE1D
gText_Rom_24CE1D: @ 0x0824CE1D
	.string "ふまんだった……\pと　びみょうに　おちこみながら\nこたえて　くれたよ\p……まあ　まんぞくいく　たたかいって\nなかなかできる　もんじゃないからねー\pそのときの　くやしさは\nつぎの　ひとことが　よくあらわしてるよ$"
	.if (. - gText_Rom_24CE1D) > 0x69
	.error "gText_Rom_24CE1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CE1D) < 0x69
	.space 0x69 - (. - gText_Rom_24CE1D)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24CE86
gText_Rom_24CE86: @ 0x0824CE86
	.string "なし$"
	.if (. - gText_Rom_24CE86) > 0x3
	.error "gText_Rom_24CE86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CE86) < 0x3
	.space 0x3 - (. - gText_Rom_24CE86)
	.endif

