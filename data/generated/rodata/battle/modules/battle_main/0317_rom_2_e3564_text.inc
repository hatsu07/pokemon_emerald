	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3564
gText_Rom_2E3564: @ 0x082E3564
	.string "ポケモントレーナー$"
	.if (. - gText_Rom_2E3564) != 0xa
	.error "gText_Rom_2E3564 must retain its original byte length"
	.endif
