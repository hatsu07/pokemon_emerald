	@ src/battle_main.c:342 battle_main_line_342
	.globl gText_Rom_2E371C
gText_Rom_2E371C: @ 0x082E371C
	.string "トライアスリート$"
	.if (. - gText_Rom_2E371C) > 0x9
	.error "gText_Rom_2E371C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E371C) < 0x9
	.space 0x9 - (. - gText_Rom_2E371C)
	.endif
	.space 0x2, 0x00
