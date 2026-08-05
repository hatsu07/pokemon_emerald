	@ src/main_menu.c:505 main_menu_line_505
	.globl gText_Rom_5C8F18
gText_Rom_5C8F18: @ 0x085C8F18
	.string "アヤナ$"
	.if (. - gText_Rom_5C8F18) > 0x4
	.error "gText_Rom_5C8F18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F18) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F18)
	.endif
	@ Replaced baserom.gba range: offset=0x5C8F1C, size=0x8
	.byte 0xFF, 0xFF, 0x51, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF
