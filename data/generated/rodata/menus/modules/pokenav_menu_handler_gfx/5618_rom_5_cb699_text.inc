	@ src/pokenav_menu_handler_gfx.c:285 pokenav_menu_handler_gfx_line_285
	.globl gText_Rom_5CB699
gText_Rom_5CB699: @ 0x085CB699
	.string "コンディションの メニューに もどります$"
	.if (. - gText_Rom_5CB699) > 0x15
	.error "gText_Rom_5CB699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB699) < 0x15
	.space 0x15 - (. - gText_Rom_5CB699)
	.endif
