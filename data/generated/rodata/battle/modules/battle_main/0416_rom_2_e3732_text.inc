	@ src/battle_main.c:344 battle_main_line_344
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3732
gText_Rom_2E3732: @ 0x082E3732
	.string "ニンジャごっこ$"
	.if (. - gText_Rom_2E3732) != 0x8
	.error "gText_Rom_2E3732 must retain its original byte length"
	.endif
