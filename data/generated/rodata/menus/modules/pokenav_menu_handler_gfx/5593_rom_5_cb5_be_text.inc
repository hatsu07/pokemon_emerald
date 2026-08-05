	@ src/pokenav_menu_handler_gfx.c:275 pokenav_menu_handler_gfx_line_275
	.globl gText_Rom_5CB5BE
gText_Rom_5CB5BE: @ 0x085CB5BE
	.string "てにいれた きねんリボンを みます$"
	.if (. - gText_Rom_5CB5BE) > 0x12
	.error "gText_Rom_5CB5BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB5BE) < 0x12
	.space 0x12 - (. - gText_Rom_5CB5BE)
	.endif
