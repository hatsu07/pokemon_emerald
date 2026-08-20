	@ src/data/script_menu.h:186 script_menu_line_186
	.globl gText_Rom_24C448
gText_Rom_24C448: @ 0x0824C448
	.string "おなじかず{EOS}"
	.if (. - gText_Rom_24C448) > 0x6
	.error "gText_Rom_24C448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C448) < 0x6
	.space 0x6 - (. - gText_Rom_24C448)
	.endif
