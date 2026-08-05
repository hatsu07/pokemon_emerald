	@ data/maps/MtChimney/scripts.inc:744 MtChimney_Text_PlayerLeftMeteorite
	.globl gText_Rom_2157BD
gText_Rom_2157BD: @ 0x082157BD
	.string "{PLAYER}は いんせきを\nそのままに しておいた$"
	.if (. - gText_Rom_2157BD) > 0x16
	.error "gText_Rom_2157BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2157BD) < 0x16
	.space 0x16 - (. - gText_Rom_2157BD)
	.endif
