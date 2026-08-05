	@ src/battle_main.c:345 battle_main_line_345
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E373D
gText_Rom_2E373D: @ 0x082E373D
	.string "バトルガール$"
	.if (. - gText_Rom_2E373D) != 0x7
	.error "gText_Rom_2E373D must retain its original byte length"
	.endif
