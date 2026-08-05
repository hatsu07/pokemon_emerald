	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AABA9
gText_Rom_5AABA9: @ 0x085AABA9
	.string "かった！$"
	.if (. - gText_Rom_5AABA9) > 0x5
	.error "gText_Rom_5AABA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABA9) < 0x5
	.space 0x5 - (. - gText_Rom_5AABA9)
	.endif
	@ Replaced baserom.gba range: offset=0x5AABAE, size=0xD
	.byte 0x0C, 0x06, 0x0C, 0x00, 0x15, 0x16, 0x23, 0x00, 0x19, 0x20, 0x0A, 0x22, 0x15

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AABBB
gText_Rom_5AABBB: @ 0x085AABBB
	.string "かった！$"
	.if (. - gText_Rom_5AABBB) > 0x5
	.error "gText_Rom_5AABBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABBB) < 0x5
	.space 0x5 - (. - gText_Rom_5AABBB)
	.endif
	@ Replaced baserom.gba range: offset=0x5AABC0, size=0xF
	.byte 0x06, 0x3F, 0x1A, 0x00, 0x18, 0x50, 0x4D, 0x03, 0x16, 0x00, 0x15, 0x50, 0x10, 0xAB, 0xFF

