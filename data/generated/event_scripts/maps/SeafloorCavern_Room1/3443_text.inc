	@ data/maps/SeafloorCavern_Room1/scripts.inc:17 SeafloorCavern_Room1_Text_Grunt1Defeat (+1 aliases)
	.globl gText_Rom_2186A9
gText_Rom_2186A9: @ 0x082186A9
	.string "おれが かえりたいよー!$"
	.if (. - gText_Rom_2186A9) > 0xd
	.error "gText_Rom_2186A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2186A9) < 0xd
	.space 0xd - (. - gText_Rom_2186A9)
	.endif
