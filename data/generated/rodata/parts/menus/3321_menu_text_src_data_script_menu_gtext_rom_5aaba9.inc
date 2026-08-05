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
