	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:27 RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt
	.globl gText_Rom_20404B
gText_Rom_20404B: @ 0x0820404B
	.string "おとうさんは かいしゃで おしごと!\pこれ おとうさんが つくったんだぜ!\nでも ぼく まだ つかえないから あげるよ$"
	.if (. - gText_Rom_20404B) > 0x3c
	.error "gText_Rom_20404B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20404B) < 0x3c
	.space 0x3c - (. - gText_Rom_20404B)
	.endif
