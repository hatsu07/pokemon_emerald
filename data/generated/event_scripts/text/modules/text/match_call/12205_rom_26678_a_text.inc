	@ data/text/match_call.inc:211 MatchCall_DifferentRouteBattleRequestText14
	.globl gText_Rom_26678A
gText_Rom_26678A: @ 0x0826678A
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pげんきに してる?\nあ そうそう\pわたしの ポケモン\nあれから けっこう つよく なったのよ\p{PLAYER}{KUN}と もういちど\nしょうぶ してみたいわねえ\p{STR_VAR_2}で まってるから\nいつでも あいに きてね$"
	.if (. - gText_Rom_26678A) > 0x74
	.error "gText_Rom_26678A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26678A) < 0x74
	.space 0x74 - (. - gText_Rom_26678A)
	.endif
