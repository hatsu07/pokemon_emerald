	@ src/main_menu.c:517 main_menu_line_517
	.globl gText_Rom_5C8F5E
gText_Rom_5C8F5E: @ 0x085C8F5E
	.string "ナナエ$"
	.if (. - gText_Rom_5C8F5E) > 0x4
	.error "gText_Rom_5C8F5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F5E) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F5E)
	.endif
	@ Replaced baserom.gba range: offset=0x5C8F62, size=0x8
	.byte 0xFF, 0xFF, 0x6B, 0x65, 0xFF, 0xFF, 0xFF, 0xFF
