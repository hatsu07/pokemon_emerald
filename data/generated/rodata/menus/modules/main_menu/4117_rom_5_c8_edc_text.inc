	@ src/main_menu.c:492 main_menu_line_492
	.globl gText_Rom_5C8EDC
gText_Rom_5C8EDC: @ 0x085C8EDC
	.string "トモヤ$"
	.if (. - gText_Rom_5C8EDC) > 0x4
	.error "gText_Rom_5C8EDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EDC) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EDC)
	.endif
	.space 0x2, 0xFF
