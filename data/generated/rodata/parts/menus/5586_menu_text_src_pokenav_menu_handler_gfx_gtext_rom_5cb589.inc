	@ src/pokenav_menu_handler_gfx.c:272 pokenav_menu_handler_gfx_line_272
	.globl gText_Rom_5CB589
gText_Rom_5CB589: @ 0x085CB589
	.string "ホウエンちほうの マップを みます$"
	.if (. - gText_Rom_5CB589) > 0x12
	.error "gText_Rom_5CB589 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB589) < 0x12
	.space 0x12 - (. - gText_Rom_5CB589)
	.endif
