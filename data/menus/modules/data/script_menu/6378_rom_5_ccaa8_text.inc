	@ src/data/script_menu.h:654 script_menu_line_654 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCAA8
gText_Rom_5CCAA8: @ 0x085CCAA8
	.string "バトルポイント{EOS}"
	.if (. - gText_Rom_5CCAA8) != 0x8
	.error "gText_Rom_5CCAA8 must retain its original byte length"
	.endif
