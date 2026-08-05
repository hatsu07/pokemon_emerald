	@ src/battle_main.c:317 battle_main_line_317 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3609
gText_Rom_2E3609: @ 0x082E3609
	.string "アロマなおねえさん$"
	.if (. - gText_Rom_2E3609) != 0xa
	.error "gText_Rom_2E3609 must retain its original byte length"
	.endif
