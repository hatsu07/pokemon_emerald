	@ src/data/script_menu.h:551 script_menu_line_551
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD43
gText_Rom_5CAD43: @ 0x085CAD43
	.string "ハイパーランク$"
	.if (. - gText_Rom_5CAD43) != 0x8
	.error "gText_Rom_5CAD43 must retain its original byte length"
	.endif
