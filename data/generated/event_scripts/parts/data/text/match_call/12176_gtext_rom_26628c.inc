	@ data/text/match_call.inc:169 MatchCall_SameRouteBattleRequestText14
	.globl gText_Rom_26628C
gText_Rom_26628C: @ 0x0826628C
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pあら いま {STR_VAR_2}に いるの?\nすぐちかくに いるのね\pじゃあ これから おばさんと\nポケモンしょうぶ してみない?\pまってるわよ じゃあね$"
	.if (. - gText_Rom_26628C) > 0x59
	.error "gText_Rom_26628C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26628C) < 0x59
	.space 0x59 - (. - gText_Rom_26628C)
	.endif
