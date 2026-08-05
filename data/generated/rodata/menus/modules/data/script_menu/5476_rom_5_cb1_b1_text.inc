	@ src/data/script_menu.h:780 script_menu_line_780
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB1B1
gText_Rom_5CB1B1: @ 0x085CB1B1
	.string "おぼえていない$"
	.if (. - gText_Rom_5CB1B1) != 0x8
	.error "gText_Rom_5CB1B1 must retain its original byte length"
	.endif
