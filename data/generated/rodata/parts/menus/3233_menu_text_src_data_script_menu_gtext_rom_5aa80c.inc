	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AA80C
gText_Rom_5AA80C: @ 0x085AA80C
	.string "かった！$"
	.if (. - gText_Rom_5AA80C) > 0x5
	.error "gText_Rom_5AA80C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA80C) < 0x5
	.space 0x5 - (. - gText_Rom_5AA80C)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA811, size=0x10
	.byte 0xFD, 0x13, 0x19, 0x00, 0xFD, 0x1A, 0x44, 0xFE, 0x03, 0x1F, 0x08, 0x00, 0x07, 0x1F, 0x27, 0x15
