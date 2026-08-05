	@ data/maps/AquaHideout_B2F/scripts.inc:104 AquaHideout_B2F_Text_Grunt4Defeat (+1 aliases)
	.globl gText_Rom_218205
gText_Rom_218205: @ 0x08218205
	.string "まちくたびれて\nまけて やぶれて……$"
	.if (. - gText_Rom_218205) > 0x13
	.error "gText_Rom_218205 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218205) < 0x13
	.space 0x13 - (. - gText_Rom_218205)
	.endif
