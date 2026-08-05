	@ data/text/apprentice.inc:625 gText_ApprenticeWhichMon8
	.globl gText_Rom_2713D8
gText_Rom_2713D8: @ 0x082713D8
	.string "キャー {PLAYER}さんに また あえた!\nかっ かんげきっ……!\pそそそ そうだわっ!\nせっかく あえたん ですもの\lこの チャンスを のがす ては ないわっ!\p{PLAYER}さん おねがいが!\nわたしの ポケモンを きめて くださいっ!\p{STR_VAR_1}と {STR_VAR_2}と\nどちらが いいか きめて ほしいのですっ!$"
	.if (. - gText_Rom_2713D8) > 0x8e
	.error "gText_Rom_2713D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2713D8) < 0x8e
	.space 0x8e - (. - gText_Rom_2713D8)
	.endif
