	@ src/battle_debug.c:431 battle_debug_line_431 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAAEC
gText_Rom_5CAAEC: @ 0x085CAAEC
	.string "ダブルバトル$"
	.if (. - gText_Rom_5CAAEC) != 0x7
	.error "gText_Rom_5CAAEC must retain its original byte length"
	.endif
