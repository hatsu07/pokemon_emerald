	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:299 MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers
	.globl gText_Rom_20D255
gText_Rom_20D255: @ 0x0820D255
	.string "むかしから ホウエンちほうは\nいんせきの おおい ばしょ として\lゆうめい なんだよね$"
	.if (. - gText_Rom_20D255) > 0x2c
	.error "gText_Rom_20D255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D255) < 0x2c
	.space 0x2c - (. - gText_Rom_20D255)
	.endif
