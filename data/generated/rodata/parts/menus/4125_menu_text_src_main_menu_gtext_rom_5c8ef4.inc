	@ src/main_menu.c:496 main_menu_line_496
	.globl gText_Rom_5C8EF4
gText_Rom_5C8EF4: @ 0x085C8EF4
	.string "ラルド$"
	.if (. - gText_Rom_5C8EF4) > 0x4
	.error "gText_Rom_5C8EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EF4) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EF4)
	.endif
	.space 0x2, 0xFF
