	@ data/text/apprentice.inc:601 gText_ApprenticeWhichMon4
	.globl gText_Rom_2710A8
gText_Rom_2710A8: @ 0x082710A8
	.string "{PLAYER}{KUN} よかった\nさがしに いこうと おもってたのよ!\pねえ わたしが つかう ポケモン\nあなたが きめて くれない?\pそうね……\n{STR_VAR_1}と {STR_VAR_2}だったら\lどっちが いいと おもう?$"
	.if (. - gText_Rom_2710A8) > 0x5c
	.error "gText_Rom_2710A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2710A8) < 0x5c
	.space 0x5c - (. - gText_Rom_2710A8)
	.endif
