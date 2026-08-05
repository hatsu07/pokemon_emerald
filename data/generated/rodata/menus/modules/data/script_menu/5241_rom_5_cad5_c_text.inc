	@ src/data/script_menu.h:1332 script_menu_line_1332 (+1 aliases)
	.globl gText_Rom_5CAD5C
gText_Rom_5CAD5C: @ 0x085CAD5C
	.string "マルチ$"
	.if (. - gText_Rom_5CAD5C) > 0x4
	.error "gText_Rom_5CAD5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD5C) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD5C)
	.endif
