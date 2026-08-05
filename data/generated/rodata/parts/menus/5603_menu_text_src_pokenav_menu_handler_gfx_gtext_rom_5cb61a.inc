	@ src/pokenav_menu_handler_gfx.c:278 pokenav_menu_handler_gfx_line_278
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB61A
gText_Rom_5CB61A: @ 0x085CB61A
	.string "すべてのポケモンを くわしく しらべます$"
	.if (. - gText_Rom_5CB61A) != 0x15
	.error "gText_Rom_5CB61A must retain its original byte length"
	.endif
