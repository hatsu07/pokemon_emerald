	@ src/battle_main.c:306 battle_main_line_306 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3590
gText_Rom_2E3590: @ 0x082E3590
	.string "ポケモンブリーダー$"
	.if (. - gText_Rom_2E3590) != 0xa
	.error "gText_Rom_2E3590 must retain its original byte length"
	.endif
