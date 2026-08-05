	@ src/data/script_menu.h:156 script_menu_line_156
	.globl gText_Rom_24C3F1
gText_Rom_24C3F1: @ 0x0824C3F1
	.string "やけどなおし$"
	.if (. - gText_Rom_24C3F1) > 0x7
	.error "gText_Rom_24C3F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3F1) < 0x7
	.space 0x7 - (. - gText_Rom_24C3F1)
	.endif

	@ src/data/script_menu.h:157 script_menu_line_157
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C3F8
gText_Rom_24C3F8: @ 0x0824C3F8
	.string "ハーバーメール$"
	.if (. - gText_Rom_24C3F8) != 0x8
	.error "gText_Rom_24C3F8 must retain its original byte length"
	.endif
	.globl gText_Rom_24C3FC
	.set gText_Rom_24C3FC, gText_Rom_24C3F8 + 0x4

	@ src/data/script_menu.h:158 script_menu_line_158 (+1 aliases)
	.globl gText_Rom_24C400
gText_Rom_24C400: @ 0x0824C400
	.string "おなじねだん$"
	.if (. - gText_Rom_24C400) > 0x7
	.error "gText_Rom_24C400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C400) < 0x7
	.space 0x7 - (. - gText_Rom_24C400)
	.endif
	@ Embedded ROM bytes: file offset 0x24C407, size 0x1C
	.byte 0xA7, 0xA1, 0x04, 0x2E, 0xFF, 0xA6, 0xA6, 0x04, 0x2E, 0xFF, 0x19, 0x0A, 0x27, 0x15, 0x02, 0xFF
	.byte 0x10, 0x06, 0x08, 0x15, 0x29, 0xFF, 0x24, 0x0D, 0x08, 0x15, 0x29, 0xFF

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
