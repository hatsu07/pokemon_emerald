	@ src/main_menu.c:487 main_menu_line_487
	.globl gText_Rom_5C8EBE
gText_Rom_5C8EBE: @ 0x085C8EBE
	.string "タカヒト$"
	.if (. - gText_Rom_5C8EBE) > 0x5
	.error "gText_Rom_5C8EBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EBE) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EBE)
	.endif
	.space 0x1, 0xFF
