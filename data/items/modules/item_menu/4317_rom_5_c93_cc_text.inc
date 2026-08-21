	@ src/item_menu.c:304 item_menu_line_304
	.globl gText_Rom_5C93CC
gText_Rom_5C93CC: @ 0x085C93CC
	.string "みせる{EOS}"
	.if (. - gText_Rom_5C93CC) > 0x4
	.error "gText_Rom_5C93CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93CC) < 0x4
	.space 0x4 - (. - gText_Rom_5C93CC)
	.endif
