	@ src/battle_main.c:334 battle_main_line_334 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E36C4
gText_Rom_2E36C4: @ 0x082E36C4
	.string "ジムリーダー$"
	.if (. - gText_Rom_2E36C4) != 0x7
	.error "gText_Rom_2E36C4 must retain its original byte length"
	.endif
