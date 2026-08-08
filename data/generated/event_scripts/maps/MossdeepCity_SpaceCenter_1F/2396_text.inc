	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:329 MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle
	.globl gText_Rom_20D4A1
gText_Rom_20D4A1: @ 0x0820D4A1
	.string "わたしに かった ぐらいで\nちょうしに のってちゃ ダメよ!$"
	.if (. - gText_Rom_20D4A1) > 0x1f
	.error "gText_Rom_20D4A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D4A1) < 0x1f
	.space 0x1f - (. - gText_Rom_20D4A1)
	.endif
