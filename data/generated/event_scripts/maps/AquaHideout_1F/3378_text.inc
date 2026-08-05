	@ data/maps/AquaHideout_1F/scripts.inc:74 AquaHideout_1F_Text_Grunt1Defeat (+1 aliases)
	.globl gText_Rom_217C84
gText_Rom_217C84: @ 0x08217C84
	.string "うーむ まけちまったかー!$"
	.if (. - gText_Rom_217C84) > 0xe
	.error "gText_Rom_217C84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217C84) < 0xe
	.space 0xe - (. - gText_Rom_217C84)
	.endif
