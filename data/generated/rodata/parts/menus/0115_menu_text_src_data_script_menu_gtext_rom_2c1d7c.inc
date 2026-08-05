	@ src/data/script_menu.h:500 script_menu_line_500 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1D7C
gText_Rom_2C1D7C: @ 0x082C1D7C
	.string "シングルバトル$"
	.if (. - gText_Rom_2C1D7C) != 0x8
	.error "gText_Rom_2C1D7C must retain its original byte length"
	.endif
