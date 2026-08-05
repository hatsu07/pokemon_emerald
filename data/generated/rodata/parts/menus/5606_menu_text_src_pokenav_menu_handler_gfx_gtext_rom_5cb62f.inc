	@ src/pokenav_menu_handler_gfx.c:279 pokenav_menu_handler_gfx_line_279
	.globl gText_Rom_5CB62F
gText_Rom_5CB62F: @ 0x085CB62F
	.string "ポケナビの メニューに もどります$"
	.if (. - gText_Rom_5CB62F) > 0x12
	.error "gText_Rom_5CB62F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB62F) < 0x12
	.space 0x12 - (. - gText_Rom_5CB62F)
	.endif
