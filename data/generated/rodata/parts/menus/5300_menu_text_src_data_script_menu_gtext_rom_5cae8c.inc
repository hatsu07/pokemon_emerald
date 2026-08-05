	@ src/data/script_menu.h:543 script_menu_line_543
	.globl gText_Rom_5CAE8C
gText_Rom_5CAE8C: @ 0x085CAE8C
	.string "リーダーになる$"
	.if (. - gText_Rom_5CAE8C) > 0x8
	.error "gText_Rom_5CAE8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE8C) < 0x8
	.space 0x8 - (. - gText_Rom_5CAE8C)
	.endif
