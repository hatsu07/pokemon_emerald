	@ src/battle_main.c:359 battle_main_line_359 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E37D7
gText_Rom_2E37D7: @ 0x082E37D7
	.string "うみきょうだい$"
	.if (. - gText_Rom_2E37D7) != 0x8
	.error "gText_Rom_2E37D7 must retain its original byte length"
	.endif
