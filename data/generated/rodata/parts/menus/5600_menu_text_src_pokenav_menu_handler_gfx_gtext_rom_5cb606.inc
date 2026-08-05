	@ src/pokenav_menu_handler_gfx.c:277 pokenav_menu_handler_gfx_line_277
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB606
gText_Rom_5CB606: @ 0x085CB606
	.string "てもちポケモンを くわしく しらべます$"
	.if (. - gText_Rom_5CB606) != 0x14
	.error "gText_Rom_5CB606 must retain its original byte length"
	.endif
