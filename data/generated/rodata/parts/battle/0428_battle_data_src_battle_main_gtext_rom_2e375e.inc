	@ src/battle_main.c:348 battle_main_line_348 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E375E
gText_Rom_2E375E: @ 0x082E375E
	.string "ふたごちゃん$"
	.if (. - gText_Rom_2E375E) != 0x7
	.error "gText_Rom_2E375E must retain its original byte length"
	.endif
