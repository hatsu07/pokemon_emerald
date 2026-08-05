	@ src/battle_debug.c:348 battle_debug_line_348 (+3 aliases)
	.globl gText_Rom_5CAAB4
gText_Rom_5CAAB4: @ 0x085CAAB4
	.string "やけど$"
	.if (. - gText_Rom_5CAAB4) > 0x4
	.error "gText_Rom_5CAAB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAB4) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAB4)
	.endif
