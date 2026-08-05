	@ data/maps/AquaHideout_B1F/scripts.inc:127 AquaHideout_B1F_Text_Grunt5Intro (+1 aliases)
	.globl gText_Rom_217EE8
gText_Rom_217EE8: @ 0x08217EE8
	.string "はーあ アジトで るすばんも\nたいくつ だから あいて してあげるわー$"
	.if (. - gText_Rom_217EE8) > 0x24
	.error "gText_Rom_217EE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217EE8) < 0x24
	.space 0x24 - (. - gText_Rom_217EE8)
	.endif
