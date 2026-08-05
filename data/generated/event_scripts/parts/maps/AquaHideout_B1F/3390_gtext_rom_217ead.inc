	@ data/maps/AquaHideout_B1F/scripts.inc:121 AquaHideout_B1F_Text_Grunt3Defeat (+1 aliases)
	.globl gText_Rom_217EAD
gText_Rom_217EAD: @ 0x08217EAD
	.string "こっぴどく やられたーっ!$"
	.if (. - gText_Rom_217EAD) > 0xe
	.error "gText_Rom_217EAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217EAD) < 0xe
	.space 0xe - (. - gText_Rom_217EAD)
	.endif
