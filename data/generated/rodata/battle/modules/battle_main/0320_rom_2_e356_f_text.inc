	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E356F
gText_Rom_2E356F: @ 0x082E356F
	.string "ポケモントレーナー$"
	.if (. - gText_Rom_2E356F) != 0xa
	.error "gText_Rom_2E356F must retain its original byte length"
	.endif
