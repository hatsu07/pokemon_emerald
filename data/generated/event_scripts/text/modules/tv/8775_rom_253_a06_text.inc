	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+14 aliases)
	.globl gText_Rom_253A06
gText_Rom_253A06: @ 0x08253A06
	.string "しかい『きょうしゅく　です！\pしかし　こんかいは　ざんねん　でしたね！\nなにか　コメントを　おねがい　します！\pおねえさん『ざんねんでした……\nあたしも　{0xFD}{0x03}も　がんばったけど\lおうえん　してくれた　ひとたちに\lもうしわけ　ないです……\pしかい『うーん　たしかに　けづやが\nちょっと　いまいちな　かんじ　ですねー\pおねえさん『……{0xFD}{0x04}さん　ごめんね\nこんどは　がんばるから……\l……　……　うっ　……　うわーん！\pかんきゃく『ガヤガヤ　ガヤガヤ\pしかい『あわぁぁ……　しまった……\pそっ　それでは　このあたりで\nおわかれです！　みなさん　さようならー！"
	.byte EOS
	.if (. - gText_Rom_253A06) > 0x115
	.error "gText_Rom_253A06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253A06) < 0x115
	.space 0x115 - (. - gText_Rom_253A06)
	.endif
