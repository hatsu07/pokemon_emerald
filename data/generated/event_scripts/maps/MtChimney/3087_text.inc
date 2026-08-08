	@ data/maps/MtChimney/scripts.inc:711 MtChimney_Text_Bushaa
	.globl gText_Rom_2156EF
gText_Rom_2156EF: @ 0x082156EF
	.string "ぷしゃー!!$"
	.if (. - gText_Rom_2156EF) > 0x7
	.error "gText_Rom_2156EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2156EF) < 0x7
	.space 0x7 - (. - gText_Rom_2156EF)
	.endif
