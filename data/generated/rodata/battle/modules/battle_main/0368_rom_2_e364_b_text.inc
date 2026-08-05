	@ src/battle_main.c:323 battle_main_line_323 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E364B
gText_Rom_2E364B: @ 0x082E364B
	.string "おとなのおねえさん$"
	.if (. - gText_Rom_2E364B) != 0xa
	.error "gText_Rom_2E364B must retain its original byte length"
	.endif
