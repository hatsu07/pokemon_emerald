	@ src/data/script_menu.h:4 script_menu_line_4
	.globl gText_Rom_5CA9FB
gText_Rom_5CA9FB: @ 0x085CA9FB
	.string "トウカ$"
	.if (. - gText_Rom_5CA9FB) > 0x4
	.error "gText_Rom_5CA9FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9FB) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9FB)
	.endif
