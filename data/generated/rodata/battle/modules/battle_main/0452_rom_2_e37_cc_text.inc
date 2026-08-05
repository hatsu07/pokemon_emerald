	@ src/battle_main.c:358 battle_main_line_358
	.globl gText_Rom_2E37CC
gText_Rom_2E37CC: @ 0x082E37CC
	.string "きんこんしき$"
	.if (. - gText_Rom_2E37CC) > 0x7
	.error "gText_Rom_2E37CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37CC) < 0x7
	.space 0x7 - (. - gText_Rom_2E37CC)
	.endif
	.space 0x4, 0x00
