	@ data/maps/AquaHideout_B2F/scripts.inc:113 AquaHideout_B2F_Text_Grunt6Defeat (+1 aliases)
	.globl gText_Rom_21827F
gText_Rom_21827F: @ 0x0821827F
	.string "なによっ!\nちっとも つかれてない じゃない!$"
	.if (. - gText_Rom_21827F) > 0x18
	.error "gText_Rom_21827F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21827F) < 0x18
	.space 0x18 - (. - gText_Rom_21827F)
	.endif
