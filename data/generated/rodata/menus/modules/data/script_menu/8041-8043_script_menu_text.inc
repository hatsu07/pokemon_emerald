	@ src/data/script_menu.h:958 script_menu_line_958 (+1 aliases)
	.globl gText_Rom_5FB902
gText_Rom_5FB902: @ 0x085FB902
	.string "2F$"
	.if (. - gText_Rom_5FB902) > 0x3
	.error "gText_Rom_5FB902 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB902) < 0x3
	.space 0x3 - (. - gText_Rom_5FB902)
	.endif

	@ src/data/script_menu.h:957 script_menu_line_957 (+1 aliases)
	.globl gText_Rom_5FB905
gText_Rom_5FB905: @ 0x085FB905
	.string "3F$"
	.if (. - gText_Rom_5FB905) > 0x3
	.error "gText_Rom_5FB905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB905) < 0x3
	.space 0x3 - (. - gText_Rom_5FB905)
	.endif
	@ Replaced baserom.gba range: offset=0x5FB908, size=0x4
	.byte 0xA5, 0xC0, 0xFF, 0x00
