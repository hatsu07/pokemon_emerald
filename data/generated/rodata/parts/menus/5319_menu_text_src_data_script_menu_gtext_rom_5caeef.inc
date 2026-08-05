	@ src/data/script_menu.h:676 script_menu_line_676
	.globl gText_Rom_5CAEEF
gText_Rom_5CAEEF: @ 0x085CAEEF
	.string "バトルサロン$"
	.if (. - gText_Rom_5CAEEF) > 0x7
	.error "gText_Rom_5CAEEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEEF) < 0x7
	.space 0x7 - (. - gText_Rom_5CAEEF)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAEF6, size=0x4
	.byte 0x12, 0x03, 0x0C, 0x2E
