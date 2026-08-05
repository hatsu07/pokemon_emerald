	@ src/data/script_menu.h:558 script_menu_line_558 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD69
gText_Rom_5CAD69: @ 0x085CAD69
	.string "バトルバッグ$"
	.if (. - gText_Rom_5CAD69) != 0x7
	.error "gText_Rom_5CAD69 must retain its original byte length"
	.endif
