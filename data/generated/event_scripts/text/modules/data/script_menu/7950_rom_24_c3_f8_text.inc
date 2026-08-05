	@ src/data/script_menu.h:157 script_menu_line_157
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C3F8
gText_Rom_24C3F8: @ 0x0824C3F8
	.string "ハーバーメール$"
	.if (. - gText_Rom_24C3F8) != 0x8
	.error "gText_Rom_24C3F8 must retain its original byte length"
	.endif
