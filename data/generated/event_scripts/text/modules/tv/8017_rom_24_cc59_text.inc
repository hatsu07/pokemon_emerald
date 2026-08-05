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
