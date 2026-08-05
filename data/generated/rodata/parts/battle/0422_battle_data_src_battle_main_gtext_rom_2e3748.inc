	@ src/battle_main.c:346 battle_main_line_346
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3748
gText_Rom_2E3748: @ 0x082E3748
	.string "パラソルおねえさん$"
	.if (. - gText_Rom_2E3748) != 0xa
	.error "gText_Rom_2E3748 must retain its original byte length"
	.endif
