	@ src/battle_main.c:347 battle_main_line_347 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3753
gText_Rom_2E3753: @ 0x082E3753
	.string "ビキニのおねえさん$"
	.if (. - gText_Rom_2E3753) != 0xa
	.error "gText_Rom_2E3753 must retain its original byte length"
	.endif
