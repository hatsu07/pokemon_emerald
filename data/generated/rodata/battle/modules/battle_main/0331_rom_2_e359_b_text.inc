	@ src/battle_main.c:307 battle_main_line_307 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E359B
gText_Rom_2E359B: @ 0x082E359B
	.string "エリートトレーナー$"
	.if (. - gText_Rom_2E359B) != 0xa
	.error "gText_Rom_2E359B must retain its original byte length"
	.endif
