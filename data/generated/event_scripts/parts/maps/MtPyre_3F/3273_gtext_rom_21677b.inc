	@ data/maps/MtPyre_3F/scripts.inc:70 MtPyre_3F_Text_GabriellePostBattle
	.globl gText_Rom_21677B
gText_Rom_21677B: @ 0x0821677B
	.string "いまはもう いない ポケモン\nいま いっしょに いる ポケモン\pそれに\nこれから であう ポケモン……\pすべて たいせつな ポケモン なのよ\nおぼえて おいて くださいね$"
	.if (. - gText_Rom_21677B) > 0x56
	.error "gText_Rom_21677B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21677B) < 0x56
	.space 0x56 - (. - gText_Rom_21677B)
	.endif
