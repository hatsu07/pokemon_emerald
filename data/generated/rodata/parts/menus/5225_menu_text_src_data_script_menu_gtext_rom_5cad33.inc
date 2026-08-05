	@ src/data/script_menu.h:549 script_menu_line_549
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD33
gText_Rom_5CAD33: @ 0x085CAD33
	.string "ノーマルランク$"
	.if (. - gText_Rom_5CAD33) != 0x8
	.error "gText_Rom_5CAD33 must retain its original byte length"
	.endif
