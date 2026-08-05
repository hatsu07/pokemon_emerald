	@ src/battle_main.c:327 battle_main_line_327
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3677
gText_Rom_2E3677: @ 0x082E3677
	.string "キャンプファイヤー$"
	.if (. - gText_Rom_2E3677) != 0xa
	.error "gText_Rom_2E3677 must retain its original byte length"
	.endif
