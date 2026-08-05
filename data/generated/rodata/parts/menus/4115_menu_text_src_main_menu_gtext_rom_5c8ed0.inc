	@ src/main_menu.c:490 main_menu_line_490
	.globl gText_Rom_5C8ED0
gText_Rom_5C8ED0: @ 0x085C8ED0
	.string "テルキ$"
	.if (. - gText_Rom_5C8ED0) > 0x4
	.error "gText_Rom_5C8ED0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8ED0) < 0x4
	.space 0x4 - (. - gText_Rom_5C8ED0)
	.endif
	@ Replaced baserom.gba range: offset=0x5C8ED4, size=0x8
	.byte 0xFF, 0xFF, 0x64, 0x71, 0xFF, 0xFF, 0xFF, 0xFF
