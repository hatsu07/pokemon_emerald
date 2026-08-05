	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E378A
gText_Rom_2E378A: @ 0x082E378A
	.string "ポケモントレーナー$"
	.if (. - gText_Rom_2E378A) != 0xa
	.error "gText_Rom_2E378A must retain its original byte length"
	.endif
