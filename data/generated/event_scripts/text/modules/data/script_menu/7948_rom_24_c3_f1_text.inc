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
