	@ src/battle_main.c:326 battle_main_line_326
	.globl gText_Rom_2E366C
gText_Rom_2E366C: @ 0x082E366C
	.string "ギタリスト$"
	.if (. - gText_Rom_2E366C) > 0x6
	.error "gText_Rom_2E366C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E366C) < 0x6
	.space 0x6 - (. - gText_Rom_2E366C)
	.endif
	.space 0x5, 0x00
