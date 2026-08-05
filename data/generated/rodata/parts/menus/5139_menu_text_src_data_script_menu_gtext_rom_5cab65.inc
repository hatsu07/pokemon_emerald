	@ src/data/script_menu.h:244 script_menu_line_244
	.globl gText_Rom_5CAB65
gText_Rom_5CAB65: @ 0x085CAB65
	.string "ふまん$"
	.if (. - gText_Rom_5CAB65) > 0x4
	.error "gText_Rom_5CAB65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB65) < 0x4
	.space 0x4 - (. - gText_Rom_5CAB65)
	.endif
