	@ src/battle_debug.c:348 battle_debug_line_348 (+3 aliases)
	.globl gText_Rom_5ABC57
gText_Rom_5ABC57: @ 0x085ABC57
	.string "やけど{EOS}"
	.if (. - gText_Rom_5ABC57) > 0x4
	.error "gText_Rom_5ABC57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC57) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC57)
	.endif
