	@ src/data/script_menu.h:652 script_menu_line_652
	.globl gText_Rom_5CAEC7
gText_Rom_5CAEC7: @ 0x085CAEC7
	.string "シンボル$"
	.if (. - gText_Rom_5CAEC7) > 0x5
	.error "gText_Rom_5CAEC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEC7) < 0x5
	.space 0x5 - (. - gText_Rom_5CAEC7)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAECC, size=0x5
	.byte 0x10, 0x02, 0x0E, 0x2E, 0x19
