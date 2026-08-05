	@ src/data/script_menu.h:958 script_menu_line_958 (+1 aliases)
	.globl gText_Rom_5FB902
gText_Rom_5FB902: @ 0x085FB902
	.string "2F$"
	.if (. - gText_Rom_5FB902) > 0x3
	.error "gText_Rom_5FB902 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB902) < 0x3
	.space 0x3 - (. - gText_Rom_5FB902)
	.endif
