	@ src/data/script_menu.h:542 script_menu_line_542
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAE94
gText_Rom_5CAE94: @ 0x085CAE94
	.string "グループにはいる$"
	.if (. - gText_Rom_5CAE94) != 0x9
	.error "gText_Rom_5CAE94 must retain its original byte length"
	.endif
