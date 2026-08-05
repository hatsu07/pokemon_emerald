	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:293 MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter
	.globl gText_Rom_20D1DB
gText_Rom_20D1DB: @ 0x0820D1DB
	.string "マグマだんの やつらが\nこの うちゅうセンターを ねらっている\pだが そんなこと ぐらいで\nロケットの はっしゃを\lやめるわけには いかないんだ!$"
	.if (. - gText_Rom_20D1DB) > 0x4a
	.error "gText_Rom_20D1DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D1DB) < 0x4a
	.space 0x4a - (. - gText_Rom_20D1DB)
	.endif
