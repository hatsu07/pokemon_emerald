	@ src/data/script_menu.h:1331 script_menu_line_1331 (+2 aliases)
	.globl gText_Rom_5CAD58
gText_Rom_5CAD58: @ 0x085CAD58
	.string "ダブル$"
	.if (. - gText_Rom_5CAD58) > 0x4
	.error "gText_Rom_5CAD58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD58) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD58)
	.endif
