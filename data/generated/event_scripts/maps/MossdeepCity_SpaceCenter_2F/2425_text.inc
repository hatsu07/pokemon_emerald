	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:351 MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis
	.globl gText_Rom_20DB7B
gText_Rom_20DB7B: @ 0x0820DB7B
	.string "マグマだんに ねんりょうを うばわれたら\nわしが うちゅうに いけなくなる！\pそんなこと させて たまるかー！$"
	.if (. - gText_Rom_20DB7B) > 0x38
	.error "gText_Rom_20DB7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DB7B) < 0x38
	.space 0x38 - (. - gText_Rom_20DB7B)
	.endif
