	@ src/battle_main.c:304 battle_main_line_304 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E357A
gText_Rom_2E357A: @ 0x082E357A
	.string "やまおとこ$"
	.if (. - gText_Rom_2E357A) != 0x6
	.error "gText_Rom_2E357A must retain its original byte length"
	.endif
