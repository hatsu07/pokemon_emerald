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

	@ src/data/script_menu.h:542 script_menu_line_542
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAE94
gText_Rom_5CAE94: @ 0x085CAE94
	.string "グループにはいる$"
	.if (. - gText_Rom_5CAE94) != 0x9
	.error "gText_Rom_5CAE94 must retain its original byte length"
	.endif
