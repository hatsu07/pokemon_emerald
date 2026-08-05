	@ src/data/script_menu.h:177 script_menu_line_177 (+1 aliases)
	.globl gText_Rom_5C8E92
gText_Rom_5C8E92: @ 0x085C8E92
	.string "おとこ$"
	.if (. - gText_Rom_5C8E92) > 0x4
	.error "gText_Rom_5C8E92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E92) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E92)
	.endif

	@ src/data/script_menu.h:178 script_menu_line_178 (+1 aliases)
	.globl gText_Rom_5C8E96
gText_Rom_5C8E96: @ 0x085C8E96
	.string "おんな$"
	.if (. - gText_Rom_5C8E96) > 0x4
	.error "gText_Rom_5C8E96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E96) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E96)
	.endif
