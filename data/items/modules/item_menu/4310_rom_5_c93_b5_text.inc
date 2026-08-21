	@ src/item_menu.c:302 item_menu_line_302
	.globl gText_Rom_5C93B5
gText_Rom_5C93B5: @ 0x085C93B5
	.string "タグをみる{EOS}"
	.if (. - gText_Rom_5C93B5) > 0x6
	.error "gText_Rom_5C93B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93B5) < 0x6
	.space 0x6 - (. - gText_Rom_5C93B5)
	.endif
