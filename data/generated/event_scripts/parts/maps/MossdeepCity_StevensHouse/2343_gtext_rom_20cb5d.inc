	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:169 MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas
	.globl gText_Rom_20CB5D
gText_Rom_20CB5D: @ 0x0820CB5D
	.string "{PLAYER}は モンスターボールを\nそのままに しておいた$"
	.if (. - gText_Rom_20CB5D) > 0x1a
	.error "gText_Rom_20CB5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CB5D) < 0x1a
	.space 0x1a - (. - gText_Rom_20CB5D)
	.endif
