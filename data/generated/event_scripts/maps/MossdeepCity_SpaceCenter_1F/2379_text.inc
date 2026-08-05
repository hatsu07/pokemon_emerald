	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:305 MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma
	.globl gText_Rom_20D2C2
gText_Rom_20D2C2: @ 0x0820D2C2
	.string "マグマだんを おっぱらわなきゃ\nかいがんの さんぽ どころじゃないね!$"
	.if (. - gText_Rom_20D2C2) > 0x24
	.error "gText_Rom_20D2C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D2C2) < 0x24
	.space 0x24 - (. - gText_Rom_20D2C2)
	.endif
