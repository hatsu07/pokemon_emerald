	@ src/main_menu.c:510 main_menu_line_510
	.globl gText_Rom_5C8F34
gText_Rom_5C8F34: @ 0x085C8F34
	.string "キョウコ$"
	.if (. - gText_Rom_5C8F34) > 0x5
	.error "gText_Rom_5C8F34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F34) < 0x5
	.space 0x5 - (. - gText_Rom_5C8F34)
	.endif
	@ Replaced baserom.gba range: offset=0x5C8F39, size=0xD
	.byte 0xFF, 0x5B, 0x54, 0xFF, 0xFF, 0xFF, 0xFF, 0x5D, 0x52, 0xFF, 0xFF, 0xFF, 0xFF
