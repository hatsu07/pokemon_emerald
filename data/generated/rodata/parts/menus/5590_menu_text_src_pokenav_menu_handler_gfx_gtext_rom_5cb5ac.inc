	@ src/pokenav_menu_handler_gfx.c:274 pokenav_menu_handler_gfx_line_274
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB5AC
gText_Rom_5CB5AC: @ 0x085CB5AC
	.string "とうろくした ひとを よびだします$"
	.if (. - gText_Rom_5CB5AC) != 0x12
	.error "gText_Rom_5CB5AC must retain its original byte length"
	.endif
