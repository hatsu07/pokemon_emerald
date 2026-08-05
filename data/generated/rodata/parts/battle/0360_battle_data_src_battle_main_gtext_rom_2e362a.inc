	@ src/battle_main.c:320 battle_main_line_320 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E362A
gText_Rom_2E362A: @ 0x082E362A
	.string "うきわガール$"
	.if (. - gText_Rom_2E362A) != 0x7
	.error "gText_Rom_2E362A must retain its original byte length"
	.endif
