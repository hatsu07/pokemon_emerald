	@ src/data/script_menu.h:158 script_menu_line_158 (+1 aliases)
	.globl gText_Rom_24C423
gText_Rom_24C423: @ 0x0824C423
	.string "おなじねだん$"
	.if (. - gText_Rom_24C423) > 0x7
	.error "gText_Rom_24C423 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C423) < 0x7
	.space 0x7 - (. - gText_Rom_24C423)
	.endif
	@ Embedded ROM bytes: file offset 0x24C42A, size 0x12
	.byte 0x41, 0x2E, 0x0E, 0x02, 0xFF, 0x3D, 0x36, 0x0E, 0x02, 0xFF, 0x45, 0x50, 0x11, 0x44, 0x23, 0x15
	.byte 0x02, 0xFF
