	@ src/pokenav_menu_handler_gfx.c:276 pokenav_menu_handler_gfx_line_276
	.globl gText_Rom_5CB5D0
gText_Rom_5CB5D0: @ 0x085CB5D0
	.string "ポケナビを しまいます$"
	.if (. - gText_Rom_5CB5D0) > 0xc
	.error "gText_Rom_5CB5D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB5D0) < 0xc
	.space 0xc - (. - gText_Rom_5CB5D0)
	.endif
