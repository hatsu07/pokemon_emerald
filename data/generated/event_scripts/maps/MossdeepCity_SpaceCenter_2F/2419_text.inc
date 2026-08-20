	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:342 MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets
	.globl gText_Rom_20DACB
gText_Rom_20DACB: @ 0x0820DACB
	.string "トクサネは てんきの よい ひが おおい\nかぜの むきも あんてい している\pロケットを うちあげる には\nもってこいの ばしょ なんですな{EOS}"
	.if (. - gText_Rom_20DACB) > 0x47
	.error "gText_Rom_20DACB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DACB) < 0x47
	.space 0x47 - (. - gText_Rom_20DACB)
	.endif
