	@ data/maps/SeafloorCavern_Room3/scripts.inc:17 SeafloorCavern_Room3_Text_ShellyDefeat (+1 aliases)
	.globl gText_Rom_2187F9
gText_Rom_2187F9: @ 0x082187F9
	.string "オーッホッホ!\pいったーい!$"
	.if (. - gText_Rom_2187F9) > 0xf
	.error "gText_Rom_2187F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2187F9) < 0xf
	.space 0xf - (. - gText_Rom_2187F9)
	.endif
