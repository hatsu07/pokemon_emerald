	@ src/battle_main.c:328 battle_main_line_328 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3682
gText_Rom_2E3682: @ 0x082E3682
	.string "キャンプボーイ$"
	.if (. - gText_Rom_2E3682) != 0x8
	.error "gText_Rom_2E3682 must retain its original byte length"
	.endif
