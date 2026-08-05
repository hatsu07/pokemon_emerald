	@ data/maps/MauvilleCity/scripts.inc:462 MauvilleCity_Text_UncleHesTooPeppy
	.globl gText_Rom_1DDE15
gText_Rom_1DDE15: @ 0x081DDE15
	.string "おじさん『このこは ポケモンの おかげで\nげんきに なれたような もんだけど\lちょっと げんきに なりすぎ なんだ……$"
	.if (. - gText_Rom_1DDE15) > 0x3c
	.error "gText_Rom_1DDE15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DDE15) < 0x3c
	.space 0x3c - (. - gText_Rom_1DDE15)
	.endif
