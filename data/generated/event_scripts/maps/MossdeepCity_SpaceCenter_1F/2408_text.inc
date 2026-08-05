	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:347 MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle
	.globl gText_Rom_20D574
gText_Rom_20D574: @ 0x0820D574
	.string "ねんりょうの つかいみち？\nそんなこと オレは しらん!\l2かいに いる リーダーに きいてくれ!$"
	.if (. - gText_Rom_20D574) > 0x32
	.error "gText_Rom_20D574 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D574) < 0x32
	.space 0x32 - (. - gText_Rom_20D574)
	.endif
