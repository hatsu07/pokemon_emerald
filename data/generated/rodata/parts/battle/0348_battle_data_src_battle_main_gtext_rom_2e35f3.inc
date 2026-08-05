	@ src/battle_main.c:315 battle_main_line_315
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E35F3
gText_Rom_2E35F3: @ 0x082E35F3
	.string "アクアだんリーダー$"
	.if (. - gText_Rom_2E35F3) != 0xa
	.error "gText_Rom_2E35F3 must retain its original byte length"
	.endif
