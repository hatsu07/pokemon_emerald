	@ src/data/script_menu.h:1330 script_menu_line_1330 (+2 aliases)
	.globl gText_Rom_5CAD53
gText_Rom_5CAD53: @ 0x085CAD53
	.string "シングル$"
	.if (. - gText_Rom_5CAD53) > 0x5
	.error "gText_Rom_5CAD53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD53) < 0x5
	.space 0x5 - (. - gText_Rom_5CAD53)
	.endif
