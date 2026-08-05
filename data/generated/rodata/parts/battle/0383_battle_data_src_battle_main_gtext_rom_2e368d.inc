	@ src/battle_main.c:329 battle_main_line_329 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E368D
gText_Rom_2E368D: @ 0x082E368D
	.string "ピクニックガール$"
	.if (. - gText_Rom_2E368D) != 0x9
	.error "gText_Rom_2E368D must retain its original byte length"
	.endif
